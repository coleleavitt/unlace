// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9E0
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9E0 jmp     cs:off_4BFCD8
//
// Resolved target: get_path
// Target address:  0x4C31F0
// GOT/IAT slot:    0x4BFCD8
// Slot symbol:     off_4BFCD8
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

