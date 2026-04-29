// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEC0
// Name:            .idaplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEC0 jmp     cs:off_4C0748
//
// Resolved target: idaplace_t__beginning
// Target address:  0x4C3738
// GOT/IAT slot:    0x4C0748
// Slot symbol:     off_4C0748
// Target type:     <no type info>
// ============================================================

void .idaplace_t__beginning(/* see target signature */)
{
    // Tail-call to idaplace_t__beginning via GOT/IAT indirection
    return idaplace_t__beginning(/* forwarded args */);
}

