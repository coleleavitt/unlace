// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E240
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E240 jmp     cs:off_4E9908
//
// Resolved target: get_default_reftype
// Target address:  0x4EC328
// GOT/IAT slot:    0x4E9908
// Slot symbol:     off_4E9908
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

