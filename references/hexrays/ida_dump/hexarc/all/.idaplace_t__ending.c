// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA70
// Name:            .idaplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA70 jmp     cs:off_4B9D20
//
// Resolved target: idaplace_t__ending
// Target address:  0x4BC740
// GOT/IAT slot:    0x4B9D20
// Slot symbol:     off_4B9D20
// Target type:     <no type info>
// ============================================================

void .idaplace_t__ending(/* see target signature */)
{
    // Tail-call to idaplace_t__ending via GOT/IAT indirection
    return idaplace_t__ending(/* forwarded args */);
}

