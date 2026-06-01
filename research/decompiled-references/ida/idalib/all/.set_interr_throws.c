// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACAF0
// Name:            .set_interr_throws
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACAF0 jmp     cs:off_2C7BD60
//
// Resolved target: set_interr_throws
// Target address:  0x82F360
// GOT/IAT slot:    0x2C7BD60
// Slot symbol:     off_2C7BD60
// Target type:     <no type info>
// ============================================================

void .set_interr_throws(/* see target signature */)
{
    // Tail-call to set_interr_throws via GOT/IAT indirection
    return set_interr_throws(/* forwarded args */);
}

