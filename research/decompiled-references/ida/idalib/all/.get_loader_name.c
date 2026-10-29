// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF70
// Name:            .get_loader_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF70 jmp     cs:off_2C7BFA0
//
// Resolved target: get_loader_name
// Target address:  0x641F50
// GOT/IAT slot:    0x2C7BFA0
// Slot symbol:     off_2C7BFA0
// Target type:     __int64 __fastcall(char *s)
// ============================================================

/* see target sig */ .get_loader_name(/* see target signature */)
{
    // Tail-call to get_loader_name via GOT/IAT indirection
    return get_loader_name(/* forwarded args */);
}

