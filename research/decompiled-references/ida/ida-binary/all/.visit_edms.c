// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110C0
// Name:            .visit_edms
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110C0 jmp     cs:visit_edms_ptr
//
// Resolved target: visit_edms
// Target address:  0x8D30F8
// GOT/IAT slot:    0x89F500
// Slot symbol:     visit_edms_ptr
// Target type:     <no type info>
// ============================================================

void .visit_edms(/* see target signature */)
{
    // Tail-call to visit_edms via GOT/IAT indirection
    return visit_edms(/* forwarded args */);
}

