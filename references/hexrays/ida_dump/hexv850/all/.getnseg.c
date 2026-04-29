// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDB0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDB0 jmp     cs:off_4C0EC0
//
// Resolved target: getnseg
// Target address:  0x4C3EE8
// GOT/IAT slot:    0x4C0EC0
// Slot symbol:     off_4C0EC0
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

