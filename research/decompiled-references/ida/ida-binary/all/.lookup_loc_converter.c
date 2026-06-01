// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1153A0
// Name:            .lookup_loc_converter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1153A0 jmp     cs:lookup_loc_converter_ptr
//
// Resolved target: lookup_loc_converter
// Target address:  0x8D5C20
// GOT/IAT slot:    0x8A1670
// Slot symbol:     lookup_loc_converter_ptr
// Target type:     <no type info>
// ============================================================

void .lookup_loc_converter(/* see target signature */)
{
    // Tail-call to lookup_loc_converter via GOT/IAT indirection
    return lookup_loc_converter(/* forwarded args */);
}

