// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB1B0
// Name:            .get_available_core_count
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB1B0 jmp     cs:off_2C7B0C0
//
// Resolved target: get_available_core_count
// Target address:  0x841780
// GOT/IAT slot:    0x2C7B0C0
// Slot symbol:     off_2C7B0C0
// Target type:     <no type info>
// ============================================================

void .get_available_core_count(/* see target signature */)
{
    // Tail-call to get_available_core_count via GOT/IAT indirection
    return get_available_core_count(/* forwarded args */);
}

