void __fastcall sub_49DA0(__int64 *ptr)
{
  __int64 v2; // r12
  void **v3; // rbx
  unsigned __int64 v4; // rbp
  void *v5; // rdi
  void *v6; // rdi
  int v7; // edi

  if ( ptr )
  {
    v2 = *ptr;
    if ( *(_DWORD *)(*ptr + 20) )
    {
      v7 = *(_DWORD *)(v2 + 16);
      if ( v7 != -1 )
      {
        _dwarf_closer(v7);
        *(_DWORD *)(v2 + 16) = -1;
      }
    }
    free(*(void **)(v2 + 8));
    v3 = *(void ***)(v2 + 696);
    *(_QWORD *)(v2 + 8) = 0;
    if ( v3 )
    {
      if ( *(_QWORD *)(v2 + 688) )
      {
        v4 = 0;
        do
        {
          v5 = v3[12];
          if ( v5 )
          {
            free(v5);
            v3[12] = nullptr;
          }
          v6 = *v3;
          ++v4;
          v3 += 14;
          free(v6);
          *(v3 - 14) = nullptr;
          free(*(v3 - 13));
          *(v3 - 13) = nullptr;
        }
        while ( v4 < *(_QWORD *)(v2 + 688) );
        v3 = *(void ***)(v2 + 696);
      }
      free(v3);
    }
    free(*(void **)(v2 + 712));
    free((void *)v2);
    free(ptr);
  }
}

