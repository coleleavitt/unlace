// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114740
// Name:            .describe_tlc_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114740 jmp     cs:describe_tlc_ordinal_ptr
//
// Resolved target: describe_tlc_ordinal
// Target address:  0x8D53F8
// GOT/IAT slot:    0x8A1040
// Slot symbol:     describe_tlc_ordinal_ptr
// Target type:     <no type info>
// ============================================================

void .describe_tlc_ordinal(/* see target signature */)
{
    // Tail-call to describe_tlc_ordinal via GOT/IAT indirection
    return describe_tlc_ordinal(/* forwarded args */);
}

