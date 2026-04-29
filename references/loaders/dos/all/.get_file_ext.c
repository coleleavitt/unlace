// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2670
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2670 jmp     cs:off_B320
//
// Resolved target: get_file_ext
// Target address:  0xB7D8
// GOT/IAT slot:    0xB320
// Slot symbol:     off_B320
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

