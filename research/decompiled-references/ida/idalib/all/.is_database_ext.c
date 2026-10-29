// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F90
// Name:            .is_database_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F90 jmp     cs:off_2C79FB0
//
// Resolved target: is_database_ext
// Target address:  0x593EB0
// GOT/IAT slot:    0x2C79FB0
// Slot symbol:     off_2C79FB0
// Target type:     __int64 __fastcall(char *s1)
// ============================================================

/* see target sig */ .is_database_ext(/* see target signature */)
{
    // Tail-call to is_database_ext via GOT/IAT indirection
    return is_database_ext(/* forwarded args */);
}

