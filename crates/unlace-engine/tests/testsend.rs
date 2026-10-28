use unlace_engine::architecture::Architecture;
use unlace_engine::program::Program;

fn require_send<T: Send>() {}

#[test]
fn architecture_and_program_send() {
    require_send::<Architecture>();
    require_send::<Program>();
}
