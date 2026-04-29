// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34A0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34A0 jmp     cs:off_14238
//
// Resolved target: getinf_flag
// Target address:  0x14838
// GOT/IAT slot:    0x14238
// Slot symbol:     off_14238
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

