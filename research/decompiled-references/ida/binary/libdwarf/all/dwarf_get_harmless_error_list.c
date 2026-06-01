__int64 __fastcall dwarf_get_harmless_error_list(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v4; // r8
  int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r10
  bool v11; // r9

  v4 = a3;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 10792) )
  {
    *(_DWORD *)(a1 + 10788) = 0;
    return 0xFFFFFFFFLL;
  }
  v5 = *(_DWORD *)(a1 + 10788);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  if ( a4 )
    *a4 = v5;
  if ( a2 )
  {
    v6 = (unsigned int)(a2 - 1);
    a3[v6] = 0;
    v7 = a2 - 1;
    v8 = *(_DWORD *)(a1 + 10784);
    if ( *(_DWORD *)(a1 + 10780) != v8 )
    {
      if ( (_DWORD)v6 )
      {
        v9 = 1;
        do
        {
          v10 = v9;
          v4[v9 - 1] = *(_QWORD *)(*(_QWORD *)(a1 + 10792) + 8LL * v8);
          v8 = (v8 + 1) % *(_DWORD *)(a1 + 10776);
          v11 = (unsigned int)v9++ >= v7;
        }
        while ( !v11 && *(_DWORD *)(a1 + 10780) != v8 );
        v4 += v10;
      }
      *v4 = 0;
    }
  }
  *(_QWORD *)(a1 + 10780) = 0;
  *(_DWORD *)(a1 + 10788) = 0;
  return 0;
}

