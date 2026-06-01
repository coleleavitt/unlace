// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC7B0
// Name:            .getn_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC7B0 jmp     cs:off_2C7BBC0
//
// Resolved target: getn_fchunk
// Target address:  0x5C7110
// GOT/IAT slot:    0x2C7BBC0
// Slot symbol:     off_2C7BBC0
// Target type:     <no type info>
// ============================================================

void .getn_fchunk(/* see target signature */)
{
    // Tail-call to getn_fchunk via GOT/IAT indirection
    return getn_fchunk(/* forwarded args */);
}

