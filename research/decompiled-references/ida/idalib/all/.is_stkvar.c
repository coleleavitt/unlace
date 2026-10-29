// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7620
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7620 jmp     cs:off_2C792F8
//
// Resolved target: is_stkvar
// Target address:  0x3C52C0
// GOT/IAT slot:    0x2C792F8
// Slot symbol:     off_2C792F8
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

