// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EAB0
// Name:            .getinf_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EAB0 jmp     cs:off_4E9D40
//
// Resolved target: getinf_str
// Target address:  0x4EC780
// GOT/IAT slot:    0x4E9D40
// Slot symbol:     off_4E9D40
// Target type:     <no type info>
// ============================================================

void .getinf_str(/* see target signature */)
{
    // Tail-call to getinf_str via GOT/IAT indirection
    return getinf_str(/* forwarded args */);
}

