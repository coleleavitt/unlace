// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB70
// Name:            .getinf_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB70 jmp     cs:off_4EDDA0
//
// Resolved target: getinf_str
// Target address:  0x4F20E0
// GOT/IAT slot:    0x4EDDA0
// Slot symbol:     off_4EDDA0
// Target type:     <no type info>
// ============================================================

void .getinf_str(/* see target signature */)
{
    // Tail-call to getinf_str via GOT/IAT indirection
    return getinf_str(/* forwarded args */);
}

