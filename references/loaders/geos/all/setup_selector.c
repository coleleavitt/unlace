// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8260
// Name:     setup_selector
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to setup_selector are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void setup_selector(/* see import library declaration */);

