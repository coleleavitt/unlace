// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112E90
// Name:            .del_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112E90 jmp     cs:del_selector_ptr
//
// Resolved target: del_selector
// Target address:  0x8D4430
// GOT/IAT slot:    0x8A03E8
// Slot symbol:     del_selector_ptr
// Target type:     <no type info>
// ============================================================

void .del_selector(/* see target signature */)
{
    // Tail-call to del_selector via GOT/IAT indirection
    return del_selector(/* forwarded args */);
}

