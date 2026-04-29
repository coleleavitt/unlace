// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8B0
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8B0 jmp     cs:off_4DAC40
//
// Resolved target: asctoreal
// Target address:  0x4DD658
// GOT/IAT slot:    0x4DAC40
// Slot symbol:     off_4DAC40
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

