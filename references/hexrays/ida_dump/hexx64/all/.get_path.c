// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CAE0
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CAE0 jmp     cs:off_4EDD58
//
// Resolved target: get_path
// Target address:  0x4F2098
// GOT/IAT slot:    0x4EDD58
// Slot symbol:     off_4EDD58
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

