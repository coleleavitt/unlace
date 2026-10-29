void __fastcall dwarf_dealloc_loclists_context(__int64 a1)
{
  _QWORD *v1; // r12
  unsigned __int64 v2; // rbx
  void **v3; // rbp

  v1 = *(_QWORD **)(a1 + 6648);
  if ( v1 )
  {
    if ( *(_QWORD *)(a1 + 6640) )
    {
      v2 = 0;
      do
      {
        v3 = (void **)v1[v2];
        if ( v3 )
        {
          free(v3[7]);
          free(v3);
        }
        v1[v2++] = 0;
      }
      while ( v2 < *(_QWORD *)(a1 + 6640) );
      v1 = *(_QWORD **)(a1 + 6648);
    }
    free(v1);
    *(_QWORD *)(a1 + 6648) = 0;
    *(_QWORD *)(a1 + 6640) = 0;
  }
}

