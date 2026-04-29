// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19070
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19070 jmp     cs:off_75020
//
// Resolved target: op_stkvar
// Target address:  0x75870
// GOT/IAT slot:    0x75020
// Slot symbol:     off_75020
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

