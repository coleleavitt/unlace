unsigned __int64 __fastcall sub_489EC0(__m128i **a1, __m128i *a2)
{
  __m128i *v2; // r14
  __m128i *v5; // rsi
  __m128i *v6; // rdx
  size_t v7; // r15
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i si128; // xmm0
  __int64 v11; // rbx
  size_t v12; // r15
  void *v13; // rax
  __m128i *v14; // rbx
  __int64 v15; // rdi
  __m128i *v17; // r15
  __int64 m128i_i64; // rbx
  void *v19; // rax
  const void *v20; // rsi
  __m128i v21[10]; // [rsp+0h] [rbp-188h] BYREF
  __m128i v22[8]; // [rsp+A0h] [rbp-E8h] BYREF
  __int32 v23; // [rsp+120h] [rbp-68h]
  __int64 v24; // [rsp+128h] [rbp-60h]
  __int64 v25; // [rsp+130h] [rbp-58h]
  __int32 v26; // [rsp+138h] [rbp-50h]
  __int8 v27; // [rsp+13Ch] [rbp-4Ch]
  unsigned __int64 v28; // [rsp+148h] [rbp-40h]

  v2 = a1[1];
  v28 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    memset(v21, 0, sizeof(v21));
    v21[6].m128i_i32[2] = -1;
    v21[6].m128i_i64[0] = 1;
    v21[8].m128i_i32[0] = -1;
    v21[9].m128i_i64[0] = -1;
    v21[9].m128i_i32[2] = -1;
    if ( a2 < v2 )
    {
      v14 = a2;
      do
      {
        v15 = 5LL * (_QWORD)v14;
        v14 = (__m128i *)((char *)v14 + 1);
        sub_375BF0((__m128i *)(*a1)[2 * v15].m128i_i64);
      }
      while ( v2 != v14 );
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( v21 >= *a1 && v21 < &v5[10 * (_QWORD)v6] )
      {
        sub_480B60((__int64)v22, v21);
        v23 = v21[8].m128i_i32[0];
        v24 = v21[8].m128i_i64[1];
        v25 = v21[9].m128i_i64[0];
        v26 = v21[9].m128i_i32[2];
        v27 = v21[9].m128i_i8[12];
        if ( a1[2] < a2 )
          *a1 = (__m128i *)qvector_reserve(a1, *a1, a2, 160);
        v17 = a1[1];
        if ( v17 < a2 )
        {
          do
          {
            m128i_i64 = (__int64)(*a1)[10 * (_QWORD)v17].m128i_i64;
            sub_480B60(m128i_i64, v22);
            v17 = (__m128i *)((char *)v17 + 1);
            *(_DWORD *)(m128i_i64 + 128) = v23;
            *(_QWORD *)(m128i_i64 + 136) = v24;
            *(_QWORD *)(m128i_i64 + 144) = v25;
            *(_DWORD *)(m128i_i64 + 152) = v26;
            *(_BYTE *)(m128i_i64 + 156) = v27;
          }
          while ( a2 != v17 );
        }
        a1[1] = a2;
        sub_375BF0(v22);
        goto LABEL_16;
      }
      if ( v6 < a2 )
      {
        *a1 = (__m128i *)qvector_reserve(a1, v5, a2, 160);
        v2 = a1[1];
      }
      for ( ; v2 < a2; *(_BYTE *)(v11 + 156) = v21[9].m128i_i8[12] )
      {
        si128 = _mm_load_si128(v21);
        v11 = (__int64)(*a1)[10 * (_QWORD)v2].m128i_i64;
        *(_QWORD *)(v11 + 16) = 0;
        *(__m128i *)v11 = si128;
        *(_OWORD *)(v11 + 24) = 0;
        v12 = v21[1].m128i_u64[1];
        if ( v21[1].m128i_i64[1] )
        {
          v13 = (void *)qalloc_or_throw(v21[1].m128i_i64[1], v5->m128i_i8);
          *(_QWORD *)(v11 + 16) = v13;
          v5 = (__m128i *)v21[1].m128i_i64[0];
          *(_QWORD *)(v11 + 32) = v12;
          memcpy(v13, v5, v12);
          *(_QWORD *)(v11 + 24) = v12;
        }
        *(_QWORD *)(v11 + 40) = 0;
        *(_OWORD *)(v11 + 48) = 0;
        v7 = v21[3].m128i_u64[0];
        if ( v21[3].m128i_i64[0] )
        {
          v19 = (void *)qalloc_or_throw(v21[3].m128i_i64[0], v5->m128i_i8);
          *(_QWORD *)(v11 + 40) = v19;
          v20 = (const void *)v21[2].m128i_i64[1];
          *(_QWORD *)(v11 + 56) = v7;
          memcpy(v19, v20, v7);
          *(_QWORD *)(v11 + 48) = v7;
        }
        *(_QWORD *)(v11 + 64) = 0;
        v5 = &v21[4];
        copy_tinfo_t(v11 + 64);
        v8 = v21[6].m128i_i64[1];
        v2 = (__m128i *)((char *)v2 + 1);
        *(__m128i *)(v11 + 72) = _mm_loadu_si128((const __m128i *)&v21[4].m128i_u64[1]);
        v9 = _mm_loadu_si128((const __m128i *)&v21[5].m128i_u64[1]);
        *(_QWORD *)(v11 + 104) = v8;
        *(__m128i *)(v11 + 88) = v9;
        *(_QWORD *)(v11 + 112) = v21[7].m128i_i64[0];
        *(_BYTE *)(v11 + 120) = v21[7].m128i_i8[8];
        *(_DWORD *)(v11 + 128) = v21[8].m128i_i32[0];
        *(_QWORD *)(v11 + 136) = v21[8].m128i_i64[1];
        *(_QWORD *)(v11 + 144) = v21[9].m128i_i64[0];
        *(_DWORD *)(v11 + 152) = v21[9].m128i_i32[2];
      }
    }
    a1[1] = a2;
LABEL_16:
    sub_375BF0(v21);
  }
  return v28 - __readfsqword(0x28u);
}

