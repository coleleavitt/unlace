// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6560
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6560 jmp     cs:off_1D298
//
// Resolved target: get_refinfo
// Target address:  0x1D798
// GOT/IAT slot:    0x1D298
// Slot symbol:     off_1D298
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

