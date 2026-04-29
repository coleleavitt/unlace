// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6A0
// Name:            .get_tid_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6A0 jmp     cs:off_4ED338
//
// Resolved target: get_tid_name
// Target address:  0x4F1630
// GOT/IAT slot:    0x4ED338
// Slot symbol:     off_4ED338
// Target type:     <no type info>
// ============================================================

void .get_tid_name(/* see target signature */)
{
    // Tail-call to get_tid_name via GOT/IAT indirection
    return get_tid_name(/* forwarded args */);
}

