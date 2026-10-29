__m128i *__fastcall sub_20B2D90(__m128i *a1, __int64 a2, __int64 *a3, const __m128i *a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i si128; // xmm0
  _QWORD *v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128i v17; // xmm2
  __int64 *v18; // [rsp+8h] [rbp-40h] BYREF
  __m128 v19[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_20A1250(a2, a3, &v18) )
  {
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      v9 = a2 + 8;
      v10 = 96;
    }
    else
    {
      v9 = *(_QWORD *)(a2 + 8);
      v10 = 24LL * *(unsigned int *)(a2 + 16);
    }
    sub_20ABC20(v19, v18, (__int64 *)(v10 + v9), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v19);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  else
  {
    v13 = sub_20B2CF0((int *)a2, a3, v18, v6, v7, v8);
    *v13 = *a3;
    v14 = _mm_loadu_si128(a4);
    v18 = v13;
    *(__m128i *)(v13 + 1) = v14;
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      v15 = a2 + 8;
      v16 = 96;
    }
    else
    {
      v15 = *(_QWORD *)(a2 + 8);
      v16 = 24LL * *(unsigned int *)(a2 + 16);
    }
    sub_20ABC20(v19, v13, (__int64 *)(v16 + v15), a2, 1);
    v17 = _mm_load_si128((const __m128i *)v19);
    a1[1].m128i_i8[0] = 1;
    *a1 = v17;
    return a1;
  }
}
