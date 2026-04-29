// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D690
// Name:            .get_tid_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D690 jmp     cs:off_4E9330
//
// Resolved target: get_tid_name
// Target address:  0x4EBD20
// GOT/IAT slot:    0x4E9330
// Slot symbol:     off_4E9330
// Target type:     <no type info>
// ============================================================

void .get_tid_name(/* see target signature */)
{
    // Tail-call to get_tid_name via GOT/IAT indirection
    return get_tid_name(/* forwarded args */);
}

