// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7FE0
// Name:            .find_srclang_parser
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7FE0 jmp     cs:off_2C797D8
//
// Resolved target: find_srclang_parser
// Target address:  0x729560
// GOT/IAT slot:    0x2C797D8
// Slot symbol:     off_2C797D8
// Target type:     __int64 __fastcall(char *s2)
// ============================================================

/* see target sig */ .find_srclang_parser(/* see target signature */)
{
    // Tail-call to find_srclang_parser via GOT/IAT indirection
    return find_srclang_parser(/* forwarded args */);
}

