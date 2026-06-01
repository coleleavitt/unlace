__int64 __fastcall sub_7F6640(__int64 a1, __int64 *a2)
{
  __m128i v2; // xmm0
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx

  v2 = _mm_loadl_epi64((const __m128i *)a2 + 6);
  v4 = *a2;
  a2[4] = 0;
  a2[1] = v4;
  a2[2] = 0;
  *((__m128i *)a2 + 5) = _mm_unpacklo_epi64(v2, v2);
  v5 = v4;
  *(__m128i *)(a2 + 13) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)(v2.m128i_i64[0] + 56 * v4));
  if ( (unsigned int)v4 <= 1 )
  {
    v7 = 1;
  }
  else
  {
    v6 = 0;
    do
    {
      v5 >>= 1;
      ++v6;
    }
    while ( v5 != 1 );
    a2[2] = v6;
    v7 = (unsigned int)(1 << v6);
  }
  v8 = 0;
  v9 = a2[6] == 1;
  a2[3] = v4 - v7;
  if ( !v9 )
  {
    v10 = 0;
    do
    {
      ++v10;
      *(_QWORD *)(a2[8] + v8) = a2[8] + 8 * v10;
      v11 = a2[6];
      v8 += 8;
    }
    while ( v10 < v11 - 1 );
    v8 = 8 * v11 - 8;
  }
  *(_QWORD *)(a2[8] + v8) = 0;
  a2[9] = a2[8];
  v12 = *a2 - 1;
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = 56 * *a2 - 56;
    while ( 1 )
    {
      v15 = v14 + a2[12];
      v16 = v15 + 56;
      if ( v13 >= v12 )
        v16 = 0;
      *(_QWORD *)(v15 + 24) = v16;
      if ( !v13 )
        break;
      *(_OWORD *)(v15 + 32) = 0;
      v14 -= 56;
      --v13;
      *(_QWORD *)(v15 + 16) = v15 - 56;
      *(_DWORD *)v15 = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 48) = 0;
      v12 = *a2 - 1;
    }
    *(_DWORD *)v15 = 0;
    *(_QWORD *)(v15 + 48) = 0;
    *(_OWORD *)(v15 + 8) = 0;
    *(_OWORD *)(v15 + 32) = 0;
  }
  return 0;
}

