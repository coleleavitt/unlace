// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D430
// Name:            .set_idc_getattr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D430 jmp     cs:off_4E9200
//
// Resolved target: set_idc_getattr
// Target address:  0x4EBBF0
// GOT/IAT slot:    0x4E9200
// Slot symbol:     off_4E9200
// Target type:     <no type info>
// ============================================================

void .set_idc_getattr(/* see target signature */)
{
    // Tail-call to set_idc_getattr via GOT/IAT indirection
    return set_idc_getattr(/* forwarded args */);
}

