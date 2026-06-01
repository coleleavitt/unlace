// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7130
// Name:            .qcontrol_tty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7130 jmp     cs:off_2C79080
//
// Resolved target: qcontrol_tty
// Target address:  0x8422D0
// GOT/IAT slot:    0x2C79080
// Slot symbol:     off_2C79080
// Target type:     <no type info>
// ============================================================

void .qcontrol_tty(/* see target signature */)
{
    // Tail-call to qcontrol_tty via GOT/IAT indirection
    return qcontrol_tty(/* forwarded args */);
}

