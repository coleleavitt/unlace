// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C320
// Name:            .idaplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C320 jmp     cs:off_4ED978
//
// Resolved target: idaplace_t__prev
// Target address:  0x4F1C98
// GOT/IAT slot:    0x4ED978
// Slot symbol:     off_4ED978
// Target type:     <no type info>
// ============================================================

void .idaplace_t__prev(/* see target signature */)
{
    // Tail-call to idaplace_t__prev via GOT/IAT indirection
    return idaplace_t__prev(/* forwarded args */);
}

