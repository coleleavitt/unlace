// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A84C0
// Name:            .tiplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A84C0 jmp     cs:off_2C79A48
//
// Resolved target: tiplace_t__prev
// Target address:  0x5606C0
// GOT/IAT slot:    0x2C79A48
// Slot symbol:     off_2C79A48
// Target type:     <no type info>
// ============================================================

void .tiplace_t__prev(/* see target signature */)
{
    // Tail-call to tiplace_t__prev via GOT/IAT indirection
    return tiplace_t__prev(/* forwarded args */);
}

