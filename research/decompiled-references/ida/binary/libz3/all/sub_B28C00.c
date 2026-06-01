__int64 __fastcall sub_B28C00(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int64 a6)
{
  char v7; // r12
  void *v10; // rdi
  int v11; // r8d
  char v12; // al
  char v13; // si
  int v14; // edi
  int v15; // edx
  __int64 v16; // rdx
  char v17; // r9
  char v18; // r10
  __int64 v19; // rdi
  __int64 v20; // rdx
  char v21; // al
  char v22; // si
  void *v23; // rdi
  char v24; // dl
  void *v25; // rbp
  int v26; // eax
  __int64 v27; // rax
  char v28; // si
  char v29; // dl
  __int64 v30; // rax
  void *v31; // rdi
  __int64 result; // rax
  void *v33; // rdi
  int v34; // edi
  char v35; // al
  int v36; // esi
  void *v37; // r13
  int v38; // edx
  __int64 v39; // rdx
  char v40; // r8
  char v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rdx
  char v44; // cl
  void *v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+28h] [rbp-60h] BYREF
  __int64 v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+38h] [rbp-50h] BYREF
  __int64 v50; // [rsp+40h] [rbp-48h]

  v7 = a5;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 1;
  *(_QWORD *)(a1 + 80) = 0;
  v10 = qword_1C7F2C0;
  if ( !a5 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v47 = 0;
    v48 = 0;
    v49 = 1;
    v50 = 0;
    sub_182CBA0(v10, &v47);
    sub_182CBA0(v10, &v49);
    *(_BYTE *)(a1 + 88) = 1;
    v33 = qword_1C7F2C0;
    *(_QWORD *)(a1 + 96) = 0;
    v47 = 0;
    v48 = 0;
    v49 = 1;
    v50 = 0;
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    {
      sub_182C690(v33, &v47, a3);
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        goto LABEL_8;
    }
    else
    {
      LODWORD(v47) = *(_DWORD *)a3;
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      {
LABEL_8:
        v34 = *(_DWORD *)(a3 + 16);
        v35 = BYTE4(v49);
LABEL_9:
        v36 = v47;
        v37 = qword_1C7F2C0;
        *(_DWORD *)(a1 + 48) = 1;
        v38 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 56) = v36;
        LODWORD(v47) = v38;
        v39 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = v48;
        LOBYTE(v36) = *(_BYTE *)(a1 + 60);
        v48 = v39;
        v40 = v36 & 0xFD;
        v41 = v36 & 0xFD | BYTE4(v47) & 2;
        LOBYTE(v36) = BYTE4(v47) & 0xFC | v36 & 2;
        *(_BYTE *)(a1 + 60) = v41 & 0xFE | BYTE4(v47) & 1;
        LOBYTE(v39) = v36;
        v42 = v50;
        BYTE4(v47) = v40 & 1 | v39;
        LODWORD(v39) = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 72) = v34;
        LODWORD(v49) = v39;
        v43 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 80) = v42;
        v50 = v43;
        v44 = *(_BYTE *)(a1 + 76);
        BYTE4(v49) = v35 & 0xFC | v44 & 3;
        *(_BYTE *)(a1 + 76) = v44 & 0xFC | v7 & 3 | v35 & 2;
        sub_182CBA0(v37, &v47);
        result = sub_182CBA0(v37, &v49);
        v7 = a4;
        goto LABEL_10;
      }
    }
    sub_182C690(v33, &v49, a3 + 16);
    v35 = BYTE4(v49);
    v34 = v49;
    v7 = BYTE4(v49) & 1;
    goto LABEL_9;
  }
  v47 = 0;
  v48 = 0;
  v49 = 1;
  v50 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v46 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v47, a3);
    v10 = v46;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_4;
LABEL_12:
    sub_182C690(v10, &v49, a3 + 16);
    v12 = BYTE4(v49);
    v11 = v49;
    v13 = BYTE4(v49) & 1;
    goto LABEL_5;
  }
  LODWORD(v47) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_12;
LABEL_4:
  v11 = *(_DWORD *)(a3 + 16);
  v12 = BYTE4(v49);
  v13 = 0;
LABEL_5:
  v14 = v47;
  *(_DWORD *)(a1 + 8) = 1;
  v15 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = v14;
  LODWORD(v47) = v15;
  v16 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v48;
  LOBYTE(v14) = *(_BYTE *)(a1 + 20);
  v48 = v16;
  v17 = v14 & 0xFD;
  v18 = v14 & 0xFD | BYTE4(v47) & 2;
  LOBYTE(v14) = BYTE4(v47) & 0xFC | v14 & 2;
  *(_BYTE *)(a1 + 20) = v18 & 0xFE | BYTE4(v47) & 1;
  LOBYTE(v16) = v14;
  v19 = v50;
  BYTE4(v47) = v17 & 1 | v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v11;
  LODWORD(v49) = v16;
  v20 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v19;
  LOBYTE(v19) = v12;
  v50 = v20;
  v21 = v13 | v12 & 2;
  v22 = *(_BYTE *)(a1 + 36);
  LOBYTE(v20) = v19 & 0xFC | v22 & 3;
  v23 = qword_1C7F2C0;
  BYTE4(v49) = v20;
  *(_BYTE *)(a1 + 36) = v22 & 0xFC | v21;
  sub_182CBA0(v23, &v47);
  sub_182CBA0(v23, &v49);
  *(_QWORD *)(a1 + 96) = a6;
  v24 = BYTE4(v47);
  v25 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_BYTE *)(a1 + 88) = a4;
  v26 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = 0;
  LODWORD(v47) = v26;
  v27 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0;
  v48 = v27;
  v28 = *(_BYTE *)(a1 + 60);
  LOBYTE(v27) = v24 & 0xFC | v28 & 3;
  v29 = BYTE4(v49);
  BYTE4(v47) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 60) = v28 & 0xFC;
  LODWORD(v49) = v27;
  v30 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 72) = 1;
  v50 = v30;
  LOBYTE(v30) = *(_BYTE *)(a1 + 76);
  *(_QWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 76) = v30 & 0xFC;
  BYTE4(v49) = v29 & 0xFC | v30 & 3;
  sub_182CBA0(v25, &v47);
  v31 = v25;
  a6 = 0;
  result = sub_182CBA0(v31, &v49);
LABEL_10:
  *(_BYTE *)(a1 + 89) = v7;
  *(_QWORD *)(a1 + 104) = a6;
  return result;
}

