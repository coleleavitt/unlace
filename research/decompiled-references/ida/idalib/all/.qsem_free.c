// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A70B0
// Name:            .qsem_free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A70B0 jmp     cs:off_2C79040
//
// Resolved target: qsem_free
// Target address:  0x842510
// GOT/IAT slot:    0x2C79040
// Slot symbol:     off_2C79040
// Target type:     __int64 __fastcall(void *)
// ============================================================

/* see target sig */ .qsem_free(/* see target signature */)
{
    // Tail-call to qsem_free via GOT/IAT indirection
    return qsem_free(/* forwarded args */);
}

