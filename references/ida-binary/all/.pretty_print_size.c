// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC40
// Name:            .pretty_print_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC40 jmp     cs:pretty_print_size_ptr
//
// Resolved target: pretty_print_size
// Target address:  0x8D93E8
// GOT/IAT slot:    0x8A42C0
// Slot symbol:     pretty_print_size_ptr
// Target type:     <no type info>
// ============================================================

void .pretty_print_size(/* see target signature */)
{
    // Tail-call to pretty_print_size via GOT/IAT indirection
    return pretty_print_size(/* forwarded args */);
}

