// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD590
// Name:            .idaplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD590 jmp     cs:off_2C7C2B0
//
// Resolved target: idaplace_t__beginning
// Target address:  0x42A4B0
// GOT/IAT slot:    0x2C7C2B0
// Slot symbol:     off_2C7C2B0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__beginning(/* see target signature */)
{
    // Tail-call to idaplace_t__beginning via GOT/IAT indirection
    return idaplace_t__beginning(/* forwarded args */);
}

