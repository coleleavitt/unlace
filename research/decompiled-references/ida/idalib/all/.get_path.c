// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9670
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9670 jmp     cs:off_2C7A320
//
// Resolved target: get_path
// Target address:  0x591200
// GOT/IAT slot:    0x2C7A320
// Slot symbol:     off_2C7A320
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

