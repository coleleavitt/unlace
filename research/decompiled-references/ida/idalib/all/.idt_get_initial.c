// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD1C0
// Name:            .idt_get_initial
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD1C0 jmp     cs:off_2C7C0C8
//
// Resolved target: idt_get_initial
// Target address:  0x61DB00
// GOT/IAT slot:    0x2C7C0C8
// Slot symbol:     off_2C7C0C8
// Target type:     <no type info>
// ============================================================

void .idt_get_initial(/* see target signature */)
{
    // Tail-call to idt_get_initial via GOT/IAT indirection
    return idt_get_initial(/* forwarded args */);
}

