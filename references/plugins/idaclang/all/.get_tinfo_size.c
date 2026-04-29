// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3040
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3040 jmp     cs:off_29008
//
// Resolved target: get_tinfo_size
// Target address:  0x293B8
// GOT/IAT slot:    0x29008
// Slot symbol:     off_29008
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

