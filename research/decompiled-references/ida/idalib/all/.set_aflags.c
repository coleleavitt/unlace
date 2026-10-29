// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A85E0
// Name:            .set_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A85E0 jmp     cs:off_2C79AD8
//
// Resolved target: set_aflags
// Target address:  0x3D0BC0
// GOT/IAT slot:    0x2C79AD8
// Slot symbol:     off_2C79AD8
// Target type:     <no type info>
// ============================================================

void .set_aflags(/* see target signature */)
{
    // Tail-call to set_aflags via GOT/IAT indirection
    return set_aflags(/* forwarded args */);
}

