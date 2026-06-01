// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C50
// Name:            .find_extlang
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C50 jmp     cs:off_2C79610
//
// Resolved target: find_extlang
// Target address:  0x78A030
// GOT/IAT slot:    0x2C79610
// Slot symbol:     off_2C79610
// Target type:     __int64 __fastcall(char *s1)
// ============================================================

/* see target sig */ .find_extlang(/* see target signature */)
{
    // Tail-call to find_extlang via GOT/IAT indirection
    return find_extlang(/* forwarded args */);
}

