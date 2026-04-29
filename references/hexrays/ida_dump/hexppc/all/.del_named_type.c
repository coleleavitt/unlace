// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFF0
// Name:            .del_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFF0 jmp     cs:off_4DAFE0
//
// Resolved target: del_named_type
// Target address:  0x4DDA10
// GOT/IAT slot:    0x4DAFE0
// Slot symbol:     off_4DAFE0
// Target type:     <no type info>
// ============================================================

void .del_named_type(/* see target signature */)
{
    // Tail-call to del_named_type via GOT/IAT indirection
    return del_named_type(/* forwarded args */);
}

