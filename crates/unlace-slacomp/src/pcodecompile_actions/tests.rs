use super::*;
use unlace_base::space::{ConstantSpace, UniqueSpace};
use unlace_sleigh::semantics::VField;

/// A recording host: tracks the unique base and which callbacks fired.
struct RecordingHost {
    constant: Rc<AddrSpace>,
    unique: Rc<AddrSpace>,
    unique_base: u32,
    errors: Vec<String>,
    warnings: Vec<String>,
    added_symbols: u32,
}

impl RecordingHost {
    fn new() -> RecordingHost {
        RecordingHost {
            constant: Rc::new(ConstantSpace::new()),
            unique: Rc::new(UniqueSpace::new(2, 0, false)),
            unique_base: 0,
            errors: Vec::new(),
            warnings: Vec::new(),
            added_symbols: 0,
        }
    }
}

impl CompilerHost for RecordingHost {
    fn get_unique_addr(&mut self) -> u32 {
        let base = self.unique_base;
        self.unique_base += 256; // C++ SleighBase::MAX_UNIQUE_SIZE
        base
    }
    fn get_unique_space(&self) -> Rc<AddrSpace> {
        Rc::clone(&self.unique)
    }
    fn get_constant_space(&self) -> Rc<AddrSpace> {
        Rc::clone(&self.constant)
    }
    fn get_location(&self, _symbol_name: &[u8]) -> Option<Location> {
        None
    }
    fn add_symbol(&mut self, _sym: PcodeCompileSymbol) {
        self.added_symbols += 1;
    }
    fn report_error(&mut self, _loc: Option<&Location>, msg: &str) {
        self.errors.push(msg.to_string());
    }
    fn report_warning(&mut self, _loc: Option<&Location>, msg: &str) {
        self.warnings.push(msg.to_string());
    }
}

/// `SleighPcode`'s five overridden hooks must route straight through to the
/// `CompilerHost` (slgh_compile.cc:1930-1958), bumping the unique base just
/// like `SleighCompile::getUniqueAddr`.
#[test]
fn sleighpcode_hooks_route_through_host() {
    let mut host = RecordingHost::new();
    let mut pcode = SleighPcode::new();

    // allocateTemp -> getUniqueAddr (bumps the base by MAX_UNIQUE_SIZE).
    assert_eq!(pcode.allocate_temp(&mut host), 0);
    assert_eq!(pcode.allocate_temp(&mut host), 256);
    assert_eq!(pcode.allocate_temp(&mut host), 512);

    // getLocation -> host (empty table -> None).
    assert!(pcode.get_location(&host, b"sym").is_none());

    // reportError / reportWarning route through.
    pcode.report_error(&mut host, None, "boom");
    pcode.report_warning(&mut host, None, "careful");
    assert_eq!(host.errors, vec!["boom".to_string()]);
    assert_eq!(host.warnings, vec!["careful".to_string()]);
}

/// `setMacroOp` lifts inputs `1..numInput` of the MACROBUILD op into handle
/// parameters (input 0 is the macro index, dropped).
#[test]
fn set_macro_op_collects_params_from_inputs_after_first() {
    let mut host = RecordingHost::new();
    let cspace = host.get_constant_space();
    let uspace = host.get_unique_space();

    let mut macroop = OpTpl::new(OpCode::CPUI_CAST);
    // input 0: macro index (dropped)
    macroop.add_input(VarnodeTpl::new(
        ConstTpl::new_space(Rc::clone(&cspace)),
        ConstTpl::new_real(ConstType::Real, 0),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    // input 1, 2: the two actual arguments
    for off in [0x10u64, 0x20] {
        macroop.add_input(VarnodeTpl::new(
            ConstTpl::new_space(Rc::clone(&uspace)),
            ConstTpl::new_real(ConstType::Real, off),
            ConstTpl::new_real(ConstType::Real, 4),
        ));
    }

    let mut outvec: Vec<OpTpl> = Vec::new();
    let mut builder = MacroBuilder::new(&mut host, &mut outvec, 0);
    builder.set_macro_op(&macroop).unwrap();
    assert_eq!(builder.params.len(), 2);
    assert!(!builder.has_error());
}

/// An illegal truncation (an offset_plus on a parameter with no real size)
/// is reported as an error and aborts the transfer
/// (slgh_compile.cc:1858-1862).
#[test]
fn transfer_op_rejects_bitrange_without_realsize() {
    let mut host = RecordingHost::new();
    let cspace = host.get_constant_space();
    let uspace = host.get_unique_space();

    // MACROBUILD with one arg whose size is *zero* (so transfer's offset_plus
    // path triggers with no real size on the input varnode).
    let mut macroop = OpTpl::new(OpCode::CPUI_CAST);
    macroop.add_input(VarnodeTpl::new(
        ConstTpl::new_space(Rc::clone(&cspace)),
        ConstTpl::new_real(ConstType::Real, 0),
        ConstTpl::new_real(ConstType::Real, 4),
    )); // index
    macroop.add_input(VarnodeTpl::new(
        ConstTpl::new_space(Rc::clone(&uspace)),
        ConstTpl::new_real(ConstType::Real, 0x100),
        ConstTpl::new_real(ConstType::Real, 0), // zero-size param
    ));

    // A body op that reads param0 with an offset_plus but a *handle* size
    // (not real) -> hasrealsize is false -> error.
    let mut body = OpTpl::new(OpCode::CPUI_COPY);
    body.add_input(VarnodeTpl::new(
        ConstTpl::new_handle(0, VField::VSpace),
        ConstTpl::new_handle_plus(0, VField::VOffsetPlus, 2),
        ConstTpl::new_handle(0, VField::VSize), // size is a handle, not real
    ));

    let mut construct = ConstTplHolder::new(body);
    let mut outvec: Vec<OpTpl> = Vec::new();
    {
        let mut builder = MacroBuilder::new(&mut host, &mut outvec, 0);
        builder.set_macro_op(&macroop).unwrap();
        builder.build(Some(&construct.0), -1).unwrap();
        assert!(builder.has_error(), "expected a truncation error");
    }
    let _ = &mut construct;
    assert_eq!(
        host.errors,
        vec!["Problem with bit range operator in macro".to_string()]
    );
}

use unlace_sleigh::semantics::ConstructTpl;
struct ConstTplHolder(ConstructTpl);
impl ConstTplHolder {
    fn new(op: OpTpl) -> ConstTplHolder {
        let mut c = ConstructTpl::new();
        c.add_op(op);
        ConstTplHolder(c)
    }
}
