// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113820
// Name:            .next_visea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113820 jmp     cs:next_visea_ptr
//
// Resolved target: next_visea
// Target address:  0x8D4A50
// GOT/IAT slot:    0x8A08B0
// Slot symbol:     next_visea_ptr
// Target type:     <no type info>
// ============================================================

void .next_visea(/* see target signature */)
{
    // Tail-call to next_visea via GOT/IAT indirection
    return next_visea(/* forwarded args */);
}

