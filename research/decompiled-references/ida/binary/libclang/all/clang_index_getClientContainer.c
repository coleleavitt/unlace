__int64 __fastcall clang_index_getClientContainer(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // r8
  int v4; // esi
  unsigned int v5; // ecx
  __int64 *v6; // rdx
  __int64 v7; // rdi
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rsi
  __int64 v11; // rdi

  if ( !a1 )
    return 0;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 40);
  v1 = v10;
  if ( v10 )
  {
    v2 = *(_DWORD *)(v11 + 88);
    v3 = *(_QWORD *)(v11 + 72);
    if ( v2 )
    {
      v4 = v2 - 1;
      v5 = (v2 - 1) & (((unsigned int)v1 >> 9) ^ ((unsigned int)v1 >> 4));
      v6 = (__int64 *)(v3 + 16LL * v5);
      v7 = *v6;
      if ( v1 == *v6 )
        return v6[1];
      v8 = 1;
      while ( v7 != -4096 )
      {
        v9 = v8 + 1;
        v5 = v4 & (v8 + v5);
        v6 = (__int64 *)(v3 + 16LL * v5);
        v7 = *v6;
        if ( v1 == *v6 )
          return v6[1];
        v8 = v9;
      }
    }
  }
  return 0;
}

