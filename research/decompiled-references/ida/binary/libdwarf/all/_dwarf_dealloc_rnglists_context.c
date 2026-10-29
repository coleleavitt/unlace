void __fastcall dwarf_dealloc_rnglists_context(_QWORD *a1)
{
  _QWORD *v1; // r13
  unsigned __int64 v2; // rbx
  void **v3; // r12

  if ( a1 )
  {
    if ( *a1 == 3959286781LL )
    {
      v1 = (_QWORD *)a1[829];
      if ( v1 )
      {
        if ( a1[828] )
        {
          v2 = 0;
          do
          {
            v3 = (void **)v1[v2];
            if ( v3 )
            {
              free(v3[9]);
              free(v3);
            }
            v1[v2++] = 0;
          }
          while ( v2 < a1[828] );
          v1 = (_QWORD *)a1[829];
        }
        free(v1);
        a1[829] = 0;
        a1[828] = 0;
      }
    }
  }
}

