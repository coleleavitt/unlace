// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E8F0
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E8F0 jmp     cs:off_4E9C60
//
// Resolved target: asctoreal
// Target address:  0x4EC698
// GOT/IAT slot:    0x4E9C60
// Slot symbol:     off_4E9C60
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

