// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC00
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC00 jmp     cs:off_4BFDE8
//
// Resolved target: get_named_type_tid
// Target address:  0x4C3300
// GOT/IAT slot:    0x4BFDE8
// Slot symbol:     off_4BFDE8
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

