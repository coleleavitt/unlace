// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9F0
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9F0 jmp     cs:off_4C0CE0
//
// Resolved target: get_path
// Target address:  0x4C3CF8
// GOT/IAT slot:    0x4C0CE0
// Slot symbol:     off_4C0CE0
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

