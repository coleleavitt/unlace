// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C9A0
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C9A0 jmp     cs:off_4EDCB8
//
// Resolved target: asctoreal
// Target address:  0x4F1FF0
// GOT/IAT slot:    0x4EDCB8
// Slot symbol:     off_4EDCB8
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

