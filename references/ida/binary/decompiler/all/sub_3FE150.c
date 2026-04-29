unsigned __int64 __fastcall sub_3FE150(_QWORD *a1, __int64 a2, __int64 a3)
{
  __m128i *v3; // rax
  char *v4; // rbx
  __m128i si128; // xmm1
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v11; // rdx
  __int64 v12; // [rsp-8h] [rbp-138h]
  unsigned int v13; // [rsp+0h] [rbp-130h]
  __int64 v14; // [rsp+8h] [rbp-128h]
  int v15; // [rsp+10h] [rbp-120h]
  __int64 v16; // [rsp+18h] [rbp-118h] BYREF
  __int64 v17[2]; // [rsp+20h] [rbp-110h] BYREF
  __int64 v18; // [rsp+30h] [rbp-100h] BYREF
  __int128 v19; // [rsp+38h] [rbp-F8h]
  _BYTE v20[84]; // [rsp+50h] [rbp-E0h] BYREF
  unsigned __int64 v21; // [rsp+A4h] [rbp-8Ch]
  char v22; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+F8h] [rbp-38h]

  v3 = (__m128i *)v20;
  v4 = &v22;
  si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
  v23 = __readfsqword(0x28u);
  v19 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  do
  {
    v3->m128i_i32[1] = -1;
    v3 += 5;
    v3[-5].m128i_i16[0] = 0;
    v3[-5].m128i_i16[1] = 0;
    v3[-5].m128i_i64[1] = 0;
    v3[-4] = si128;
    v3[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v3[-3] + 8) = 0;
    v3[-2].m128i_i32[2] = 0;
    v3[-1].m128i_i64[0] = 0;
    v3[-1].m128i_i32[2] = 0;
  }
  while ( v3 != (__m128i *)&v22 );
  sub_3F00C0((__int64)a1, (__int64)v20, 57, a3, v17);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 448LL));
  if ( !*(_BYTE *)(a2 + 16) )
  {
    v13 = _mm_cvtsi128_si32(v6);
    v6 = _mm_cvtsi32_si128(v13);
    if ( !(unsigned __int8)sub_3F0150(a2) )
      sub_3E07C0(a2, v20, v11);
  }
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  v20[80] = 1;
  v16 = 41;
  v21 = _mm_unpacklo_epi32(v6, v7).m128i_u64[0];
  copy_tinfo_t();
  clear_tinfo_t();
  v8 = sub_332690(
         a1[1],
         a1[5],
         (unsigned int)"__FBSTP__",
         (unsigned int)&v16,
         2,
         (unsigned int)v20,
         1,
         v12,
         v13,
         (_DWORD)a1,
         v15,
         0);
  clear_tinfo_t();
  v9 = *(_QWORD *)(v8 + 72);
  *(_DWORD *)(v9 + 280) |= 0x10u;
  sub_63980((__int64 *)(v9 + 136), v17);
  sub_313730(v9 + 152, &v18);
  sub_313730(v9 + 216, &v18);
  sub_B4460(*(_QWORD **)(v14 + 16), v8);
  *(_DWORD *)(*(_QWORD *)(v14 + 800) + 1400LL) |= 1u;
  do
  {
    v4 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v4 + 4) )
    {
      *((_QWORD *)v4 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11A960((__int64)v4);
  }
  while ( v4 != v20 );
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  qfree();
  return v23 - __readfsqword(0x28u);
}
