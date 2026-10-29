// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8970
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8970 jmp     cs:off_2C79CA0
//
// Resolved target: get_tinfo_size
// Target address:  0x53F2E0
// GOT/IAT slot:    0x2C79CA0
// Slot symbol:     off_2C79CA0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

