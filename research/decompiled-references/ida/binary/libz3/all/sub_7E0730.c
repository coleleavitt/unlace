void __fastcall sub_7E0730(__m128i *a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // r13
  unsigned int v5; // r13d
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // r12
  _OWORD *v16; // rax
  void *v17; // [rsp+0h] [rbp-58h]
  int v18[2]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a2;
  v3 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v3 == sub_79EFD0 )
    v4 = a2[18];
  else
    v4 = v3((__int64)a2);
  sub_180C5A0(v18, "fpa");
  v5 = sub_15DA4C0(v4 + 560, v18);
  sub_180C5A0(v18, "fpa");
  sub_7E4DF0(a1, a2, v18, v5);
  v9 = _mm_loadl_epi64((const __m128i *)&off_1C54AD0);
  *(_QWORD *)v18 = 0;
  a1->m128i_i64[0] = (__int64)&off_1C6BF08;
  a1[3].m128i_i64[0] = (__int64)off_1C6C1F0;
  v10 = *a2;
  a1[2] = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)off_1C6C1C8);
  v11 = *(__int64 (__fastcall **)(__int64))(v10 + 424);
  if ( v11 == sub_79EFD0 )
    a2 = (_QWORD *)a2[18];
  else
    LODWORD(a2) = v11((__int64)a2);
  sub_14B7810((_DWORD)a1 + 112, (int)a2, (int)v18, v6, v7, v8, v17);
  sub_18572D0(v18);
  v12 = *(__int64 (__fastcall **)(__int64))(*v2 + 424LL);
  if ( v12 == sub_79EFD0 )
    v13 = v2[18];
  else
    v13 = v12((__int64)v2);
  sub_D50630(&a1[8], v13);
  a1[48].m128i_i64[0] = (__int64)a1[7].m128i_i64;
  *(_QWORD *)v18 = 0;
  a1[8].m128i_i64[0] = (__int64)&off_1C5A7B8;
  v14 = *(__int64 (__fastcall **)(__int64))(*v2 + 424LL);
  if ( v14 == sub_79EFD0 )
    v15 = v2[18];
  else
    v15 = v14((__int64)v2);
  sub_D85990(&a1[48].m128i_u64[1], v15, *(_DWORD *)(v15 + 712) != 0, &a1[82]);
  a1[48].m128i_i64[1] = (__int64)&off_1C4D970;
  sub_D83130(&a1[82], v15, &a1[8], v18);
  sub_18572D0(v18);
  a1[86].m128i_i64[0] = (__int64)a1[35].m128i_i64;
  a1[86].m128i_i64[1] = (__int64)&a1[22].m128i_i64[1];
  a1[87].m128i_i64[0] = (__int64)a1[24].m128i_i64;
  v16 = (_OWORD *)sub_186B270(0x80u);
  a1[87].m128i_i64[1] = (__int64)v16;
  a1[88].m128i_i64[0] = 8;
  a1[88].m128i_i32[2] = 0;
  a1[89].m128i_i64[0] = 0;
  a1[89].m128i_i32[2] = 0;
  *v16 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v16[6] = 0;
  v16[7] = 0;
  *(_QWORD *)v18 = 0;
  sub_1862300(v18, "arith_lhs", 1);
  sub_14B5FE0(&a1[7], v18);
  sub_18572D0(v18);
}

