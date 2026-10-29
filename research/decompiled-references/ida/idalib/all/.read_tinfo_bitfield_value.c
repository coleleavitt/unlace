// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8230
// Name:            .read_tinfo_bitfield_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8230 jmp     cs:off_2C79900
//
// Resolved target: read_tinfo_bitfield_value
// Target address:  0x535140
// GOT/IAT slot:    0x2C79900
// Slot symbol:     off_2C79900
// Target type:     <no type info>
// ============================================================

void .read_tinfo_bitfield_value(/* see target signature */)
{
    // Tail-call to read_tinfo_bitfield_value via GOT/IAT indirection
    return read_tinfo_bitfield_value(/* forwarded args */);
}

