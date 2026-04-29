// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F280
// Name:            .get_type_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F280 jmp     cs:off_4EA128
//
// Resolved target: get_type_by_tid
// Target address:  0x4ECB88
// GOT/IAT slot:    0x4EA128
// Slot symbol:     off_4EA128
// Target type:     <no type info>
// ============================================================

void .get_type_by_tid(/* see target signature */)
{
    // Tail-call to get_type_by_tid via GOT/IAT indirection
    return get_type_by_tid(/* forwarded args */);
}

