// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119170
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119170 jmp     cs:get_refinfo_ptr
//
// Resolved target: get_refinfo
// Target address:  0x8D82B0
// GOT/IAT slot:    0x8A3558
// Slot symbol:     get_refinfo_ptr
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

