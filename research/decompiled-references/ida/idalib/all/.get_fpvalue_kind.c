// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACFA0
// Name:            .get_fpvalue_kind
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACFA0 jmp     cs:off_2C7BFB8
//
// Resolved target: get_fpvalue_kind
// Target address:  0x8325D0
// GOT/IAT slot:    0x2C7BFB8
// Slot symbol:     off_2C7BFB8
// Target type:     <no type info>
// ============================================================

void .get_fpvalue_kind(/* see target signature */)
{
    // Tail-call to get_fpvalue_kind via GOT/IAT indirection
    return get_fpvalue_kind(/* forwarded args */);
}

