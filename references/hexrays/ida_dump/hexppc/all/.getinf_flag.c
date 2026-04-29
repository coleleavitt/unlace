// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B810
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B810 jmp     cs:off_4DABF0
//
// Resolved target: getinf_flag
// Target address:  0x4DD600
// GOT/IAT slot:    0x4DABF0
// Slot symbol:     off_4DABF0
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

