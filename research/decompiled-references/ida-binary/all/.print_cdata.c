// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB10
// Name:            .print_cdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB10 jmp     cs:print_cdata_ptr
//
// Resolved target: print_cdata
// Target address:  0x8D9330
// GOT/IAT slot:    0x8A4228
// Slot symbol:     print_cdata_ptr
// Target type:     <no type info>
// ============================================================

void .print_cdata(/* see target signature */)
{
    // Tail-call to print_cdata via GOT/IAT indirection
    return print_cdata(/* forwarded args */);
}

