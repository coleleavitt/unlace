// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9E0
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9E0 jmp     cs:off_4DACD8
//
// Resolved target: get_path
// Target address:  0x4DD6F8
// GOT/IAT slot:    0x4DACD8
// Slot symbol:     off_4DACD8
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

