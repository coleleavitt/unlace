unsigned __int64 __fastcall sub_408CD0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 *v3; // rax
  char *v4; // rbx
  __m128 si128; // xmm1
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdi
  char v12; // al
  __int64 v13; // [rsp+18h] [rbp-118h] BYREF
  __int64 v14[2]; // [rsp+20h] [rbp-110h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-100h] BYREF
  __int128 v16; // [rsp+38h] [rbp-F8h]
  _BYTE v17[84]; // [rsp+50h] [rbp-E0h] BYREF
  unsigned __int64 v18; // [rsp+A4h] [rbp-8Ch]
  _BYTE v19[56]; // [rsp+B8h] [rbp-78h] BYREF
  char v20; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+F8h] [rbp-38h]

  v3 = (__m128 *)v17;
  v4 = &v20;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v21 = __readfsqword(0x28u);
  v16 = 0;
  v14[0] = 0;
  v14[1] = 0;
  v15 = nullptr;
  do
  {
    v3->m128_i32[1] = -1;
    v3 += 5;
    v3[-5].m128_i16[0] = 0;
    v3[-5].m128_i16[1] = 0;
    v3[-5].m128_u64[1] = 0;
    v3[-4] = si128;
    v3[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v3[-3] + 8) = 0;
    v3[-2].m128_i32[2] = 0;
    v3[-1].m128_u64[0] = 0;
    v3[-1].m128_i32[2] = 0;
  }
  while ( v3 != (__m128 *)&v20 );
  sub_3FAC20(a1, (__int64)v17, 57, a3, v14, 0.0);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL));
  if ( !*(_BYTE *)(a2 + 16) )
  {
    v12 = sub_3FACB0(a2, *(double *)v6.m128i_i64, si128);
    v6 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v6));
    if ( !v12 )
      sub_3EB430(*(double *)v6.m128i_i64, a2, (__int64)v17);
  }
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  v17[80] = 1;
  v13 = 41;
  v18 = _mm_unpacklo_epi32(v6, v7).m128i_u64[0];
  copy_tinfo_t(v19, &v13);
  clear_tinfo_t(&v13);
  v13 = 0;
  v8 = sub_335B10(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)"__FBSTP__", &v13, 2, (__int64)v17, 1);
  clear_tinfo_t(&v13);
  v9 = *(_QWORD *)(v8 + 72);
  *(_DWORD *)(v9 + 280) |= 0x10u;
  sub_64280((__int64 *)(v9 + 136), v14);
  sub_316CB0((__int64 *)(v9 + 152), &v15);
  sub_316CB0((__int64 *)(v9 + 216), &v15);
  sub_B5290(*(_QWORD **)(a1 + 16), v8);
  *(_DWORD *)(*(_QWORD *)(a1 + 800) + 1416LL) |= 1u;
  do
  {
    v4 -= 80;
    cleanup_argloc(v4 + 56);
    v10 = *((_QWORD *)v4 + 4);
    if ( v10 )
    {
      *((_QWORD *)v4 + 5) = 0;
      qfree(v10);
    }
    clear_tinfo_t(v4 + 24);
    sub_11CDA0((__int64)v4);
  }
  while ( v4 != v17 );
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  qfree(v14[0]);
  return v21 - __readfsqword(0x28u);
}
