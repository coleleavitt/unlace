// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F210
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F210 jmp     cs:off_4EA0F0
//
// Resolved target: get_file_ext
// Target address:  0x4ECB48
// GOT/IAT slot:    0x4EA0F0
// Slot symbol:     off_4EA0F0
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

