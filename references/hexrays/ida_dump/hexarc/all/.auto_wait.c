// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B070
// Name:            .auto_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B070 jmp     cs:off_4BA020
//
// Resolved target: auto_wait
// Target address:  0x4BCA50
// GOT/IAT slot:    0x4BA020
// Slot symbol:     off_4BA020
// Target type:     <no type info>
// ============================================================

void .auto_wait(/* see target signature */)
{
    // Tail-call to auto_wait via GOT/IAT indirection
    return auto_wait(/* forwarded args */);
}

