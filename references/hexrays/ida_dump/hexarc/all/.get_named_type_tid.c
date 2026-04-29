// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE0
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE0 jmp     cs:off_4B9DD8
//
// Resolved target: get_named_type_tid
// Target address:  0x4BC7F8
// GOT/IAT slot:    0x4B9DD8
// Slot symbol:     off_4B9DD8
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

