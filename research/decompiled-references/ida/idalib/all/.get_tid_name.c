// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8700
// Name:            .get_tid_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8700 jmp     cs:off_2C79B68
//
// Resolved target: get_tid_name
// Target address:  0x6BB700
// GOT/IAT slot:    0x2C79B68
// Slot symbol:     off_2C79B68
// Target type:     <no type info>
// ============================================================

void .get_tid_name(/* see target signature */)
{
    // Tail-call to get_tid_name via GOT/IAT indirection
    return get_tid_name(/* forwarded args */);
}

