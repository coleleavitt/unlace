__int64 __fastcall sub_5C9190(_QWORD *a1)
{
  __m128i *v1; // rbx
  unsigned __int64 v2; // rbp
  size_t v3; // r13
  __int64 v5; // r12
  size_t v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v1 = (__m128i *)a1[15];
  if ( !v1 )
  {
    v1 = (__m128i *)a1[16];
    if ( !v1 )
      v1 = (__m128i *)a1[13];
  }
  src = nullptr;
  v17 = 0;
  src = (void *)qvector_reserve(&src, 0, 2, 1);
  *(_QWORD *)&v17 = 2;
  *(_BYTE *)src = 41;
  *((_BYTE *)src + 1) = 0;
  v2 = v17;
  if ( (_QWORD)v17 )
  {
    v3 = v17 - 1;
    if ( (_QWORD)v17 != 1 )
    {
      v5 = v1[10].m128i_i64[0];
      v6 = v17 - 1;
      if ( v5 )
      {
        --v5;
        v6 = v3 + v5;
        v2 = v17 + v5;
      }
      v7 = v1[9].m128i_i64[1];
      if ( v1[10].m128i_i64[1] < v2 )
      {
        v14 = qvector_reserve(&v1[9].m128i_u64[1], v7, v2, 1);
        v1[9].m128i_i64[1] = v14;
        v7 = v14;
      }
      v1[10].m128i_i64[0] = v2;
      *(_BYTE *)(v7 + v6) = 0;
      memcpy((void *)(v5 + v1[9].m128i_i64[1]), src, v3);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v17 = 0;
    qfree(src);
  }
  if ( v1[10].m128i_i64[0] > 1uLL )
  {
    v8 = v1[8].m128i_i64[1];
    v9 = v1[8].m128i_i64[0];
    if ( v1[9].m128i_i64[0] < (unsigned __int64)(v8 + 1) )
    {
      v15 = qvector_reserve(&v1[8], v9, v8 + 1, 24);
      v8 = v1[8].m128i_i64[1];
      v1[8].m128i_i64[0] = v15;
      v9 = v15;
    }
    v10 = v9 + 24 * v8;
    *(_OWORD *)(v10 + 8) = 0;
    *(_QWORD *)v10 = 0;
    v11 = v1[9].m128i_i64[1];
    ++v1[8].m128i_i64[1];
    v12 = *(_QWORD *)v10;
    *(_QWORD *)v10 = v11;
    v13 = _mm_loadu_si128((const __m128i *)(v10 + 8));
    *(_QWORD *)(v10 + 8) = v1[10].m128i_i64[0];
    *(_QWORD *)(v10 + 16) = v1[10].m128i_i64[1];
    v1[9].m128i_i64[1] = v12;
    v1[10] = v13;
  }
  return 0;
}

