// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E2B0
// Name:            .get_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E2B0 jmp     cs:off_4E9940
//
// Resolved target: get_custom_refinfo
// Target address:  0x4EC360
// GOT/IAT slot:    0x4E9940
// Slot symbol:     off_4E9940
// Target type:     <no type info>
// ============================================================

void .get_custom_refinfo(/* see target signature */)
{
    // Tail-call to get_custom_refinfo via GOT/IAT indirection
    return get_custom_refinfo(/* forwarded args */);
}

