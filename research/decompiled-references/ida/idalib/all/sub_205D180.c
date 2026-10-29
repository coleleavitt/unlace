__m128i *__fastcall sub_205D180(__m128i *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // r9
  __m128i si128; // xmm0
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rdx
  __m128i v17; // xmm1
  _QWORD *v18; // [rsp+8h] [rbp-40h] BYREF
  __m128 v19[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_2054560((__int64 *)a2, a4, &v18) )
  {
    sub_2056B00(v19, v18, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v19);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  else
  {
    v10 = v18;
    v11 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v12 = *(unsigned int *)(a2 + 16);
    v19[0].m128_u64[0] = (unsigned __int64)v18;
    v13 = (unsigned int)(4 * v11);
    if ( (unsigned int)v13 >= 3 * (int)v12 )
    {
      sub_205CF10(a2, 2 * v12, v11, (unsigned int)(2 * v12), v13, v7);
      sub_2054560((__int64 *)a2, a4, v19);
      v12 = *(unsigned int *)(a2 + 16);
      v10 = (_QWORD *)v19[0].m128_u64[0];
      LODWORD(v11) = *(_DWORD *)(a2 + 8) + 1;
    }
    else
    {
      v14 = (unsigned int)(v12 - *(_DWORD *)(a2 + 12) - v11);
      if ( (unsigned int)v14 <= (unsigned int)v12 >> 3 )
      {
        sub_205CF10(a2, v12, v11, v14, v13, v7);
        sub_2054560((__int64 *)a2, a4, v19);
        v12 = *(unsigned int *)(a2 + 16);
        LODWORD(v11) = *(_DWORD *)(a2 + 8) + 1;
        v10 = (_QWORD *)v19[0].m128_u64[0];
      }
    }
    v15 = *v10 == -4096;
    *(_DWORD *)(a2 + 8) = v11;
    if ( !v15 )
      --*(_DWORD *)(a2 + 12);
    *v10 = *a3;
    v16 = *(_QWORD *)a2;
    v18 = v10;
    sub_2056B00(v19, v10, (_QWORD *)(v16 + 8 * v12), a2, 1);
    v17 = _mm_load_si128((const __m128i *)v19);
    a1[1].m128i_i8[0] = 1;
    *a1 = v17;
    return a1;
  }
}
