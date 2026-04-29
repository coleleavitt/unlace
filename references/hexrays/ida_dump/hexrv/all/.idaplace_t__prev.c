// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B260
// Name:            .idaplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B260 jmp     cs:off_4BF918
//
// Resolved target: idaplace_t__prev
// Target address:  0x4C2E10
// GOT/IAT slot:    0x4BF918
// Slot symbol:     off_4BF918
// Target type:     <no type info>
// ============================================================

void .idaplace_t__prev(/* see target signature */)
{
    // Tail-call to idaplace_t__prev via GOT/IAT indirection
    return idaplace_t__prev(/* forwarded args */);
}

