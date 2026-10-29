// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB6F0
// Name:            .tiplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB6F0 jmp     cs:off_2C7B360
//
// Resolved target: tiplace_t__print
// Target address:  0x5618F0
// GOT/IAT slot:    0x2C7B360
// Slot symbol:     off_2C7B360
// Target type:     <no type info>
// ============================================================

void .tiplace_t__print(/* see target signature */)
{
    // Tail-call to tiplace_t__print via GOT/IAT indirection
    return tiplace_t__print(/* forwarded args */);
}

