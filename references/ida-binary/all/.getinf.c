// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1134C0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1134C0 jmp     cs:getinf_ptr
//
// Resolved target: getinf
// Target address:  0x8D4838
// GOT/IAT slot:    0x8A0700
// Slot symbol:     getinf_ptr
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

