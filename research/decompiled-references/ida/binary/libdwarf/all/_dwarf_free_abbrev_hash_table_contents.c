void __fastcall dwarf_free_abbrev_hash_table_contents(__int64 a1, int a2)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  void *v6; // rdi

  if ( a1 )
  {
    v3 = *(_QWORD **)(a1 + 24);
    if ( v3 )
    {
      if ( !a2 )
      {
        v4 = 0;
        do
        {
          v5 = v3[v4];
          if ( v5 )
          {
            do
            {
              free(*(void **)(v5 + 72));
              free(*(void **)(v5 + 80));
              free(*(void **)(v5 + 88));
              v6 = (void *)v5;
              v5 = *(_QWORD *)(v5 + 32);
              free(v6);
            }
            while ( v5 );
            v3 = *(_QWORD **)(a1 + 24);
          }
          ++v4;
        }
        while ( *(_QWORD *)(a1 + 16) >= v4 );
      }
      free(v3);
      *(_QWORD *)(a1 + 24) = 0;
    }
  }
}

