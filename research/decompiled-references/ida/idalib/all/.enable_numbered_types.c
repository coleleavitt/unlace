// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB750
// Name:            .enable_numbered_types
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB750 jmp     cs:off_2C7B390
//
// Resolved target: enable_numbered_types
// Target address:  0x65D530
// GOT/IAT slot:    0x2C7B390
// Slot symbol:     off_2C7B390
// Target type:     <no type info>
// ============================================================

void .enable_numbered_types(/* see target signature */)
{
    // Tail-call to enable_numbered_types via GOT/IAT indirection
    return enable_numbered_types(/* forwarded args */);
}

