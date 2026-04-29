// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA50
// Name:            .getinf_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA50 jmp     cs:off_4B9D10
//
// Resolved target: getinf_str
// Target address:  0x4BC730
// GOT/IAT slot:    0x4B9D10
// Slot symbol:     off_4B9D10
// Target type:     <no type info>
// ============================================================

void .getinf_str(/* see target signature */)
{
    // Tail-call to getinf_str via GOT/IAT indirection
    return getinf_str(/* forwarded args */);
}

