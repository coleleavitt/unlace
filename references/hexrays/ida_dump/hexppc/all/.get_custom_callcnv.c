// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEF0
// Name:            .get_custom_callcnv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEF0 jmp     cs:off_4DAF60
//
// Resolved target: get_custom_callcnv
// Target address:  0x4DD990
// GOT/IAT slot:    0x4DAF60
// Slot symbol:     off_4DAF60
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnv(/* see target signature */)
{
    // Tail-call to get_custom_callcnv via GOT/IAT indirection
    return get_custom_callcnv(/* forwarded args */);
}

