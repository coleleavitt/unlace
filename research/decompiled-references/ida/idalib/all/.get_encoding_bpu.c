// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC510
// Name:            .get_encoding_bpu
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC510 jmp     cs:off_2C7BA70
//
// Resolved target: get_encoding_bpu
// Target address:  0x5AA750
// GOT/IAT slot:    0x2C7BA70
// Slot symbol:     off_2C7BA70
// Target type:     <no type info>
// ============================================================

void .get_encoding_bpu(/* see target signature */)
{
    // Tail-call to get_encoding_bpu via GOT/IAT indirection
    return get_encoding_bpu(/* forwarded args */);
}

