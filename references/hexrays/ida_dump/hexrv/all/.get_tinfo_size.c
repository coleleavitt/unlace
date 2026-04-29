// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A150
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A150 jmp     cs:off_4BF090
//
// Resolved target: get_tinfo_size
// Target address:  0x4C2558
// GOT/IAT slot:    0x4BF090
// Slot symbol:     off_4BF090
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

