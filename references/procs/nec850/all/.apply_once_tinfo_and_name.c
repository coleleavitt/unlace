// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9460
// Name:            .apply_once_tinfo_and_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9460 jmp     cs:off_2E218
//
// Resolved target: apply_once_tinfo_and_name
// Target address:  0x2E888
// GOT/IAT slot:    0x2E218
// Slot symbol:     off_2E218
// Target type:     <no type info>
// ============================================================

void .apply_once_tinfo_and_name(/* see target signature */)
{
    // Tail-call to apply_once_tinfo_and_name via GOT/IAT indirection
    return apply_once_tinfo_and_name(/* forwarded args */);
}

