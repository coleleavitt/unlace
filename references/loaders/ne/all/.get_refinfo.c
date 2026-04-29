// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2380
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2380 jmp     cs:off_B1A8
//
// Resolved target: get_refinfo
// Target address:  0xB450
// GOT/IAT slot:    0xB1A8
// Slot symbol:     off_B1A8
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

