// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A540
// Name:            .next_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A540 jmp     cs:next_not_tail_ptr
//
// Resolved target: next_not_tail
// Target address:  0x8D8F60
// GOT/IAT slot:    0x8A3F40
// Slot symbol:     next_not_tail_ptr
// Target type:     <no type info>
// ============================================================

void .next_not_tail(/* see target signature */)
{
    // Tail-call to next_not_tail via GOT/IAT indirection
    return next_not_tail(/* forwarded args */);
}

