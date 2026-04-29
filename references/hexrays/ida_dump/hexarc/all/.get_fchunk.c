// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A920
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A920 jmp     cs:off_4B9C78
//
// Resolved target: get_fchunk
// Target address:  0x4BC690
// GOT/IAT slot:    0x4B9C78
// Slot symbol:     off_4B9C78
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

