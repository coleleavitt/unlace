// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA30
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA30 jmp     cs:off_4EDD00
//
// Resolved target: get_fchunk
// Target address:  0x4F2038
// GOT/IAT slot:    0x4EDD00
// Slot symbol:     off_4EDD00
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

