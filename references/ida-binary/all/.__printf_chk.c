// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115950
// Name:            .__printf_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115950 jmp     cs:__printf_chk_ptr
//
// Resolved target: __printf_chk
// Target address:  0x8D5F90
// GOT/IAT slot:    0x8A1948
// Slot symbol:     __printf_chk_ptr
// Target type:     <no type info>
// ============================================================

void .__printf_chk(/* see target signature */)
{
    // Tail-call to __printf_chk via GOT/IAT indirection
    return __printf_chk(/* forwarded args */);
}

