// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117400
// Name:            .getinf_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117400 jmp     cs:getinf_str_ptr
//
// Resolved target: getinf_str
// Target address:  0x8D7088
// GOT/IAT slot:    0x8A26A0
// Slot symbol:     getinf_str_ptr
// Target type:     <no type info>
// ============================================================

void .getinf_str(/* see target signature */)
{
    // Tail-call to getinf_str via GOT/IAT indirection
    return getinf_str(/* forwarded args */);
}

