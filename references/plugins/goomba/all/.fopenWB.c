// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4290
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4290 jmp     cs:off_4E130
//
// Resolved target: fopenWB
// Target address:  0x4F738
// GOT/IAT slot:    0x4E130
// Slot symbol:     off_4E130
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

