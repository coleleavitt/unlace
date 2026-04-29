// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA80
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA80 jmp     cs:off_4B9D28
//
// Resolved target: get_refinfo
// Target address:  0x4BC748
// GOT/IAT slot:    0x4B9D28
// Slot symbol:     off_4B9D28
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

