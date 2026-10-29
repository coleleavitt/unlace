// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7790
// Name:            .hexplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7790 jmp     cs:off_2C793B0
//
// Resolved target: hexplace_t__clone
// Target address:  0x424FF0
// GOT/IAT slot:    0x2C793B0
// Slot symbol:     off_2C793B0
// Target type:     <no type info>
// ============================================================

void .hexplace_t__clone(/* see target signature */)
{
    // Tail-call to hexplace_t__clone via GOT/IAT indirection
    return hexplace_t__clone(/* forwarded args */);
}

