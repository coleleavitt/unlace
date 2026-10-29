void __fastcall dwarf_free_gnu_index_head_content(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  void *v4; // rdi

  if ( a1 )
  {
    v2 = *(_QWORD **)(a1 + 32);
    if ( v2 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v3 = 0;
        do
        {
          v4 = (void *)v2[13];
          if ( v4 )
          {
            free(v4);
            v2[13] = 0;
          }
          v2[12] = 0;
          ++v3;
          v2 += 14;
        }
        while ( v3 < *(_QWORD *)(a1 + 40) );
        v2 = *(_QWORD **)(a1 + 32);
      }
      free(v2);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
}

