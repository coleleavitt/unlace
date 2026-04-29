// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E4E0
// Name:            .find_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E4E0 jmp     cs:off_4E9A58
//
// Resolved target: find_custom_refinfo
// Target address:  0x4EC478
// GOT/IAT slot:    0x4E9A58
// Slot symbol:     off_4E9A58
// Target type:     <no type info>
// ============================================================

void .find_custom_refinfo(/* see target signature */)
{
    // Tail-call to find_custom_refinfo via GOT/IAT indirection
    return find_custom_refinfo(/* forwarded args */);
}

