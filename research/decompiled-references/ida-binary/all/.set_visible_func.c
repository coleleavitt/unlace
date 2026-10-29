// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118D00
// Name:            .set_visible_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118D00 jmp     cs:set_visible_func_ptr
//
// Resolved target: set_visible_func
// Target address:  0x8D7FD8
// GOT/IAT slot:    0x8A3320
// Slot symbol:     set_visible_func_ptr
// Target type:     <no type info>
// ============================================================

void .set_visible_func(/* see target signature */)
{
    // Tail-call to set_visible_func via GOT/IAT indirection
    return set_visible_func(/* forwarded args */);
}

