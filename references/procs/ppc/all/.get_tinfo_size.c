// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20090
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20090 jmp     cs:off_95030
//
// Resolved target: get_tinfo_size
// Target address:  0x95A60
// GOT/IAT slot:    0x95030
// Slot symbol:     off_95030
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

