// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114550
// Name:            .tiplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114550 jmp     cs:tiplace_t__clone_ptr
//
// Resolved target: tiplace_t__clone
// Target address:  0x8D52D0
// GOT/IAT slot:    0x8A0F48
// Slot symbol:     tiplace_t__clone_ptr
// Target type:     <no type info>
// ============================================================

void .tiplace_t__clone(/* see target signature */)
{
    // Tail-call to tiplace_t__clone via GOT/IAT indirection
    return tiplace_t__clone(/* forwarded args */);
}

