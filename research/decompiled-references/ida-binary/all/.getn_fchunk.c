// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D70
// Name:            .getn_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D70 jmp     cs:getn_fchunk_ptr
//
// Resolved target: getn_fchunk
// Target address:  0x8D8A50
// GOT/IAT slot:    0x8A3B58
// Slot symbol:     getn_fchunk_ptr
// Target type:     <no type info>
// ============================================================

void .getn_fchunk(/* see target signature */)
{
    // Tail-call to getn_fchunk via GOT/IAT indirection
    return getn_fchunk(/* forwarded args */);
}

