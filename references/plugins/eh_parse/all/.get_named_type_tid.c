// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6860
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6860 jmp     cs:off_2F418
//
// Resolved target: get_named_type_tid
// Target address:  0x2FA98
// GOT/IAT slot:    0x2F418
// Slot symbol:     off_2F418
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

