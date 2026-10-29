__int64 __fastcall sub_D036D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __m128i *v4; // rax
  __m128i *v5; // rbx
  __m128i si128; // xmm0
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  _BYTE v14[64]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C59FE0;
  sub_1858590(v2 + 24, a2);
  v4 = (__m128i *)sub_186B270(0x240u);
  v4->m128i_i64[0] = a1;
  v5 = v4;
  sub_D04070(&v4->m128i_u64[1], a1, *(_DWORD *)(a1 + 712) != 0, &v4[34]);
  v5[34].m128i_i64[0] = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6840);
  v5->m128i_i64[1] = (__int64)&off_1C59FC0;
  v5[35] = si128;
  sub_17F9A60(v14, "tactic");
  v7 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  v8 = (unsigned __int64)v7 << 20;
  v9 = v7 == -1;
  v10 = -1;
  if ( !v9 )
    v10 = v8;
  v5[34].m128i_i64[1] = v10;
  v11 = sub_1859980(a2, "blast_term_ite.max_steps", v14, 0xFFFFFFFFLL);
  v5[35].m128i_i32[1] = sub_1859960(a2, "max_steps", v11);
  v12 = sub_1859980(a2, "blast_term_ite.max_inflation", v14, 0xFFFFFFFFLL);
  v5[35].m128i_i32[2] = sub_1859960(a2, "max_inflation", v12);
  sub_18572D0(v14);
  *(_QWORD *)(v3 + 16) = v5;
  return sub_EE8D70(v3);
}

