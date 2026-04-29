// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195D0
// Name:            .apply_once_tinfo_and_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195D0 jmp     cs:off_752D0
//
// Resolved target: apply_once_tinfo_and_name
// Target address:  0x75B20
// GOT/IAT slot:    0x752D0
// Slot symbol:     off_752D0
// Target type:     <no type info>
// ============================================================

void .apply_once_tinfo_and_name(/* see target signature */)
{
    // Tail-call to apply_once_tinfo_and_name via GOT/IAT indirection
    return apply_once_tinfo_and_name(/* forwarded args */);
}

