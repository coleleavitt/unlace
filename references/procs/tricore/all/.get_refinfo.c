// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66A0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66A0 jmp     cs:off_24338
//
// Resolved target: get_refinfo
// Target address:  0x26118
// GOT/IAT slot:    0x24338
// Slot symbol:     off_24338
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

