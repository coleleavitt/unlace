__int64 __fastcall sub_819F50(unsigned int *a1, __int64 *a2)
{
  unsigned int *v2; // rdx
  __int64 v4; // rax
  unsigned int *v5; // r10
  int v6; // r9d
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // edx
  __int64 result; // rax

  v2 = a1 + 19;
  v4 = 2LL * a1[8];
  v5 = &a1[v4 + 19];
  if ( v4 * 4 )
  {
    v6 = 0;
    v7 = *a2;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v10 = *v2;
        v11 = *(_DWORD *)(v7 + 4LL * (v2[1] >> 1));
        if ( (v2[1] & 1) != 0 )
          v11 = -*(_DWORD *)(v7 + 4LL * (v2[1] >> 1));
        if ( v11 )
          break;
        v2 += 2;
        v6 += v10;
        if ( v5 == v2 )
          goto LABEL_10;
      }
      v9 = v8 + v10;
      if ( v11 == 1 )
        v8 = v9;
      v2 += 2;
    }
    while ( v5 != v2 );
LABEL_10:
    v12 = a1[15];
    result = 0xFFFFFFFFLL;
    if ( v8 + v6 >= v12 )
      return v8 >= v12;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( !a1[15] )
      return 1;
  }
  return result;
}

