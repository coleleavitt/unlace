// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC70
// Name:            .qsem_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC70 jmp     cs:off_2C7AE20
//
// Resolved target: qsem_wait
// Target address:  0x842820
// GOT/IAT slot:    0x2C7AE20
// Slot symbol:     off_2C7AE20
// Target type:     <no type info>
// ============================================================

void .qsem_wait(/* see target signature */)
{
    // Tail-call to qsem_wait via GOT/IAT indirection
    return qsem_wait(/* forwarded args */);
}

