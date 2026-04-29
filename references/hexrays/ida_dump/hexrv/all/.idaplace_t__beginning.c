// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEC0
// Name:            .idaplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEC0 jmp     cs:off_4BF748
//
// Resolved target: idaplace_t__beginning
// Target address:  0x4C2C38
// GOT/IAT slot:    0x4BF748
// Slot symbol:     off_4BF748
// Target type:     <no type info>
// ============================================================

void .idaplace_t__beginning(/* see target signature */)
{
    // Tail-call to idaplace_t__beginning via GOT/IAT indirection
    return idaplace_t__beginning(/* forwarded args */);
}

