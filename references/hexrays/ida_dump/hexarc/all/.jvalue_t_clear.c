// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEF0
// Name:            .jvalue_t_clear
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEF0 jmp     cs:off_4B9F60
//
// Resolved target: jvalue_t_clear
// Target address:  0x4BC990
// GOT/IAT slot:    0x4B9F60
// Slot symbol:     off_4B9F60
// Target type:     <no type info>
// ============================================================

void .jvalue_t_clear(/* see target signature */)
{
    // Tail-call to jvalue_t_clear via GOT/IAT indirection
    return jvalue_t_clear(/* forwarded args */);
}

