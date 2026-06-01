__int64 __fastcall sub_1EAB440(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 result; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rdi
  int i; // eax
  __int64 v15; // rdi
  __int64 v16; // r9

  v2 = *(_DWORD *)(a1 + 3880);
  v3 = *(_QWORD *)(a1 + 3864);
  if ( v2 )
  {
    v4 = v2 - 1;
    v5 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = *(_QWORD *)(v3 + 24LL * v5);
    result = 1;
    if ( a2 == v6 )
      return result;
    v8 = 1;
    if ( v6 != -4096 )
    {
      do
      {
        v5 = v4 & (v8 + v5);
        v16 = *(_QWORD *)(v3 + 24LL * v5);
        if ( a2 == v16 )
          return 1;
        ++v8;
      }
      while ( v16 != -4096 );
    }
  }
  v9 = *(_DWORD *)(a1 + 3856);
  v10 = *(_QWORD *)(a1 + 3840);
  if ( !v9 )
    return 0;
  v11 = v9 - 1;
  v12 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v13 = *(_QWORD *)(v10 + 24LL * v12);
  result = 1;
  if ( a2 != v13 )
  {
    result = 0;
    if ( v13 != -4096 )
    {
      for ( i = 1; ; ++i )
      {
        v12 = v11 & (i + v12);
        v15 = *(_QWORD *)(v10 + 24LL * v12);
        if ( a2 == v15 )
          break;
        if ( v15 == -4096 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}
