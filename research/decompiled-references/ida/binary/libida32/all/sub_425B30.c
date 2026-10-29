_BYTE *__fastcall sub_425B30(__int64 a1, double a2, double a3, __m128 a4)
{
  __m128 v4; // xmm1
  __int64 v5; // r11
  unsigned __int64 v6; // xmm2_8
  _BYTE *v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // rcx
  bool v10; // cc
  _BYTE *result; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax

  v4 = (__m128)_mm_loadu_si128((const __m128i *)a1);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = _mm_movehl_ps(a4, v4).m128_u64[0];
  while ( 1 )
  {
    v7 = *(_BYTE **)(a1 - 24);
    v8 = *(_QWORD *)(a1 - 16) - (_QWORD)v7;
    v9 = (_BYTE *)(v4.m128_u64[0] + v8);
    v10 = (__int64)(v6 - v4.m128_u64[0]) <= v8;
    result = (_BYTE *)v4.m128_u64[0];
    if ( v10 )
      v9 = (_BYTE *)v6;
    if ( v9 == (_BYTE *)v4.m128_u64[0] )
      break;
    while ( *result >= *v7 )
    {
      if ( *result > *v7 )
        goto LABEL_11;
      ++result;
      ++v7;
      if ( result == v9 )
        goto LABEL_10;
    }
LABEL_9:
    v12 = _mm_loadu_si128((const __m128i *)(a1 - 24));
    v13 = *(_QWORD *)(a1 - 8);
    a1 -= 24;
    *(__m128i *)(a1 + 24) = v12;
    *(_QWORD *)(a1 + 40) = v13;
  }
LABEL_10:
  if ( *(_BYTE **)(a1 - 16) != v7 )
    goto LABEL_9;
LABEL_11:
  *(_QWORD *)(a1 + 16) = v5;
  *(__m128 *)a1 = v4;
  return result;
}

