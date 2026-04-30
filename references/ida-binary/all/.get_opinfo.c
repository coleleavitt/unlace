// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA00
// Name:            .get_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA00 jmp     cs:get_opinfo_ptr
//
// Resolved target: get_opinfo
// Target address:  0x8D9298
// GOT/IAT slot:    0x8A41A0
// Slot symbol:     get_opinfo_ptr
// Target type:     <no type info>
// ============================================================

void .get_opinfo(/* see target signature */)
{
    // Tail-call to get_opinfo via GOT/IAT indirection
    return get_opinfo(/* forwarded args */);
}

