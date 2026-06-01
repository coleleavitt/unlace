// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB20
// Name:            .set_dbg_pointer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB20 jmp     cs:off_2C7AD78
//
// Resolved target: set_dbg_pointer
// Target address:  0x3FBFD0
// GOT/IAT slot:    0x2C7AD78
// Slot symbol:     off_2C7AD78
// Target type:     <no type info>
// ============================================================

void .set_dbg_pointer(/* see target signature */)
{
    // Tail-call to set_dbg_pointer via GOT/IAT indirection
    return set_dbg_pointer(/* forwarded args */);
}

