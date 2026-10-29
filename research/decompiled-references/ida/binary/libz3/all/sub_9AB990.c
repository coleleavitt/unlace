_QWORD *__fastcall sub_9AB990(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // r12
  __int64 v5; // r14
  void *v6; // rdi
  void *v7; // r13
  int v8; // eax
  void *v9; // rdi
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rdx
  _QWORD *v15; // r13
  __int64 v16; // r15
  _DWORD *v17; // rax
  _BOOL8 v18; // rdx
  __int64 v19; // rax
  void *v20; // rbx
  void *v22; // [rsp+0h] [rbp-E8h]
  void *v23; // [rsp+0h] [rbp-E8h]
  void *v24; // [rsp+0h] [rbp-E8h]
  void *v25; // [rsp+0h] [rbp-E8h]
  void *v26; // [rsp+0h] [rbp-E8h]
  int v27; // [rsp+10h] [rbp-D8h] BYREF
  char v28; // [rsp+14h] [rbp-D4h]
  __int64 v29; // [rsp+18h] [rbp-D0h]
  int v30; // [rsp+20h] [rbp-C8h] BYREF
  char v31; // [rsp+24h] [rbp-C4h]
  __int64 v32; // [rsp+28h] [rbp-C0h]
  int v33; // [rsp+30h] [rbp-B8h] BYREF
  char v34; // [rsp+34h] [rbp-B4h]
  __int64 v35; // [rsp+38h] [rbp-B0h]
  int v36; // [rsp+40h] [rbp-A8h] BYREF
  char v37; // [rsp+44h] [rbp-A4h]
  __int64 v38; // [rsp+48h] [rbp-A0h]
  int v39; // [rsp+50h] [rbp-98h] BYREF
  char v40; // [rsp+54h] [rbp-94h]
  __int64 v41; // [rsp+58h] [rbp-90h]
  int v42; // [rsp+60h] [rbp-88h] BYREF
  char v43; // [rsp+64h] [rbp-84h]
  __int64 v44; // [rsp+68h] [rbp-80h]
  int v45; // [rsp+70h] [rbp-78h] BYREF
  char v46; // [rsp+74h] [rbp-74h]
  __int64 v47; // [rsp+78h] [rbp-70h]
  int v48; // [rsp+80h] [rbp-68h] BYREF
  char v49; // [rsp+84h] [rbp-64h]
  __int64 v50; // [rsp+88h] [rbp-60h]
  int v51; // [rsp+90h] [rbp-58h] BYREF
  char v52; // [rsp+94h] [rbp-54h]
  __int64 v53; // [rsp+98h] [rbp-50h]
  int v54; // [rsp+A0h] [rbp-48h] BYREF
  char v55; // [rsp+A4h] [rbp-44h]
  __int64 v56; // [rsp+A8h] [rbp-40h]

  v3 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v4 = v3;
  v45 = 0;
  v46 &= 0xFCu;
  v5 = sub_999800(a1, v3);
  v49 &= 0xFCu;
  v6 = qword_1C7F2C0;
  v47 = 0;
  v48 = 1;
  v50 = 0;
  if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
  {
    v26 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v45, &qword_1C7F2A0);
    v6 = v26;
  }
  else
  {
    v45 = qword_1C7F2A0;
  }
  if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
  {
    sub_182C690(v6, &v48, &qword_1C7F2B0);
  }
  else
  {
    v49 &= ~1u;
    v48 = qword_1C7F2B0;
  }
  v40 &= 0xFCu;
  v7 = qword_1C7F2C0;
  v43 &= 0xFCu;
  v39 = 0;
  v41 = 0;
  v42 = 1;
  v44 = 0;
  if ( (*(_BYTE *)(a1 + 1412) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v39, a1 + 1408);
  else
    v39 = *(_DWORD *)(a1 + 1408);
  if ( (*(_BYTE *)(a1 + 1428) & 1) != 0 )
  {
    sub_182C690(v7, &v42, a1 + 1424);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 1424);
    v43 &= ~1u;
    v42 = v8;
  }
  sub_3EBE30((__int64)&v51, (__int64)&v39, (__int64)&v45);
  v34 &= 0xFCu;
  v9 = qword_1C7F2C0;
  v37 &= 0xFCu;
  v33 = 0;
  v35 = 0;
  v36 = 1;
  v38 = 0;
  if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v33, v5);
  else
    v33 = *(_DWORD *)v5;
  if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
  {
    sub_182C690(v9, &v36, v5 + 16);
  }
  else
  {
    v10 = *(_DWORD *)(v5 + 16);
    v37 &= ~1u;
    v36 = v10;
  }
  sub_27B340((__int64)&v27, (__int64)&v33, &v51);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v33);
  sub_182CBA0(v22, &v36);
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v51);
  sub_182CBA0(v23, &v54);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v39);
  sub_182CBA0(v24, &v42);
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v45);
  sub_182CBA0(v25, &v48);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4 * v4 + 3) & 0x40) != 0 && ((v31 & 1) != 0 || v30 != 1) )
  {
    sub_992C20((__int64)&v51, (__int64)&v27);
    v11 = v51;
    v51 = v27;
    v27 = v11;
    v12 = v53;
    v53 = v29;
    v29 = v12;
    v13 = v52 & 1;
    LOBYTE(v12) = v28 & 0xFC | v52 & 2;
    v52 = v28 & 1 | v52 & 0xFC | v28 & 2;
    v28 = v13 | v12;
    LODWORD(v12) = v54;
    v54 = v30;
    v30 = v12;
    v14 = v56;
    v56 = v32;
    v32 = v14;
    LOBYTE(v14) = v55 & 1 | v31 & 0xFC | v55 & 2;
    v55 = v31 & 1 | v55 & 0xFC | v31 & 2;
    v31 = v14;
    sub_25A130((char *)&v51);
  }
  v15 = (_QWORD *)sub_186B270(0x10u);
  v16 = *(_QWORD *)(a1 + 1400);
  v17 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v4)) + 24);
  v18 = 0;
  if ( v17 && *v17 == 5 )
    v18 = v17[1] == 1;
  v19 = sub_1343270(v16, &v27, v18);
  v20 = qword_1C7F2C0;
  v15[1] = v19;
  *v15 = off_1C559A8;
  sub_182CBA0(v20, &v27);
  sub_182CBA0(v20, &v30);
  return v15;
}

