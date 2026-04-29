// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD80
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD80 jmp     cs:off_4B9EA8
//
// Resolved target: getnseg
// Target address:  0x4BC8D8
// GOT/IAT slot:    0x4B9EA8
// Slot symbol:     off_4B9EA8
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

