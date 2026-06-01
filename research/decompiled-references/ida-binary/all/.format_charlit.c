// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119800
// Name:            .format_charlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119800 jmp     cs:format_charlit_ptr
//
// Resolved target: format_charlit
// Target address:  0x8D8718
// GOT/IAT slot:    0x8A38A0
// Slot symbol:     format_charlit_ptr
// Target type:     <no type info>
// ============================================================

void .format_charlit(/* see target signature */)
{
    // Tail-call to format_charlit via GOT/IAT indirection
    return format_charlit(/* forwarded args */);
}

