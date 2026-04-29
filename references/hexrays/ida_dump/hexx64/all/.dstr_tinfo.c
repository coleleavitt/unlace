// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3D0
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3D0 jmp     cs:off_4EE1D0
//
// Resolved target: dstr_tinfo
// Target address:  0x4F2530
// GOT/IAT slot:    0x4EE1D0
// Slot symbol:     off_4EE1D0
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

