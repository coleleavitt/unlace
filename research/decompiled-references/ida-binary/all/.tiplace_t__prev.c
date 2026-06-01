// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112FE0
// Name:            .tiplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112FE0 jmp     cs:tiplace_t__prev_ptr
//
// Resolved target: tiplace_t__prev
// Target address:  0x8D4510
// GOT/IAT slot:    0x8A0490
// Slot symbol:     tiplace_t__prev_ptr
// Target type:     <no type info>
// ============================================================

void .tiplace_t__prev(/* see target signature */)
{
    // Tail-call to tiplace_t__prev via GOT/IAT indirection
    return tiplace_t__prev(/* forwarded args */);
}

