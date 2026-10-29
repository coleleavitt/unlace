// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E80
// Name:            .del_sourcefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E80 jmp     cs:off_2C7A728
//
// Resolved target: del_sourcefile
// Target address:  0x3C7640
// GOT/IAT slot:    0x2C7A728
// Slot symbol:     off_2C7A728
// Target type:     <no type info>
// ============================================================

void .del_sourcefile(/* see target signature */)
{
    // Tail-call to del_sourcefile via GOT/IAT indirection
    return del_sourcefile(/* forwarded args */);
}

