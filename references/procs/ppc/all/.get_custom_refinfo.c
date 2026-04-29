// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20930
// Name:            .get_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20930 jmp     cs:off_95480
//
// Resolved target: get_custom_refinfo
// Target address:  0x95EB8
// GOT/IAT slot:    0x95480
// Slot symbol:     off_95480
// Target type:     <no type info>
// ============================================================

void .get_custom_refinfo(/* see target signature */)
{
    // Tail-call to get_custom_refinfo via GOT/IAT indirection
    return get_custom_refinfo(/* forwarded args */);
}

