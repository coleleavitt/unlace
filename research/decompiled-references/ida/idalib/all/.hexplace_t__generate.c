// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD240
// Name:            .hexplace_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD240 jmp     cs:off_2C7C108
//
// Resolved target: hexplace_t__generate
// Target address:  0x424DA0
// GOT/IAT slot:    0x2C7C108
// Slot symbol:     off_2C7C108
// Target type:     <no type info>
// ============================================================

void .hexplace_t__generate(/* see target signature */)
{
    // Tail-call to hexplace_t__generate via GOT/IAT indirection
    return hexplace_t__generate(/* forwarded args */);
}

