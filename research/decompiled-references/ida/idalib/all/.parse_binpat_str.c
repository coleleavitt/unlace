// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD430
// Name:            .parse_binpat_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD430 jmp     cs:off_2C7C200
//
// Resolved target: parse_binpat_str
// Target address:  0x67C630
// GOT/IAT slot:    0x2C7C200
// Slot symbol:     off_2C7C200
// Target type:     __int64 __fastcall(int, int, int, int, int, __int64)
// ============================================================

/* see target sig */ .parse_binpat_str(/* see target signature */)
{
    // Tail-call to parse_binpat_str via GOT/IAT indirection
    return parse_binpat_str(/* forwarded args */);
}

