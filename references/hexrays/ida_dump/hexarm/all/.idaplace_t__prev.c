// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E290
// Name:            .idaplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E290 jmp     cs:off_4E9930
//
// Resolved target: idaplace_t__prev
// Target address:  0x4EC350
// GOT/IAT slot:    0x4E9930
// Slot symbol:     off_4E9930
// Target type:     <no type info>
// ============================================================

void .idaplace_t__prev(/* see target signature */)
{
    // Tail-call to idaplace_t__prev via GOT/IAT indirection
    return idaplace_t__prev(/* forwarded args */);
}

