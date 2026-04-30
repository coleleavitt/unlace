// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116210
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116210 jmp     cs:fopenWB_ptr
//
// Resolved target: fopenWB
// Target address:  0x8D6520
// GOT/IAT slot:    0x8A1DA8
// Slot symbol:     fopenWB_ptr
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

