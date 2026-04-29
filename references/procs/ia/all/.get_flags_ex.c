// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7090
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7090 jmp     cs:off_26030
//
// Resolved target: get_flags_ex
// Target address:  0x262E8
// GOT/IAT slot:    0x26030
// Slot symbol:     off_26030
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

