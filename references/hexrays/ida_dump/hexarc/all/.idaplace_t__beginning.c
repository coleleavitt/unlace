// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29EC0
// Name:            .idaplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29EC0 jmp     cs:off_4B9748
//
// Resolved target: idaplace_t__beginning
// Target address:  0x4BC140
// GOT/IAT slot:    0x4B9748
// Slot symbol:     off_4B9748
// Target type:     <no type info>
// ============================================================

void .idaplace_t__beginning(/* see target signature */)
{
    // Tail-call to idaplace_t__beginning via GOT/IAT indirection
    return idaplace_t__beginning(/* forwarded args */);
}

