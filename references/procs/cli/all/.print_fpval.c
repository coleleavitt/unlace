// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3180
// Name:            .print_fpval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3180 jmp     cs:off_1A0A8
//
// Resolved target: print_fpval
// Target address:  0x1A360
// GOT/IAT slot:    0x1A0A8
// Slot symbol:     off_1A0A8
// Target type:     <no type info>
// ============================================================

void .print_fpval(/* see target signature */)
{
    // Tail-call to print_fpval via GOT/IAT indirection
    return print_fpval(/* forwarded args */);
}

