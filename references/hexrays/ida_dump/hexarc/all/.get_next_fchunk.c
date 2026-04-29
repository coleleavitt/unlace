// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x290C0
// Name:            .get_next_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x290C0 jmp     cs:off_4B9048
//
// Resolved target: get_next_fchunk
// Target address:  0x4BBA18
// GOT/IAT slot:    0x4B9048
// Slot symbol:     off_4B9048
// Target type:     <no type info>
// ============================================================

void .get_next_fchunk(/* see target signature */)
{
    // Tail-call to get_next_fchunk via GOT/IAT indirection
    return get_next_fchunk(/* forwarded args */);
}

