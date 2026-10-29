// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD6E0
// Name:            .tiplace_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD6E0 jmp     cs:off_2C7C358
//
// Resolved target: tiplace_t__makeplace
// Target address:  0x55A480
// GOT/IAT slot:    0x2C7C358
// Slot symbol:     off_2C7C358
// Target type:     <no type info>
// ============================================================

void .tiplace_t__makeplace(/* see target signature */)
{
    // Tail-call to tiplace_t__makeplace via GOT/IAT indirection
    return tiplace_t__makeplace(/* forwarded args */);
}

