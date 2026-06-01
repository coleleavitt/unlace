// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA30
// Name:            .is_uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA30 jmp     cs:off_2C7B500
//
// Resolved target: is_uname
// Target address:  0x4CDB50
// GOT/IAT slot:    0x2C7B500
// Slot symbol:     off_2C7B500
// Target type:     <no type info>
// ============================================================

void .is_uname(/* see target signature */)
{
    // Tail-call to is_uname via GOT/IAT indirection
    return is_uname(/* forwarded args */);
}

