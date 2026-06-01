// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABDC0
// Name:            .get_idp_descs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABDC0 jmp     cs:off_2C7B6C8
//
// Resolved target: get_idp_descs
// Target address:  0x39C6C0
// GOT/IAT slot:    0x2C7B6C8
// Slot symbol:     off_2C7B6C8
// Target type:     <no type info>
// ============================================================

void .get_idp_descs(/* see target signature */)
{
    // Tail-call to get_idp_descs via GOT/IAT indirection
    return get_idp_descs(/* forwarded args */);
}

