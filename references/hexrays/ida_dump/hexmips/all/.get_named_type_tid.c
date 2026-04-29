// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC10
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC10 jmp     cs:off_4CDDF0
//
// Resolved target: get_named_type_tid
// Target address:  0x4D0830
// GOT/IAT slot:    0x4CDDF0
// Slot symbol:     off_4CDDF0
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

