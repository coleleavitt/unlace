// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA10
// Name:            .idaplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA10 jmp     cs:off_2C7BCF0
//
// Resolved target: idaplace_t__enter
// Target address:  0x42ACF0
// GOT/IAT slot:    0x2C7BCF0
// Slot symbol:     off_2C7BCF0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__enter(/* see target signature */)
{
    // Tail-call to idaplace_t__enter via GOT/IAT indirection
    return idaplace_t__enter(/* forwarded args */);
}

