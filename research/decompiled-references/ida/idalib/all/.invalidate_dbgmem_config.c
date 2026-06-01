// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF40
// Name:            .invalidate_dbgmem_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF40 jmp     cs:off_2C7BF88
//
// Resolved target: invalidate_dbgmem_config
// Target address:  0x3FC2A0
// GOT/IAT slot:    0x2C7BF88
// Slot symbol:     off_2C7BF88
// Target type:     <no type info>
// ============================================================

void .invalidate_dbgmem_config(/* see target signature */)
{
    // Tail-call to invalidate_dbgmem_config via GOT/IAT indirection
    return invalidate_dbgmem_config(/* forwarded args */);
}

