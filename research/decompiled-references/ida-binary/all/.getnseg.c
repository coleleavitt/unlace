// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0B0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0B0 jmp     cs:getnseg_ptr
//
// Resolved target: getnseg
// Target address:  0x8D8C90
// GOT/IAT slot:    0x8A3CF8
// Slot symbol:     getnseg_ptr
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

