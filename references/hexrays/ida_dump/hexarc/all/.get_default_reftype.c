// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A210
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A210 jmp     cs:off_4B98F0
//
// Resolved target: get_default_reftype
// Target address:  0x4BC2F0
// GOT/IAT slot:    0x4B98F0
// Slot symbol:     off_4B98F0
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

