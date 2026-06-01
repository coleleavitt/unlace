// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8300
// Name:            .append_disp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8300 jmp     cs:off_2C79968
//
// Resolved target: append_disp
// Target address:  0x50CE30
// GOT/IAT slot:    0x2C79968
// Slot symbol:     off_2C79968
// Target type:     <no type info>
// ============================================================

void .append_disp(/* see target signature */)
{
    // Tail-call to append_disp via GOT/IAT indirection
    return append_disp(/* forwarded args */);
}

