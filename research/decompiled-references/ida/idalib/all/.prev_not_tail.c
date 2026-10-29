// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A89B0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A89B0 jmp     cs:off_2C79CC0
//
// Resolved target: prev_not_tail
// Target address:  0x3C27B0
// GOT/IAT slot:    0x2C79CC0
// Slot symbol:     off_2C79CC0
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

