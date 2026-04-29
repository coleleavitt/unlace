// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EDF0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EDF0 jmp     cs:off_4E9EE0
//
// Resolved target: prev_not_tail
// Target address:  0x4EC930
// GOT/IAT slot:    0x4E9EE0
// Slot symbol:     off_4E9EE0
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

