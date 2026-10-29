// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7560
// Name:            .tiplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7560 jmp     cs:off_2C79298
//
// Resolved target: tiplace_t__rebase
// Target address:  0x55C0B0
// GOT/IAT slot:    0x2C79298
// Slot symbol:     off_2C79298
// Target type:     <no type info>
// ============================================================

void .tiplace_t__rebase(/* see target signature */)
{
    // Tail-call to tiplace_t__rebase via GOT/IAT indirection
    return tiplace_t__rebase(/* forwarded args */);
}

