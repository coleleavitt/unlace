//! (unlace) `callmechanisms` — compiler-declared p-code attached to prototype entry and return boundaries.
use std::rc::Rc;

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::{IdRegistry, XmlDecode};
use unlace_base::space::AddrSpaceManager;
use unlace_base::xml::{DocumentStorage, Element};

use crate::inject_sleigh::PcodeInjectLibrarySleigh;
use crate::pcodeinject::CALLMECHANISM_TYPE;

/// When compiler-spec boundary payloads are installed: `callmechanisms off|auto|on`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum CallMechanismMode {
    #[default]
    Off,
    /// Only on a PPC64 image with validated ELFv1 descriptors, whose ABI reserves `0x28(r1)` for the TOC
    /// save, and there only a return payload whose stored slot the next instruction reloads,
    /// forwarded into that reload when it is a single register store.
    Auto,
    On,
}

impl CallMechanismMode {
    pub fn as_str(self) -> &'static str {
        match self {
            CallMechanismMode::Off => "off",
            CallMechanismMode::Auto => "auto",
            CallMechanismMode::On => "on",
        }
    }

    pub fn fires(self, image_elfv1_toc: bool) -> bool {
        match self {
            CallMechanismMode::Off => false,
            CallMechanismMode::Auto => image_elfv1_toc,
            CallMechanismMode::On => true,
        }
    }
}

/// Parse `option callmechanisms off|auto|on`; the caller writes the live field.
pub struct OptionCallMechanisms;

impl OptionCallMechanisms {
    pub const NAME: &'static str = "callmechanisms";

    pub fn apply(&self, p1: &str) -> UnlaceResult<(CallMechanismMode, String)> {
        let mode = match p1 {
            "off" => CallMechanismMode::Off,
            "auto" => CallMechanismMode::Auto,
            "on" | "" => CallMechanismMode::On,
            other => {
                return Err(UnlaceError::parse(format!(
                    "Unknown callmechanisms value: {other} (expected off|auto|on)"
                )));
            }
        };
        Ok((
            mode,
            format!(
                "Compiler prototype call mechanisms set to {}",
                mode.as_str()
            ),
        ))
    }
}

/// Register before snippet compilation; decoding models later only resolves IDs.
pub fn register(
    xml: Option<&str>,
    manager: &AddrSpaceManager,
    library: &mut PcodeInjectLibrarySleigh,
) -> UnlaceResult<()> {
    let Some(xml) = xml else { return Ok(()) };
    let mut documents = DocumentStorage::new();
    let root = documents.parse_document(xml.as_bytes())?.get_root().clone();
    let mut registry = IdRegistry::with_base_ids();
    crate::pcodeinject::register_ids(&mut registry);
    fn visit(
        element: &Rc<Element>,
        manager: &AddrSpaceManager,
        registry: &IdRegistry,
        library: &mut PcodeInjectLibrarySleigh,
    ) -> UnlaceResult<()> {
        if element.get_name() == "prototype" {
            let name = element.get_attribute_value("name").unwrap_or(b"__stdcall");
            for child in element
                .get_children()
                .iter()
                .filter(|e| e.get_name() == "pcode")
            {
                let kind = child.get_attribute_value("inject").unwrap_or(b"");
                if !matches!(kind, b"uponentry" | b"uponreturn") {
                    return Err(UnlaceError::lowlevel(
                        "Prototype p-code requires uponentry or uponreturn",
                    ));
                }
                let mut decoder = XmlDecode::new_with_root(manager, registry, child, 0);
                library.decode_inject(
                    b"Compiler prototype",
                    name,
                    CALLMECHANISM_TYPE,
                    &mut decoder,
                )?;
            }
        }
        for child in element.get_children() {
            visit(child, manager, registry, library)?;
        }
        Ok(())
    }
    visit(&root, manager, &registry, library)
}

pub fn ids(library: &PcodeInjectLibrarySleigh, name: &str) -> (i32, i32) {
    let lookup = |kind| {
        library.base.get_payload_id(
            CALLMECHANISM_TYPE,
            format!("{name}@@inject_{kind}").as_bytes(),
        )
    };
    (lookup("uponentry"), lookup("uponreturn"))
}

/// A payload with no locally compiled body (dynamic, or host-owned in ghidra mode) stays unresolved.
pub fn compiled_ids(library: &PcodeInjectLibrarySleigh, name: &str) -> (i32, i32) {
    let compiled = |id: i32| {
        if id >= 0 && library.get_tpl(id).is_some() {
            id
        } else {
            -1
        }
    };
    let (entry, upon_return) = ids(library, name);
    (compiled(entry), compiled(upon_return))
}

#[derive(Debug, Default)]
pub struct State {
    pub register_slots: bool,
    applied: std::collections::HashMap<crate::context::OpId, i32>,
    entry: Option<i32>,
    pub failure: Option<String>,
}

crate::unlace_func_state!(State, keep_across_clear: false);

/// Did installing a call mechanism fail, so the pipeline must stop?
fn failed(data: &crate::funcdata::Funcdata) -> bool {
    data.unlace_state::<State>().failure.is_some()
}

/// Changing a call's return mechanism requires rebuilding its pre-SSA effects.
pub fn requires_reflow(
    current: &crate::fspec::FuncProto,
    replacement: &crate::fspec::FuncProto,
) -> bool {
    let id = |proto: &crate::fspec::FuncProto| {
        if proto.has_model() {
            proto.get_inject_upon_return()
        } else {
            -1
        }
    };
    id(current) != id(replacement)
}

pub fn evaluation_model(data: &crate::funcdata::Funcdata) -> Option<Rc<crate::fspec::ProtoModel>> {
    if data.get_func_proto().is_model_locked() {
        return data
            .get_func_proto()
            .has_model()
            .then(|| data.get_func_proto().model().clone());
    }
    // (unlace `calleereginputs custom`) A function the whole-image rule decided
    // takes a callee-saved register as a custom argument evaluates its own
    // prototype under the synthesized model, so its printed parameters are the
    // ones its callers pass.
    if let Some(model) =
        crate::calleereginputs::own_register_model(data.get_arch(), &data.get_address().clone())
    {
        return Some(model);
    }
    data.get_arch().eval_fp_current().cloned().or_else(|| {
        data.get_func_proto()
            .has_model()
            .then(|| data.get_func_proto().model().clone())
    })
}

/// Apply the callee model's declared return-boundary effects once per lifted call.
pub fn apply_return(data: &mut crate::funcdata::Funcdata, index: i32) -> UnlaceResult<()> {
    if !data.get_arch().call_mechanism_effects {
        return Ok(());
    }
    let call = data.get_call_specs(index);
    if !call.proto().has_model() || call.proto().is_no_return() {
        return Ok(());
    }
    let op = call.get_op();
    let id = call.proto().get_inject_upon_return();
    if let Some(previous) = data.unlace_state::<State>().applied.get(&op) {
        return if *previous == id {
            Ok(())
        } else {
            Err(UnlaceError::lowlevel(
                "Call mechanism changed after insertion; function requires reanalysis",
            ))
        };
    }
    if id < 0 {
        return Ok(());
    }
    let address = data
        .obank()
        .get(op)
        .ok_or_else(|| UnlaceError::lowlevel("Missing call operation for compiler mechanism"))?
        .get_addr()
        .clone();
    let mut context = crate::pcodeinject::InjectContext {
        baseaddr: Some(address.clone()),
        nextaddr: Some(address),
        ..Default::default()
    };
    let arch = data.get_arch().clone();
    let operations = mechanisms(&arch).operations(id, arch.manage(), &mut context)?;
    if arch.call_mechanism_reload_only {
        let Some((load, store)) = reloads_stored_slot(data, op, &operations) else {
            return Ok(());
        };
        if let Some(value) = forwardable_value(&operations, store, data, load) {
            forward_reload(data, load, &value)?;
            data.unlace_state_mut::<State>().applied.insert(op, id);
            return Ok(());
        }
    }
    install_after(data, op, &operations)?;
    data.unlace_state_mut::<State>().applied.insert(op, id);
    Ok(())
}

/// The register a payload consisting only of `store` (plus the temporaries naming its
/// address) writes, when it is as wide as the reload reads.
fn forwardable_value(
    operations: &[Operation],
    store: usize,
    data: &crate::funcdata::Funcdata,
    load: crate::context::OpId,
) -> Option<unlace_num::pcoderaw::VarnodeData> {
    use unlace_base::space::spacetype::{IPTR_INTERNAL, IPTR_PROCESSOR};
    let temporary_only = operations.iter().enumerate().all(|(index, op)| {
        index == store
            || op
                .output
                .as_ref()
                .and_then(|v| v.space.as_ref())
                .map(|space| space.get_type())
                == Some(IPTR_INTERNAL)
    });
    let value = operations[store].inputs.get(2)?.clone();
    let width = data
        .obank()
        .get(load)?
        .get_out()
        .and_then(|vn| data.vbank().get(vn))?
        .get_size();
    (temporary_only
        && value.space.as_ref()?.get_type() == IPTR_PROCESSOR
        && value.size as i32 == width)
        .then_some(value)
}

/// Store-to-load forwarding of the payload's effect: the reload reads the stored register
/// directly, so no store is left in the frame for later passes to keep.
fn forward_reload(
    data: &mut crate::funcdata::Funcdata,
    load: crate::context::OpId,
    value: &unlace_num::pcoderaw::VarnodeData,
) -> UnlaceResult<()> {
    let space = value
        .space
        .clone()
        .ok_or_else(|| UnlaceError::lowlevel("Compiler mechanism value has no space"))?;
    let source = data.new_varnode_space_off(value.size as i32, space, value.offset);
    data.op_set_input(load, source, 0)?;
    data.op_remove_input(load, 1);
    data.op_set_opcode(
        load,
        crate::typeop::type_op_for(unlace_num::opcodes::OpCode::CPUI_COPY),
    );
    Ok(())
}

/// A storage location named by a base register plus a constant offset.
#[derive(PartialEq)]
struct Slot {
    space: i32,
    base: (i32, u64, u32),
    offset: u64,
}

/// The slots a payload's stores write, as base register plus constant offset, with each
/// store's index.
fn payload_slots(operations: &[Operation]) -> Vec<(usize, Slot)> {
    use unlace_base::space::spacetype::{IPTR_CONSTANT, IPTR_PROCESSOR};
    use unlace_num::opcodes::OpCode::{CPUI_INT_ADD, CPUI_STORE};
    let key = |v: &unlace_num::pcoderaw::VarnodeData| {
        v.space
            .as_ref()
            .map(|space| (space.get_index(), v.offset, v.size))
    };
    let kind =
        |v: &unlace_num::pcoderaw::VarnodeData| v.space.as_ref().map(|space| space.get_type());
    let base_plus =
        |pointer: &unlace_num::pcoderaw::VarnodeData| -> Option<((i32, u64, u32), u64)> {
            if kind(pointer) == Some(IPTR_PROCESSOR) {
                return Some((key(pointer)?, 0));
            }
            let add = operations.iter().find(|op| {
                op.opcode == CPUI_INT_ADD && op.output.as_ref().and_then(key) == key(pointer)
            })?;
            let [a, b] = add.inputs.as_slice() else {
                return None;
            };
            match (kind(a), kind(b)) {
                (Some(IPTR_PROCESSOR), Some(IPTR_CONSTANT)) => Some((key(a)?, b.offset)),
                (Some(IPTR_CONSTANT), Some(IPTR_PROCESSOR)) => Some((key(b)?, a.offset)),
                _ => None,
            }
        };
    operations
        .iter()
        .enumerate()
        .filter(|(_, op)| op.opcode == CPUI_STORE && op.inputs.len() == 3)
        .filter_map(|(index, store)| {
            let (base, offset) = base_plus(&store.inputs[1])?;
            Some((
                index,
                Slot {
                    space: store.inputs[0].offset as i32,
                    base,
                    offset,
                },
            ))
        })
        .collect()
}

/// The LOAD by which the instruction after `call` reads back a slot the payload stores
/// (the ELFv1 `ld r2,40(r1)` TOC reload), with that store's index. Ops placed at the
/// call's own address are skipped.
fn reloads_stored_slot(
    data: &crate::funcdata::Funcdata,
    call: crate::context::OpId,
    operations: &[Operation],
) -> Option<(crate::context::OpId, usize)> {
    use unlace_base::space::spacetype::{IPTR_CONSTANT, IPTR_PROCESSOR};
    use unlace_num::opcodes::OpCode::{CPUI_INT_ADD, CPUI_LOAD};
    let slots = payload_slots(operations);
    let ops = data.obank();
    let call_op = ops.get(call)?;
    let mut next = call_op.basic_neighbours().1;
    while let Some(op) = next.and_then(|id| ops.get(id)) {
        if op.get_addr() != call_op.get_addr() {
            break;
        }
        next = op.basic_neighbours().1;
    }
    let reload = next.and_then(|id| ops.get(id))?;
    let varnode = |id: Option<crate::context::VarnodeId>| id.and_then(|id| data.vbank().get(id));
    let key = |v: &crate::varnode::Varnode| {
        (
            v.get_space().get_index(),
            v.get_offset(),
            v.get_size() as u32,
        )
    };
    let instruction: Vec<_> = ops
        .iter_at(reload.get_addr())
        .filter_map(|(_, id)| ops.get(id).map(|op| (id, op)))
        .collect();
    let base_plus = |pointer: &crate::varnode::Varnode| -> Option<((i32, u64, u32), u64)> {
        if pointer.get_space().get_type() == IPTR_PROCESSOR {
            return Some((key(pointer), 0));
        }
        let (_, add) = instruction.iter().find(|(_, op)| {
            op.code() == CPUI_INT_ADD
                && varnode(op.get_out()).is_some_and(|out| key(out) == key(pointer))
        })?;
        let (a, b) = (varnode(add.get_in(0))?, varnode(add.get_in(1))?);
        match (a.get_space().get_type(), b.get_space().get_type()) {
            (IPTR_PROCESSOR, IPTR_CONSTANT) => Some((key(a), b.get_offset())),
            (IPTR_CONSTANT, IPTR_PROCESSOR) => Some((key(b), a.get_offset())),
            _ => None,
        }
    };
    instruction.iter().find_map(|&(id, load)| {
        if load.code() != CPUI_LOAD {
            return None;
        }
        let (space, pointer) = (varnode(load.get_in(0))?, varnode(load.get_in(1))?);
        let (base, offset) = base_plus(pointer)?;
        let slot = Slot {
            space: space.get_offset() as i32,
            base,
            offset,
        };
        slots
            .iter()
            .find(|(_, stored)| *stored == slot)
            .map(|(index, _)| (id, *index))
    })
}

/// Apply the current model's entry-boundary effects before the first operation.
pub fn apply_entry(data: &mut crate::funcdata::Funcdata) -> UnlaceResult<()> {
    if !data.get_arch().call_mechanism_effects
        || data.get_arch().call_mechanism_reload_only
        || data.bblocks_get_size() == 0
    {
        return Ok(());
    }
    let Some(model) = evaluation_model(data) else {
        return Ok(());
    };
    let id = model.get_inject_upon_entry();
    if let Some(previous) = data.unlace_state::<State>().entry {
        return if previous == id {
            Ok(())
        } else {
            Err(UnlaceError::lowlevel(
                "Entry mechanism changed after insertion; function requires reanalysis",
            ))
        };
    }
    if id < 0 {
        return Ok(());
    }
    let block = data.bblocks_get_block(0);
    let address = data.bblocks_block_start(block);
    let mut context = crate::pcodeinject::InjectContext {
        baseaddr: Some(address.clone()),
        nextaddr: Some(address),
        ..Default::default()
    };
    let arch = data.get_arch().clone();
    let operations = mechanisms(&arch).operations(id, arch.manage(), &mut context)?;
    install(data, None, Some(block), &operations)?;
    data.unlace_state_mut::<State>().entry = Some(id);
    Ok(())
}

pub use crate::emittedop::Operation;

#[derive(Default)]
struct Operations(Vec<Operation>);

impl unlace_sleigh::translate::PcodeEmit for Operations {
    fn dump(
        &mut self,
        address: &unlace_base::address::Address,
        opcode: unlace_num::opcodes::OpCode,
        output: Option<&unlace_num::pcoderaw::VarnodeData>,
        inputs: &[unlace_num::pcoderaw::VarnodeData],
    ) {
        self.0.push(Operation {
            address: address.clone(),
            opcode,
            output: output.cloned(),
            inputs: inputs.to_vec(),
        });
    }
}

fn validate_operations(operations: &[Operation]) -> UnlaceResult<()> {
    use unlace_num::opcodes::OpCode::*;
    for op in operations {
        if matches!(
            op.opcode,
            CPUI_BRANCH
                | CPUI_CBRANCH
                | CPUI_BRANCHIND
                | CPUI_CALL
                | CPUI_CALLIND
                | CPUI_RETURN
                | CPUI_MULTIEQUAL
                | CPUI_INDIRECT
                | CPUI_MAX
        ) {
            return Err(UnlaceError::lowlevel(
                "Compiler prototype mechanism requires unsupported control flow",
            ));
        }
        if op.output.as_ref().is_some_and(|storage| {
            storage.space.as_ref().is_some_and(|space| {
                space.get_type() == unlace_base::space::spacetype::IPTR_CONSTANT
            })
        }) {
            return Err(UnlaceError::lowlevel(
                "Compiler prototype mechanism writes constant storage",
            ));
        }
        for storage in op.inputs.iter().chain(op.output.iter()) {
            if storage.space.is_none()
                || storage.size == 0
                || storage.size > i32::MAX as u32
                || (storage.space.as_ref().is_some_and(|space| {
                    space.get_type() != unlace_base::space::spacetype::IPTR_CONSTANT
                }) && storage.offset.checked_add(storage.size as u64).is_none())
            {
                return Err(UnlaceError::lowlevel(
                    "Invalid compiler prototype mechanism storage",
                ));
            }
        }
    }
    Ok(())
}

/// Install straight-line p-code at the start of `block`.
pub fn install_at_entry(
    data: &mut crate::funcdata::Funcdata,
    block: crate::context::BlockId,
    operations: &[Operation],
) -> UnlaceResult<()> {
    install(data, None, Some(block), operations)
}

/// Install straight-line p-code with a fresh temporary range for this invocation.
pub fn install_after(
    data: &mut crate::funcdata::Funcdata,
    previous: crate::context::OpId,
    operations: &[Operation],
) -> UnlaceResult<()> {
    install(data, Some(previous), None, operations)
}

fn install(
    data: &mut crate::funcdata::Funcdata,
    mut previous: Option<crate::context::OpId>,
    entry: Option<crate::context::BlockId>,
    operations: &[Operation],
) -> UnlaceResult<()> {
    use unlace_base::address::Address;
    use unlace_base::space::spacetype;
    validate_operations(operations)?;
    let mut temporary_range: Option<(u64, u64)> = None;
    for storage in operations
        .iter()
        .flat_map(|op| op.inputs.iter().chain(op.output.iter()))
    {
        if storage.space.as_ref().unwrap().get_type() == spacetype::IPTR_INTERNAL {
            let end = storage.offset + storage.size as u64;
            temporary_range = Some(match temporary_range {
                Some((lo, hi)) => (lo.min(storage.offset), hi.max(end)),
                None => (storage.offset, end),
            });
        }
    }
    let relocation = if let Some((lo, hi)) = temporary_range {
        let size = i32::try_from(hi - lo).map_err(|_| {
            UnlaceError::lowlevel("Compiler mechanism temporary range is too large")
        })?;
        let anchor = data.new_unique(size, None);
        let base = data.vbank().get(anchor).unwrap().get_addr().get_offset();
        data.delete_varnode(anchor)?;
        Some((lo, base))
    } else {
        None
    };
    let address = |storage: &unlace_num::pcoderaw::VarnodeData| {
        let space = storage.space.as_ref().unwrap().clone();
        let offset = if space.get_type() == spacetype::IPTR_INTERNAL {
            let (lo, base) = relocation.unwrap();
            base + (storage.offset - lo)
        } else {
            storage.offset
        };
        Address::new(space, offset)
    };
    for operation in operations {
        let op = data.new_op(operation.inputs.len() as i32, operation.address.clone());
        data.op_set_opcode_code(op, operation.opcode);
        if let Some(output) = operation.output.as_ref() {
            data.new_varnode_out(output.size as i32, &address(output), op)?;
        }
        for (slot, input) in operation.inputs.iter().enumerate() {
            let location = address(input);
            let vn = data.new_varnode_space_off(
                input.size as i32,
                location.get_space().unwrap().clone(),
                location.get_offset(),
            );
            data.op_set_input(op, vn, slot as i32)?;
        }
        if let Some(previous) = previous {
            data.op_insert_after(op, previous);
        } else {
            data.op_insert_begin(op, entry.expect("mechanism entry block"));
        }
        previous = Some(op);
    }
    Ok(())
}

fn validate_template(template: &unlace_sleigh::semantics::ConstructTpl) -> UnlaceResult<()> {
    use unlace_sleigh::semantics::ConstType;
    for op in template.get_opvec() {
        for storage in (0..op.num_input())
            .map(|index| op.get_in(index))
            .chain(op.get_out())
        {
            for value in [
                storage.get_space(),
                storage.get_offset(),
                storage.get_size(),
            ] {
                if matches!(
                    value.get_type(),
                    ConstType::JStart
                        | ConstType::JNext
                        | ConstType::JNext2
                        | ConstType::JRelative
                        | ConstType::JFlowref
                        | ConstType::JFlowrefSize
                        | ConstType::JFlowdest
                        | ConstType::JFlowdestSize
                ) {
                    return Err(UnlaceError::lowlevel(
                        "Compiler mechanism uses unsupported instruction context",
                    ));
                }
            }
        }
    }
    Ok(())
}

/// Immutable compiled mechanisms shared by every function in an architecture, kept in its
/// [`ArchStates`](crate::archstate::ArchStates).
#[derive(Debug, Default)]
pub struct Mechanisms {
    payloads: std::collections::BTreeMap<
        i32,
        (
            crate::inject_sleigh::SleighPayload,
            Option<unlace_sleigh::semantics::ConstructTpl>,
        ),
    >,
}

impl Mechanisms {
    pub fn from_library(library: &PcodeInjectLibrarySleigh) -> Self {
        let payloads = library
            .injection
            .iter()
            .enumerate()
            .filter(|(_, payload)| payload.as_payload().core().get_type() == CALLMECHANISM_TYPE)
            .map(|(id, payload)| {
                (
                    id as i32,
                    (payload.clone(), library.get_tpl(id as i32).cloned()),
                )
            })
            .collect();
        Self { payloads }
    }

    /// Collect and validate the complete payload before changing function IR.
    pub fn operations(
        &self,
        id: i32,
        manager: &AddrSpaceManager,
        context: &mut crate::pcodeinject::InjectContext,
    ) -> UnlaceResult<Vec<Operation>> {
        let mut output = Operations::default();
        self.emit(id, manager, context, &mut output)?;
        validate_operations(&output.0)?;
        Ok(output.0)
    }

    pub fn emit(
        &self,
        id: i32,
        manager: &AddrSpaceManager,
        context: &mut crate::pcodeinject::InjectContext,
        output: &mut dyn unlace_sleigh::translate::PcodeEmit,
    ) -> UnlaceResult<()> {
        let (payload, template) = self
            .payloads
            .get(&id)
            .ok_or_else(|| UnlaceError::lowlevel("Missing compiler prototype mechanism"))?;
        let template = template.as_ref().ok_or_else(|| {
            UnlaceError::lowlevel("Compiler prototype mechanism has no compiled p-code")
        })?;
        validate_template(template)?;
        let space = |value: Option<&Rc<unlace_base::space::AddrSpace>>| {
            value
                .cloned()
                .ok_or_else(|| UnlaceError::lowlevel("Missing mechanism address space"))
        };
        let engine = crate::inject_sleigh::SleighInjectEngine::new(
            space(manager.get_constant_space())?,
            space(manager.get_unique_space())?,
            space(manager.get_default_code_space())?,
        );
        engine.emit_payload(payload.as_payload(), template, context, output)
    }
}

crate::unlace_arch_state!(Mechanisms);

/// The architecture's compiled mechanisms; none before the specs load.
fn mechanisms(arch: &crate::context::ArchContext) -> Rc<Mechanisms> {
    arch.unlace_states
        .get_rc::<Mechanisms>()
        .unwrap_or_default()
}

/// A context's `(call_mechanism_effects, call_mechanism_reload_only)`.
fn effects(options: &crate::optionset::OptionSet, image_elfv1_toc: bool) -> (bool, bool) {
    let mode = options.get::<CallMechanismMode>();
    (mode.fires(image_elfv1_toc), mode == CallMechanismMode::Auto)
}

/// Compile the mechanisms out of the architecture's loaded inject library.
fn load(arch: &mut crate::architecture::Architecture) {
    let mechanisms = Mechanisms::from_library(&arch.pcodeinjectlib);
    arch.unlace_states.set(Rc::new(mechanisms));
}

/// [`compiled_ids`] against the architecture's inject library.
fn compiled_ids_in(arch: &crate::architecture::Architecture, name: &str) -> (i32, i32) {
    compiled_ids(&arch.pcodeinjectlib, name)
}

/// [`register`] into the architecture's inject library.
fn register_in(
    xml: Option<&str>,
    manager: &AddrSpaceManager,
    arch: &mut crate::architecture::Architecture,
) -> UnlaceResult<()> {
    register(xml, manager, &mut arch.pcodeinjectlib)
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.callmechanisms_effects = Some(effects);
    hooks.callmechanisms_load = Some(load);
    hooks.callmechanisms_compiled_ids = Some(compiled_ids_in);
    hooks.callmechanisms_register = Some(register_in);
    hooks.callmechanisms_requires_reflow = Some(requires_reflow);
    hooks.callmechanisms_failed = Some(failed);
    hooks.callmechanisms_install_at_entry = Some(install_at_entry);
}

impl crate::optionset::UnlaceOption for CallMechanismMode {
    const NAME: &'static str = "callmechanisms";
    crate::unlace_option_id!();

    fn unset() -> Self {
        crate::callmechanisms::CallMechanismMode::Off
    }

    fn shipped() -> Self {
        crate::callmechanisms::CallMechanismMode::Auto
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        Ok(crate::callmechanisms::OptionCallMechanisms.apply(value)?)
    }
}

#[cfg(test)]
mod tests;
