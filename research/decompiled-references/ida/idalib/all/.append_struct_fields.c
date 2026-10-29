// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A80
// Name:            .append_struct_fields
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A80 jmp     cs:off_2C79528
//
// Resolved target: append_struct_fields
// Target address:  0x4CA590
// GOT/IAT slot:    0x2C79528
// Slot symbol:     off_2C79528
// Target type:     <no type info>
// ============================================================

void .append_struct_fields(/* see target signature */)
{
    // Tail-call to append_struct_fields via GOT/IAT indirection
    return append_struct_fields(/* forwarded args */);
}

