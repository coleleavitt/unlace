__int64 __fastcall sub_826990(unsigned int *a1, __int64 *a2)
{
  unsigned int *v2; // rdx
  __int64 v4; // rax
  unsigned int *v5; // r9
  __int64 v6; // r10
  int v7; // r8d
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 result; // rax

  v2 = a1 + 16;
  v4 = a1[8];
  v5 = &a1[v4 + 16];
  if ( v4 * 4 )
  {
    v6 = *a2;
    v7 = 0;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v6 + 4LL * (*v2 >> 1));
        if ( (*v2 & 1) != 0 )
          v9 = -*(_DWORD *)(v6 + 4LL * (*v2 >> 1));
        if ( !v9 )
          break;
        ++v2;
        v8 += v9 == 1;
        if ( v5 == v2 )
          goto LABEL_8;
      }
      ++v2;
      ++v7;
    }
    while ( v5 != v2 );
LABEL_8:
    v10 = v8 + v7;
  }
  else
  {
    v10 = 0;
    v8 = 0;
  }
  v11 = a1[15];
  result = 0xFFFFFFFFLL;
  if ( v10 >= v11 )
    return v8 >= v11;
  return result;
}

