// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AED0
// Name:            .get_custom_callcnv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AED0 jmp     cs:off_4B9F50
//
// Resolved target: get_custom_callcnv
// Target address:  0x4BC980
// GOT/IAT slot:    0x4B9F50
// Slot symbol:     off_4B9F50
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnv(/* see target signature */)
{
    // Tail-call to get_custom_callcnv via GOT/IAT indirection
    return get_custom_callcnv(/* forwarded args */);
}

