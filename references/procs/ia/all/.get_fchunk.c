// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7300
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7300 jmp     cs:off_26168
//
// Resolved target: get_fchunk
// Target address:  0x26428
// GOT/IAT slot:    0x26168
// Slot symbol:     off_26168
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

