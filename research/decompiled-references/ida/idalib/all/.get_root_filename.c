// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9290
// Name:            .get_root_filename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9290 jmp     cs:off_2C7A130
//
// Resolved target: get_root_filename
// Target address:  0x593E00
// GOT/IAT slot:    0x2C7A130
// Slot symbol:     off_2C7A130
// Target type:     __int64 __fastcall(char *s)
// ============================================================

/* see target sig */ .get_root_filename(/* see target signature */)
{
    // Tail-call to get_root_filename via GOT/IAT indirection
    return get_root_filename(/* forwarded args */);
}

