__int64 __fastcall sub_B912C0(__int64 a1)
{
  __int64 v1; // r12
  __int64 *v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __m128 v12[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 9) &= ~2u;
  if ( *(_DWORD *)v1 >> 1 )
  {
    if ( (*(_BYTE *)v1 & 1) != 0 )
    {
      v2 = (__int64 *)(v1 + 8);
      v3 = 8;
    }
    else
    {
      v2 = *(__int64 **)(v1 + 8);
      v3 = 2LL * *(unsigned int *)(v1 + 16);
    }
    sub_ACC7B0(v12, v2, &v2[v3], v1, 0);
    v5 = v12[0].m128_u64[1];
    v4 = (_QWORD *)v12[0].m128_u64[0];
  }
  else
  {
    if ( (*(_BYTE *)v1 & 1) != 0 )
    {
      v10 = v1 + 8;
      v11 = 64;
    }
    else
    {
      v10 = *(_QWORD *)(v1 + 8);
      v11 = 16LL * *(unsigned int *)(v1 + 16);
    }
    sub_ACC7B0(v12, (__int64 *)(v11 + v10), (__int64 *)(v11 + v10), v1, 1);
    v5 = v12[0].m128_u64[1];
    v4 = (_QWORD *)v12[0].m128_u64[0];
  }
  if ( (*(_BYTE *)v1 & 1) != 0 )
  {
    v6 = v1 + 8;
    v7 = 64;
  }
  else
  {
    v6 = *(_QWORD *)(v1 + 8);
    v7 = 16LL * *(unsigned int *)(v1 + 16);
  }
  result = sub_ACC7B0(v12, (__int64 *)(v6 + v7), (__int64 *)(v6 + v7), v1, 1);
  v9 = v12[0].m128_u64[0];
  while ( (_QWORD *)v9 != v4 )
  {
    result = (__int64)(v4 + 2);
    v4[1] |= 2uLL;
    if ( v4 + 2 != (_QWORD *)v5 )
    {
      if ( v4[2] < 0xFFFFFFFFFFFFFFFELL )
      {
        v4 += 2;
        continue;
      }
      result = (__int64)(v4 + 4);
      while ( 1 )
      {
        v4 = (_QWORD *)result;
        if ( result == v5 )
          break;
        result += 16;
        if ( *v4 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_14;
      }
    }
    v4 = (_QWORD *)v5;
LABEL_14:
    ;
  }
  return result;
}
