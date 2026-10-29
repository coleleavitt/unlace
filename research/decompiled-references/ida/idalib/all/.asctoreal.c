// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9780
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9780 jmp     cs:off_2C7A3A8
//
// Resolved target: asctoreal
// Target address:  0x831B40
// GOT/IAT slot:    0x2C7A3A8
// Slot symbol:     off_2C7A3A8
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

