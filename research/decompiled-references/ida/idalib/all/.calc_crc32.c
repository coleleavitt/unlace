// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8060
// Name:            .calc_crc32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8060 jmp     cs:off_2C79818
//
// Resolved target: calc_crc32
// Target address:  0x8273E0
// GOT/IAT slot:    0x2C79818
// Slot symbol:     off_2C79818
// Target type:     <no type info>
// ============================================================

void .calc_crc32(/* see target signature */)
{
    // Tail-call to calc_crc32 via GOT/IAT indirection
    return calc_crc32(/* forwarded args */);
}

