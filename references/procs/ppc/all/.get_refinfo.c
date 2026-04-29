// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C30
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C30 jmp     cs:off_95600
//
// Resolved target: get_refinfo
// Target address:  0x96048
// GOT/IAT slot:    0x95600
// Slot symbol:     off_95600
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

