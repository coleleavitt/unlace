// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B520
// Name:            .del_debug_names
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B520 jmp     cs:del_debug_names_ptr
//
// Resolved target: del_debug_names
// Target address:  0x8D9988
// GOT/IAT slot:    0x8A4730
// Slot symbol:     del_debug_names_ptr
// Target type:     <no type info>
// ============================================================

void .del_debug_names(/* see target signature */)
{
    // Tail-call to del_debug_names via GOT/IAT indirection
    return del_debug_names(/* forwarded args */);
}

