// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E2A0
// Name:            .get_fpvalue_kind
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E2A0 jmp     cs:off_4E9938
//
// Resolved target: get_fpvalue_kind
// Target address:  0x4EC358
// GOT/IAT slot:    0x4E9938
// Slot symbol:     off_4E9938
// Target type:     <no type info>
// ============================================================

void .get_fpvalue_kind(/* see target signature */)
{
    // Tail-call to get_fpvalue_kind via GOT/IAT indirection
    return get_fpvalue_kind(/* forwarded args */);
}

