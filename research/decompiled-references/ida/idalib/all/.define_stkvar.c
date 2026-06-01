// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7330
// Name:            .define_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7330 jmp     cs:off_2C79180
//
// Resolved target: define_stkvar
// Target address:  0x5BE320
// GOT/IAT slot:    0x2C79180
// Slot symbol:     off_2C79180
// Target type:     <no type info>
// ============================================================

void .define_stkvar(/* see target signature */)
{
    // Tail-call to define_stkvar via GOT/IAT indirection
    return define_stkvar(/* forwarded args */);
}

