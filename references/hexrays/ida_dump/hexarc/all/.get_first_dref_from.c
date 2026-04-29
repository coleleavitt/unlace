// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B10
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B10 jmp     cs:off_4B9570
//
// Resolved target: get_first_dref_from
// Target address:  0x4BBF60
// GOT/IAT slot:    0x4B9570
// Slot symbol:     off_4B9570
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}

