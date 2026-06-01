// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB380
// Name:            .tiplace_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB380 jmp     cs:off_2C7B1A8
//
// Resolved target: tiplace_t__copyfrom
// Target address:  0x55A570
// GOT/IAT slot:    0x2C7B1A8
// Slot symbol:     off_2C7B1A8
// Target type:     <no type info>
// ============================================================

void .tiplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to tiplace_t__copyfrom via GOT/IAT indirection
    return tiplace_t__copyfrom(/* forwarded args */);
}

