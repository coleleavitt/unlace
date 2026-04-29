// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F010
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F010 jmp     cs:off_4E9FF0
//
// Resolved target: get_flags_by_size
// Target address:  0x4ECA40
// GOT/IAT slot:    0x4E9FF0
// Slot symbol:     off_4E9FF0
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

