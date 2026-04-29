// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA080
// Name:            .define_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA080 jmp     cs:off_CA028
//
// Resolved target: define_stkvar
// Target address:  0xD0948
// GOT/IAT slot:    0xCA028
// Slot symbol:     off_CA028
// Target type:     <no type info>
// ============================================================

void .define_stkvar(/* see target signature */)
{
    // Tail-call to define_stkvar via GOT/IAT indirection
    return define_stkvar(/* forwarded args */);
}

