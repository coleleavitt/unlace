__int64 __fastcall sub_9A5B20(_QWORD *a1, unsigned int a2, char a3, __int64 a4, __int64 a5)
{
  void *v7; // r15
  int v8; // edx
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // di
  char v13; // si
  __int64 v14; // rax
  void *v15; // rdi
  int v16; // edx
  char v17; // si
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // di
  char v21; // si
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v34; // [rsp+10h] [rbp-68h]
  void *v35; // [rsp+18h] [rbp-60h]
  void *v36; // [rsp+18h] [rbp-60h]
  int v37; // [rsp+20h] [rbp-58h] BYREF
  char v38; // [rsp+24h] [rbp-54h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+30h] [rbp-48h] BYREF
  char v41; // [rsp+34h] [rbp-44h]
  __int64 v42; // [rsp+38h] [rbp-40h]

  v38 &= 0xFCu;
  v41 &= 0xFCu;
  v7 = qword_1C7F2C0;
  v37 = 0;
  v39 = 0;
  v40 = 1;
  v42 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v37, &qword_1C7F280);
  else
    v37 = qword_1C7F280;
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v7, &v40, &qword_1C7F290);
  }
  else
  {
    v41 &= ~1u;
    v40 = qword_1C7F290;
  }
  sub_1831620(qword_1C7F2C0, &v37);
  v8 = v37;
  v9 = *(_BYTE *)(a4 + 4);
  v37 = *(_DWORD *)a4;
  v10 = *(_QWORD *)(a4 + 8);
  *(_DWORD *)a4 = v8;
  v11 = v39;
  v39 = v10;
  LOBYTE(v10) = v38;
  v12 = v9 & 0xFD;
  *(_QWORD *)(a4 + 8) = v11;
  LOBYTE(v11) = v10;
  LOBYTE(v10) = v10 & 0xFD;
  LOBYTE(v11) = v10 & 1 | v9 & 0xFC | v11 & 2;
  LOBYTE(v10) = v10 | v9 & 2;
  v13 = *(_BYTE *)(a4 + 20);
  *(_BYTE *)(a4 + 4) = v11;
  v38 = v12 & 1 | v10 & 0xFE;
  LODWORD(v10) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a4 + 16) = v40;
  v40 = v10;
  v14 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = v42;
  v42 = v14;
  LOBYTE(v14) = v41 & 0xFD | v13 & 2;
  *(_BYTE *)(a4 + 20) = v41 & 1 | v13 & 0xFC | v41 & 2;
  v41 = v13 & 1 | v14 & 0xFE;
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v37);
  sub_182CBA0(v35, &v40);
  v38 &= 0xFCu;
  v15 = qword_1C7F2C0;
  v41 &= 0xFCu;
  v37 = 0;
  v39 = 0;
  v40 = 1;
  v42 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v37, &qword_1C7F280);
  else
    v37 = qword_1C7F280;
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v15, &v40, &qword_1C7F290);
  }
  else
  {
    v41 &= ~1u;
    v40 = qword_1C7F290;
  }
  sub_1831620(qword_1C7F2C0, &v37);
  v16 = v37;
  v17 = *(_BYTE *)(a5 + 4);
  v37 = *(_DWORD *)a5;
  v18 = *(_QWORD *)(a5 + 8);
  *(_DWORD *)a5 = v16;
  v19 = v39;
  v39 = v18;
  LOBYTE(v18) = v38;
  v20 = v17 & 0xFD;
  *(_QWORD *)(a5 + 8) = v19;
  LOBYTE(v19) = v18;
  LOBYTE(v18) = v18 & 0xFD;
  LOBYTE(v19) = v18 & 1 | v17 & 0xFC | v19 & 2;
  LOBYTE(v18) = v18 | v17 & 2;
  v21 = *(_BYTE *)(a5 + 20);
  *(_BYTE *)(a5 + 4) = v19;
  v38 = v20 & 1 | v18 & 0xFE;
  LODWORD(v18) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(a5 + 16) = v40;
  v40 = v18;
  v22 = *(_QWORD *)(a5 + 24);
  *(_QWORD *)(a5 + 24) = v42;
  v42 = v22;
  LOBYTE(v22) = v41 & 0xFD | v21 & 2;
  *(_BYTE *)(a5 + 20) = v41 & 1 | v21 & 0xFC | v41 & 2;
  v41 = v21 & 1 | v22 & 0xFE;
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v37);
  sub_182CBA0(v36, &v40);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1[78] + 8LL * a2) )
      goto LABEL_15;
    v24 = sub_999800((__int64)a1, a2);
    v23 = *(_QWORD *)(a1[78] + 8LL * a2) + 16LL;
  }
  else
  {
    v34 = *(_QWORD *)(a1[77] + 8LL * a2);
    if ( !v34 )
      goto LABEL_15;
    v23 = sub_999800((__int64)a1, a2);
    v24 = v34 + 16;
  }
  sub_3EBB80((__int64)&v37, v23, v24);
  v25 = v37;
  v37 = *(_DWORD *)a5;
  v26 = *(_QWORD *)(a5 + 8);
  *(_DWORD *)a5 = v25;
  v27 = v39;
  v39 = v26;
  LOBYTE(v26) = *(_BYTE *)(a5 + 4);
  *(_QWORD *)(a5 + 8) = v27;
  LOBYTE(v27) = v26 & 0xFC | v38 & 2 | v38 & 1;
  v38 = v26 & 1 | v38 & 0xFC | v26 & 2;
  LODWORD(v26) = *(_DWORD *)(a5 + 16);
  *(_BYTE *)(a5 + 4) = v27;
  LODWORD(v27) = v40;
  v40 = v26;
  v28 = *(_QWORD *)(a5 + 24);
  *(_DWORD *)(a5 + 16) = v27;
  v29 = v42;
  v42 = v28;
  LOBYTE(v28) = *(_BYTE *)(a5 + 20);
  *(_QWORD *)(a5 + 24) = v29;
  LOBYTE(v29) = v28 & 0xFC | v41 & 2 | v41 & 1;
  v41 = v28 & 1 | v41 & 0xFC | v28 & 2;
  *(_BYTE *)(a5 + 20) = v29;
  sub_25A130((char *)&v37);
LABEL_15:
  result = a1[74];
  if ( (*(_BYTE *)(result + 4LL * a2 + 3) & 0x40) != 0 )
    return sub_27B950((__int64)qword_1C7F2C0, a4, &qword_1C7F280);
  return result;
}

