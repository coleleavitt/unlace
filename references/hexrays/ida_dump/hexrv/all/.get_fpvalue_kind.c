// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B270
// Name:            .get_fpvalue_kind
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B270 jmp     cs:off_4BF920
//
// Resolved target: get_fpvalue_kind
// Target address:  0x4C2E18
// GOT/IAT slot:    0x4BF920
// Slot symbol:     off_4BF920
// Target type:     <no type info>
// ============================================================

void .get_fpvalue_kind(/* see target signature */)
{
    // Tail-call to get_fpvalue_kind via GOT/IAT indirection
    return get_fpvalue_kind(/* forwarded args */);
}

