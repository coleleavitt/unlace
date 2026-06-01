// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8DE0
// Name:            .del_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8DE0 jmp     cs:off_2C79ED8
//
// Resolved target: del_cref
// Target address:  0x3E2E50
// GOT/IAT slot:    0x2C79ED8
// Slot symbol:     off_2C79ED8
// Target type:     <no type info>
// ============================================================

void .del_cref(/* see target signature */)
{
    // Tail-call to del_cref via GOT/IAT indirection
    return del_cref(/* forwarded args */);
}

