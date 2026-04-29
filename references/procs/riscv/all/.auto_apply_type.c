// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA820
// Name:            .auto_apply_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA820 jmp     cs:off_353F8
//
// Resolved target: auto_apply_type
// Target address:  0x35A58
// GOT/IAT slot:    0x353F8
// Slot symbol:     off_353F8
// Target type:     <no type info>
// ============================================================

void .auto_apply_type(/* see target signature */)
{
    // Tail-call to auto_apply_type via GOT/IAT indirection
    return auto_apply_type(/* forwarded args */);
}

