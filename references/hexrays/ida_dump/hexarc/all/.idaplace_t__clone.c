// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29180
// Name:            .idaplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29180 jmp     cs:off_4B90A8
//
// Resolved target: idaplace_t__clone
// Target address:  0x4BBA78
// GOT/IAT slot:    0x4B90A8
// Slot symbol:     off_4B90A8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__clone(/* see target signature */)
{
    // Tail-call to idaplace_t__clone via GOT/IAT indirection
    return idaplace_t__clone(/* forwarded args */);
}

