// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA30
// Name:            .idaplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA30 jmp     cs:off_2C7BD00
//
// Resolved target: idaplace_t__prev
// Target address:  0x42A470
// GOT/IAT slot:    0x2C7BD00
// Slot symbol:     off_2C7BD00
// Target type:     <no type info>
// ============================================================

void .idaplace_t__prev(/* see target signature */)
{
    // Tail-call to idaplace_t__prev via GOT/IAT indirection
    return idaplace_t__prev(/* forwarded args */);
}

