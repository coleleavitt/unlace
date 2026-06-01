// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C00
// Name:            .get_physical_core_count
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C00 jmp     cs:off_2C7A5E8
//
// Resolved target: get_physical_core_count
// Target address:  0x841760
// GOT/IAT slot:    0x2C7A5E8
// Slot symbol:     off_2C7A5E8
// Target type:     <no type info>
// ============================================================

void .get_physical_core_count(/* see target signature */)
{
    // Tail-call to get_physical_core_count via GOT/IAT indirection
    return get_physical_core_count(/* forwarded args */);
}

