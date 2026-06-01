// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD4B0
// Name:            .del_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD4B0 jmp     cs:off_2C7C240
//
// Resolved target: del_dref
// Target address:  0x4120F0
// GOT/IAT slot:    0x2C7C240
// Slot symbol:     off_2C7C240
// Target type:     <no type info>
// ============================================================

void .del_dref(/* see target signature */)
{
    // Tail-call to del_dref via GOT/IAT indirection
    return del_dref(/* forwarded args */);
}

