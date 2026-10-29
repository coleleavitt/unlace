// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7FF0
// Name:            .b2a32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7FF0 jmp     cs:off_2C797E0
//
// Resolved target: b2a32
// Target address:  0x588520
// GOT/IAT slot:    0x2C797E0
// Slot symbol:     off_2C797E0
// Target type:     __int64 __fastcall(void *s)
// ============================================================

/* see target sig */ .b2a32(/* see target signature */)
{
    // Tail-call to b2a32 via GOT/IAT indirection
    return b2a32(/* forwarded args */);
}

