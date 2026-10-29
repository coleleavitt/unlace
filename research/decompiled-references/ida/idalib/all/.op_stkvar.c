// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD80
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD80 jmp     cs:off_2C7BEA8
//
// Resolved target: op_stkvar
// Target address:  0x3D58F0
// GOT/IAT slot:    0x2C7BEA8
// Slot symbol:     off_2C7BEA8
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

