// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0C0
// Name:            .get_next_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0C0 jmp     cs:off_4CD048
//
// Resolved target: get_next_fchunk
// Target address:  0x4CFA38
// GOT/IAT slot:    0x4CD048
// Slot symbol:     off_4CD048
// Target type:     <no type info>
// ============================================================

void .get_next_fchunk(/* see target signature */)
{
    // Tail-call to get_next_fchunk via GOT/IAT indirection
    return get_next_fchunk(/* forwarded args */);
}

