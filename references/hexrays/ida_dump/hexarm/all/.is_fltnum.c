// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E1B0
// Name:            .is_fltnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E1B0 jmp     cs:off_4E98C0
//
// Resolved target: is_fltnum
// Target address:  0x4EC2E0
// GOT/IAT slot:    0x4E98C0
// Slot symbol:     off_4E98C0
// Target type:     <no type info>
// ============================================================

void .is_fltnum(/* see target signature */)
{
    // Tail-call to is_fltnum via GOT/IAT indirection
    return is_fltnum(/* forwarded args */);
}

