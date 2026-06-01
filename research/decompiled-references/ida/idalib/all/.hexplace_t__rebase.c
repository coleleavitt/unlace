// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB260
// Name:            .hexplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB260 jmp     cs:off_2C7B118
//
// Resolved target: hexplace_t__rebase
// Target address:  0x4254A0
// GOT/IAT slot:    0x2C7B118
// Slot symbol:     off_2C7B118
// Target type:     <no type info>
// ============================================================

void .hexplace_t__rebase(/* see target signature */)
{
    // Tail-call to hexplace_t__rebase via GOT/IAT indirection
    return hexplace_t__rebase(/* forwarded args */);
}

