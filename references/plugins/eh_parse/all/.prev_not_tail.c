// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6900
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6900 jmp     cs:off_2F468
//
// Resolved target: prev_not_tail
// Target address:  0x2FAF0
// GOT/IAT slot:    0x2F468
// Slot symbol:     off_2F468
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

