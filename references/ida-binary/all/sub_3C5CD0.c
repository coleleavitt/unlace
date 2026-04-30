unsigned __int64 __fastcall sub_3C5CD0(__int64 a1, __int64 a2, unsigned int **a3, unsigned int a4)
{
  unsigned int *v6; // rdx
  const char *v7; // rbx
  __int64 v8; // r13
  unsigned int *i; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __m128i v17; // xmm1
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v21; // [rsp+0h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+14h] [rbp-8Ch]
  __int128 v23; // [rsp+18h] [rbp-88h] BYREF
  __m128i v24; // [rsp+28h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-68h] BYREF
  __m256i v26; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-40h]

  v6 = a3[1];
  v22 = a4;
  v27 = __readfsqword(0x28u);
  *(_OWORD *)v26.m256i_i8 = 0;
  v25 = 0;
  *(_OWORD *)&v26.m256i_u64[2] = -1;
  if ( v6 )
    v25 = qvector_reserve(&v25, 0, v6, 16);
  v7 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 112LL))(a2);
  v8 = (__int64)&(*a3)[(_QWORD)a3[1]];
  for ( i = *a3; (unsigned int *)v8 != i; ++i )
  {
    v12 = *i;
    v24.m128i_i8[8] = 0;
    v24.m128i_i64[0] = v12;
    v23 = -1;
    dirtree_find_entry(&v23, v7, &v24);
    v13 = v23;
    v14 = _mm_loadl_epi64((const __m128i *)((char *)&v23 + 8));
    if ( (_QWORD)v23 != -1 || !v14.m128i_i64[0] )
    {
      v10 = v26.m256i_i64[0];
      v11 = v25;
      if ( v26.m256i_i64[1] < (unsigned __int64)(v26.m256i_i64[0] + 1) )
      {
        v21.m128i_i64[1] = v23;
        v21.m128i_i64[0] = v14.m128i_i64[0];
        v25 = qvector_reserve(&v25, v25, v26.m256i_i64[0] + 1, 16);
        v11 = v25;
        v13 = v21.m128i_i64[1];
        v10 = v26.m256i_i64[0];
        v14 = _mm_loadl_epi64(&v21);
      }
      *(__m128i *)(v11 + 16 * v10) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, v14);
      ++v26.m256i_i64[0];
    }
  }
  BYTE8(v23) = 0;
  *(_QWORD *)&v23 = v22;
  v24 = (__m128i)-1LL;
  dirtree_find_entry(&v24, v7, &v23);
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v16 = *(_QWORD *)a1;
  v17 = _mm_loadu_si128((const __m128i *)&v26);
  *(_QWORD *)a1 = v25;
  v18 = *(_QWORD *)(a1 + 32);
  *(__m128i *)&v26.m256i_u64[1] = v15;
  v19 = _mm_load_si128(&v24);
  v25 = v16;
  v26.m256i_i64[3] = v18;
  *(__m128i *)(a1 + 8) = v17;
  *(__m128i *)(a1 + 24) = v19;
  if ( v16 )
  {
    v26.m256i_i64[0] = 0;
    qfree(v16, v7);
  }
  return v27 - __readfsqword(0x28u);
}
