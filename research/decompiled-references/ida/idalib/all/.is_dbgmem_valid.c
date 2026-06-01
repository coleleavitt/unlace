// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB7C0
// Name:            .is_dbgmem_valid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB7C0 jmp     cs:off_2C7B3C8
//
// Resolved target: is_dbgmem_valid
// Target address:  0x3FC550
// GOT/IAT slot:    0x2C7B3C8
// Slot symbol:     off_2C7B3C8
// Target type:     <no type info>
// ============================================================

void .is_dbgmem_valid(/* see target signature */)
{
    // Tail-call to is_dbgmem_valid via GOT/IAT indirection
    return is_dbgmem_valid(/* forwarded args */);
}

