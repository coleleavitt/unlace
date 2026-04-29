// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A360
// Name:            .set_qerrno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A360 jmp     cs:off_4DA198
//
// Resolved target: set_qerrno
// Target address:  0x4DCB68
// GOT/IAT slot:    0x4DA198
// Slot symbol:     off_4DA198
// Target type:     <no type info>
// ============================================================

void .set_qerrno(/* see target signature */)
{
    // Tail-call to set_qerrno via GOT/IAT indirection
    return set_qerrno(/* forwarded args */);
}

