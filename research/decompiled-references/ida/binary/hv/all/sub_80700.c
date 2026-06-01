__int64 __fastcall sub_80700(__int64 a1, _QWORD *a2, int a3, int a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  size_t v9; // r12
  int v10; // edx
  __int64 result; // rax
  __int64 v12; // rdi
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  double v15; // xmm2_8
  __int64 v16; // rax
  size_t v17; // rsi

  v7 = a2[3];
  v8 = a2[2];
  if ( v7 >= v8 )
    goto LABEL_13;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
    return 4294949593LL;
  if ( a4 )
  {
    if ( v8 - v7 <= v9 )
      v9 = v8 - v7;
    if ( v7 )
    {
      v12 = a2[4];
    }
    else
    {
      v10 = sub_7FDB0(a1, v8, a2 + 4, a2 + 5);
      result = 12;
      if ( v10 )
        return result;
      v12 = a2[4];
      v7 = a2[3];
      *a2 = v12;
    }
  }
  else
  {
    if ( !v7 )
    {
      v9 = v8;
      *a2 = *(_QWORD *)a1;
      goto LABEL_12;
    }
    v17 = v8 - v7;
    v12 = a2[4];
    if ( v17 <= v9 )
      v9 = v17;
  }
  memcpy((void *)(v7 + v12), *(const void **)a1, v9);
  v7 = a2[3];
LABEL_12:
  a2[3] = v9 + v7;
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v14 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  *(_QWORD *)(a1 + 992) += v9;
  *(_QWORD *)a1 += v9;
  v15 = *(double *)_mm_sub_epi64(v13, v14).m128i_i64;
  v14.m128i_i64[1] = _mm_add_epi64(v14, v13).m128i_i64[1];
  *(double *)v14.m128i_i64 = v15;
  *(__m128i *)(a1 + 8) = v14;
  if ( a2[3] < a2[2] )
  {
    *(_QWORD *)(a1 + 64) = "further input required";
    return 4294949593LL;
  }
LABEL_13:
  *(_DWORD *)(a1 + 816) = a3;
  v16 = a2[2];
  a2[3] = 0;
  a2[1] = *a2 + v16;
  return 0;
}

