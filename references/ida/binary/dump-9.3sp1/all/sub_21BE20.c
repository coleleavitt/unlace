__int64 __fastcall sub_21BE20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  size_t v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v26; // rax
  void *v27; // [rsp+0h] [rbp-68h]
  __m128i v28; // [rsp+8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+18h] [rbp-50h]
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 8);
  v27 = nullptr;
  v28.m128i_i64[0] = v6;
  if ( v6 )
  {
    v15 = 4 * v6;
    v27 = (void *)qalloc_or_throw(4 * v6, a2, a3, a4);
    memcpy(v27, *(const void **)a3, v15);
  }
  v7 = a1[5];
  v29 = *(_QWORD *)(a3 + 24);
  v28.m128i_i8[15] = *(_BYTE *)(a3 + 32);
  v30 = *(_QWORD *)(a3 + 40);
  v28.m128i_i8[14] = *(_BYTE *)(a3 + 48);
  v8 = a1[4];
  if ( v7 < v8 + 1 )
  {
    v9 = qvector_reserve((__int64)(a1 + 3), 0, v8 + 1, 56);
    v16 = a1[4];
    v17 = a1[5];
    a1[5] = v7;
    v18 = a1[3];
    v31 = v17;
    v19 = v16 - 1;
    if ( v19 >= 0 )
    {
      v20 = v9;
      do
      {
        v21 = *(_QWORD *)v18;
        v22 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        *(_QWORD *)v18 = 0;
        *(_QWORD *)(v18 + 16) = 0;
        *(_QWORD *)v20 = v21;
        *(__m128i *)(v20 + 8) = v22;
        v23 = _mm_loadu_si128((const __m128i *)(v18 + 24));
        *(_QWORD *)(v20 + 40) = *(_QWORD *)(v18 + 40);
        LOBYTE(v21) = *(_BYTE *)(v18 + 48);
        *(__m128i *)(v20 + 24) = v23;
        *(_BYTE *)(v20 + 48) = v21;
        v24 = *(_QWORD *)v18;
        if ( *(_QWORD *)v18 )
        {
          *(_QWORD *)(v18 + 8) = 0;
          qfree(v24);
        }
        v18 += 56;
        v20 += 56;
      }
      while ( v19-- != 0 );
      v18 = a1[3];
    }
    qfree(v18);
    v26 = v31;
    a1[3] = v9;
    a1[5] = v26;
    v8 = a1[4];
  }
  else
  {
    v9 = a1[3];
  }
  v10 = _mm_loadl_epi64(&v28);
  v11 = v9 + 56 * v8;
  *(_QWORD *)v11 = v27;
  v12 = v29;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v10, v10);
  *(_QWORD *)(v11 + 24) = v12;
  *(_BYTE *)(v11 + 32) = v28.m128i_i8[15];
  *(_QWORD *)(v11 + 40) = v30;
  *(_BYTE *)(v11 + 48) = v28.m128i_i8[14];
  v13 = a1[2];
  ++a1[4];
  sub_103D60(a3, v13, (__int64)(a1 + 6));
  return 0;
}
