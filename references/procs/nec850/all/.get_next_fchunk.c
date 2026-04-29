// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9030
// Name:            .get_next_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9030 jmp     cs:off_2E000
//
// Resolved target: get_next_fchunk
// Target address:  0x2E670
// GOT/IAT slot:    0x2E000
// Slot symbol:     off_2E000
// Target type:     <no type info>
// ============================================================

void .get_next_fchunk(/* see target signature */)
{
    // Tail-call to get_next_fchunk via GOT/IAT indirection
    return get_next_fchunk(/* forwarded args */);
}

