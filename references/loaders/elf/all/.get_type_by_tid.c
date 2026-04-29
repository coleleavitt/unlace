// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9B10
// Name:            .get_type_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9B10 jmp     cs:off_89570
//
// Resolved target: get_type_by_tid
// Target address:  0x8C8A8
// GOT/IAT slot:    0x89570
// Slot symbol:     off_89570
// Target type:     <no type info>
// ============================================================

void .get_type_by_tid(/* see target signature */)
{
    // Tail-call to get_type_by_tid via GOT/IAT indirection
    return get_type_by_tid(/* forwarded args */);
}

