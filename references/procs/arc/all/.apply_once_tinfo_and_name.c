// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8410
// Name:            .apply_once_tinfo_and_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8410 jmp     cs:off_2A1F0
//
// Resolved target: apply_once_tinfo_and_name
// Target address:  0x2BC00
// GOT/IAT slot:    0x2A1F0
// Slot symbol:     off_2A1F0
// Target type:     <no type info>
// ============================================================

void .apply_once_tinfo_and_name(/* see target signature */)
{
    // Tail-call to apply_once_tinfo_and_name via GOT/IAT indirection
    return apply_once_tinfo_and_name(/* forwarded args */);
}

