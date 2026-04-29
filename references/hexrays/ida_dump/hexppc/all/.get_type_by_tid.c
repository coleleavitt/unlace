// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C240
// Name:            .get_type_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C240 jmp     cs:off_4DB108
//
// Resolved target: get_type_by_tid
// Target address:  0x4DDB48
// GOT/IAT slot:    0x4DB108
// Slot symbol:     off_4DB108
// Target type:     <no type info>
// ============================================================

void .get_type_by_tid(/* see target signature */)
{
    // Tail-call to get_type_by_tid via GOT/IAT indirection
    return get_type_by_tid(/* forwarded args */);
}

