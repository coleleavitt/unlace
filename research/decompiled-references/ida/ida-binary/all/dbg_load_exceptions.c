// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8D6458
// Name:     dbg_load_exceptions
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to dbg_load_exceptions are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void dbg_load_exceptions(/* see import library declaration */);

