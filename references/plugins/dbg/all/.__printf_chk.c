// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3030
// Name:            .__printf_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3030 jmp     cs:off_13000
//
// Resolved target: __printf_chk
// Target address:  0x13378
// GOT/IAT slot:    0x13000
// Slot symbol:     off_13000
// Target type:     <no type info>
// ============================================================

void .__printf_chk(/* see target signature */)
{
    // Tail-call to __printf_chk via GOT/IAT indirection
    return __printf_chk(/* forwarded args */);
}

