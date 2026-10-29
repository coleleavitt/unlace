__int64 __fastcall sub_9AC170(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rsi
  _QWORD *v10; // rsi
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rbp
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 i; // rdx
  unsigned int v21; // edx
  unsigned __int64 v22; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    result = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)result )
      return result;
    v4 = *(unsigned int *)(a1 + 16);
    v5 = *(_QWORD **)a1;
    v6 = v4;
    v7 = 2 * v4;
    if ( v6 > 0x40 )
    {
      result = operator delete(v5, v7 * 8, 8);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      return result;
    }
    goto LABEL_10;
  }
  v8 = 4 * v1;
  v9 = *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD **)a1;
  if ( (unsigned int)(4 * v1) < 0x40 )
    v8 = 64;
  if ( (unsigned int)v9 <= v8 )
  {
    v7 = 2 * v9;
LABEL_10:
    v10 = &v5[v7];
    for ( result = -4096; v10 != v5; v5 += 2 )
      *v5 = -4096;
    *(_QWORD *)(a1 + 8) = 0;
    return result;
  }
  v11 = v1 - 1;
  if ( v11 )
  {
    _BitScanReverse(&v11, v11);
    v12 = 1 << (33 - (v11 ^ 0x1F));
    if ( v12 < 64 )
      v12 = 64;
    if ( (_DWORD)v9 == v12 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      result = (__int64)&v5[2 * (unsigned int)v9];
      do
      {
        *v5 = -4096;
        v5 += 2;
      }
      while ( (_QWORD *)result != v5 );
      return result;
    }
    v21 = 4 * v12 / 3u;
    v22 = (((v21 + 1) | ((unsigned __int64)(v21 + 1) >> 1) | (((v21 + 1) | ((unsigned __int64)(v21 + 1) >> 1)) >> 2)) >> 4)
        | (v21 + 1)
        | ((unsigned __int64)(v21 + 1) >> 1)
        | (((v21 + 1) | ((unsigned __int64)(v21 + 1) >> 1)) >> 2)
        | (((((v21 + 1) | ((unsigned __int64)(v21 + 1) >> 1) | (((v21 + 1) | ((unsigned __int64)(v21 + 1) >> 1)) >> 2)) >> 4)
          | (v21 + 1)
          | ((unsigned __int64)(v21 + 1) >> 1)
          | (((v21 + 1) | ((unsigned __int64)(v21 + 1) >> 1)) >> 2)) >> 8);
    v14 = (v22 | (v22 >> 16)) + 1;
    v13 = 16 * ((v22 | (v22 >> 16)) + 1);
  }
  else
  {
    v13 = 2048;
    v14 = 128;
  }
  operator delete(v5, 16 * v9, 8);
  *(_DWORD *)(a1 + 16) = v14;
  result = sub_22300B0(v13, 8, v15, v16, v17, v18);
  v19 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = result;
  for ( i = result + 16 * v19; i != result; result += 16 )
    *(_QWORD *)result = -4096;
  return result;
}
