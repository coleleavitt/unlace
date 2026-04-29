// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF30
// Name:            .get_custom_callcnv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF30 jmp     cs:off_4E9F80
//
// Resolved target: get_custom_callcnv
// Target address:  0x4EC9D0
// GOT/IAT slot:    0x4E9F80
// Slot symbol:     off_4E9F80
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnv(/* see target signature */)
{
    // Tail-call to get_custom_callcnv via GOT/IAT indirection
    return get_custom_callcnv(/* forwarded args */);
}

