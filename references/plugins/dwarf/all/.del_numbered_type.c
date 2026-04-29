// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA120
// Name:            .del_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA120 jmp     cs:off_CA078
//
// Resolved target: del_numbered_type
// Target address:  0xD0998
// GOT/IAT slot:    0xCA078
// Slot symbol:     off_CA078
// Target type:     <no type info>
// ============================================================

void .del_numbered_type(/* see target signature */)
{
    // Tail-call to del_numbered_type via GOT/IAT indirection
    return del_numbered_type(/* forwarded args */);
}

