// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1B0
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1B0 jmp     cs:off_4BA0C0
//
// Resolved target: get_file_ext
// Target address:  0x4BCAF8
// GOT/IAT slot:    0x4BA0C0
// Slot symbol:     off_4BA0C0
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

