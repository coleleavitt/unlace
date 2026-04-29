// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3210
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3210 jmp     cs:off_280F0
//
// Resolved target: fopenWB
// Target address:  0x285A0
// GOT/IAT slot:    0x280F0
// Slot symbol:     off_280F0
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

