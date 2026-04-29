// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFE0
// Name:            .idaplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFE0 jmp     cs:off_4ED7D8
//
// Resolved target: idaplace_t__compare
// Target address:  0x4F1AE8
// GOT/IAT slot:    0x4ED7D8
// Slot symbol:     off_4ED7D8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare(/* see target signature */)
{
    // Tail-call to idaplace_t__compare via GOT/IAT indirection
    return idaplace_t__compare(/* forwarded args */);
}

