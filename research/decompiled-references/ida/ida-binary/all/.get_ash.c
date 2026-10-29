// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111ED0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111ED0 jmp     cs:get_ash_ptr
//
// Resolved target: get_ash
// Target address:  0x8D3A08
// GOT/IAT slot:    0x89FC08
// Slot symbol:     get_ash_ptr
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

