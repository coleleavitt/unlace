// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB400
// Name:            .set_registry_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB400 jmp     cs:off_2C7B1E8
//
// Resolved target: set_registry_name
// Target address:  0x851430
// GOT/IAT slot:    0x2C7B1E8
// Slot symbol:     off_2C7B1E8
// Target type:     __int64 __fastcall(char *s2)
// ============================================================

/* see target sig */ .set_registry_name(/* see target signature */)
{
    // Tail-call to set_registry_name via GOT/IAT indirection
    return set_registry_name(/* forwarded args */);
}

