// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A73D0
// Name:            .idt_format_error
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A73D0 jmp     cs:off_2C791D0
//
// Resolved target: idt_format_error
// Target address:  0x61E5B0
// GOT/IAT slot:    0x2C791D0
// Slot symbol:     off_2C791D0
// Target type:     <no type info>
// ============================================================

void .idt_format_error(/* see target signature */)
{
    // Tail-call to idt_format_error via GOT/IAT indirection
    return idt_format_error(/* forwarded args */);
}

