__int64 __fastcall sub_D04410(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 *v5; // rax
  __m128i *v6; // rbx
  __m128i si128; // xmm0
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v16; // [rsp+0h] [rbp-48h]
  _BYTE v17[64]; // [rsp+8h] [rbp-40h] BYREF

  v2 = a1 + 24;
  v3 = sub_186B270(0x20u);
  *(_DWORD *)(v3 + 8) = 0;
  v4 = v3;
  *(_QWORD *)v3 = &off_1C59FE0;
  sub_1858590(v3 + 24, a1 + 24);
  v5 = (__int64 *)sub_186B270(0x240u);
  *v5 = a2;
  v6 = (__m128i *)v5;
  sub_D04070((__int64)(v5 + 1), a2, *(_DWORD *)(a2 + 712) != 0, (__int64)(v5 + 68));
  v6[34].m128i_i64[0] = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6840);
  v6->m128i_i64[1] = (__int64)&off_1C59FC0;
  v6[35] = si128;
  v16 = a1 + 24;
  sub_17F9A60(v17, "tactic");
  v8 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v9 = a1 + 24;
  v10 = (unsigned __int64)v8 << 20;
  v11 = v8 == -1;
  v12 = -1;
  if ( !v11 )
    v12 = v10;
  v6[34].m128i_i64[1] = v12;
  v13 = sub_1859980(v9, "blast_term_ite.max_steps", v17, 0xFFFFFFFFLL);
  v6[35].m128i_i32[1] = sub_1859960(v2, "max_steps", v13);
  v14 = sub_1859980(v16, "blast_term_ite.max_inflation", v17, 0xFFFFFFFFLL);
  v6[35].m128i_i32[2] = sub_1859960(v2, "max_inflation", v14);
  sub_18572D0(v17);
  *(_QWORD *)(v4 + 16) = v6;
  return v4;
}

