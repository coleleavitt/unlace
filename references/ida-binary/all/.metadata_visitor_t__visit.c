// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ACB0
// Name:            .metadata_visitor_t__visit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ACB0 jmp     cs:metadata_visitor_t__visit_ptr
//
// Resolved target: metadata_visitor_t__visit
// Target address:  0x8D9438
// GOT/IAT slot:    0x8A42F8
// Slot symbol:     metadata_visitor_t__visit_ptr
// Target type:     <no type info>
// ============================================================

void .metadata_visitor_t__visit(/* see target signature */)
{
    // Tail-call to metadata_visitor_t__visit via GOT/IAT indirection
    return metadata_visitor_t__visit(/* forwarded args */);
}

