void __fastcall set_manual_insn(__int64 a1, const char *a2)
{
  size_t v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( a2 )
  {
    if ( *a2 )
    {
      set_abits(a1, 32);
      v2 = strlen(a2);
      v3 = ea2node((unsigned int)a1);
      netnode_setblob(v3, a2, v2 + 1, 0x2000, 83);
    }
    else if ( (get_aflags(a1) & 0x20) != 0 )
    {
      clr_abits((unsigned int)a1, 32);
      v4 = ea2node((unsigned int)a1);
      netnode_delblob(v4, 0x2000, 83);
    }
  }
}

