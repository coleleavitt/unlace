// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E980
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E980 jmp     cs:off_4E9CA8
//
// Resolved target: get_fchunk
// Target address:  0x4EC6E0
// GOT/IAT slot:    0x4E9CA8
// Slot symbol:     off_4E9CA8
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

