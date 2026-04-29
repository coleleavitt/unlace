// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8140
// Name:            .get_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8140 jmp     cs:off_2A088
//
// Resolved target: get_opinfo
// Target address:  0x2BA98
// GOT/IAT slot:    0x2A088
// Slot symbol:     off_2A088
// Target type:     <no type info>
// ============================================================

void .get_opinfo(/* see target signature */)
{
    // Tail-call to get_opinfo via GOT/IAT indirection
    return get_opinfo(/* forwarded args */);
}

