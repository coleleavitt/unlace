// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E810
// Name:            .idaplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E810 jmp     cs:off_4E9BF0
//
// Resolved target: idaplace_t__print
// Target address:  0x4EC620
// GOT/IAT slot:    0x4E9BF0
// Slot symbol:     off_4E9BF0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__print(/* see target signature */)
{
    // Tail-call to idaplace_t__print via GOT/IAT indirection
    return idaplace_t__print(/* forwarded args */);
}

