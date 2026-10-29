// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8370
// Name:            .idt_get_by_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8370 jmp     cs:off_2C799A0
//
// Resolved target: idt_get_by_ordinal
// Target address:  0x61DB20
// GOT/IAT slot:    0x2C799A0
// Slot symbol:     off_2C799A0
// Target type:     <no type info>
// ============================================================

void .idt_get_by_ordinal(/* see target signature */)
{
    // Tail-call to idt_get_by_ordinal via GOT/IAT indirection
    return idt_get_by_ordinal(/* forwarded args */);
}

