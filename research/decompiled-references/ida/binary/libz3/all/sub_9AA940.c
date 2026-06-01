__int64 __fastcall sub_9AA940(_QWORD *a1, unsigned int a2, char a3, __int64 a4, int *a5)
{
  int v7; // edx
  char v8; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // di
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // r14
  char v16; // di
  char v17; // si
  char v18; // si
  __int64 v19; // rax
  int v20; // edx
  char v21; // si
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // di
  char v25; // si
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // di
  char v29; // si
  char v30; // si
  __int64 v31; // rax
  void *v32; // rbx
  __int64 v33; // r14
  int *v34; // rax
  int *v35; // rdx
  __int64 v36; // rsi
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // di
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 result; // rax
  void *v51; // [rsp+18h] [rbp-80h]
  void *v52; // [rsp+18h] [rbp-80h]
  int v53; // [rsp+20h] [rbp-78h] BYREF
  char v54; // [rsp+24h] [rbp-74h]
  __int64 v55; // [rsp+28h] [rbp-70h]
  int v56; // [rsp+30h] [rbp-68h] BYREF
  char v57; // [rsp+34h] [rbp-64h]
  __int64 v58; // [rsp+38h] [rbp-60h]
  int v59; // [rsp+40h] [rbp-58h] BYREF
  char v60; // [rsp+44h] [rbp-54h]
  __int64 v61; // [rsp+48h] [rbp-50h]
  int v62; // [rsp+50h] [rbp-48h] BYREF
  char v63; // [rsp+54h] [rbp-44h]
  __int64 v64; // [rsp+58h] [rbp-40h]

  sub_91F480((__int64)&v53, (__int64)&qword_1C7F1C0);
  sub_1831620(qword_1C7F2C0, &v53);
  sub_1831620(qword_1C7F2C0, &v59);
  v7 = v53;
  v8 = *(_BYTE *)(a4 + 4);
  v53 = *(_DWORD *)a4;
  v9 = *(_QWORD *)(a4 + 8);
  *(_DWORD *)a4 = v7;
  v10 = v55;
  v55 = v9;
  LOBYTE(v9) = v54;
  v11 = v8 & 0xFD;
  *(_QWORD *)(a4 + 8) = v10;
  LOBYTE(v10) = v9;
  LOBYTE(v9) = v9 & 0xFD;
  LOBYTE(v10) = v9 & 1 | v8 & 0xFC | v10 & 2;
  LOBYTE(v9) = v9 | v8 & 2;
  v12 = *(_BYTE *)(a4 + 20);
  *(_BYTE *)(a4 + 4) = v10;
  v54 = v11 & 1 | v9 & 0xFE;
  LODWORD(v9) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a4 + 16) = v56;
  v56 = v9;
  v13 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = v58;
  v58 = v13;
  LOBYTE(v13) = v57 & 0xFC | v12 & 2;
  *(_BYTE *)(a4 + 20) = v57 & 1 | v12 & 0xFC | v57 & 2;
  v57 = v12 & 1 | v13;
  LODWORD(v13) = *(_DWORD *)(a4 + 32);
  *(_DWORD *)(a4 + 32) = v59;
  v59 = v13;
  v14 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(a4 + 40) = v61;
  v61 = v14;
  v15 = qword_1C7F2C0;
  v16 = *(_BYTE *)(a4 + 36);
  v17 = v16 & 2;
  v16 &= ~2u;
  LOBYTE(v14) = v60 & 0xFD | v17;
  v18 = *(_BYTE *)(a4 + 52);
  *(_BYTE *)(a4 + 36) = v60 & 1 | v16 & 0xFE | v60 & 2;
  v60 = v16 & 1 | v14 & 0xFE;
  LODWORD(v14) = *(_DWORD *)(a4 + 48);
  *(_DWORD *)(a4 + 48) = v62;
  v62 = v14;
  v19 = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(a4 + 56) = v64;
  v64 = v19;
  LOBYTE(v19) = v63 & 0xFD | v18 & 2;
  *(_BYTE *)(a4 + 52) = v63 & 1 | v18 & 0xFC | v63 & 2;
  v63 = v18 & 1 | v19 & 0xFE;
  sub_182CBA0(v15, &v59);
  sub_182CBA0(v15, &v62);
  v51 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v53);
  sub_182CBA0(v51, &v56);
  sub_91F480((__int64)&v53, (__int64)&qword_1C7F1C0);
  sub_1831620(qword_1C7F2C0, &v53);
  sub_1831620(qword_1C7F2C0, &v59);
  v20 = v53;
  v21 = *((_BYTE *)a5 + 4);
  v53 = *a5;
  v22 = *((_QWORD *)a5 + 1);
  *a5 = v20;
  v23 = v55;
  v55 = v22;
  LOBYTE(v22) = v54;
  v24 = v21 & 0xFD;
  *((_QWORD *)a5 + 1) = v23;
  LOBYTE(v23) = v22;
  LOBYTE(v22) = v22 & 0xFD;
  LOBYTE(v23) = v22 & 1 | v21 & 0xFC | v23 & 2;
  LOBYTE(v22) = v22 | v21 & 2;
  v25 = *((_BYTE *)a5 + 20);
  *((_BYTE *)a5 + 4) = v23;
  v54 = v24 & 1 | v22 & 0xFE;
  LODWORD(v22) = a5[4];
  a5[4] = v56;
  v56 = v22;
  v26 = *((_QWORD *)a5 + 3);
  *((_QWORD *)a5 + 3) = v58;
  v58 = v26;
  LOBYTE(v26) = v57 & 0xFC | v25 & 2;
  *((_BYTE *)a5 + 20) = v57 & 1 | v25 & 0xFC | v57 & 2;
  v57 = v25 & 1 | v26;
  LODWORD(v26) = a5[8];
  a5[8] = v59;
  v59 = v26;
  v27 = *((_QWORD *)a5 + 5);
  *((_QWORD *)a5 + 5) = v61;
  v61 = v27;
  v28 = *((_BYTE *)a5 + 36);
  v29 = v28 & 2;
  v28 &= ~2u;
  LOBYTE(v27) = v60 & 0xFD | v29;
  v30 = *((_BYTE *)a5 + 52);
  *((_BYTE *)a5 + 36) = v60 & 1 | v28 & 0xFE | v60 & 2;
  v60 = v28 & 1 | v27 & 0xFE;
  LODWORD(v27) = a5[12];
  a5[12] = v62;
  v62 = v27;
  v31 = *((_QWORD *)a5 + 7);
  *((_QWORD *)a5 + 7) = v64;
  v64 = v31;
  LOBYTE(v31) = v63 & 0xFD | v30 & 2;
  *((_BYTE *)a5 + 52) = v63 & 1 | v30 & 0xFC | v63 & 2;
  v63 = v30 & 1 | v31 & 0xFE;
  v52 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v59);
  sub_182CBA0(v52, &v62);
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v53);
  sub_182CBA0(v32, &v56);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1[86] + 8LL * a2) )
      goto LABEL_7;
    v35 = sub_9AA900((__int64)a1, a2);
    v36 = *(_QWORD *)(a1[86] + 8LL * a2) + 16LL;
  }
  else
  {
    v33 = *(_QWORD *)(a1[85] + 8LL * a2);
    if ( !v33 )
      goto LABEL_7;
    v34 = sub_9AA900((__int64)a1, a2);
    v35 = (int *)(v33 + 16);
    v36 = (__int64)v34;
  }
  sub_992E80((__int64)&v53, v36, (__int64)v35);
  v37 = v53;
  v53 = *a5;
  v38 = *((_QWORD *)a5 + 1);
  *a5 = v37;
  v39 = v55;
  v55 = v38;
  LOBYTE(v38) = *((_BYTE *)a5 + 4);
  *((_QWORD *)a5 + 1) = v39;
  LOBYTE(v39) = v38 & 0xFC | v54 & 2 | v54 & 1;
  v54 = v38 & 1 | v54 & 0xFC | v38 & 2;
  LODWORD(v38) = a5[4];
  *((_BYTE *)a5 + 4) = v39;
  LODWORD(v39) = v56;
  v56 = v38;
  v40 = *((_QWORD *)a5 + 3);
  a5[4] = v39;
  v41 = v58;
  v58 = v40;
  LOBYTE(v40) = *((_BYTE *)a5 + 20);
  *((_QWORD *)a5 + 3) = v41;
  LOBYTE(v41) = v40 & 0xFC | v57 & 2 | v57 & 1;
  v57 = v40 & 1 | v57 & 0xFC | v40 & 2;
  LODWORD(v40) = a5[8];
  *((_BYTE *)a5 + 20) = v41;
  LODWORD(v41) = v59;
  v59 = v40;
  v42 = *((_QWORD *)a5 + 5);
  a5[8] = v41;
  v43 = v61;
  v61 = v42;
  *((_QWORD *)a5 + 5) = v43;
  v44 = *((_BYTE *)a5 + 36);
  LOBYTE(v42) = v44 & 2;
  v44 &= ~2u;
  LOBYTE(v43) = v44 & 0xFE | v60 & 2 | v60 & 1;
  v60 = v44 & 1 | v60 & 0xFC | v42 & 0xFE;
  LODWORD(v42) = a5[12];
  *((_BYTE *)a5 + 36) = v43;
  LODWORD(v43) = v62;
  v62 = v42;
  v45 = *((_QWORD *)a5 + 7);
  a5[12] = v43;
  v46 = v64;
  v64 = v45;
  LOBYTE(v45) = *((_BYTE *)a5 + 52);
  *((_QWORD *)a5 + 7) = v46;
  LOBYTE(v46) = v45 & 0xFC | v63 & 2 | v63 & 1;
  v63 = v45 & 1 | v63 & 0xFC | v45 & 2;
  *((_BYTE *)a5 + 52) = v46;
  sub_25A130((char *)&v59);
  sub_25A130((char *)&v53);
LABEL_7:
  result = a1[82];
  if ( (*(_BYTE *)(result + 4LL * a2 + 3) & 0x40) != 0 )
    return sub_98B520(a4, (int *)&qword_1C7F1C0);
  return result;
}

