// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A89F0
// Name:            .next_visea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A89F0 jmp     cs:off_2C79CE0
//
// Resolved target: next_visea
// Target address:  0x3C81A0
// GOT/IAT slot:    0x2C79CE0
// Slot symbol:     off_2C79CE0
// Target type:     <no type info>
// ============================================================

void .next_visea(/* see target signature */)
{
    // Tail-call to next_visea via GOT/IAT indirection
    return next_visea(/* forwarded args */);
}

