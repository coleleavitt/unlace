// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF90
// Name:            .print_cdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF90 jmp     cs:off_4ED7B0
//
// Resolved target: print_cdata
// Target address:  0x4F1AC0
// GOT/IAT slot:    0x4ED7B0
// Slot symbol:     off_4ED7B0
// Target type:     <no type info>
// ============================================================

void .print_cdata(/* see target signature */)
{
    // Tail-call to print_cdata via GOT/IAT indirection
    return print_cdata(/* forwarded args */);
}

