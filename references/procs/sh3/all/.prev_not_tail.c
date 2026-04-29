// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5640
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5640 jmp     cs:off_15308
//
// Resolved target: prev_not_tail
// Target address:  0x163B0
// GOT/IAT slot:    0x15308
// Slot symbol:     off_15308
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

