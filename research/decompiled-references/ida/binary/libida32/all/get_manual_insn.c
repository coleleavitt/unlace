__int64 __fastcall get_manual_insn(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax

  if ( (get_aflags(a2) & 0x20) == 0 )
    return -1;
  v2 = ea2node(a2);
  return netnode_qgetblob(v2, a1, 1, 0x2000, 1107);
}

