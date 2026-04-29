// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B880
// Name:            .idaplace_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B880 jmp     cs:off_4ED428
//
// Resolved target: idaplace_t__makeplace
// Target address:  0x4F1720
// GOT/IAT slot:    0x4ED428
// Slot symbol:     off_4ED428
// Target type:     <no type info>
// ============================================================

void .idaplace_t__makeplace(/* see target signature */)
{
    // Tail-call to idaplace_t__makeplace via GOT/IAT indirection
    return idaplace_t__makeplace(/* forwarded args */);
}

