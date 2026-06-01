// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA320
// Name:            .write_tinfo_bitfield_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA320 jmp     cs:off_2C7A978
//
// Resolved target: write_tinfo_bitfield_value
// Target address:  0x535250
// GOT/IAT slot:    0x2C7A978
// Slot symbol:     off_2C7A978
// Target type:     <no type info>
// ============================================================

void .write_tinfo_bitfield_value(/* see target signature */)
{
    // Tail-call to write_tinfo_bitfield_value via GOT/IAT indirection
    return write_tinfo_bitfield_value(/* forwarded args */);
}

