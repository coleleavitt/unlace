// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA870
// Name:            .enable_numbered_types
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA870 jmp     cs:off_CA420
//
// Resolved target: enable_numbered_types
// Target address:  0xD0D58
// GOT/IAT slot:    0xCA420
// Slot symbol:     off_CA420
// Target type:     <no type info>
// ============================================================

void .enable_numbered_types(/* see target signature */)
{
    // Tail-call to enable_numbered_types via GOT/IAT indirection
    return enable_numbered_types(/* forwarded args */);
}

