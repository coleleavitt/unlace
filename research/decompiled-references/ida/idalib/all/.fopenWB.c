// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA410
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA410 jmp     cs:off_2C7A9F0
//
// Resolved target: fopenWB
// Target address:  0x83B4C0
// GOT/IAT slot:    0x2C7A9F0
// Slot symbol:     off_2C7A9F0
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

