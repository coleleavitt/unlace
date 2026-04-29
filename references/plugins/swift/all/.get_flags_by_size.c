// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4810
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4810 jmp     cs:off_283F0
//
// Resolved target: get_flags_by_size
// Target address:  0x29DA8
// GOT/IAT slot:    0x283F0
// Slot symbol:     off_283F0
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

