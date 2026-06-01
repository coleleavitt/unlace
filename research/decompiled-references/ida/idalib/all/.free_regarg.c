// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9AD0
// Name:            .free_regarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9AD0 jmp     cs:off_2C7A550
//
// Resolved target: free_regarg
// Target address:  0x673FB0
// GOT/IAT slot:    0x2C7A550
// Slot symbol:     off_2C7A550
// Target type:     <no type info>
// ============================================================

void .free_regarg(/* see target signature */)
{
    // Tail-call to free_regarg via GOT/IAT indirection
    return free_regarg(/* forwarded args */);
}

