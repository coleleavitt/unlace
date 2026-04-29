// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA750
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA750 jmp     cs:off_35390
//
// Resolved target: getinf_flag
// Target address:  0x359E8
// GOT/IAT slot:    0x35390
// Slot symbol:     off_35390
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

