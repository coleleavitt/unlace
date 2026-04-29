// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3C0
// Name:            .get_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3C0 jmp     cs:off_4ED1C8
//
// Resolved target: get_merge_handler
// Target address:  0x4F14C0
// GOT/IAT slot:    0x4ED1C8
// Slot symbol:     off_4ED1C8
// Target type:     <no type info>
// ============================================================

void .get_merge_handler(/* see target signature */)
{
    // Tail-call to get_merge_handler via GOT/IAT indirection
    return get_merge_handler(/* forwarded args */);
}

