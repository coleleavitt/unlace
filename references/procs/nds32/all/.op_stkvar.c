// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8060
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8060 jmp     cs:off_2A018
//
// Resolved target: op_stkvar
// Target address:  0x2A588
// GOT/IAT slot:    0x2A018
// Slot symbol:     off_2A018
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

