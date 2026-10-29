// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA8C0
// Name:            .idt_get_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA8C0 jmp     cs:off_2C7AC48
//
// Resolved target: idt_get_next
// Target address:  0x61DB10
// GOT/IAT slot:    0x2C7AC48
// Slot symbol:     off_2C7AC48
// Target type:     <no type info>
// ============================================================

void .idt_get_next(/* see target signature */)
{
    // Tail-call to idt_get_next via GOT/IAT indirection
    return idt_get_next(/* forwarded args */);
}

