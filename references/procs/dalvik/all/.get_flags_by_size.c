// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5540
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5540 jmp     cs:off_1A288
//
// Resolved target: get_flags_by_size
// Target address:  0x1A628
// GOT/IAT slot:    0x1A288
// Slot symbol:     off_1A288
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

