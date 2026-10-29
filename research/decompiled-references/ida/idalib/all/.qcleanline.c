// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE10
// Name:            .qcleanline
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE10 jmp     cs:off_2C7BEF0
//
// Resolved target: qcleanline
// Target address:  0x84EA50
// GOT/IAT slot:    0x2C7BEF0
// Slot symbol:     off_2C7BEF0
// Target type:     <no type info>
// ============================================================

void .qcleanline(/* see target signature */)
{
    // Tail-call to qcleanline via GOT/IAT indirection
    return qcleanline(/* forwarded args */);
}

