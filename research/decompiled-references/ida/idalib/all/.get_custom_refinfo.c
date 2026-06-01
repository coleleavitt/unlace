// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C60
// Name:            .get_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C60 jmp     cs:off_2C79618
//
// Resolved target: get_custom_refinfo
// Target address:  0x41B530
// GOT/IAT slot:    0x2C79618
// Slot symbol:     off_2C79618
// Target type:     <no type info>
// ============================================================

void .get_custom_refinfo(/* see target signature */)
{
    // Tail-call to get_custom_refinfo via GOT/IAT indirection
    return get_custom_refinfo(/* forwarded args */);
}

