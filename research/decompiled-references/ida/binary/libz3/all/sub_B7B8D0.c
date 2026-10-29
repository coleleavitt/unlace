__int64 __fastcall sub_B7B8D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  int *v5; // rdx
  int *v6; // rdx
  void *v7; // r12
  int v8; // edx
  char v9; // cl
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  void *v17; // r14
  void *v18; // r12
  void *v19; // rbp
  void *v21; // [rsp+18h] [rbp-E0h]
  int v22; // [rsp+20h] [rbp-D8h] BYREF
  char v23; // [rsp+24h] [rbp-D4h]
  __int64 v24; // [rsp+28h] [rbp-D0h]
  int v25; // [rsp+30h] [rbp-C8h]
  char v26; // [rsp+34h] [rbp-C4h]
  __int64 v27; // [rsp+38h] [rbp-C0h]
  int v28; // [rsp+40h] [rbp-B8h] BYREF
  char v29; // [rsp+44h] [rbp-B4h]
  __int64 v30; // [rsp+48h] [rbp-B0h]
  int v31; // [rsp+50h] [rbp-A8h] BYREF
  char v32; // [rsp+54h] [rbp-A4h]
  __int64 v33; // [rsp+58h] [rbp-A0h]
  _BYTE v34[16]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v35[16]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-78h] BYREF
  __int64 v37; // [rsp+88h] [rbp-70h]
  __int64 v38; // [rsp+90h] [rbp-68h] BYREF
  __int64 v39; // [rsp+98h] [rbp-60h]
  int v40; // [rsp+A0h] [rbp-58h] BYREF
  char v41; // [rsp+A4h] [rbp-54h]
  __int64 v42; // [rsp+A8h] [rbp-50h]
  int v43; // [rsp+B0h] [rbp-48h] BYREF
  char v44; // [rsp+B4h] [rbp-44h]
  __int64 v45; // [rsp+B8h] [rbp-40h]

  v3 = (unsigned int)(2 * a3);
  v5 = (int *)(*(_QWORD *)(a2 + 984) + 32 * v3);
  v23 &= 0xFCu;
  v26 &= 0xFCu;
  v22 = 0;
  v24 = 0;
  v25 = 1;
  v27 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v22, v5);
  v29 &= 0xFCu;
  v32 &= 0xFCu;
  v6 = (int *)(*(_QWORD *)(a2 + 984) + 32LL * ((unsigned int)v3 | 1));
  v28 = 0;
  v30 = 0;
  v31 = 1;
  v33 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v28, v6);
  sub_3EBB80((__int64)v34, (__int64)&v22, (__int64)&v28);
  LODWORD(v36) = 0;
  BYTE4(v36) &= 0xFCu;
  BYTE4(v38) &= 0xFCu;
  v37 = 0;
  LODWORD(v38) = 1;
  v39 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v36, &qword_1C7F2A0);
  sub_3EBE30((__int64)&v40, a2 + 1584, (__int64)&v36);
  sub_27B340(a1, (__int64)v34, &v40);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v40);
  sub_182CBA0(v7, &v43);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v36);
  sub_182CBA0(v21, &v38);
  v36 = 2;
  v37 = 0;
  v38 = 1;
  v39 = 0;
  sub_182CBA0(qword_1C7F2C0, &v38);
  BYTE4(v38) &= ~1u;
  LODWORD(v38) = 1;
  sub_27B620((__int64)&v40, a1, (__int64)&v36);
  v8 = v40;
  v9 = v41;
  v10 = qword_1C7F2C0;
  v40 = *(_DWORD *)a1;
  v11 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)a1 = v8;
  v12 = v42;
  v42 = v11;
  LOBYTE(v11) = *(_BYTE *)(a1 + 4);
  *(_QWORD *)(a1 + 8) = v12;
  LOBYTE(v12) = v9;
  v9 &= ~2u;
  v13 = v11 & 0xFD;
  v41 = v11 & 1 | v9 & 0xFE | v11 & 2;
  LODWORD(v11) = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 4) = v9 & 1 | v13 & 0xFE | v12 & 2;
  LODWORD(v12) = v43;
  v43 = v11;
  v14 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 16) = v12;
  v15 = v45;
  v45 = v14;
  LOBYTE(v14) = *(_BYTE *)(a1 + 20);
  v16 = v44;
  *(_QWORD *)(a1 + 24) = v15;
  LOBYTE(v15) = v16;
  v16 &= ~2u;
  v44 = v14 & 1 | v16 & 0xFE | v14 & 2;
  *(_BYTE *)(a1 + 20) = v16 & 1 | v14 & 0xFC | v15 & 2;
  sub_182CBA0(v10, &v40);
  sub_182CBA0(v10, &v43);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v36);
  sub_182CBA0(v17, &v38);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v34);
  sub_182CBA0(v18, v35);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v28);
  sub_182CBA0(v19, &v31);
  sub_25A130((char *)&v22);
  return a1;
}

