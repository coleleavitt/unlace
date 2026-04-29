// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F030
// Name:            .del_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F030 jmp     cs:off_4EA000
//
// Resolved target: del_named_type
// Target address:  0x4ECA50
// GOT/IAT slot:    0x4EA000
// Slot symbol:     off_4EA000
// Target type:     <no type info>
// ============================================================

void .del_named_type(/* see target signature */)
{
    // Tail-call to del_named_type via GOT/IAT indirection
    return del_named_type(/* forwarded args */);
}

