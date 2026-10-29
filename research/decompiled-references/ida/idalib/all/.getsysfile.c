// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B60
// Name:            .getsysfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B60 jmp     cs:off_2C79D98
//
// Resolved target: getsysfile
// Target address:  0x834E70
// GOT/IAT slot:    0x2C79D98
// Slot symbol:     off_2C79D98
// Target type:     <no type info>
// ============================================================

void .getsysfile(/* see target signature */)
{
    // Tail-call to getsysfile via GOT/IAT indirection
    return getsysfile(/* forwarded args */);
}

