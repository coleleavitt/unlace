// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114270
// Name:            .jvalue_t_copy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114270 jmp     cs:jvalue_t_copy_ptr
//
// Resolved target: jvalue_t_copy
// Target address:  0x8D50E0
// GOT/IAT slot:    0x8A0DD8
// Slot symbol:     jvalue_t_copy_ptr
// Target type:     <no type info>
// ============================================================

void .jvalue_t_copy(/* see target signature */)
{
    // Tail-call to jvalue_t_copy via GOT/IAT indirection
    return jvalue_t_copy(/* forwarded args */);
}

