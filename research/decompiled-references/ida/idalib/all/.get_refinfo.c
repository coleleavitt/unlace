// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC190
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC190 jmp     cs:off_2C7B8B0
//
// Resolved target: get_refinfo
// Target address:  0x4E2270
// GOT/IAT slot:    0x2C7B8B0
// Slot symbol:     off_2C7B8B0
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

