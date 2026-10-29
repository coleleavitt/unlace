// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A77E0
// Name:            .qsem_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A77E0 jmp     cs:off_2C793D8
//
// Resolved target: qsem_create
// Target address:  0x8423C0
// GOT/IAT slot:    0x2C793D8
// Slot symbol:     off_2C793D8
// Target type:     __int64 __fastcall(void *src, unsigned int value)
// ============================================================

/* see target sig */ .qsem_create(/* see target signature */)
{
    // Tail-call to qsem_create via GOT/IAT indirection
    return qsem_create(/* forwarded args */);
}

