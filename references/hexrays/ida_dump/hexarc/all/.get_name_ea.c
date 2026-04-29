// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB70
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB70 jmp     cs:off_4B9DA0
//
// Resolved target: get_name_ea
// Target address:  0x4BC7C0
// GOT/IAT slot:    0x4B9DA0
// Slot symbol:     off_4B9DA0
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

