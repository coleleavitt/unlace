_QWORD *__fastcall sub_9AB4C0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // r12
  int *v5; // rax
  int *v6; // r14
  void *v7; // r13
  int v8; // eax
  void *v9; // r13
  int v10; // eax
  void *v11; // rdi
  int v12; // eax
  int v13; // edx
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rdx
  _QWORD *v17; // r13
  __int64 v18; // r15
  _DWORD *v19; // rax
  _BOOL8 v20; // rdx
  __int64 v21; // rax
  void *v22; // rbx
  void *v24; // [rsp+0h] [rbp-E8h]
  void *v25; // [rsp+0h] [rbp-E8h]
  void *v26; // [rsp+0h] [rbp-E8h]
  void *v27; // [rsp+0h] [rbp-E8h]
  int v28; // [rsp+10h] [rbp-D8h] BYREF
  char v29; // [rsp+14h] [rbp-D4h]
  __int64 v30; // [rsp+18h] [rbp-D0h]
  int v31; // [rsp+20h] [rbp-C8h] BYREF
  char v32; // [rsp+24h] [rbp-C4h]
  __int64 v33; // [rsp+28h] [rbp-C0h]
  int v34; // [rsp+30h] [rbp-B8h] BYREF
  char v35; // [rsp+34h] [rbp-B4h]
  __int64 v36; // [rsp+38h] [rbp-B0h]
  int v37; // [rsp+40h] [rbp-A8h] BYREF
  char v38; // [rsp+44h] [rbp-A4h]
  __int64 v39; // [rsp+48h] [rbp-A0h]
  int v40; // [rsp+50h] [rbp-98h] BYREF
  char v41; // [rsp+54h] [rbp-94h]
  __int64 v42; // [rsp+58h] [rbp-90h]
  int v43; // [rsp+60h] [rbp-88h] BYREF
  char v44; // [rsp+64h] [rbp-84h]
  __int64 v45; // [rsp+68h] [rbp-80h]
  int v46; // [rsp+70h] [rbp-78h] BYREF
  char v47; // [rsp+74h] [rbp-74h]
  __int64 v48; // [rsp+78h] [rbp-70h]
  int v49; // [rsp+80h] [rbp-68h] BYREF
  char v50; // [rsp+84h] [rbp-64h]
  __int64 v51; // [rsp+88h] [rbp-60h]
  int v52; // [rsp+90h] [rbp-58h] BYREF
  char v53; // [rsp+94h] [rbp-54h]
  __int64 v54; // [rsp+98h] [rbp-50h]
  int v55; // [rsp+A0h] [rbp-48h] BYREF
  char v56; // [rsp+A4h] [rbp-44h]
  __int64 v57; // [rsp+A8h] [rbp-40h]

  v3 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v4 = v3;
  v5 = sub_9AA900(a1, v3);
  v47 &= 0xFCu;
  v50 &= 0xFCu;
  v6 = v5;
  v46 = 0;
  v7 = qword_1C7F2C0;
  v48 = 0;
  v49 = 1;
  v51 = 0;
  if ( (v5[9] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v46, v5 + 8);
  else
    v46 = v5[8];
  if ( (v6[13] & 1) != 0 )
  {
    sub_182C690(v7, &v49, v6 + 12);
  }
  else
  {
    v8 = v6[12];
    v50 &= ~1u;
    v49 = v8;
  }
  v41 &= 0xFCu;
  v9 = qword_1C7F2C0;
  v44 &= 0xFCu;
  v40 = 0;
  v42 = 0;
  v43 = 1;
  v45 = 0;
  if ( (*(_BYTE *)(a1 + 1508) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v40, a1 + 1504);
  else
    v40 = *(_DWORD *)(a1 + 1504);
  if ( (*(_BYTE *)(a1 + 1524) & 1) != 0 )
  {
    sub_182C690(v9, &v43, a1 + 1520);
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 1520);
    v44 &= ~1u;
    v43 = v10;
  }
  sub_3EBE30((__int64)&v52, (__int64)&v40, (__int64)&v46);
  v35 &= 0xFCu;
  v11 = qword_1C7F2C0;
  v38 &= 0xFCu;
  v34 = 0;
  v36 = 0;
  v37 = 1;
  v39 = 0;
  if ( (v6[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v34, v6);
  else
    v34 = *v6;
  if ( (v6[5] & 1) != 0 )
  {
    sub_182C690(v11, &v37, v6 + 4);
  }
  else
  {
    v12 = v6[4];
    v38 &= ~1u;
    v37 = v12;
  }
  sub_27B340((__int64)&v28, (__int64)&v34, &v52);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v34);
  sub_182CBA0(v24, &v37);
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v52);
  sub_182CBA0(v25, &v55);
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v40);
  sub_182CBA0(v26, &v43);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v46);
  sub_182CBA0(v27, &v49);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4 * v4 + 3) & 0x40) != 0 && ((v32 & 1) != 0 || v31 != 1) )
  {
    sub_992C20((__int64)&v52, (__int64)&v28);
    v13 = v52;
    v52 = v28;
    v28 = v13;
    v14 = v54;
    v54 = v30;
    v30 = v14;
    v15 = v53 & 1;
    LOBYTE(v14) = v29 & 0xFC | v53 & 2;
    v53 = v29 & 1 | v53 & 0xFC | v29 & 2;
    v29 = v15 | v14;
    LODWORD(v14) = v55;
    v55 = v31;
    v31 = v14;
    v16 = v57;
    v57 = v33;
    v33 = v16;
    LOBYTE(v16) = v56 & 1 | v32 & 0xFC | v56 & 2;
    v56 = v32 & 1 | v56 & 0xFC | v32 & 2;
    v32 = v16;
    sub_25A130((char *)&v52);
  }
  v17 = (_QWORD *)sub_186B270(0x10u);
  v18 = *(_QWORD *)(a1 + 1496);
  v19 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v4)) + 24);
  v20 = 0;
  if ( v19 && *v19 == 5 )
    v20 = v19[1] == 1;
  v21 = sub_1343270(v18, &v28, v20);
  v22 = qword_1C7F2C0;
  v17[1] = v21;
  *v17 = off_1C559A8;
  sub_182CBA0(v22, &v28);
  sub_182CBA0(v22, &v31);
  return v17;
}

