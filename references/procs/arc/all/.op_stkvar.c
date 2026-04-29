// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8090
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8090 jmp     cs:off_2A030
//
// Resolved target: op_stkvar
// Target address:  0x2BA40
// GOT/IAT slot:    0x2A030
// Slot symbol:     off_2A030
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

