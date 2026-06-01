// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118C20
// Name:            .get_refinfo_descs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118C20 jmp     cs:get_refinfo_descs_ptr
//
// Resolved target: get_refinfo_descs
// Target address:  0x8D7F58
// GOT/IAT slot:    0x8A32B0
// Slot symbol:     get_refinfo_descs_ptr
// Target type:     <no type info>
// ============================================================

void .get_refinfo_descs(/* see target signature */)
{
    // Tail-call to get_refinfo_descs via GOT/IAT indirection
    return get_refinfo_descs(/* forwarded args */);
}

