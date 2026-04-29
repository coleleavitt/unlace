// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C250
// Name:            .get_type_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C250 jmp     cs:off_4CE110
//
// Resolved target: get_type_by_tid
// Target address:  0x4D0B70
// GOT/IAT slot:    0x4CE110
// Slot symbol:     off_4CE110
// Target type:     <no type info>
// ============================================================

void .get_type_by_tid(/* see target signature */)
{
    // Tail-call to get_type_by_tid via GOT/IAT indirection
    return get_type_by_tid(/* forwarded args */);
}

