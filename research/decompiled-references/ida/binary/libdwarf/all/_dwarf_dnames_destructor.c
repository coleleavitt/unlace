void __fastcall dwarf_dnames_destructor(__int64 a1)
{
  void *v2; // rdi

  if ( a1 )
  {
    if ( *(_QWORD *)a1 == 43981 )
    {
      free(*(void **)(a1 + 160));
      v2 = *(void **)(a1 + 120);
      *(_QWORD *)(a1 + 160) = 0;
      free(v2);
      *(_QWORD *)(a1 + 120) = 0;
      free(*(void **)(a1 + 312));
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
    }
  }
}

