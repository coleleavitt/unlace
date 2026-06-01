// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A94A0
// Name:            .idt_open
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A94A0 jmp     cs:off_2C7A238
//
// Resolved target: idt_open
// Target address:  0x621150
// GOT/IAT slot:    0x2C7A238
// Slot symbol:     off_2C7A238
// Target type:     <no type info>
// ============================================================

void .idt_open(/* see target signature */)
{
    // Tail-call to idt_open via GOT/IAT indirection
    return idt_open(/* forwarded args */);
}

