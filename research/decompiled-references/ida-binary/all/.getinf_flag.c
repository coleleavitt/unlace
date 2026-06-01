// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111210
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111210 jmp     cs:getinf_flag_ptr
//
// Resolved target: getinf_flag
// Target address:  0x8D31B0
// GOT/IAT slot:    0x89F5A8
// Slot symbol:     getinf_flag_ptr
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

