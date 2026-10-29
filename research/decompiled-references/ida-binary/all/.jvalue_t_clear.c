// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F80
// Name:            .jvalue_t_clear
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F80 jmp     cs:jvalue_t_clear_ptr
//
// Resolved target: jvalue_t_clear
// Target address:  0x8D8BB8
// GOT/IAT slot:    0x8A3C60
// Slot symbol:     jvalue_t_clear_ptr
// Target type:     <no type info>
// ============================================================

void .jvalue_t_clear(/* see target signature */)
{
    // Tail-call to jvalue_t_clear via GOT/IAT indirection
    return jvalue_t_clear(/* forwarded args */);
}

