void __fastcall dwarf_free_chain_entries(Dwarf_Debug a1, void **a2, __int64 a3)
{
  __int64 v4; // rbp
  Dwarf_Unsigned v6; // rdx
  void **v7; // r14

  if ( a3 )
  {
    v4 = 0;
    while ( 1 )
    {
      v6 = *((int *)a2 + 2);
      if ( *a2 )
      {
        if ( (_DWORD)v6 )
        {
          dwarf_dealloc(a1, *a2, v6);
          *a2 = nullptr;
        }
      }
      ++v4;
      v7 = (void **)a2[2];
      dwarf_dealloc(a1, a2, 0x1Fu);
      if ( a3 == v4 )
        break;
      a2 = v7;
    }
  }
}

