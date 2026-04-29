// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF00
// Name:            .get_custom_callcnv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF00 jmp     cs:off_4C0F68
//
// Resolved target: get_custom_callcnv
// Target address:  0x4C3F90
// GOT/IAT slot:    0x4C0F68
// Slot symbol:     off_4C0F68
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnv(/* see target signature */)
{
    // Tail-call to get_custom_callcnv via GOT/IAT indirection
    return get_custom_callcnv(/* forwarded args */);
}

