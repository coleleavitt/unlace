// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9730
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9730 jmp     cs:off_2C7A380
//
// Resolved target: get_file_ext
// Target address:  0x8355A0
// GOT/IAT slot:    0x2C7A380
// Slot symbol:     off_2C7A380
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

