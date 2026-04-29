// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C7F0
// Name:            .get_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C7F0 jmp     cs:off_4EDBE0
//
// Resolved target: get_numbered_type
// Target address:  0x4F1F10
// GOT/IAT slot:    0x4EDBE0
// Slot symbol:     off_4EDBE0
// Target type:     <no type info>
// ============================================================

void .get_numbered_type(/* see target signature */)
{
    // Tail-call to get_numbered_type via GOT/IAT indirection
    return get_numbered_type(/* forwarded args */);
}

