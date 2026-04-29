// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EAC0
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EAC0 jmp     cs:off_4E9D48
//
// Resolved target: is_stkvar
// Target address:  0x4EC788
// GOT/IAT slot:    0x4E9D48
// Slot symbol:     off_4E9D48
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

