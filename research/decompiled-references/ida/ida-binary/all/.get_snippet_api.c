// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112100
// Name:            .get_snippet_api
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112100 jmp     cs:get_snippet_api_ptr
//
// Resolved target: get_snippet_api
// Target address:  0x8D3B68
// GOT/IAT slot:    0x89FD20
// Slot symbol:     get_snippet_api_ptr
// Target type:     <no type info>
// ============================================================

void .get_snippet_api(/* see target signature */)
{
    // Tail-call to get_snippet_api via GOT/IAT indirection
    return get_snippet_api(/* forwarded args */);
}

