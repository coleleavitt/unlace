// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD6F0
// Name:            .hexplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD6F0 jmp     cs:off_2C7C360
//
// Resolved target: hexplace_t__print
// Target address:  0x4254C0
// GOT/IAT slot:    0x2C7C360
// Slot symbol:     off_2C7C360
// Target type:     <no type info>
// ============================================================

void .hexplace_t__print(/* see target signature */)
{
    // Tail-call to hexplace_t__print via GOT/IAT indirection
    return hexplace_t__print(/* forwarded args */);
}

