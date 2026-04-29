// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97B0
// Name:            .auto_apply_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97B0 jmp     cs:off_2E3C0
//
// Resolved target: auto_apply_type
// Target address:  0x2EA40
// GOT/IAT slot:    0x2E3C0
// Slot symbol:     off_2E3C0
// Target type:     <no type info>
// ============================================================

void .auto_apply_type(/* see target signature */)
{
    // Tail-call to auto_apply_type via GOT/IAT indirection
    return auto_apply_type(/* forwarded args */);
}

