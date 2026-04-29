// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D040
// Name:            .get_custom_callcnv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D040 jmp     cs:off_4EE008
//
// Resolved target: get_custom_callcnv
// Target address:  0x4F2358
// GOT/IAT slot:    0x4EE008
// Slot symbol:     off_4EE008
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnv(/* see target signature */)
{
    // Tail-call to get_custom_callcnv via GOT/IAT indirection
    return get_custom_callcnv(/* forwarded args */);
}

