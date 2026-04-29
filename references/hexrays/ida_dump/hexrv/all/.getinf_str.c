// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA70
// Name:            .getinf_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA70 jmp     cs:off_4BFD20
//
// Resolved target: getinf_str
// Target address:  0x4C3238
// GOT/IAT slot:    0x4BFD20
// Slot symbol:     off_4BFD20
// Target type:     <no type info>
// ============================================================

void .getinf_str(/* see target signature */)
{
    // Tail-call to getinf_str via GOT/IAT indirection
    return getinf_str(/* forwarded args */);
}

