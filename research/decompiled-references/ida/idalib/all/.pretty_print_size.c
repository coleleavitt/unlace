// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD1B0
// Name:            .pretty_print_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD1B0 jmp     cs:off_2C7C0C0
//
// Resolved target: pretty_print_size
// Target address:  0x83CD40
// GOT/IAT slot:    0x2C7C0C0
// Slot symbol:     off_2C7C0C0
// Target type:     <no type info>
// ============================================================

void .pretty_print_size(/* see target signature */)
{
    // Tail-call to pretty_print_size via GOT/IAT indirection
    return pretty_print_size(/* forwarded args */);
}

