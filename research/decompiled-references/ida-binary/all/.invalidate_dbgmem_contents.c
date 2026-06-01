// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118CA0
// Name:            .invalidate_dbgmem_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118CA0 jmp     cs:invalidate_dbgmem_contents_ptr
//
// Resolved target: invalidate_dbgmem_contents
// Target address:  0x8D7FA0
// GOT/IAT slot:    0x8A32F0
// Slot symbol:     invalidate_dbgmem_contents_ptr
// Target type:     <no type info>
// ============================================================

void .invalidate_dbgmem_contents(/* see target signature */)
{
    // Tail-call to invalidate_dbgmem_contents via GOT/IAT indirection
    return invalidate_dbgmem_contents(/* forwarded args */);
}

