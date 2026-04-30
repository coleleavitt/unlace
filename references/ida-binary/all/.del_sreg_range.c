// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117ED0
// Name:            .del_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117ED0 jmp     cs:del_sreg_range_ptr
//
// Resolved target: del_sreg_range
// Target address:  0x8D7760
// GOT/IAT slot:    0x8A2C08
// Slot symbol:     del_sreg_range_ptr
// Target type:     <no type info>
// ============================================================

void .del_sreg_range(/* see target signature */)
{
    // Tail-call to del_sreg_range via GOT/IAT indirection
    return del_sreg_range(/* forwarded args */);
}

