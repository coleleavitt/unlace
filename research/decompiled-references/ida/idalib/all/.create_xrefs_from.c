// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8DB0
// Name:            .create_xrefs_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8DB0 jmp     cs:off_2C79EC0
//
// Resolved target: create_xrefs_from
// Target address:  0x3E3D90
// GOT/IAT slot:    0x2C79EC0
// Slot symbol:     off_2C79EC0
// Target type:     <no type info>
// ============================================================

void .create_xrefs_from(/* see target signature */)
{
    // Tail-call to create_xrefs_from via GOT/IAT indirection
    return create_xrefs_from(/* forwarded args */);
}

