// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10040
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10040 jmp     cs:off_2E008
//
// Resolved target: op_stkvar
// Target address:  0x36C80
// GOT/IAT slot:    0x2E008
// Slot symbol:     off_2E008
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

