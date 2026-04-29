// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF20
// Name:            .print_cdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF20 jmp     cs:off_4DA778
//
// Resolved target: print_cdata
// Target address:  0x4DD170
// GOT/IAT slot:    0x4DA778
// Slot symbol:     off_4DA778
// Target type:     <no type info>
// ============================================================

void .print_cdata(/* see target signature */)
{
    // Tail-call to print_cdata via GOT/IAT indirection
    return print_cdata(/* forwarded args */);
}

