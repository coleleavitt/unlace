// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113750
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113750 jmp     cs:prev_not_tail_ptr
//
// Resolved target: prev_not_tail
// Target address:  0x8D49E0
// GOT/IAT slot:    0x8A0848
// Slot symbol:     prev_not_tail_ptr
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

