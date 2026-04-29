// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F20
// Name:            .print_cdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F20 jmp     cs:off_4B9778
//
// Resolved target: print_cdata
// Target address:  0x4BC170
// GOT/IAT slot:    0x4B9778
// Slot symbol:     off_4B9778
// Target type:     <no type info>
// ============================================================

void .print_cdata(/* see target signature */)
{
    // Tail-call to print_cdata via GOT/IAT indirection
    return print_cdata(/* forwarded args */);
}

