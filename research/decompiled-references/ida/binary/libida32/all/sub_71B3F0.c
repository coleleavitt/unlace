__int64 __fastcall sub_71B3F0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int32 v7; // esi
  char *v8; // rax
  int v9; // esi
  int v10; // edx

  v7 = *(_DWORD *)(a1 + 32);
  if ( !v7 )
    return 0;
  while ( a2 != v7 )
  {
    v8 = sub_7188E0(*(__m128i **)(a1 + 8), v7, 0, a4, a5, a6);
    if ( !v8 )
      return 0;
    v9 = *(_DWORD *)v8;
    if ( (unsigned int)((*(_DWORD *)a1 >> 2) - 4) < *(_DWORD *)v8 )
      return 0;
    if ( v9 )
    {
      v10 = 0;
      do
      {
        a4 = v10;
        if ( a2 == *(_DWORD *)&v8[4 * v10 + 8] )
          return 1;
      }
      while ( ++v10 != v9 );
    }
    v7 = *((_DWORD *)v8 + 1);
    if ( !v7 )
      return 0;
  }
  return 1;
}

