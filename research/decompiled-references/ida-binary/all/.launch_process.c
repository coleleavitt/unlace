// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117150
// Name:            .launch_process
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117150 jmp     cs:launch_process_ptr
//
// Resolved target: launch_process
// Target address:  0x8D6EB0
// GOT/IAT slot:    0x8A2548
// Slot symbol:     launch_process_ptr
// Target type:     <no type info>
// ============================================================

void .launch_process(/* see target signature */)
{
    // Tail-call to launch_process via GOT/IAT indirection
    return launch_process(/* forwarded args */);
}

