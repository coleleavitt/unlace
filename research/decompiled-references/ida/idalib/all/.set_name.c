// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADAE0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADAE0 jmp     cs:off_2C7C558
//
// Resolved target: set_name
// Target address:  0x4D8B40
// GOT/IAT slot:    0x2C7C558
// Slot symbol:     off_2C7C558
// Target type:     __int64 __fastcall(int, void *src)
// ============================================================

/* see target sig */ .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

