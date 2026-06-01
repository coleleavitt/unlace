void __fastcall sub_737E70(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  unsigned int v4; // eax
  __int64 v5; // rdi
  _QWORD *v6; // r12
  char *v7; // rdi
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v26[64]; // [rsp+18h] [rbp-40h] BYREF

  v2 = sub_186B270(0x318u);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  sub_738AE0(v2, v3, 0, v2 + 536);
  *(_QWORD *)v2 = &off_1C53F10;
  *(_WORD *)(v2 + 564) = 0;
  *(_QWORD *)(v2 + 624) = v2 + 640;
  *(_QWORD *)(v2 + 536) = v3;
  *(_QWORD *)(v2 + 552) = v3;
  *(_DWORD *)(v2 + 560) = 256;
  *(_DWORD *)(v2 + 580) = 0;
  *(_QWORD *)(v2 + 632) = 0x1000000000LL;
  *(_OWORD *)(v2 + 592) = 0;
  *(_OWORD *)(v2 + 608) = 0;
  v25 = 0;
  sub_14DC230(v2 + 552, &v25);
  sub_18572D0(&v25);
  *(_QWORD *)(v2 + 784) = a1 + 32;
  v25 = a1 + 24;
  sub_17F9A60(v26, "rewriter");
  *(_DWORD *)(v2 + 544) = sub_1859980(v25, "bv_ineq_consistency_test_max", v26, 0);
  v4 = sub_1859980(v25, "max_memory", v26, 0xFFFFFFFFLL);
  v5 = v25;
  *(_QWORD *)(v2 + 776) = v4;
  *(_QWORD *)(v2 + 768) = (unsigned int)sub_1859980(v5, "max_steps", v26, 0xFFFFFFFFLL);
  sub_18572D0(v26);
  v6 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  if ( !v6 )
    return;
  v7 = (char *)v6[78];
  v8 = *((unsigned int *)v6 + 158);
  *v6 = &off_1C53F10;
  v9 = &v7[8 * v8];
  if ( v7 != v9 )
  {
    v10 = v7;
    do
    {
      v11 = *(_QWORD *)v10;
      v10 += 8;
      *(_BYTE *)(v11 + 6) &= ~1u;
    }
    while ( v10 != v9 );
  }
  *((_DWORD *)v6 + 158) = 0;
  if ( v7 != (char *)(v6 + 80) && v7 )
    sub_186B220(v7);
  v12 = v6[77];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = v6[76];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = v6[75];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = v6[74];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = v6[66];
  *v6 = &off_1C53EF0;
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = v6[64];
  if ( v17 && (v18 = v6[65], v19 = *(_DWORD *)(v17 + 8) == 1, --*(_DWORD *)(v17 + 8), v19) )
  {
    sub_15D7BC0(v18, v17);
    v20 = v6[62];
    if ( !v20 )
    {
LABEL_22:
      v22 = v6[60];
      if ( v22 )
        goto LABEL_23;
      goto LABEL_25;
    }
  }
  else
  {
    v20 = v6[62];
    if ( !v20 )
      goto LABEL_22;
  }
  v21 = v6[63];
  v19 = (*(_DWORD *)(v20 + 8))-- == 1;
  if ( !v19 )
    goto LABEL_22;
  sub_15D7BC0(v21, v20);
  v22 = v6[60];
  if ( v22 )
  {
LABEL_23:
    v23 = v6[61];
    v19 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v23, v22);
  }
LABEL_25:
  v6[41] = &qword_1C637E8;
  sub_15841B0(v6 + 41);
  v6[21] = &qword_1C637E8;
  sub_15841B0(v6 + 21);
  v24 = v6[20];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  sub_15841B0(v6);
  sub_186B220(v6);
}

