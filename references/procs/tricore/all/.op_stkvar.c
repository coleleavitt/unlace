// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6060
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6060 jmp     cs:off_24018
//
// Resolved target: op_stkvar
// Target address:  0x25DE8
// GOT/IAT slot:    0x24018
// Slot symbol:     off_24018
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

