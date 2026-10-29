// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C10
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C10 jmp     cs:get_qword_ptr
//
// Resolved target: get_qword
// Target address:  0x8D8998
// GOT/IAT slot:    0x8A3AA8
// Slot symbol:     get_qword_ptr
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

