// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0A0
// Name:            .del_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0A0 jmp     cs:del_dref_ptr
//
// Resolved target: del_dref
// Target address:  0x8D9688
// GOT/IAT slot:    0x8A44F0
// Slot symbol:     del_dref_ptr
// Target type:     <no type info>
// ============================================================

void .del_dref(/* see target signature */)
{
    // Tail-call to del_dref via GOT/IAT indirection
    return del_dref(/* forwarded args */);
}

