__int64 __fastcall sub_760120(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbx
  _OWORD *v6; // rax
  void *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // r15
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // [rsp+0h] [rbp-70h]
  void *v21; // [rsp+8h] [rbp-68h]
  __int64 v22; // [rsp+8h] [rbp-68h]
  __int64 v23; // [rsp+18h] [rbp-58h] BYREF
  __int64 v24; // [rsp+20h] [rbp-50h]
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h]

  v2 = a1 + 24;
  v3 = sub_186B270(0x20u);
  *(_DWORD *)(v3 + 8) = 0;
  v4 = v3;
  *(_QWORD *)v3 = &off_1C542D0;
  sub_1858590(v3 + 24, a1 + 24);
  v5 = sub_186B270(0x2A0u);
  sub_1584DD0(v5, a2, *(_DWORD *)(a2 + 712) != 0);
  *(_QWORD *)(v5 + 144) = v5 + 536;
  *(_QWORD *)v5 = &off_1C54290;
  *(_DWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  sub_1584DD0(v5 + 168, a2, 0);
  *(_QWORD *)(v5 + 312) = 0;
  *(_DWORD *)(v5 + 320) = 0;
  *(_QWORD *)(v5 + 168) = &off_1C61DB8;
  sub_1584DD0(v5 + 328, a2, 0);
  *(_QWORD *)(v5 + 488) = a2;
  *(_DWORD *)(v5 + 472) = 0;
  *(_QWORD *)(v5 + 504) = a2;
  *(_QWORD *)(v5 + 328) = &off_1C61DE0;
  *(_QWORD *)v5 = &off_1C542B0;
  *(_QWORD *)(v5 + 480) = 0;
  *(_QWORD *)(v5 + 496) = 0;
  *(_QWORD *)(v5 + 512) = 0;
  *(_QWORD *)(v5 + 520) = a2;
  *(_QWORD *)(v5 + 528) = 0;
  *(_QWORD *)(v5 + 536) = a2;
  sub_16744A0(v5 + 544, a2);
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v5 + 568) = v6;
  *(_QWORD *)(v5 + 576) = 8;
  *(_DWORD *)(v5 + 584) = 0;
  v7 = qword_1C7F2C0;
  *(_QWORD *)(v5 + 592) = 0;
  *(_QWORD *)(v5 + 600) = a2;
  *(_QWORD *)(v5 + 608) = 0;
  *(_QWORD *)(v5 + 616) = 0;
  *(_QWORD *)(v5 + 624) = a2;
  *(_QWORD *)(v5 + 632) = 0;
  *(_QWORD *)(v5 + 640) = a2;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v23 = 1;
  v24 = 0;
  v25 = 1;
  v26 = 0;
  sub_182CBA0(v7, &v25);
  BYTE4(v25) &= ~1u;
  LODWORD(v25) = 1;
  v8 = sub_1674520(v5 + 544, &v23, 1);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *(_QWORD *)(v5 + 616);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v5 + 624);
    v11 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v11 )
    {
      v22 = v8;
      sub_15D7BC0(v10, v9);
      v8 = v22;
    }
  }
  *(_QWORD *)(v5 + 616) = v8;
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v23);
  sub_182CBA0(v21, &v25);
  v23 = 0;
  v24 = 0;
  v25 = 1;
  v26 = 0;
  sub_182CBA0(qword_1C7F2C0, &v25);
  BYTE4(v25) &= ~1u;
  LODWORD(v25) = 1;
  v12 = sub_1674520(v5 + 544, &v23, 1);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = *(_QWORD *)(v5 + 632);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v5 + 640);
    v11 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v11 )
    {
      v20 = v12;
      sub_15D7BC0(v14, v13);
      v12 = v20;
    }
  }
  v15 = qword_1C7F2C0;
  *(_QWORD *)(v5 + 632) = v12;
  sub_182CBA0(v15, &v23);
  sub_182CBA0(v15, &v25);
  v16 = sub_1859960(v2, "max_memory", 0xFFFFFFFFLL);
  v17 = (unsigned __int64)v16 << 20;
  v11 = v16 == -1;
  v18 = -1;
  if ( !v11 )
    v18 = v17;
  *(_QWORD *)(v5 + 648) = v18;
  *(_DWORD *)(v5 + 656) = sub_1859960(v2, "max_steps", 0xFFFFFFFFLL);
  *(_BYTE *)(v5 + 660) = sub_1859610(v2, "produce_models", 0);
  *(_QWORD *)(v4 + 16) = v5;
  return v4;
}

