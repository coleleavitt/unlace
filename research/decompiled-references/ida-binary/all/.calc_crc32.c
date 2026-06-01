// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1129E0
// Name:            .calc_crc32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1129E0 jmp     cs:calc_crc32_ptr
//
// Resolved target: calc_crc32
// Target address:  0x8D4118
// GOT/IAT slot:    0x8A0190
// Slot symbol:     calc_crc32_ptr
// Target type:     <no type info>
// ============================================================

void .calc_crc32(/* see target signature */)
{
    // Tail-call to calc_crc32 via GOT/IAT indirection
    return calc_crc32(/* forwarded args */);
}

