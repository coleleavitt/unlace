// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F30
// Name:            .tiplace_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F30 jmp     cs:off_2C79F80
//
// Resolved target: tiplace_t__next
// Target address:  0x560C40
// GOT/IAT slot:    0x2C79F80
// Slot symbol:     off_2C79F80
// Target type:     <no type info>
// ============================================================

void .tiplace_t__next(/* see target signature */)
{
    // Tail-call to tiplace_t__next via GOT/IAT indirection
    return tiplace_t__next(/* forwarded args */);
}

