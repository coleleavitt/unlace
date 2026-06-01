// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C10
// Name:            .get_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C10 jmp     cs:off_2C7A5F0
//
// Resolved target: get_numbered_type
// Target address:  0x64DED0
// GOT/IAT slot:    0x2C7A5F0
// Slot symbol:     off_2C7A5F0
// Target type:     <no type info>
// ============================================================

void .get_numbered_type(/* see target signature */)
{
    // Tail-call to get_numbered_type via GOT/IAT indirection
    return get_numbered_type(/* forwarded args */);
}

