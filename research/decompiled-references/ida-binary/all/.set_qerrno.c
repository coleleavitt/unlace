// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150D0
// Name:            .set_qerrno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150D0 jmp     cs:set_qerrno_ptr
//
// Resolved target: set_qerrno
// Target address:  0x8D5A40
// GOT/IAT slot:    0x8A1508
// Slot symbol:     set_qerrno_ptr
// Target type:     <no type info>
// ============================================================

void .set_qerrno(/* see target signature */)
{
    // Tail-call to set_qerrno via GOT/IAT indirection
    return set_qerrno(/* forwarded args */);
}

