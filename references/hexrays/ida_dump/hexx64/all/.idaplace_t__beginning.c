// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF30
// Name:            .idaplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF30 jmp     cs:off_4ED780
//
// Resolved target: idaplace_t__beginning
// Target address:  0x4F1A90
// GOT/IAT slot:    0x4ED780
// Slot symbol:     off_4ED780
// Target type:     <no type info>
// ============================================================

void .idaplace_t__beginning(/* see target signature */)
{
    // Tail-call to idaplace_t__beginning via GOT/IAT indirection
    return idaplace_t__beginning(/* forwarded args */);
}

