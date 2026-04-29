// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D360
// Name:            .set_qerrno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D360 jmp     cs:off_4E9198
//
// Resolved target: set_qerrno
// Target address:  0x4EBB88
// GOT/IAT slot:    0x4E9198
// Slot symbol:     off_4E9198
// Target type:     <no type info>
// ============================================================

void .set_qerrno(/* see target signature */)
{
    // Tail-call to set_qerrno via GOT/IAT indirection
    return set_qerrno(/* forwarded args */);
}

