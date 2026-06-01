// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8170
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8170 jmp     cs:off_2C798A0
//
// Resolved target: get_named_type_tid
// Target address:  0x6BB3A0
// GOT/IAT slot:    0x2C798A0
// Slot symbol:     off_2C798A0
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

