// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9DA0
// Name:            .tiplace_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9DA0 jmp     cs:off_2C7A6B8
//
// Resolved target: tiplace_t__touval
// Target address:  0x55A3F0
// GOT/IAT slot:    0x2C7A6B8
// Slot symbol:     off_2C7A6B8
// Target type:     <no type info>
// ============================================================

void .tiplace_t__touval(/* see target signature */)
{
    // Tail-call to tiplace_t__touval via GOT/IAT indirection
    return tiplace_t__touval(/* forwarded args */);
}

