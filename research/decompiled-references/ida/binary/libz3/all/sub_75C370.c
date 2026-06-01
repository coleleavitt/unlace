__int64 __fastcall sub_75C370(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  _OWORD *v7; // rax
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // r15
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v21; // [rsp+8h] [rbp-70h]
  void *v22; // [rsp+10h] [rbp-68h]
  __int64 v23; // [rsp+10h] [rbp-68h]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  __int64 v27; // [rsp+38h] [rbp-40h]

  v4 = sub_186B270(0x20u);
  *(_DWORD *)(v4 + 8) = 0;
  v5 = v4;
  *(_QWORD *)v4 = &off_1C542D0;
  sub_1858590(v4 + 24, a2);
  v6 = sub_186B270(0x2A0u);
  sub_1584DD0(v6, a1, *(_DWORD *)(a1 + 712) != 0);
  *(_QWORD *)(v6 + 144) = v6 + 536;
  *(_QWORD *)v6 = &off_1C54290;
  *(_DWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 160) = 0;
  sub_1584DD0(v6 + 168, a1, 0);
  *(_QWORD *)(v6 + 312) = 0;
  *(_DWORD *)(v6 + 320) = 0;
  *(_QWORD *)(v6 + 168) = &off_1C61DB8;
  sub_1584DD0(v6 + 328, a1, 0);
  *(_QWORD *)(v6 + 488) = a1;
  *(_DWORD *)(v6 + 472) = 0;
  *(_QWORD *)(v6 + 504) = a1;
  *(_QWORD *)(v6 + 328) = &off_1C61DE0;
  *(_QWORD *)v6 = &off_1C542B0;
  *(_QWORD *)(v6 + 480) = 0;
  *(_QWORD *)(v6 + 496) = 0;
  *(_QWORD *)(v6 + 512) = 0;
  *(_QWORD *)(v6 + 520) = a1;
  *(_QWORD *)(v6 + 528) = 0;
  *(_QWORD *)(v6 + 536) = a1;
  sub_16744A0(v6 + 544, a1);
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v6 + 568) = v7;
  *(_QWORD *)(v6 + 576) = 8;
  *(_DWORD *)(v6 + 584) = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)(v6 + 592) = 0;
  *(_QWORD *)(v6 + 600) = a1;
  *(_QWORD *)(v6 + 608) = 0;
  *(_QWORD *)(v6 + 616) = 0;
  *(_QWORD *)(v6 + 624) = a1;
  *(_QWORD *)(v6 + 632) = 0;
  *(_QWORD *)(v6 + 640) = a1;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v24 = 1;
  v25 = 0;
  v26 = 1;
  v27 = 0;
  sub_182CBA0(v8, &v26);
  BYTE4(v26) &= ~1u;
  LODWORD(v26) = 1;
  v9 = sub_1674520(v6 + 544, &v24, 1);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = *(_QWORD *)(v6 + 616);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v6 + 624);
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
    {
      v23 = v9;
      sub_15D7BC0(v11, v10);
      v9 = v23;
    }
  }
  *(_QWORD *)(v6 + 616) = v9;
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  sub_182CBA0(v22, &v26);
  v24 = 0;
  v25 = 0;
  v26 = 1;
  v27 = 0;
  sub_182CBA0(qword_1C7F2C0, &v26);
  BYTE4(v26) &= ~1u;
  LODWORD(v26) = 1;
  v13 = sub_1674520(v6 + 544, &v24, 1);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14 = *(_QWORD *)(v6 + 632);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v6 + 640);
    v12 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v12 )
    {
      v21 = v13;
      sub_15D7BC0(v15, v14);
      v13 = v21;
    }
  }
  v16 = qword_1C7F2C0;
  *(_QWORD *)(v6 + 632) = v13;
  sub_182CBA0(v16, &v24);
  sub_182CBA0(v16, &v26);
  v17 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  v18 = (unsigned __int64)v17 << 20;
  v12 = v17 == -1;
  v19 = -1;
  if ( !v12 )
    v19 = v18;
  *(_QWORD *)(v6 + 648) = v19;
  *(_DWORD *)(v6 + 656) = sub_1859960(a2, "max_steps", 0xFFFFFFFFLL);
  *(_BYTE *)(v6 + 660) = sub_1859610(a2, "produce_models", 0);
  *(_QWORD *)(v5 + 16) = v6;
  return sub_EE8D70(v5);
}

