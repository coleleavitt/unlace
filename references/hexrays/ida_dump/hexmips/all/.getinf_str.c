// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA80
// Name:            .getinf_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA80 jmp     cs:off_4CDD28
//
// Resolved target: getinf_str
// Target address:  0x4D0768
// GOT/IAT slot:    0x4CDD28
// Slot symbol:     off_4CDD28
// Target type:     <no type info>
// ============================================================

void .getinf_str(/* see target signature */)
{
    // Tail-call to getinf_str via GOT/IAT indirection
    return getinf_str(/* forwarded args */);
}

