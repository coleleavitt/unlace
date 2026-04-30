// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112120
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112120 jmp     cs:get_errdesc_ptr
//
// Resolved target: get_errdesc
// Target address:  0x8D3B78
// GOT/IAT slot:    0x89FD30
// Slot symbol:     get_errdesc_ptr
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

