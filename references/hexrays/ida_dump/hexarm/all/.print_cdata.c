// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DF40
// Name:            .print_cdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DF40 jmp     cs:off_4E9788
//
// Resolved target: print_cdata
// Target address:  0x4EC1A0
// GOT/IAT slot:    0x4E9788
// Slot symbol:     off_4E9788
// Target type:     <no type info>
// ============================================================

void .print_cdata(/* see target signature */)
{
    // Tail-call to print_cdata via GOT/IAT indirection
    return print_cdata(/* forwarded args */);
}

