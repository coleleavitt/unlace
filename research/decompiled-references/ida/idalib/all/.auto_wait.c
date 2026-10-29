// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7DC0
// Name:            .auto_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7DC0 jmp     cs:off_2C796C8
//
// Resolved target: auto_wait
// Target address:  0x3A9220
// GOT/IAT slot:    0x2C796C8
// Slot symbol:     off_2C796C8
// Target type:     <no type info>
// ============================================================

void .auto_wait(/* see target signature */)
{
    // Tail-call to auto_wait via GOT/IAT indirection
    return auto_wait(/* forwarded args */);
}

