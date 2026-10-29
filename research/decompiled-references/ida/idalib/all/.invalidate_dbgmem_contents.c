// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABDE0
// Name:            .invalidate_dbgmem_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABDE0 jmp     cs:off_2C7B6D8
//
// Resolved target: invalidate_dbgmem_contents
// Target address:  0x3FC440
// GOT/IAT slot:    0x2C7B6D8
// Slot symbol:     off_2C7B6D8
// Target type:     <no type info>
// ============================================================

void .invalidate_dbgmem_contents(/* see target signature */)
{
    // Tail-call to invalidate_dbgmem_contents via GOT/IAT indirection
    return invalidate_dbgmem_contents(/* forwarded args */);
}

