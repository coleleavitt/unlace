// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A780
// Name:            .print_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A780 jmp     cs:print_refinfo_ptr
//
// Resolved target: print_refinfo
// Target address:  0x8D9100
// GOT/IAT slot:    0x8A4060
// Slot symbol:     print_refinfo_ptr
// Target type:     <no type info>
// ============================================================

void .print_refinfo(/* see target signature */)
{
    // Tail-call to print_refinfo via GOT/IAT indirection
    return print_refinfo(/* forwarded args */);
}

