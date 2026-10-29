// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F40
// Name:            .tiplace_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F40 jmp     cs:tiplace_t__next_ptr
//
// Resolved target: tiplace_t__next
// Target address:  0x8D4F00
// GOT/IAT slot:    0x8A0C40
// Slot symbol:     tiplace_t__next_ptr
// Target type:     <no type info>
// ============================================================

void .tiplace_t__next(/* see target signature */)
{
    // Tail-call to tiplace_t__next via GOT/IAT indirection
    return tiplace_t__next(/* forwarded args */);
}

