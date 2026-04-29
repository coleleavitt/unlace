// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF50
// Name:            .jvalue_t_clear
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF50 jmp     cs:off_4E9F90
//
// Resolved target: jvalue_t_clear
// Target address:  0x4EC9E0
// GOT/IAT slot:    0x4E9F90
// Slot symbol:     off_4E9F90
// Target type:     <no type info>
// ============================================================

void .jvalue_t_clear(/* see target signature */)
{
    // Tail-call to jvalue_t_clear via GOT/IAT indirection
    return jvalue_t_clear(/* forwarded args */);
}

