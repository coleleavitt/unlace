// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116250
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116250 jmp     cs:setinf_ptr
//
// Resolved target: setinf
// Target address:  0x8D6540
// GOT/IAT slot:    0x8A1DC8
// Slot symbol:     setinf_ptr
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

