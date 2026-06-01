// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112320
// Name:            .get_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112320 jmp     cs:get_custom_refinfo_ptr
//
// Resolved target: get_custom_refinfo
// Target address:  0x8D3CC8
// GOT/IAT slot:    0x89FE30
// Slot symbol:     get_custom_refinfo_ptr
// Target type:     <no type info>
// ============================================================

void .get_custom_refinfo(/* see target signature */)
{
    // Tail-call to get_custom_refinfo via GOT/IAT indirection
    return get_custom_refinfo(/* forwarded args */);
}

