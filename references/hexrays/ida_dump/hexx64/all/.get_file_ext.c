// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D350
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D350 jmp     cs:off_4EE190
//
// Resolved target: get_file_ext
// Target address:  0x4F24E8
// GOT/IAT slot:    0x4EE190
// Slot symbol:     off_4EE190
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

