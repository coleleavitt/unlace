// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115EB0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115EB0 jmp     cs:setinf_flag_ptr
//
// Resolved target: setinf_flag
// Target address:  0x8D62E0
// GOT/IAT slot:    0x8A1BF8
// Slot symbol:     setinf_flag_ptr
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

