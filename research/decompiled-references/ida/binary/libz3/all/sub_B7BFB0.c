__int64 __fastcall sub_B7BFB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rax
  int *v7; // r14
  int v8; // eax
  __int64 v9; // rax
  int *v10; // r13
  void *v11; // rbp
  int v12; // edx
  char v13; // cl
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // si
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rdx
  int v21; // [rsp+20h] [rbp-128h] BYREF
  char v22; // [rsp+24h] [rbp-124h]
  __int64 v23; // [rsp+28h] [rbp-120h]
  int v24; // [rsp+30h] [rbp-118h] BYREF
  char v25; // [rsp+34h] [rbp-114h]
  __int64 v26; // [rsp+38h] [rbp-110h]
  __int64 v27; // [rsp+40h] [rbp-108h] BYREF
  __int64 v28; // [rsp+48h] [rbp-100h]
  __int64 v29; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-F0h]
  int v31; // [rsp+60h] [rbp-E8h] BYREF
  char v32; // [rsp+64h] [rbp-E4h]
  __int64 v33; // [rsp+68h] [rbp-E0h]
  int v34; // [rsp+70h] [rbp-D8h] BYREF
  char v35; // [rsp+74h] [rbp-D4h]
  __int64 v36; // [rsp+78h] [rbp-D0h]
  int v37; // [rsp+80h] [rbp-C8h] BYREF
  char v38; // [rsp+84h] [rbp-C4h]
  __int64 v39; // [rsp+88h] [rbp-C0h]
  int v40; // [rsp+90h] [rbp-B8h]
  char v41; // [rsp+94h] [rbp-B4h]
  __int64 v42; // [rsp+98h] [rbp-B0h]
  int v43; // [rsp+A0h] [rbp-A8h]
  int v44; // [rsp+B0h] [rbp-98h] BYREF
  char v45; // [rsp+B4h] [rbp-94h]
  __int64 v46; // [rsp+B8h] [rbp-90h]
  int v47; // [rsp+C0h] [rbp-88h]
  char v48; // [rsp+C4h] [rbp-84h]
  __int64 v49; // [rsp+C8h] [rbp-80h]
  int v50; // [rsp+D0h] [rbp-78h]
  char v51[32]; // [rsp+E0h] [rbp-68h] BYREF
  int v52; // [rsp+100h] [rbp-48h]

  v3 = (unsigned int)(2 * a3);
  v4 = 5 * v3;
  v5 = (unsigned int)v3 | 1;
  v6 = *(_QWORD *)(a2 + 992);
  v38 &= 0xFCu;
  v7 = (int *)(v6 + 8 * v4);
  v41 &= 0xFCu;
  v37 = 0;
  v39 = 0;
  v40 = 1;
  v42 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v37, v7);
  v8 = v7[8];
  v45 &= 0xFCu;
  v43 = v8;
  v9 = *(_QWORD *)(a2 + 992);
  v48 &= 0xFCu;
  v10 = (int *)(v9 + 40 * v5);
  v44 = 0;
  v46 = 0;
  v47 = 1;
  v49 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v44, v10);
  v50 = v10[8];
  sub_89AC50((__int64)v51, (__int64)&v37, (__int64)&v44);
  v23 = 0;
  v22 &= 0xFCu;
  v25 &= 0xFCu;
  v24 = 1;
  v26 = 0;
  v21 = v52;
  sub_182CBA0(qword_1C7F2C0, &v24);
  v25 &= ~1u;
  BYTE4(v27) &= 0xFCu;
  BYTE4(v29) &= 0xFCu;
  v24 = 1;
  LODWORD(v27) = 0;
  v28 = 0;
  LODWORD(v29) = 1;
  v30 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v27, &v21);
  sub_3EBE30((__int64)&v31, a2 + 1592, (__int64)&v27);
  sub_27B340(a1, (__int64)v51, &v31);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  sub_182CBA0(v11, &v34);
  sub_25A130((char *)&v27);
  sub_25A130((char *)&v21);
  v27 = 2;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  sub_182CBA0(qword_1C7F2C0, &v29);
  BYTE4(v29) &= ~1u;
  LODWORD(v29) = 1;
  sub_27B620((__int64)&v31, a1, (__int64)&v27);
  v12 = v31;
  v13 = v32;
  v31 = *(_DWORD *)a1;
  v14 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)a1 = v12;
  v15 = v33;
  v33 = v14;
  LOBYTE(v14) = *(_BYTE *)(a1 + 4);
  *(_QWORD *)(a1 + 8) = v15;
  LOBYTE(v15) = v13;
  v13 &= ~2u;
  v16 = v14 & 0xFD;
  v32 = v14 & 1 | v13 & 0xFE | v14 & 2;
  LODWORD(v14) = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 4) = v13 & 1 | v16 & 0xFE | v15 & 2;
  LODWORD(v15) = v34;
  v34 = v14;
  v17 = *(_QWORD *)(a1 + 24);
  v18 = v35;
  *(_DWORD *)(a1 + 16) = v15;
  v19 = v36;
  v36 = v17;
  LOBYTE(v17) = *(_BYTE *)(a1 + 20);
  *(_QWORD *)(a1 + 24) = v19;
  LOBYTE(v19) = v18;
  v18 &= ~2u;
  v35 = v17 & 1 | v18 & 0xFE | v17 & 2;
  *(_BYTE *)(a1 + 20) = v18 & 1 | v17 & 0xFC | v19 & 2;
  sub_25A130((char *)&v31);
  sub_25A130((char *)&v27);
  sub_25A130(v51);
  sub_25A130((char *)&v44);
  sub_25A130((char *)&v37);
  return a1;
}

