// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8D87D8
// Name:     has_external_refs
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to has_external_refs are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void has_external_refs(/* see import library declaration */);

