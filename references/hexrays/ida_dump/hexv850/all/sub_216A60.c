__int64 __fastcall sub_216A60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  size_t v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 *v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rsi
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v25; // rax
  void *v26; // [rsp+0h] [rbp-68h]
  __m128i v27; // [rsp+8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 8);
  v26 = nullptr;
  v27.m128i_i64[0] = v5;
  if ( v5 )
  {
    v14 = 4 * v5;
    v26 = (void *)qalloc_or_throw(4 * v5);
    memcpy(v26, *(const void **)a3, v14);
  }
  v6 = a1[5];
  v28 = *(_QWORD *)(a3 + 24);
  v27.m128i_i8[15] = *(_BYTE *)(a3 + 32);
  v29 = *(_QWORD *)(a3 + 40);
  v27.m128i_i8[14] = *(_BYTE *)(a3 + 48);
  v7 = a1[4];
  if ( v6 < v7 + 1 )
  {
    v8 = qvector_reserve(a1 + 3, 0, v7 + 1, 56);
    v15 = a1[4];
    v16 = a1[5];
    a1[5] = v6;
    v17 = (__int64 *)a1[3];
    v30 = v16;
    v18 = v15 - 1;
    if ( v18 >= 0 )
    {
      v19 = v8;
      do
      {
        v20 = *v17;
        v21 = _mm_loadu_si128((const __m128i *)(v17 + 1));
        *v17 = 0;
        v17[2] = 0;
        *(_QWORD *)v19 = v20;
        *(__m128i *)(v19 + 8) = v21;
        v22 = _mm_loadu_si128((const __m128i *)(v17 + 3));
        *(_QWORD *)(v19 + 40) = v17[5];
        LOBYTE(v20) = *((_BYTE *)v17 + 48);
        *(__m128i *)(v19 + 24) = v22;
        *(_BYTE *)(v19 + 48) = v20;
        v23 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v23);
        }
        v17 += 7;
        v19 += 56;
      }
      while ( v18-- != 0 );
      v17 = (__int64 *)a1[3];
    }
    qfree(v17);
    v25 = v30;
    a1[3] = v8;
    a1[5] = v25;
    v7 = a1[4];
  }
  else
  {
    v8 = a1[3];
  }
  v9 = _mm_loadl_epi64(&v27);
  v10 = v8 + 56 * v7;
  *(_QWORD *)v10 = v26;
  v11 = v28;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v9, v9);
  *(_QWORD *)(v10 + 24) = v11;
  *(_BYTE *)(v10 + 32) = v27.m128i_i8[15];
  *(_QWORD *)(v10 + 40) = v29;
  *(_BYTE *)(v10 + 48) = v27.m128i_i8[14];
  v12 = a1[2];
  ++a1[4];
  sub_FF1A0(a3, v12, (__int64)(a1 + 6));
  return 0;
}
