// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F30
// Name:            .get_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F30 jmp     cs:off_4B9780
//
// Resolved target: get_numbered_type_name
// Target address:  0x4BC178
// GOT/IAT slot:    0x4B9780
// Slot symbol:     off_4B9780
// Target type:     <no type info>
// ============================================================

void .get_numbered_type_name(/* see target signature */)
{
    // Tail-call to get_numbered_type_name via GOT/IAT indirection
    return get_numbered_type_name(/* forwarded args */);
}

