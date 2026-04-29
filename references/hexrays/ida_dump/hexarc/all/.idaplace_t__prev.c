// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A260
// Name:            .idaplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A260 jmp     cs:off_4B9918
//
// Resolved target: idaplace_t__prev
// Target address:  0x4BC318
// GOT/IAT slot:    0x4B9918
// Slot symbol:     off_4B9918
// Target type:     <no type info>
// ============================================================

void .idaplace_t__prev(/* see target signature */)
{
    // Tail-call to idaplace_t__prev via GOT/IAT indirection
    return idaplace_t__prev(/* forwarded args */);
}

