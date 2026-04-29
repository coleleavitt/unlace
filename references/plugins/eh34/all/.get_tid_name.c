// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61B0
// Name:            .get_tid_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61B0 jmp     cs:off_8D0C0
//
// Resolved target: get_tid_name
// Target address:  0x8D640
// GOT/IAT slot:    0x8D0C0
// Slot symbol:     off_8D0C0
// Target type:     <no type info>
// ============================================================

void .get_tid_name(/* see target signature */)
{
    // Tail-call to get_tid_name via GOT/IAT indirection
    return get_tid_name(/* forwarded args */);
}

