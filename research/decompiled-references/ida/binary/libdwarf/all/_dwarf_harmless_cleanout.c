void __fastcall dwarf_harmless_cleanout(__int64 a1)
{
  void **v2; // rdi
  __int64 v3; // rbx

  v2 = *(void ***)(a1 + 16);
  if ( v2 )
  {
    if ( *(_DWORD *)a1 )
    {
      v3 = 0;
      do
      {
        free(v2[v3]);
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v3++) = 0;
        v2 = *(void ***)(a1 + 16);
      }
      while ( (unsigned int)v3 < *(_DWORD *)a1 );
    }
    free(v2);
    *(_QWORD *)(a1 + 16) = 0;
    *(_DWORD *)a1 = 0;
  }
}

