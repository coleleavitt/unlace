void __fastcall sub_D041A0(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __m128i si128; // xmm0
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  _BYTE v20[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(__int64 **)(a1 + 16);
  v3 = v2[67];
  v4 = *v2;
  v2[1] = (__int64)&off_1C59FA0;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v5 = v2[65];
  if ( v5 && (v6 = v2[66], v7 = *(_DWORD *)(v5 + 8) == 1, --*(_DWORD *)(v5 + 8), v7) )
  {
    sub_15D7BC0(v6, v5);
    v8 = v2[63];
    if ( !v8 )
      goto LABEL_7;
  }
  else
  {
    v8 = v2[63];
    if ( !v8 )
      goto LABEL_7;
  }
  v9 = v2[64];
  v7 = (*(_DWORD *)(v8 + 8))-- == 1;
  if ( v7 )
  {
    sub_15D7BC0(v9, v8);
    v10 = v2[61];
    if ( !v10 )
      goto LABEL_10;
    goto LABEL_8;
  }
LABEL_7:
  v10 = v2[61];
  if ( !v10 )
    goto LABEL_10;
LABEL_8:
  v11 = v2[62];
  v7 = (*(_DWORD *)(v10 + 8))-- == 1;
  if ( v7 )
    sub_15D7BC0(v11, v10);
LABEL_10:
  v2[42] = (__int64)&qword_1C637E8;
  sub_15841B0(v2 + 42);
  v2[22] = (__int64)&qword_1C637E8;
  sub_15841B0(v2 + 22);
  v12 = v2[21];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  sub_15841B0(v2 + 1);
  sub_186B220(v2);
  v13 = sub_186B270(0x240u);
  *(_QWORD *)v13 = v4;
  sub_D04070(v13 + 8, v4, *(_DWORD *)(v4 + 712) != 0, v13 + 544);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6840);
  *(_QWORD *)(v13 + 544) = v4;
  *(_QWORD *)(v13 + 8) = &off_1C59FC0;
  *(__m128i *)(v13 + 560) = si128;
  sub_17F9A60(v20, "tactic");
  v15 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v16 = (unsigned __int64)v15 << 20;
  v7 = v15 == -1;
  v17 = -1;
  if ( !v7 )
    v17 = v16;
  *(_QWORD *)(v13 + 552) = v17;
  v18 = sub_1859980(a1 + 24, "blast_term_ite.max_steps", v20, 0xFFFFFFFFLL);
  *(_DWORD *)(v13 + 564) = sub_1859960(a1 + 24, "max_steps", v18);
  v19 = sub_1859980(a1 + 24, "blast_term_ite.max_inflation", v20, 0xFFFFFFFFLL);
  *(_DWORD *)(v13 + 568) = sub_1859960(a1 + 24, "max_inflation", v19);
  sub_18572D0(v20);
  *(_QWORD *)(a1 + 16) = v13;
}

