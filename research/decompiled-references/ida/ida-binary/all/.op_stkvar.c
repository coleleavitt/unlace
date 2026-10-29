// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A600
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A600 jmp     cs:op_stkvar_ptr
//
// Resolved target: op_stkvar
// Target address:  0x8D8FD8
// GOT/IAT slot:    0x8A3FA0
// Slot symbol:     op_stkvar_ptr
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

