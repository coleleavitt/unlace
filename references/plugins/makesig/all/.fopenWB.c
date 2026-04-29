// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3180
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3180 jmp     cs:off_200A8
//
// Resolved target: fopenWB
// Target address:  0x219B8
// GOT/IAT slot:    0x200A8
// Slot symbol:     off_200A8
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

