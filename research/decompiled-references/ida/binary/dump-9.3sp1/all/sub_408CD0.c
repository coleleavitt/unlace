unsigned __int64 __fastcall sub_408CD0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 *v3; // rax
  char *v4; // rbx
  __m128 si128; // xmm1
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  char v16; // al
  __int64 v17; // [rsp+18h] [rbp-118h] BYREF
  __int64 v18[2]; // [rsp+20h] [rbp-110h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-100h] BYREF
  __int128 v20; // [rsp+38h] [rbp-F8h]
  _BYTE v21[84]; // [rsp+50h] [rbp-E0h] BYREF
  unsigned __int64 v22; // [rsp+A4h] [rbp-8Ch]
  char v23; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+F8h] [rbp-38h]

  v3 = (__m128 *)v21;
  v4 = &v23;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v24 = __readfsqword(0x28u);
  v20 = 0;
  v18[0] = 0;
  v18[1] = 0;
  v19 = nullptr;
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
  while ( v3 != (__m128 *)&v23 );
  sub_3FAC20(a1, (__int64)v21, 57, a3, v18, 0.0);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL));
  if ( !*(_BYTE *)(a2 + 16) )
  {
    v16 = sub_3FACB0(a2, *(double *)v6.m128i_i64, si128);
    v6 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v6));
    if ( !v16 )
      sub_3EB430(*(double *)v6.m128i_i64);
  }
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  v21[80] = 1;
  v22 = _mm_unpacklo_epi32(v6, v7).m128i_u64[0];
  copy_tinfo_t();
  clear_tinfo_t();
  v17 = 0;
  v8 = sub_335B10(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)"__FBSTP__", (__int64)&v17, 2, (__int64)v21, 1);
  clear_tinfo_t();
  v9 = *(_QWORD *)(v8 + 72);
  *(_DWORD *)(v9 + 280) |= 0x10u;
  sub_64280((__int64 *)(v9 + 136), v18);
  sub_316CB0((__int64 *)(v9 + 152), &v19, v10, v11);
  sub_316CB0((__int64 *)(v9 + 216), &v19, v12, v13);
  sub_B5290(*(_QWORD **)(a1 + 16), v8);
  *(_DWORD *)(*(_QWORD *)(a1 + 800) + 1416LL) |= 1u;
  do
  {
    v4 -= 80;
    cleanup_argloc();
    v14 = *((_QWORD *)v4 + 4);
    if ( v14 )
    {
      *((_QWORD *)v4 + 5) = 0;
      qfree(v14);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v4);
  }
  while ( v4 != v21 );
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree((__int64)v19);
  }
  qfree(v18[0]);
  return v24 - __readfsqword(0x28u);
}
