void __fastcall sub_3B0DE0(__int64 a1, const __m128i *a2)
{
  __m128i v3; // xmm0
  __m128i *v4; // rax
  __int64 v5; // rsi
  __m128i *v6; // rbx
  _QWORD *v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = _mm_loadl_epi64(a2);
  strcpy((char *)(a1 + 32), "tabulation");
  *(_QWORD *)(a1 + 24) = 10;
  *(_QWORD *)a1 = &off_1C4E3B0;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)(a1 + 32));
  v4 = (__m128i *)sub_186B270(0xCE0u);
  v5 = a2->m128i_i64[0];
  v6 = v4;
  v4[1].m128i_i64[0] = (__int64)a2[41].m128i_i64;
  *v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)v5);
  sub_16744A0(&v4[1].m128i_u64[1], v5);
  v6[3].m128i_i64[0] = 0;
  v6[4].m128i_i64[1] = 0;
  v6[5].m128i_i64[0] = 0;
  v6[3].m128i_i64[1] = (__int64)&off_1C62200;
  v6[6].m128i_i64[0] = 0;
  v6[6].m128i_i64[1] = 0;
  v6[7].m128i_i64[0] = (__int64)&off_1C62200;
  v6[8].m128i_i64[0] = 0;
  v6[8].m128i_i64[1] = 0;
  v6[9].m128i_i64[1] = 0;
  v6[10].m128i_i64[0] = 0;
  v7 = (_QWORD *)sub_186B270(0xC0u);
  *v7 = 0;
  v7[3] = 0;
  v7[6] = 0;
  v7[9] = 0;
  v7[12] = 0;
  v7[15] = 0;
  v7[18] = 0;
  v7[21] = 0;
  v6[10].m128i_i64[1] = (__int64)v7;
  v6[11].m128i_i64[0] = 8;
  v6[11].m128i_i32[2] = 0;
  v6[12].m128i_i8[0] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  v6[12].m128i_i64[1] = (__int64)v8;
  v6[13].m128i_i64[0] = 8;
  v6[13].m128i_i32[2] = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  v10 = v6->m128i_i64[1];
  v6[14].m128i_i64[0] = (__int64)v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v11 = v6->m128i_i64[0];
  v6[14].m128i_i64[1] = 8;
  v12 = *(_QWORD *)(v11 + 16);
  v13 = *(_QWORD *)(v11 + 8);
  v6[15].m128i_i64[1] = v10;
  v6[15].m128i_i32[0] = 0;
  v6[16].m128i_i64[0] = 0;
  v15[0] = 0;
  sub_64C8D0(&v6[16].m128i_u64[1], v10, v13, v12, v15);
  sub_18572D0(v15);
  v14 = 0;
  sub_180C5A0(v15, "datalog");
  sub_18625B0(&v14, "engine", v15);
  sub_64C4C0(&v6[16].m128i_u64[1], &v14);
  sub_18572D0(&v14);
  *(_QWORD *)(a1 + 48) = v6;
}

