// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DBA0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DBA0 jmp     cs:off_B35B8
//
// Resolved target: segtype
// Target address:  0xB3D88
// GOT/IAT slot:    0xB35B8
// Slot symbol:     off_B35B8
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

