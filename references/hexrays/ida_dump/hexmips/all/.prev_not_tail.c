// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDC0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDC0 jmp     cs:off_4CDEC8
//
// Resolved target: prev_not_tail
// Target address:  0x4D0918
// GOT/IAT slot:    0x4CDEC8
// Slot symbol:     off_4CDEC8
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

