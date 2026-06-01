__int64 __fastcall sub_13F4000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __m128i v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rsi
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 != v7 )
  {
    v12.m128i_i64[0] = a1;
    v8 = _mm_loadl_epi64(&v12);
    v9 = *(unsigned __int8 *)(v6 + 136);
    v12 = _mm_unpacklo_epi64(v8, v8);
    v13[0] = v12;
    if ( (_BYTE)v9 == 0xFF )
LABEL_7:
      abort();
    while ( 1 )
    {
      v10 = v6;
      v6 += 144;
      ((void (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))funcs_13F4076[v9])(
        v13,
        v10,
        a3,
        a4,
        a5,
        a6,
        v12.m128i_i64[0],
        v12.m128i_i64[1]);
      if ( v7 == v6 )
        break;
      v13[0] = _mm_load_si128(&v12);
      v9 = *(unsigned __int8 *)(v6 + 136);
      if ( (_BYTE)v9 == 0xFF )
        goto LABEL_7;
    }
  }
  return *(unsigned __int8 *)(a1 + 41);
}
