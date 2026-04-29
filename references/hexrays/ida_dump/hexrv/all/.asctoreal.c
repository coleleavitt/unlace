// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8B0
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8B0 jmp     cs:off_4BFC40
//
// Resolved target: asctoreal
// Target address:  0x4C3150
// GOT/IAT slot:    0x4BFC40
// Slot symbol:     off_4BFC40
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

