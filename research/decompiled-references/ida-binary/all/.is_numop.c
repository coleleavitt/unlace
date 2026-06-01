// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116300
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116300 jmp     cs:is_numop_ptr
//
// Resolved target: is_numop
// Target address:  0x8D65A8
// GOT/IAT slot:    0x8A1E20
// Slot symbol:     is_numop_ptr
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}

