// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116700
// Name:            .set_dbgmem_source
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116700 jmp     cs:set_dbgmem_source_ptr
//
// Resolved target: set_dbgmem_source
// Target address:  0x8D6820
// GOT/IAT slot:    0x8A2020
// Slot symbol:     set_dbgmem_source_ptr
// Target type:     <no type info>
// ============================================================

void .set_dbgmem_source(/* see target signature */)
{
    // Tail-call to set_dbgmem_source via GOT/IAT indirection
    return set_dbgmem_source(/* forwarded args */);
}

