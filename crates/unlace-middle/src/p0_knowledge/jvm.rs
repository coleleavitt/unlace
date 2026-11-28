//! (unlace `jvmmodel`) What a Java class file tells the engine about its methods.
//!
//! The JVM SLEIGH spec leaves the same things to the program that loaded the
//! class as the Dalvik spec does, which in Ghidra is its Java side
//! (`ghidra.app.util.pcodeInject`):
//!
//! - the **constant pool** (`ConstantPoolJava`): every `cpool(ref, index, tag)`
//!   operator names a method, field, class or constant by its pool index;
//! - the **`uponentry` payload** (`InjectPayloadJavaParameters`): a method's
//!   arguments arrive in `parameterSpace` and are copied to its local variable
//!   array;
//! - the **`*CallOther` payloads** (`InjectInvoke*`, `InjectGetField`, ...): an
//!   invoke, field access, `ldc` or `multianewarray` pops and pushes the operand
//!   stack by what its pool entry describes.
//!
//! [`JvmModel`] answers all three. A class file's methods are mapped one after
//! another from [`CODE_BASE`] (a JAR's classes after each other), each starting
//! on a 4-byte boundary as Ghidra's `JavaLoader` lays them out, so the padding
//! of a `tableswitch` follows from the address.

pub mod format;

use std::cell::RefCell;
use std::collections::HashMap;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::AddrSpace;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use crate::cpool::{CPoolRecord, cpool_tag};
use crate::dex::format::{java_type_name, simple_class_name};
use crate::dtype::{Datatype, TypeFactory, type_metatype};
use crate::emittedop::Operation;
use crate::fspec::PrototypePieces;

pub use format::{ClassFile, Code, Constant, is_class, is_wide, method_descriptor};

/// Where the first class's first method is mapped (Ghidra's `JavaLoader.CODE_OFFSET`).
pub const CODE_BASE: u64 = 0x1_0000;

/// The `cpool` tags the JVM spec uses (`JVM.slaspec`, `CPOOL_*`).
mod tag {
    pub const ANEWARRAY: u64 = 0;
    pub const CHECKCAST: u64 = 1;
    pub const GETFIELD: u64 = 2;
    pub const GETSTATIC: u64 = 3;
    pub const LDC: u64 = 4;
    pub const LDC2_W: u64 = 5;
    pub const INSTANCEOF: u64 = 6;
    pub const INVOKEDYNAMIC: u64 = 7;
    pub const INVOKEINTERFACE: u64 = 8;
    pub const INVOKESPECIAL: u64 = 9;
    pub const INVOKESTATIC: u64 = 10;
    pub const INVOKEVIRTUAL: u64 = 11;
    pub const MULTIANEWARRAY: u64 = 12;
    pub const NEW: u64 = 13;
    pub const NEWARRAY: u64 = 14;
    pub const PUTSTATIC: u64 = 15;
    pub const PUTFIELD: u64 = 16;
    pub const ARRAYLENGTH: u64 = 17;
}

/// One method with code, where it is mapped.
#[derive(Clone, Debug)]
pub struct JvmMethod {
    /// Address of the first instruction.
    pub addr: u64,
    /// Index into [`ClassFile::methods`].
    pub index: usize,
    /// `pkg::Class::method`, with `_<addr>` added to each member of an overload set.
    pub name: String,
    pub descriptor: String,
    pub is_static: bool,
    pub code: Code,
}

/// A parsed class file, where its methods are mapped, and the caches the
/// engine's queries fill.
pub struct JvmModel {
    pub file: ClassFile,
    pub methods: Vec<JvmMethod>,
    /// The end of the last method's mapping.
    pub end: u64,
    records: RefCell<HashMap<(u64, u64), Option<Rc<CPoolRecord>>>>,
    types: RefCell<HashMap<String, Rc<Datatype>>>,
}

impl std::fmt::Debug for JvmModel {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("JvmModel")
            .field("methods", &self.methods.len())
            .finish()
    }
}

/// The descriptor (`Ljava/lang/String;`, `[I`) of a class entry's internal name.
fn class_descriptor(internal: &str) -> String {
    if internal.starts_with('[') {
        internal.to_string()
    } else {
        format!("L{internal};")
    }
}

/// The last component of an internal name (`java/lang/String` -> `String`).
fn last_name(internal: &str) -> &str {
    internal.rsplit('/').next().unwrap_or(internal)
}

impl JvmModel {
    /// Parse `bytes` as a class file whose methods map from `base` (4-aligned).
    pub fn parse(bytes: Vec<u8>, base: u64) -> UnlaceResult<JvmModel> {
        let file = ClassFile::parse(bytes)?;
        let scope = file
            .class_name(file.this_class)
            .map(|n| n.replace('/', "::").replace('$', "_"))
            .unwrap_or_else(|| "Class".to_string());
        let mut methods = Vec::new();
        let mut at = base;
        for (index, method) in file.methods.iter().enumerate() {
            let Some(code) = method.code else { continue };
            let name = file
                .utf8(method.name)
                .unwrap_or("method")
                .replace(['<', '>'], "");
            let descriptor = file.utf8(method.descriptor).unwrap_or("()V").to_string();
            methods.push(JvmMethod {
                addr: at,
                index,
                name: format!("{scope}::{name}"),
                descriptor,
                is_static: method.is_static(),
                code,
            });
            at = (at + code.length as u64 + 1).div_ceil(4) * 4;
        }
        let mut counts: HashMap<String, usize> = HashMap::new();
        for m in &methods {
            *counts.entry(m.name.clone()).or_default() += 1;
        }
        for m in &mut methods {
            if counts[&m.name] > 1 {
                m.name = format!("{}_{:x}", m.name, m.addr);
            }
        }
        Ok(JvmModel {
            file,
            methods,
            end: at.max(base),
            records: RefCell::new(HashMap::new()),
            types: RefCell::new(HashMap::new()),
        })
    }

    /// Does one of this class's method mappings hold `addr`?
    pub fn contains(&self, addr: u64) -> bool {
        self.method_at(addr).is_some()
    }

    /// The method whose code holds `addr`.
    pub fn method_at(&self, addr: u64) -> Option<&JvmMethod> {
        let i = self
            .methods
            .partition_point(|m| m.addr <= addr)
            .checked_sub(1)?;
        let m = &self.methods[i];
        (addr < m.addr + m.code.length as u64).then_some(m)
    }

    /// The instruction bytes from `addr` to the end of its method.
    pub fn code_from(&self, addr: u64) -> Option<&[u8]> {
        let m = self.method_at(addr)?;
        let start = m.code.offset + (addr - m.addr) as usize;
        self.file.bytes().get(start..m.code.offset + m.code.length)
    }

    /// Every `(addr, length)` code mapping.
    pub fn mappings(&self) -> impl Iterator<Item = (u64, u64)> + '_ {
        self.methods.iter().map(|m| (m.addr, m.code.length as u64))
    }

    /// The addresses whose `tableswitch`/`lookupswitch` padding the
    /// `alignmentPad` context gives: every byte that could be one of those
    /// opcodes, with its padding (Ghidra's `JavaLoader.setAlignmentInfo`, which
    /// paints every byte).
    pub fn switch_paddings(&self) -> Vec<(u64, u64)> {
        let mut out = Vec::new();
        for m in &self.methods {
            let Some(code) = self.code_from(m.addr) else {
                continue;
            };
            for (k, &b) in code.iter().enumerate() {
                if b == 0xaa || b == 0xab {
                    out.push((m.addr + k as u64, 3 - (k as u64 % 4)));
                }
            }
        }
        out
    }

    /// The Java type of a field descriptor, as Ghidra's
    /// `DescriptorDecoder.getDataTypeOfDescriptor` builds it: primitives by name,
    /// a class as a pointer to a structure of its simple name, an array as a
    /// pointer to its element type.
    pub fn java_type(
        &self,
        descriptor: &str,
        types: &dyn TypeFactory,
    ) -> UnlaceResult<Rc<Datatype>> {
        if let Some(found) = self.types.borrow().get(descriptor) {
            return Ok(Rc::clone(found));
        }
        use type_metatype::*;
        let built = match descriptor {
            "V" => types.get_type_void()?,
            "Z" => types.get_base_named(1, TYPE_BOOL, "boolean")?,
            "B" => types.get_base_named(1, TYPE_INT, "byte")?,
            "S" => types.get_base_named(2, TYPE_INT, "short")?,
            "C" => types.get_type_char(2)?,
            "I" => types.get_base(4, TYPE_INT)?,
            "J" => types.get_base_named(8, TYPE_INT, "long")?,
            "F" => types.get_base(4, TYPE_FLOAT)?,
            "D" => types.get_base(8, TYPE_FLOAT)?,
            _ if descriptor.starts_with('[') => {
                let element = self.java_type(&descriptor[1..], types)?;
                types.get_type_pointer(4, element, 1)?
            }
            _ if descriptor.starts_with('L') => {
                let class = types.get_type_struct(&simple_class_name(descriptor))?;
                types.get_type_pointer(4, class, 1)?
            }
            _ => {
                return Err(UnlaceError::lowlevel(format!(
                    "bad JVM type descriptor: {descriptor}"
                )));
            }
        };
        self.types
            .borrow_mut()
            .insert(descriptor.to_string(), Rc::clone(&built));
        Ok(built)
    }

    /// The prototype of a method descriptor: `this` (typed as `this_type`, or an
    /// untyped `objectRef` at a call) first unless `is_static`.
    fn prototype(
        &self,
        name: &str,
        descriptor: &str,
        this: Option<Option<&str>>,
        types: &dyn TypeFactory,
    ) -> UnlaceResult<PrototypePieces> {
        let (params, ret) = method_descriptor(descriptor).ok_or_else(|| {
            UnlaceError::lowlevel(format!("bad JVM method descriptor: {descriptor}"))
        })?;
        let mut pieces = PrototypePieces {
            first_var_arg_slot: -1,
            ..Default::default()
        };
        pieces.name = name.to_string();
        pieces.outtype = Some(self.java_type(&ret, types)?);
        match this {
            Some(Some(class)) => {
                pieces.intypes.push(self.java_type(class, types)?);
                pieces.innames.push("this".to_string());
            }
            Some(None) => {
                let void = types.get_type_void()?;
                pieces.intypes.push(types.get_type_pointer(4, void, 1)?);
                pieces.innames.push("objectRef".to_string());
            }
            None => {}
        }
        for p in params {
            pieces.intypes.push(self.java_type(&p, types)?);
            pieces.innames.push(String::new());
        }
        Ok(pieces)
    }

    /// The declared prototype of a mapped method, with its typed `this`.
    pub fn method_prototype(
        &self,
        method: &JvmMethod,
        types: &dyn TypeFactory,
    ) -> UnlaceResult<PrototypePieces> {
        let class = self
            .file
            .class_name(self.file.this_class)
            .map(class_descriptor);
        let name = self.file.methods[method.index].name;
        let name = self.file.utf8(name).unwrap_or("method");
        let this = (!method.is_static).then_some(class.as_deref());
        self.prototype(name, &method.descriptor, this, types)
    }

    /// The constant-pool record for `refs = [index, tag, ..]` (Ghidra's
    /// `ConstantPoolJava.getRecord`), built on first use.
    pub fn record(&self, refs: &[u64], types: &dyn TypeFactory) -> Option<Rc<CPoolRecord>> {
        let [index, tag, ..] = *refs else { return None };
        if let Some(found) = self.records.borrow().get(&(index, tag)) {
            return found.clone();
        }
        let built = self
            .build_record(index, tag, types)
            .ok()
            .flatten()
            .map(Rc::new);
        self.records
            .borrow_mut()
            .insert((index, tag), built.clone());
        built
    }

    fn method_record(
        &self,
        index: u16,
        tag: u64,
        types: &dyn TypeFactory,
    ) -> UnlaceResult<Option<CPoolRecord>> {
        let Some((class, name, descriptor)) = self.file.member(index) else {
            return Ok(None);
        };
        let token = match (tag, class.and_then(|c| self.file.class_name(c))) {
            (tag::INVOKESTATIC, Some(class)) => format!("{}.{name}", last_name(class)),
            _ => name.to_string(),
        };
        let this = matches!(
            tag,
            tag::INVOKEINTERFACE | tag::INVOKESPECIAL | tag::INVOKEVIRTUAL
        )
        .then_some(None);
        let pieces = self.prototype(&format!("{index:x}_{token}"), descriptor, this, types)?;
        let code = types.get_type_code_proto_named(&pieces, "__stdcall")?;
        let ptr = types.get_type_pointer(4, code, 1)?;
        Ok(Some(CPoolRecord::from_parts(
            cpool_tag::POINTER_METHOD,
            token.into_bytes(),
            ptr,
            None,
        )))
    }

    fn build_record(
        &self,
        index: u64,
        tag: u64,
        types: &dyn TypeFactory,
    ) -> UnlaceResult<Option<CPoolRecord>> {
        if tag == tag::NEWARRAY {
            let element = match index {
                4 => "Z",
                5 => "C",
                6 => "F",
                7 => "D",
                8 => "B",
                9 => "S",
                10 => "I",
                11 => "J",
                _ => return Ok(None),
            };
            let ty = self.java_type(element, types)?;
            let ptr = types.get_type_pointer(4, ty, 1)?;
            let token = java_type_name(element);
            return Ok(Some(CPoolRecord::from_parts(
                cpool_tag::POINTER_METHOD,
                token.into_bytes(),
                ptr,
                None,
            )));
        }
        if tag == tag::ARRAYLENGTH {
            return Ok(Some(CPoolRecord::from_parts(
                cpool_tag::ARRAY_LENGTH,
                b"length".to_vec(),
                types.get_base(4, type_metatype::TYPE_INT)?,
                None,
            )));
        }
        let Ok(index16) = u16::try_from(index) else {
            return Ok(None);
        };
        let Some(entry) = self.file.constant(index16) else {
            return Ok(None);
        };
        let record = match tag {
            tag::ANEWARRAY | tag::NEW | tag::CHECKCAST | tag::INSTANCEOF | tag::MULTIANEWARRAY => {
                let Some(internal) = self.file.class_name(index16) else {
                    return Ok(None);
                };
                let ty = self.java_type(&class_descriptor(internal), types)?;
                match tag {
                    tag::CHECKCAST => CPoolRecord::from_parts(
                        cpool_tag::CHECK_CAST,
                        format!(
                            "checkcast({})",
                            simple_class_name(&class_descriptor(internal))
                        )
                        .into_bytes(),
                        ty,
                        None,
                    ),
                    tag::INSTANCEOF => CPoolRecord::from_parts(
                        cpool_tag::INSTANCE_OF,
                        b"instanceof".to_vec(),
                        ty,
                        None,
                    ),
                    tag::MULTIANEWARRAY => {
                        let void = types.get_type_void()?;
                        CPoolRecord::from_parts(
                            cpool_tag::CLASS_REFERENCE,
                            java_type_name(internal).into_bytes(),
                            types.get_type_pointer(4, void, 1)?,
                            None,
                        )
                    }
                    _ => CPoolRecord::from_parts(
                        cpool_tag::CLASS_REFERENCE,
                        last_name(internal).as_bytes().to_vec(),
                        ty,
                        None,
                    ),
                }
            }
            tag::GETFIELD | tag::PUTFIELD | tag::GETSTATIC | tag::PUTSTATIC => {
                let Some((class, name, descriptor)) = self.file.member(index16) else {
                    return Ok(None);
                };
                let token = match (tag, class.and_then(|c| self.file.class_name(c))) {
                    (tag::GETSTATIC | tag::PUTSTATIC, Some(class)) => {
                        format!("{}.{name}", last_name(class))
                    }
                    _ => name.to_string(),
                };
                let field = self.java_type(descriptor, types)?;
                let ptr = types.get_type_pointer(4, field, 1)?;
                CPoolRecord::from_parts(cpool_tag::POINTER_FIELD, token.into_bytes(), ptr, None)
            }
            tag::INVOKEDYNAMIC
            | tag::INVOKEINTERFACE
            | tag::INVOKESPECIAL
            | tag::INVOKESTATIC
            | tag::INVOKEVIRTUAL => {
                return self.method_record(index16, tag, types);
            }
            tag::LDC | tag::LDC2_W => match entry {
                Constant::Integer(v) => CPoolRecord::from_parts(
                    cpool_tag::PRIMITIVE,
                    b"int".to_vec(),
                    types.get_base(4, type_metatype::TYPE_INT)?,
                    None,
                )
                .with_value(*v as u32 as u64),
                Constant::Float(bits) => CPoolRecord::from_parts(
                    cpool_tag::PRIMITIVE,
                    b"float".to_vec(),
                    types.get_base(4, type_metatype::TYPE_FLOAT)?,
                    None,
                )
                .with_value(u64::from(*bits)),
                Constant::Long(v) => CPoolRecord::from_parts(
                    cpool_tag::PRIMITIVE,
                    b"long".to_vec(),
                    self.java_type("J", types)?,
                    None,
                )
                .with_value(*v as u64),
                Constant::Double(bits) => CPoolRecord::from_parts(
                    cpool_tag::PRIMITIVE,
                    b"double".to_vec(),
                    types.get_base(8, type_metatype::TYPE_FLOAT)?,
                    None,
                )
                .with_value(*bits),
                Constant::String { string } => {
                    let Some(Constant::Utf8(_, raw)) = self.file.constant(*string) else {
                        return Ok(None);
                    };
                    let ty = self.java_type("Ljava/lang/String;", types)?;
                    CPoolRecord::from_parts(
                        cpool_tag::STRING_LITERAL,
                        Vec::new(),
                        ty,
                        Some(raw.clone()),
                    )
                }
                Constant::Class { name } => {
                    let Some(internal) = self.file.utf8(*name) else {
                        return Ok(None);
                    };
                    let ty = self.java_type(&class_descriptor(internal), types)?;
                    CPoolRecord::from_parts(
                        cpool_tag::CLASS_REFERENCE,
                        format!("{}.class", last_name(internal)).into_bytes(),
                        ty,
                        None,
                    )
                }
                Constant::MethodType { descriptor } => {
                    let token = self.file.utf8(*descriptor).unwrap_or("").to_string();
                    let dword = types.get_base(4, type_metatype::TYPE_UNKNOWN)?;
                    CPoolRecord::from_parts(
                        cpool_tag::POINTER_METHOD,
                        token.into_bytes(),
                        types.get_type_pointer(4, dword, 1)?,
                        None,
                    )
                }
                Constant::MethodHandle { .. } => {
                    let dword = types.get_base(4, type_metatype::TYPE_UNKNOWN)?;
                    CPoolRecord::from_parts(
                        cpool_tag::POINTER_METHOD,
                        Vec::new(),
                        types.get_type_pointer(4, dword, 1)?,
                        None,
                    )
                }
                _ => return Ok(None),
            },
            _ => return Ok(None),
        };
        Ok(Some(record))
    }

    /// The parameter categories (`true` = two slots) of the method whose code
    /// starts at `addr`, `this` first for an instance method.
    fn entry_categories(&self, addr: u64) -> Option<Vec<bool>> {
        let m = self.methods.iter().find(|m| m.addr == addr)?;
        let (params, _) = method_descriptor(&m.descriptor)?;
        let mut cats = Vec::new();
        if !m.is_static {
            cats.push(false);
        }
        cats.extend(params.iter().map(|p| is_wide(p)));
        Some(cats)
    }
}

/// The JVM spec's storage the payloads write: registers, spaces and the
/// user-op indices, read from the architecture once per payload.
struct JvmEnv {
    sp: VarnodeData,
    #[allow(dead_code)]
    lva: VarnodeData,
    call_target: VarnodeData,
    return_value: VarnodeData,
    cat2_return_value: VarnodeData,
    constant: Rc<AddrSpace>,
    unique: Rc<AddrSpace>,
    ram: u64,
    parameters: u64,
    #[allow(dead_code)]
    locals: u64,
    userops: Vec<Vec<u8>>,
}

impl JvmEnv {
    fn new(arch: &crate::architecture::Architecture) -> UnlaceResult<JvmEnv> {
        let manage = arch.manage();
        let space = |name: &str| -> UnlaceResult<u64> {
            manage
                .get_space_by_name(name)
                .map(|s| s.get_index() as u64)
                .ok_or_else(|| UnlaceError::lowlevel(format!("JVM spec has no {name} space")))
        };
        Ok(JvmEnv {
            sp: arch.get_register_varnode(b"SP")?,
            lva: arch.get_register_varnode(b"LVA")?,
            call_target: arch.get_register_varnode(b"call_target")?,
            return_value: arch.get_register_varnode(b"return_value")?,
            cat2_return_value: arch.get_register_varnode(b"cat2_return_value")?,
            constant: Rc::clone(
                manage
                    .get_constant_space()
                    .ok_or_else(|| UnlaceError::lowlevel("no constant space"))?,
            ),
            unique: Rc::clone(
                manage
                    .get_unique_space()
                    .ok_or_else(|| UnlaceError::lowlevel("no unique space"))?,
            ),
            ram: space("ram")?,
            parameters: space("parameterSpace")?,
            locals: space("localVariableArray")?,
            userops: crate::userop::UseropArchitecture::get_user_op_names(arch),
        })
    }
}

/// Ghidra's `PcodeOpEmitter`: named temporaries in the unique space, and the
/// operand-stack pushes and pops the payloads are built from.
struct Emitter<'a> {
    env: &'a JvmEnv,
    address: Address,
    ops: Vec<Operation>,
    temps: HashMap<String, VarnodeData>,
    next_unique: u64,
}

impl<'a> Emitter<'a> {
    fn new(env: &'a JvmEnv, address: Address, unique_base: u64) -> Emitter<'a> {
        Emitter {
            env,
            address,
            ops: Vec::new(),
            temps: HashMap::new(),
            next_unique: unique_base,
        }
    }

    fn constant(&self, value: u64, size: u32) -> VarnodeData {
        VarnodeData {
            space: Some(Rc::clone(&self.env.constant)),
            offset: value,
            size,
        }
    }

    fn temp(&mut self, name: &str, size: u32) -> VarnodeData {
        if let Some(vn) = self.temps.get(name) {
            return vn.clone();
        }
        let vn = VarnodeData {
            space: Some(Rc::clone(&self.env.unique)),
            offset: self.next_unique,
            size,
        };
        self.next_unique += 16;
        self.temps.insert(name.to_string(), vn.clone());
        vn
    }

    fn op(&mut self, opcode: OpCode, output: Option<VarnodeData>, inputs: Vec<VarnodeData>) {
        self.ops.push(Operation {
            address: self.address.clone(),
            opcode,
            output,
            inputs,
        });
    }

    fn push(&mut self, value: VarnodeData) {
        let sp = self.env.sp.clone();
        let step = self.constant(u64::from(value.size), sp.size);
        self.op(
            OpCode::CPUI_INT_SUB,
            Some(sp.clone()),
            vec![sp.clone(), step],
        );
        let space = self.constant(self.env.ram, 4);
        self.op(OpCode::CPUI_STORE, None, vec![space, sp, value]);
    }

    fn pop(&mut self, name: &str, size: u32) -> VarnodeData {
        let out = self.temp(name, size);
        let sp = self.env.sp.clone();
        let space = self.constant(self.env.ram, 4);
        self.op(
            OpCode::CPUI_LOAD,
            Some(out.clone()),
            vec![space, sp.clone()],
        );
        let step = self.constant(u64::from(size), sp.size);
        self.op(OpCode::CPUI_INT_ADD, Some(sp.clone()), vec![sp, step]);
        out
    }

    /// `out = cpool(object, index, tag)`.
    fn cpool(&mut self, out: VarnodeData, object: VarnodeData, index: u64, tag: u64) {
        let index = self.constant(index, 4);
        let tag = self.constant(tag, 4);
        self.op(OpCode::CPUI_CPOOLREF, Some(out), vec![object, index, tag]);
    }

    fn store(&mut self, space: u64, at: VarnodeData, value: VarnodeData) {
        let space = self.constant(space, 4);
        self.op(OpCode::CPUI_STORE, None, vec![space, at, value]);
    }

    fn load(&mut self, out: VarnodeData, at: VarnodeData) {
        let space = self.constant(self.env.ram, 4);
        self.op(OpCode::CPUI_LOAD, Some(out), vec![space, at]);
    }

    fn userop(
        &mut self,
        name: &str,
        output: Option<VarnodeData>,
        mut args: Vec<VarnodeData>,
    ) -> UnlaceResult<()> {
        let index = self
            .env
            .userops
            .iter()
            .position(|n| n == name.as_bytes())
            .ok_or_else(|| UnlaceError::lowlevel(format!("JVM spec has no user-op {name}")))?;
        args.insert(0, self.constant(index as u64, 4));
        self.op(OpCode::CPUI_CALLOTHER, output, args);
        Ok(())
    }
}

/// The payload names the JVM spec's `callotherfixup`s carry.
pub fn is_payload(name: &[u8]) -> bool {
    matches!(
        name,
        b"getFieldCallOther"
            | b"getStaticCallOther"
            | b"putFieldCallOther"
            | b"putStaticCallOther"
            | b"invokedynamicCallOther"
            | b"invokeinterfaceCallOther"
            | b"invokespecialCallOther"
            | b"invokestaticCallOther"
            | b"invokevirtualCallOther"
            | b"ldcCallOther"
            | b"ldc_wCallOther"
            | b"ldc2_wCallOther"
            | b"multianewarrayCallOther"
    )
}

/// The temporaries of the payloads start here in the unique space, past what
/// the spec's own constructors use.
const UNIQUE_BASE: u64 = 0x1000_0000;

/// Emit the p-code of the JVM payload `name` (Ghidra's `InjectPayloadJava`
/// subclasses) for the instruction at `context.baseaddr`, from the class that
/// maps it.
pub fn emit_payload(
    arch: &crate::architecture::Architecture,
    name: &[u8],
    context: &crate::pcodeinject::InjectContext,
    emit: &mut dyn unlace_sleigh::translate::PcodeEmit,
) -> UnlaceResult<()> {
    let address = context
        .baseaddr
        .clone()
        .ok_or_else(|| UnlaceError::lowlevel("JVM payload without an address"))?;
    let model = arch
        .jvm_models()
        .iter()
        .find(|m| m.contains(address.get_offset()))
        .cloned()
        .ok_or_else(|| UnlaceError::lowlevel("JVM payload outside every class"))?;
    let index = context
        .inputlist
        .first()
        .map(|v| v.offset)
        .ok_or_else(|| UnlaceError::lowlevel("JVM payload without a pool index"))?;
    let index16 =
        u16::try_from(index).map_err(|_| UnlaceError::lowlevel("JVM pool index out of range"))?;
    let env = JvmEnv::new(arch)?;
    let mut e = Emitter::new(&env, address, UNIQUE_BASE);
    let file = &model.file;
    let field_descriptor = || -> UnlaceResult<String> {
        file.member(index16)
            .map(|(_, _, d)| d.to_string())
            .ok_or_else(|| UnlaceError::lowlevel("JVM field reference expected"))
    };
    match name {
        b"getStaticCallOther" | b"getFieldCallOther" => {
            let descriptor = field_descriptor()?;
            let statik = name == b"getStaticCallOther";
            let object = if statik {
                e.constant(0, 4)
            } else {
                e.pop("objectRef", 4)
            };
            let tag = if statik {
                tag::GETSTATIC
            } else {
                tag::GETFIELD
            };
            let (size, extend) = match descriptor.as_bytes().first().copied().unwrap_or(b'I') {
                b'B' | b'S' => (
                    if descriptor.starts_with('B') { 1 } else { 2 },
                    Some(OpCode::CPUI_INT_SEXT),
                ),
                b'Z' | b'C' => (
                    if descriptor.starts_with('Z') { 1 } else { 2 },
                    Some(OpCode::CPUI_INT_ZEXT),
                ),
                b'J' | b'D' => (8, None),
                _ => (4, None),
            };
            let ptr = e.temp("temp_1", 4);
            e.cpool(ptr.clone(), object, index, tag);
            match extend {
                Some(ext) => {
                    let narrow = e.temp("temp_2", size);
                    e.load(narrow.clone(), ptr);
                    let value = e.temp("value", 4);
                    e.op(ext, Some(value.clone()), vec![narrow]);
                    e.push(value);
                }
                None => {
                    let value = e.temp("value", size);
                    e.load(value.clone(), ptr);
                    e.push(value);
                }
            }
        }
        b"putStaticCallOther" | b"putFieldCallOther" => {
            let descriptor = field_descriptor()?;
            let statik = name == b"putStaticCallOther";
            let size: u32 = match descriptor.as_bytes().first().copied().unwrap_or(b'I') {
                b'B' | b'Z' => 1,
                b'S' | b'C' => 2,
                b'J' | b'D' => 8,
                _ => 4,
            };
            let value = e.pop("newValue", if size == 8 { 8 } else { 4 });
            let object = if statik {
                e.constant(0, 4)
            } else {
                e.pop("objectRef", 4)
            };
            let target = e.temp(
                if statik {
                    "staticOffset"
                } else {
                    "fieldOffset"
                },
                4,
            );
            e.cpool(
                target.clone(),
                object,
                index,
                if statik {
                    tag::PUTSTATIC
                } else {
                    tag::PUTFIELD
                },
            );
            let stored = if size < 4 {
                let narrow = e.temp("temp_1", size);
                let zero = e.constant(0, 4);
                e.op(
                    OpCode::CPUI_SUBPIECE,
                    Some(narrow.clone()),
                    vec![value, zero],
                );
                narrow
            } else {
                value
            };
            e.store(env.ram, target, stored);
        }
        b"ldcCallOther" | b"ldc_wCallOther" | b"ldc2_wCallOther" => {
            let wide = matches!(
                file.constant(index16),
                Some(Constant::Long(_) | Constant::Double(_))
            );
            let value = e.temp("value", if wide { 8 } else { 4 });
            let zero = e.constant(0, 4);
            e.cpool(
                value.clone(),
                zero,
                index,
                if wide { tag::LDC2_W } else { tag::LDC },
            );
            e.push(value);
        }
        b"multianewarrayCallOther" => {
            let dimensions = context.inputlist.get(1).map_or(1, |v| v.offset.min(255));
            let mut dims = Vec::new();
            for i in (1..=dimensions).rev() {
                dims.push(e.pop(&format!("dim{i}"), 4));
            }
            dims.reverse();
            let class = e.temp("className", 4);
            let zero = e.constant(0, 4);
            e.cpool(class.clone(), zero, index, tag::MULTIANEWARRAY);
            let array = e.temp("arrayref", 4);
            let mut args = vec![class];
            args.extend(dims.iter().take(6).cloned());
            e.userop("multianewarrayOp", Some(array.clone()), args)?;
            for d in dims.iter().skip(6) {
                e.userop(
                    "multianewarrayProcessAdditionalDimensionsOp",
                    None,
                    vec![array.clone(), d.clone()],
                )?;
            }
            e.push(array);
        }
        _ => {
            let tag = match name {
                b"invokedynamicCallOther" => tag::INVOKEDYNAMIC,
                b"invokeinterfaceCallOther" => tag::INVOKEINTERFACE,
                b"invokespecialCallOther" => tag::INVOKESPECIAL,
                b"invokestaticCallOther" => tag::INVOKESTATIC,
                b"invokevirtualCallOther" => tag::INVOKEVIRTUAL,
                _ => return Err(UnlaceError::lowlevel("not a JVM payload")),
            };
            let descriptor = file
                .member(index16)
                .map(|(_, _, d)| d.to_string())
                .ok_or_else(|| UnlaceError::lowlevel("JVM method reference expected"))?;
            let (params, ret) = method_descriptor(&descriptor)
                .ok_or_else(|| UnlaceError::lowlevel("bad JVM method descriptor"))?;
            let with_this = matches!(
                tag,
                tag::INVOKEVIRTUAL | tag::INVOKESPECIAL | tag::INVOKEINTERFACE
            );
            let mut total: u64 = params.iter().map(|p| if is_wide(p) { 8 } else { 4 }).sum();
            if with_this {
                total += 4;
            }
            // InvokeMethods.emitPcodeToMoveParams: pop the last parameter first.
            for (i, p) in params.iter().enumerate().rev() {
                if is_wide(p) {
                    let low = e.pop(&format!("param{i}"), 4);
                    let at = e.constant(total - 8, 4);
                    e.store(env.parameters, at, low);
                    let high = e.pop(&format!("parampart{i}"), 4);
                    let at = e.constant(total - 4, 4);
                    e.store(env.parameters, at, high);
                    total -= 8;
                } else {
                    let value = e.pop(&format!("param{i}"), 4);
                    total -= 4;
                    let at = e.constant(total, 4);
                    e.store(env.parameters, at, value);
                }
            }
            let object = if with_this {
                let this = e.pop("this", 4);
                total -= 4;
                let at = e.constant(total, 4);
                e.store(env.parameters, at, this.clone());
                this
            } else {
                e.constant(0, 4)
            };
            let target = env.call_target.clone();
            e.cpool(target.clone(), object, index, tag);
            e.op(OpCode::CPUI_CALLIND, None, vec![target]);
            match ret.as_bytes().first() {
                Some(b'V') | None => {}
                Some(b'J' | b'D') => e.push(env.cat2_return_value.clone()),
                Some(_) => e.push(env.return_value.clone()),
            }
        }
    }
    for op in &e.ops {
        emit.dump(&op.address, op.opcode, op.output.as_ref(), &op.inputs);
    }
    Ok(())
}

/// (unlace `jvmmodel`) The JVM `uponentry` copies are in; reset by `Funcdata::clear`.
#[derive(Default)]
struct EntrySlot(bool);
crate::unlace_func_state!(EntrySlot, keep_across_clear: false);

/// Insert the `uponentry` copies at the start of the function
/// (`InjectPayloadJavaParameters`): each argument moves from `parameterSpace`
/// to the local variable array, `LVA` stepping 4 or 8 bytes.
pub fn apply_entry(data: &mut crate::funcdata::Funcdata) -> UnlaceResult<()> {
    if data.get_arch().jvm.is_none()
        || data.unlace_state::<EntrySlot>().0
        || data.bblocks_get_size() == 0
    {
        return Ok(());
    }
    let arch = data.get_arch().clone();
    let Some(model) = arch.jvm.as_ref() else {
        return Ok(());
    };
    let Some(categories) = model.entry_categories(data.get_address().get_offset()) else {
        return Ok(());
    };
    if categories.is_empty() {
        return Ok(());
    }
    let manage = &arch.manage;
    let space = |name: &str| -> UnlaceResult<u64> {
        manage
            .get_space_by_name(name)
            .map(|s| s.get_index() as u64)
            .ok_or_else(|| UnlaceError::lowlevel(format!("JVM spec has no {name} space")))
    };
    let (parameters, locals) = (space("parameterSpace")?, space("localVariableArray")?);
    let constant = Rc::clone(
        manage
            .get_constant_space()
            .ok_or_else(|| UnlaceError::lowlevel("no constant space"))?,
    );
    let unique = Rc::clone(
        manage
            .get_unique_space()
            .ok_or_else(|| UnlaceError::lowlevel("no unique space"))?,
    );
    // `LVA` is the eighth 4-byte register of `JVM.slaspec`'s register block.
    let lva = manage
        .get_space_by_name("register")
        .map(|reg| VarnodeData {
            space: Some(Rc::clone(reg)),
            offset: 0x1c,
            size: 4,
        })
        .ok_or_else(|| UnlaceError::lowlevel("JVM spec has no register space"))?;
    let c = |value: u64, size: u32| VarnodeData {
        space: Some(Rc::clone(&constant)),
        offset: value,
        size,
    };
    let block = data.bblocks_get_block(0);
    let start = data.bblocks_block_start(block);
    let mut operations = vec![Operation {
        address: start.clone(),
        opcode: OpCode::CPUI_COPY,
        output: Some(lva.clone()),
        inputs: vec![c(0, 4)],
    }];
    for wide in categories {
        let size = if wide { 8 } else { 4 };
        let temp = VarnodeData {
            space: Some(Rc::clone(&unique)),
            offset: UNIQUE_BASE + if wide { 0x10 } else { 0 },
            size,
        };
        operations.push(Operation {
            address: start.clone(),
            opcode: OpCode::CPUI_LOAD,
            output: Some(temp.clone()),
            inputs: vec![c(parameters, 4), lva.clone()],
        });
        operations.push(Operation {
            address: start.clone(),
            opcode: OpCode::CPUI_STORE,
            output: None,
            inputs: vec![c(locals, 4), lva.clone(), temp],
        });
        operations.push(Operation {
            address: start.clone(),
            opcode: OpCode::CPUI_INT_ADD,
            output: Some(lva.clone()),
            inputs: vec![lva.clone(), c(u64::from(size), 4)],
        });
    }
    (data.hooks().callmechanisms_install_at_entry)(data, block, &operations)?;
    data.unlace_state_mut::<EntrySlot>().0 = true;
    Ok(())
}
