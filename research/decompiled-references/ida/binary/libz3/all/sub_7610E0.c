__int64 __fastcall sub_7610E0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  _OWORD *v4; // rax
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // r14
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v20; // [rsp+0h] [rbp-68h]
  void *v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]

  v2 = sub_186B270(0x2A0u);
  v20 = a1 + 24;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  sub_1584DD0(v2, v3, *(_DWORD *)(v3 + 712) != 0);
  *(_DWORD *)(v2 + 152) = 0;
  *(_QWORD *)v2 = &off_1C54290;
  *(_QWORD *)(v2 + 144) = v2 + 536;
  *(_QWORD *)(v2 + 160) = 0;
  sub_1584DD0(v2 + 168, v3, 0);
  *(_QWORD *)(v2 + 312) = 0;
  *(_DWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 168) = &off_1C61DB8;
  sub_1584DD0(v2 + 328, v3, 0);
  *(_QWORD *)(v2 + 488) = v3;
  *(_DWORD *)(v2 + 472) = 0;
  *(_QWORD *)(v2 + 504) = v3;
  *(_QWORD *)(v2 + 328) = &off_1C61DE0;
  *(_QWORD *)(v2 + 480) = 0;
  *(_QWORD *)(v2 + 496) = 0;
  *(_QWORD *)(v2 + 512) = 0;
  *(_QWORD *)(v2 + 520) = v3;
  *(_QWORD *)(v2 + 528) = 0;
  *(_QWORD *)v2 = &off_1C542B0;
  *(_QWORD *)(v2 + 536) = v3;
  sub_16744A0(v2 + 544, v3);
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v2 + 568) = v4;
  *(_QWORD *)(v2 + 576) = 8;
  *(_DWORD *)(v2 + 584) = 0;
  v5 = qword_1C7F2C0;
  *(_QWORD *)(v2 + 592) = 0;
  *(_QWORD *)(v2 + 600) = v3;
  *(_QWORD *)(v2 + 608) = 0;
  *(_QWORD *)(v2 + 616) = 0;
  *(_QWORD *)(v2 + 624) = v3;
  *(_QWORD *)(v2 + 632) = 0;
  *(_QWORD *)(v2 + 640) = v3;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v23 = 1;
  v24 = 0;
  v25 = 1;
  v26 = 0;
  sub_182CBA0(v5, &v25);
  BYTE4(v25) &= ~1u;
  LODWORD(v25) = 1;
  v6 = sub_1674520(v2 + 544, &v23, 1);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = *(_QWORD *)(v2 + 616);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v2 + 624);
    v9 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v9 )
    {
      v22 = v6;
      sub_15D7BC0(v8, v7);
      v6 = v22;
    }
  }
  *(_QWORD *)(v2 + 616) = v6;
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
  v10 = sub_1674520(v2 + 544, &v23, 1);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *(_QWORD *)(v2 + 632);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v2 + 640);
    v9 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v13, v12);
  }
  v14 = qword_1C7F2C0;
  *(_QWORD *)(v2 + 632) = v11;
  sub_182CBA0(v14, &v23);
  sub_182CBA0(v14, &v25);
  v15 = sub_1859960(v20, "max_memory", 0xFFFFFFFFLL);
  v16 = (unsigned __int64)v15 << 20;
  v9 = v15 == -1;
  v17 = -1;
  if ( !v9 )
    v17 = v16;
  *(_QWORD *)(v2 + 648) = v17;
  *(_DWORD *)(v2 + 656) = sub_1859960(v20, "max_steps", 0xFFFFFFFFLL);
  *(_BYTE *)(v2 + 660) = sub_1859610(v20, "produce_models", 0);
  v18 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  return sub_760EA0(v18);
}

