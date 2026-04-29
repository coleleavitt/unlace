// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD90
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD90 jmp     cs:off_4B9EB0
//
// Resolved target: prev_not_tail
// Target address:  0x4BC8E0
// GOT/IAT slot:    0x4B9EB0
// Slot symbol:     off_4B9EB0
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

