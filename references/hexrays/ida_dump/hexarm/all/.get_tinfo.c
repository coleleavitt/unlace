// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF70
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF70 jmp     cs:off_4E9FA0
//
// Resolved target: get_tinfo
// Target address:  0x4EC9F0
// GOT/IAT slot:    0x4E9FA0
// Slot symbol:     off_4E9FA0
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

