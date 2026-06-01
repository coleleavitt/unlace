__int64 __fastcall sub_C1B430(__int64 *a1, unsigned int a2)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rax
  char v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  void *v12; // rsi
  unsigned __int8 **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 **v17; // r13
  unsigned __int64 v18; // rdi
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 *v24; // r13
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-118h]
  __int64 v27; // [rsp+0h] [rbp-118h]
  __int64 v28; // [rsp+8h] [rbp-110h]
  __int64 v29; // [rsp+8h] [rbp-110h]
  __int64 v30; // [rsp+10h] [rbp-108h]
  const void *v31; // [rsp+10h] [rbp-108h]
  __int64 v32; // [rsp+10h] [rbp-108h]
  char v33; // [rsp+18h] [rbp-100h]
  __int64 v34; // [rsp+18h] [rbp-100h]
  const void *v35; // [rsp+18h] [rbp-100h]
  __int64 v36; // [rsp+20h] [rbp-F8h]
  char v37; // [rsp+20h] [rbp-F8h]
  char v38; // [rsp+28h] [rbp-F0h]
  char v40; // [rsp+34h] [rbp-E4h]
  void *v41[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-B8h] BYREF
  char v44; // [rsp+68h] [rbp-B0h]
  void *v45[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 16LL) + 8LL);
  v5 = *(_QWORD *)(*(_QWORD *)a1[1] + 16LL);
  LODWORD(v43) = 0;
  BYTE4(v43) &= ~1u;
  v26 = v5;
  v6 = *(_BYTE *)(v3 + 128) & 1;
  if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
  {
    v7 = *(_QWORD *)v3;
    v8 = *(_QWORD *)(v3 + 8);
    BYTE4(v45[0]) &= ~1u;
    LODWORD(v45[0]) = 0;
    sub_A513D0((__int64)v45);
    sub_A510D0((__int64)v45, v7, v8, (__int64 *)(v3 + 16), v6);
    sub_A4FD20((__int64)&v43, (__int64)v45);
    if ( LODWORD(v45[0]) <= 1 )
      goto LABEL_3;
  }
  else
  {
    v37 = *(_BYTE *)(v3 + 24);
    v21 = *(_QWORD *)(v3 + 8);
    v35 = *(const void **)(v3 + 48);
    v32 = *(unsigned int *)(v3 + 56);
    v29 = *(_QWORD *)v3;
    BYTE4(v45[0]) &= ~1u;
    LODWORD(v45[0]) = 0;
    sub_A513D0((__int64)v45);
    sub_A51270((__int64)v45, v29, v21, (_QWORD *)(v3 + 16), v35, v32, (v37 & 2) != 0, v6);
    sub_A4FD20((__int64)&v43, (__int64)v45);
    if ( LODWORD(v45[0]) <= 1 )
      goto LABEL_3;
  }
  sub_A4F8E0((int *)v45);
LABEL_3:
  if ( *(_BYTE *)(v3 + 129) )
    BYTE4(v43) |= 1u;
  sub_A53AF0((__int64)v41, &v43, v26, v4);
  if ( (unsigned int)v43 > 1 )
    sub_A4F8E0((int *)&v43);
  v9 = a1[3];
  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 24LL) + 8LL);
  v10 = *(_QWORD *)(*(_QWORD *)a1[1] + 16LL);
  LODWORD(v43) = 0;
  BYTE4(v43) &= ~1u;
  v27 = v10;
  if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    v33 = *(_BYTE *)(v9 + 128) & 1;
    v30 = *(_QWORD *)v9;
    BYTE4(v45[0]) &= ~1u;
    LODWORD(v45[0]) = 0;
    sub_A513D0((__int64)v45);
    sub_A510D0((__int64)v45, v30, v11, (__int64 *)(v9 + 16), v33);
    sub_A4FD20((__int64)&v43, (__int64)v45);
    if ( LODWORD(v45[0]) <= 1 )
      goto LABEL_9;
  }
  else
  {
    v38 = *(_BYTE *)(v9 + 24);
    v20 = *(_QWORD *)(v9 + 8);
    v40 = *(_BYTE *)(v9 + 128) & 1;
    v31 = *(const void **)(v9 + 48);
    v36 = *(unsigned int *)(v9 + 56);
    v34 = *(_QWORD *)v9;
    BYTE4(v45[0]) &= ~1u;
    LODWORD(v45[0]) = 0;
    sub_A513D0((__int64)v45);
    sub_A51270((__int64)v45, v34, v20, (_QWORD *)(v9 + 16), v31, v36, (v38 & 2) != 0, v40);
    sub_A4FD20((__int64)&v43, (__int64)v45);
    if ( LODWORD(v45[0]) <= 1 )
      goto LABEL_9;
  }
  sub_A4F8E0((int *)v45);
LABEL_9:
  if ( *(_BYTE *)(v9 + 129) )
    BYTE4(v43) |= 1u;
  sub_A53AF0((__int64)v45, &v43, v27, v28);
  if ( (unsigned int)v43 > 1 )
    sub_A4F8E0((int *)&v43);
  v12 = *(void **)a1[2];
  v13 = (unsigned __int8 **)sub_E33C10(*(_QWORD *)a1[1], v12, a2, 0);
  v17 = v13;
  if ( v13 )
  {
    sub_AEC220(v13, (_BYTE *)v41[0], (signed __int64)v41[1]);
    v12 = v45[0];
    sub_AEC220(v17, (_BYTE *)v45[0], (signed __int64)v45[1]);
  }
  v18 = *(_QWORD *)a1[4];
  if ( v18 )
  {
    if ( v18 == *(_QWORD *)a1[5] )
    {
      v22 = *(_QWORD *)a1[1];
      v23 = sub_C00A40(v18, (__int64)v12, v14, v15, v16);
      v24 = (__int64 *)sub_E33DB0(v22, v23, 2482);
      v25 = sub_EEC8C0(*(_QWORD *)a1[4]);
      if ( v24 )
      {
        v43 = v25;
        v44 = 1;
        sub_AEC610(v24, &v43);
      }
    }
  }
  if ( v45[0] != &v46 )
    operator delete(v45[0]);
  if ( v41[0] != &v42 )
    operator delete(v41[0]);
  return 0;
}
