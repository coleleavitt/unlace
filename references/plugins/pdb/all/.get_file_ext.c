// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC40
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC40 jmp     cs:off_B3608
//
// Resolved target: get_file_ext
// Target address:  0xB3DE0
// GOT/IAT slot:    0xB3608
// Slot symbol:     off_B3608
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

