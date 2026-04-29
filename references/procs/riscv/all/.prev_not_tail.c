// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA910
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA910 jmp     cs:off_35470
//
// Resolved target: prev_not_tail
// Target address:  0x35AD8
// GOT/IAT slot:    0x35470
// Slot symbol:     off_35470
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

