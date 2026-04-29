// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAA0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAA0 jmp     cs:off_4DAD38
//
// Resolved target: get_refinfo
// Target address:  0x4DD758
// GOT/IAT slot:    0x4DAD38
// Slot symbol:     off_4DAD38
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

