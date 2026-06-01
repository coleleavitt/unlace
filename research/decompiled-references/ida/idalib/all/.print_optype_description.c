// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A99C0
// Name:            .print_optype_description
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A99C0 jmp     cs:off_2C7A4C8
//
// Resolved target: print_optype_description
// Target address:  0x5A0B60
// GOT/IAT slot:    0x2C7A4C8
// Slot symbol:     off_2C7A4C8
// Target type:     __int64 __fastcall(int, int, int, int)
// ============================================================

/* see target sig */ .print_optype_description(/* see target signature */)
{
    // Tail-call to print_optype_description via GOT/IAT indirection
    return print_optype_description(/* forwarded args */);
}

