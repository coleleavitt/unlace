// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB250
// Name:            .prev_visea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB250 jmp     cs:off_2C7B110
//
// Resolved target: prev_visea
// Target address:  0x3C7EE0
// GOT/IAT slot:    0x2C7B110
// Slot symbol:     off_2C7B110
// Target type:     <no type info>
// ============================================================

void .prev_visea(/* see target signature */)
{
    // Tail-call to prev_visea via GOT/IAT indirection
    return prev_visea(/* forwarded args */);
}

