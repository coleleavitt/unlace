unsigned __int64 __fastcall sub_154C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // rsi
  __m128i *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __m128i si128; // xmm0
  __int64 v13; // r9
  void *v14; // rdi
  size_t v15; // rax
  size_t v17; // r14
  void *v18; // rax
  void *src; // [rsp+0h] [rbp-90h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-88h]
  __int64 v21; // [rsp+20h] [rbp-70h] BYREF
  void *v22; // [rsp+28h] [rbp-68h]
  __int128 v23; // [rsp+30h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-50h]
  int v25; // [rsp+48h] [rbp-48h]
  __int128 v26; // [rsp+50h] [rbp-40h] BYREF
  __m128i v27; // [rsp+60h] [rbp-30h]
  unsigned __int64 v28; // [rsp+78h] [rbp-18h]

  v6 = nullptr;
  v28 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  v8 = (__m128i *)qvector_reserve(&src, 0, 19, 1, a5, a6);
  si128 = _mm_load_si128((const __m128i *)&xmmword_16E90);
  v13 = 25449;
  src = v8;
  v8[1].m128i_i16[0] = 25449;
  n[0] = 19;
  *v8 = si128;
  v14 = src;
  v15 = n[0];
  v21 = a1;
  *((_BYTE *)src + 18) = 0;
  v22 = nullptr;
  v23 = 0;
  if ( v15 )
  {
    v17 = v15;
    v18 = (void *)qalloc_or_throw(v15);
    v6 = src;
    v22 = v18;
    *((_QWORD *)&v23 + 1) = v17;
    memcpy(v18, src, v17);
    *(_QWORD *)&v23 = v17;
    v14 = src;
  }
  v25 = 3;
  v24 = 0x2FFFFFFFFLL;
  if ( v14 )
  {
    n[0] = 0;
    qfree(v14);
  }
  sub_152B0(a1, (__int64)v6, v9, v10, v11, v13);
  HIDWORD(v24) = -1;
  v27 = 0u;
  v26 = 0;
  if ( sub_15130 )
  {
    *(_QWORD *)&v26 = sub_15130;
    v27 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_1CB70), (__m128i)(unsigned __int64)sub_150C0);
  }
  create_nodeval_merge_handler(
    &v21,
    "number of the frame pointer register",
    (unsigned int)dword_1D4B0,
    "$ frame pointers",
    65,
    25024,
    &v26);
  if ( v27.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v27.m128i_i64[0])(&v26, &v26, 3);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v28 - __readfsqword(0x28u);
}
