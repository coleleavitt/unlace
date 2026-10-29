// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AACE0
// Name:            .launch_process
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AACE0 jmp     cs:off_2C7AE58
//
// Resolved target: launch_process
// Target address:  0x843740
// GOT/IAT slot:    0x2C7AE58
// Slot symbol:     off_2C7AE58
// Target type:     <no type info>
// ============================================================

void .launch_process(/* see target signature */)
{
    // Tail-call to launch_process via GOT/IAT indirection
    return launch_process(/* forwarded args */);
}

