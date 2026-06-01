// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B50
// Name:            .get_custom_callcnvs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B50 jmp     cs:get_custom_callcnvs_ptr
//
// Resolved target: get_custom_callcnvs
// Target address:  0x8D41F8
// GOT/IAT slot:    0x8A0248
// Slot symbol:     get_custom_callcnvs_ptr
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnvs(/* see target signature */)
{
    // Tail-call to get_custom_callcnvs via GOT/IAT indirection
    return get_custom_callcnvs(/* forwarded args */);
}

