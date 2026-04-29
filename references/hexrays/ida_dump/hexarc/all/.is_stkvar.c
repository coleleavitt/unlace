// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA60
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA60 jmp     cs:off_4B9D18
//
// Resolved target: is_stkvar
// Target address:  0x4BC738
// GOT/IAT slot:    0x4B9D18
// Slot symbol:     off_4B9D18
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

