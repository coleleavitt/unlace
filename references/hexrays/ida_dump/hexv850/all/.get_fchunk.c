// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B950
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B950 jmp     cs:off_4C0C90
//
// Resolved target: get_fchunk
// Target address:  0x4C3CA0
// GOT/IAT slot:    0x4C0C90
// Slot symbol:     off_4C0C90
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

