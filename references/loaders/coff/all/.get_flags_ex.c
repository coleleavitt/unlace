// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4110
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4110 jmp     cs:off_23070
//
// Resolved target: get_flags_ex
// Target address:  0x23490
// GOT/IAT slot:    0x23070
// Slot symbol:     off_23070
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

