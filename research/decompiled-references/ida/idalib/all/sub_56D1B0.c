__int64 __fastcall sub_56D1B0(__int64 *a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // xmm1_8
  __m128i *v13; // rbx
  void *v14; // rdi
  size_t v15; // rdx
  unsigned int v16; // r15d
  __m128i v17; // xmm0
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-108h] BYREF
  __int64 v21; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-E8h] BYREF
  int v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+2Ch] [rbp-DCh]
  __m128i v25; // [rsp+30h] [rbp-D8h] BYREF
  void *v26; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-C0h]
  void *ptr; // [rsp+58h] [rbp-B0h]
  __int128 v29; // [rsp+60h] [rbp-A8h]
  _OWORD v30[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-68h]
  int v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  char v34; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+C8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( (a4 & 7) != 0 )
  {
    if ( !under_debugger )
      interr(818);
    BUG();
  }
  v5 = a3;
  v26 = nullptr;
  v25.m128i_i64[1] = 8 * a5;
  v33 = 0x40000000001LL;
  ptr = nullptr;
  v31 = 1;
  v32 = -1;
  v25.m128i_i64[0] = a4 & 0xFFFFFFFFFFFFFFF8LL;
  v34 = 0;
  v27 = 0;
  v29 = 0;
  v30[0] = 0;
  sub_35A790((char **)&v26);
  v22 = 17;
  copy_tinfo_t(v30);
  clear_tinfo_t(&v22);
  if ( a5 == 1
    || (v23 = 0,
        v24 = a5,
        v21 = 17,
        v22 = 0,
        v20.m128i_i64[0] = (__int64)&v21,
        copy_tinfo_t(&v22),
        v16 = create_tinfo(v30, 11, 11, &v22),
        clear_tinfo_t(&v22),
        clear_tinfo_t(&v21),
        (_BYTE)v16) )
  {
    sub_563B00(a1, (__m128i *)(*a1 + 144 * v5), (__int64)&v25);
    v8 = _mm_load_si128(&v25);
    v9 = a2[1];
    v10 = *a2;
    v11 = 24 * v5;
    v12 = _mm_add_epi64(_mm_srli_si128(v8, 8), v8).m128i_u64[0];
    if ( a2[2] < (unsigned __int64)(v9 + 1) )
    {
      v20 = v8;
      v19 = qvector_reserve(a2, v10, v9 + 1, 24);
      *a2 = v19;
      v10 = v19;
      v8 = _mm_load_si128(&v20);
      v9 = a2[1];
    }
    v20 = v8;
    v14 = (void *)(v10 + v11 + 24);
    v13 = (__m128i *)(v10 + v11);
    v15 = 24 * v9 - v11;
    v16 = 1;
    memmove(v14, v13, v15);
    v17 = _mm_load_si128(&v20);
    v13[1].m128i_i32[0] = 1;
    *v13 = _mm_unpackhi_epi64(v17, _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12));
    ++a2[1];
  }
  clear_tinfo_t(v30);
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v16;
}
