// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA80
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA80 jmp     cs:off_4BFD28
//
// Resolved target: is_stkvar
// Target address:  0x4C3240
// GOT/IAT slot:    0x4BFD28
// Slot symbol:     off_4BFD28
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

