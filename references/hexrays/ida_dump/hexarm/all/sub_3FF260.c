__int64 __fastcall sub_3FF260(__int64 a1, int a2)
{
  __m128i *v3; // rax
  char *v4; // rbx
  __m128i si128; // xmm1
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 v9; // rdi
  const char *v10; // rdx
  __int64 v11; // r13
  __int64 *v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // [rsp+10h] [rbp-1E0h]
  const char *v15; // [rsp+20h] [rbp-1D0h] BYREF
  __int128 v16; // [rsp+28h] [rbp-1C8h]
  __int64 v17[2]; // [rsp+40h] [rbp-1B0h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-1A0h] BYREF
  __int128 v19; // [rsp+58h] [rbp-198h]
  _BYTE v20[320]; // [rsp+70h] [rbp-180h] BYREF
  char v21; // [rsp+1B0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+1B8h] [rbp-38h]

  v3 = (__m128i *)v20;
  v4 = &v21;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v22 = __readfsqword(0x28u);
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
  while ( &v21 != (char *)v3 );
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 8) != 0 && (v6 = sub_3FE8B0(a1, (__int64)v20, 0, 0.0), (_BYTE)v6) )
  {
    v15 = nullptr;
    v16 = 0;
    sub_3FEF00(a1, (__int64 *)&v15, "st", nullptr, a2, a1 + 64, 0.0);
    v9 = *(_QWORD *)(a1 + 8);
    v17[0] = 1;
    v10 = s1;
    if ( (_QWORD)v16 )
      v10 = v15;
    v14 = sub_335C70(v9, *(_QWORD *)(a1 + 40), (__int64)v10, v17, 2, (__int64)v20, 1);
    clear_tinfo_t(v17);
    v11 = *(_QWORD *)(v14 + 72);
    *(_DWORD *)(v11 + 280) |= 4u;
    v17[0] = 0;
    v17[1] = 0;
    v18 = nullptr;
    v19 = 0;
    v12 = (__int64 *)qvector_reserve(&v18, 0, 1, 16);
    v13 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    v18 = v12;
    *(__m128i *)&v12[2 * v19] = v13;
    *(_QWORD *)&v19 = v19 + 1;
    sub_63C80((__int64 *)(v11 + 136), v17);
    sub_317070((__int64 *)(v11 + 152), &v18);
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
    qfree(v17[0]);
    sub_B4CD0(*(_QWORD **)(a1 + 16), v14);
    sub_3F9F40(a1, a1 + 104, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL), *(double *)v13.m128i_i64);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
  }
  else
  {
    v6 = 0;
  }
  do
  {
    v4 -= 80;
    cleanup_argloc(v4 + 56);
    v7 = *((_QWORD *)v4 + 4);
    if ( v7 )
    {
      *((_QWORD *)v4 + 5) = 0;
      qfree(v7);
    }
    clear_tinfo_t(v4 + 24);
    sub_11C7E0((__int64)v4);
  }
  while ( v4 != v20 );
  return v6;
}
