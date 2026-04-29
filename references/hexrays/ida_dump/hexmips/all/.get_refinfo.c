// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAB0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAB0 jmp     cs:off_4CDD40
//
// Resolved target: get_refinfo
// Target address:  0x4D0780
// GOT/IAT slot:    0x4CDD40
// Slot symbol:     off_4CDD40
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

