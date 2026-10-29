void __fastcall sub_4CF080(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // rbp
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // r8d
  unsigned int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // r9d
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // r8

  v3 = *(_DWORD **)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 32);
  v6 = *v3 + 1;
  if ( v6 < v5 )
  {
    v7 = *(_DWORD *)(a1 + 36);
    v8 = 1;
    v9 = 8LL * v6;
    if ( v7 != 1 && v3[1] == v6 )
      goto LABEL_8;
    while ( 1 )
    {
      v10 = *a2;
      v11 = v6++;
      *(_QWORD *)(*a2 + 8LL * (v11 - v8)) = *(_QWORD *)(*a2 + v9);
      if ( v6 >= v5 )
        break;
      if ( v7 == v8 )
      {
        v12 = v6;
        v13 = v6 - v8;
        v14 = 8 * v12;
        do
        {
          v15 = *(_QWORD *)(v10 + v14);
          v16 = v13++;
          v14 += 8;
          *(_QWORD *)(v10 + 8 * v16) = v15;
        }
        while ( v8 + v13 < v5 );
        break;
      }
      while ( 1 )
      {
        v9 += 8;
        if ( v7 == v8 || v3[v8] != v6 )
          break;
LABEL_8:
        ++v6;
        ++v8;
        if ( v6 >= v5 )
          goto LABEL_12;
      }
    }
  }
LABEL_12:
  sub_4CED80(a2, *(_DWORD *)(a1 + 40));
}

