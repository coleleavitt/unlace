// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9330
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9330 jmp     cs:off_2C7A180
//
// Resolved target: get_fchunk
// Target address:  0x5C70F0
// GOT/IAT slot:    0x2C7A180
// Slot symbol:     off_2C7A180
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

