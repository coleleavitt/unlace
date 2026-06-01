// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB970
// Name:            .del_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB970 jmp     cs:off_2C7B4A0
//
// Resolved target: del_numbered_type
// Target address:  0x6515E0
// GOT/IAT slot:    0x2C7B4A0
// Slot symbol:     off_2C7B4A0
// Target type:     <no type info>
// ============================================================

void .del_numbered_type(/* see target signature */)
{
    // Tail-call to del_numbered_type via GOT/IAT indirection
    return del_numbered_type(/* forwarded args */);
}

