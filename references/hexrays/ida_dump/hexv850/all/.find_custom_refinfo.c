// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4A0
// Name:            .find_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4A0 jmp     cs:off_4C0A38
//
// Resolved target: find_custom_refinfo
// Target address:  0x4C3A30
// GOT/IAT slot:    0x4C0A38
// Slot symbol:     off_4C0A38
// Target type:     <no type info>
// ============================================================

void .find_custom_refinfo(/* see target signature */)
{
    // Tail-call to find_custom_refinfo via GOT/IAT indirection
    return find_custom_refinfo(/* forwarded args */);
}

