// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3430
// Name:            .getinf_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3430 jmp     cs:off_29200
//
// Resolved target: getinf_str
// Target address:  0x295C0
// GOT/IAT slot:    0x29200
// Slot symbol:     off_29200
// Target type:     <no type info>
// ============================================================

void .getinf_str(/* see target signature */)
{
    // Tail-call to getinf_str via GOT/IAT indirection
    return getinf_str(/* forwarded args */);
}

