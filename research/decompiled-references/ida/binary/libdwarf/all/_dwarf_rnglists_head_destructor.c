void __fastcall dwarf_rnglists_head_destructor(__int64 a1)
{
  unsigned __int64 v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 48);
      free(v3);
    }
    while ( v2 );
    *(_QWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      do
      {
        v4 = *(void **)(*(_QWORD *)a1 + 8 * v2++);
        free(v4);
      }
      while ( v2 < *(_QWORD *)(a1 + 24) );
    }
    free(*(void **)a1);
    *(_QWORD *)a1 = 0;
  }
}

