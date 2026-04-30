// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116ED0
// Name:            .set_dbg_pointer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116ED0 jmp     cs:set_dbg_pointer_ptr
//
// Resolved target: set_dbg_pointer
// Target address:  0x8D6D10
// GOT/IAT slot:    0x8A2408
// Slot symbol:     set_dbg_pointer_ptr
// Target type:     <no type info>
// ============================================================

void .set_dbg_pointer(/* see target signature */)
{
    // Tail-call to set_dbg_pointer via GOT/IAT indirection
    return set_dbg_pointer(/* forwarded args */);
}

