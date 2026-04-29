// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA040
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA040 jmp     cs:off_CA008
//
// Resolved target: get_tinfo_size
// Target address:  0xD0928
// GOT/IAT slot:    0xCA008
// Slot symbol:     off_CA008
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

