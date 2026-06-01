// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118C60
// Name:            .get_idp_descs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118C60 jmp     cs:get_idp_descs_ptr
//
// Resolved target: get_idp_descs
// Target address:  0x8D7F80
// GOT/IAT slot:    0x8A32D0
// Slot symbol:     get_idp_descs_ptr
// Target type:     <no type info>
// ============================================================

void .get_idp_descs(/* see target signature */)
{
    // Tail-call to get_idp_descs via GOT/IAT indirection
    return get_idp_descs(/* forwarded args */);
}

