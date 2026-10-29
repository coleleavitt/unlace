// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACCA0
// Name:            .hexplace_t__ea2str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACCA0 jmp     cs:off_2C7BE38
//
// Resolved target: hexplace_t__ea2str
// Target address:  0x424590
// GOT/IAT slot:    0x2C7BE38
// Slot symbol:     off_2C7BE38
// Target type:     <no type info>
// ============================================================

void .hexplace_t__ea2str(/* see target signature */)
{
    // Tail-call to hexplace_t__ea2str via GOT/IAT indirection
    return hexplace_t__ea2str(/* forwarded args */);
}

