// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111FA0
// Name:            .append_struct_fields
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111FA0 jmp     cs:append_struct_fields_ptr
//
// Resolved target: append_struct_fields
// Target address:  0x8D3A80
// GOT/IAT slot:    0x89FC70
// Slot symbol:     append_struct_fields_ptr
// Target type:     <no type info>
// ============================================================

void .append_struct_fields(/* see target signature */)
{
    // Tail-call to append_struct_fields via GOT/IAT indirection
    return append_struct_fields(/* forwarded args */);
}

