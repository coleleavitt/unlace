__int64 __fastcall sub_463A60(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int *v6; // rbp
  void *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rsi
  int *v12; // r15
  int v13; // edx
  int *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // r9
  char v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  char v21; // r9
  char v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rbx
  char v27; // r8
  int v28; // r11d
  char v29; // cl
  int v30; // r10d
  bool v31; // r9
  __int64 v32; // rax
  char v33; // dl
  bool v34; // r8
  char v35; // si
  __int64 v36; // rax
  __int64 v37; // r15
  char v38; // dl
  char v39; // al
  int v40; // eax
  int *v41; // rbx
  int v42; // esi
  __int64 v43; // rax
  char v44; // r8
  char v45; // r8
  int v46; // esi
  __int64 v47; // rsi
  __int64 v48; // rax
  char v49; // r8
  bool v50; // al
  char v51; // r8
  char v52; // si
  int *v53; // rbp
  char v54; // si
  int v55; // eax
  char v56; // r8
  int v57; // ecx
  char v58; // r11
  char v59; // r8
  char v60; // dl
  __int64 v61; // rcx
  char v62; // r8
  char v63; // dl
  char v64; // r9
  __int64 v65; // rcx
  char v67; // r8
  __int64 v68; // rcx
  int *v69; // rbx
  int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdx
  char v74; // r8
  char v75; // r8
  __int64 v76; // rsi
  __int64 v77; // rdx
  char v78; // r8
  char v79; // r8
  unsigned int v80; // eax
  __int64 v81; // [rsp+0h] [rbp-78h]
  __int64 v83; // [rsp+8h] [rbp-70h]
  char v84; // [rsp+17h] [rbp-61h]
  __int64 v85; // [rsp+18h] [rbp-60h]
  int v86; // [rsp+20h] [rbp-58h] BYREF
  char v87; // [rsp+24h] [rbp-54h]
  __int64 v88; // [rsp+28h] [rbp-50h]
  int v89; // [rsp+30h] [rbp-48h] BYREF
  char v90; // [rsp+34h] [rbp-44h]
  __int64 v91; // [rsp+38h] [rbp-40h]

  v6 = a4;
  v7 = qword_1C7F2C0;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v26 = a2;
  }
  else
  {
    v81 = a3;
    v8 = a2;
    v9 = (a3 - 1) / 2;
    while ( 1 )
    {
      v23 = (v8 + 1) << 6;
      v24 = a1 + v23 - 32;
      v25 = a1 + v23;
      if ( (*(_BYTE *)(v24 + 20) & 1) != 0
        || *(_DWORD *)(v24 + 16) != 1
        || (*(_BYTE *)(v25 + 20) & 1) != 0
        || *(_DWORD *)(v25 + 16) != 1 )
      {
        LOBYTE(v10) = sub_1848D40(v7, v24, v25);
        v7 = qword_1C7F2C0;
      }
      else if ( (*(_BYTE *)(v24 + 4) & 1) != 0 || (*(_BYTE *)(v25 + 4) & 1) != 0 )
      {
        v80 = sub_182C7B0(v7, v24, v25);
        v7 = qword_1C7F2C0;
        v10 = v80 >> 31;
      }
      else
      {
        LOBYTE(v10) = *(_DWORD *)v24 < *(_DWORD *)v25;
      }
      v11 = 2 * (v8 + 1) - (unsigned __int8)v10;
      v12 = (int *)(a1 + 32 * v8);
      v13 = *v12;
      v14 = (int *)(a1 + 32 * v11);
      *v12 = *v14;
      v15 = *((_QWORD *)v14 + 1);
      *v14 = v13;
      v16 = *((_QWORD *)v12 + 1);
      *((_QWORD *)v12 + 1) = v15;
      v17 = *((_BYTE *)v14 + 4);
      *((_QWORD *)v14 + 1) = v16;
      LOBYTE(v15) = *((_BYTE *)v12 + 4);
      *((_BYTE *)v12 + 4) = v17 & 2 | v15 & 0xFD;
      LOBYTE(v16) = v15 & 2 | v14[1] & 0xFD;
      *((_BYTE *)v14 + 4) = v16;
      v18 = *((_BYTE *)v12 + 4);
      *((_BYTE *)v12 + 4) = v16 & 1 | v18 & 0xFE;
      LODWORD(v15) = v14[4];
      *((_BYTE *)v14 + 4) = v18 & 1 | v14[1] & 0xFE;
      LODWORD(v16) = v12[4];
      v12[4] = v15;
      v19 = *((_QWORD *)v14 + 3);
      v14[4] = v16;
      v20 = *((_QWORD *)v12 + 3);
      *((_QWORD *)v12 + 3) = v19;
      v21 = *((_BYTE *)v14 + 20);
      *((_QWORD *)v14 + 3) = v20;
      LOBYTE(v19) = *((_BYTE *)v12 + 20);
      *((_BYTE *)v12 + 20) = v21 & 2 | v19 & 0xFD;
      LOBYTE(v20) = v19 & 2 | v14[5] & 0xFD;
      *((_BYTE *)v14 + 20) = v20;
      v22 = v12[5] & 1;
      *((_BYTE *)v12 + 20) = v20 & 1 | v12[5] & 0xFE;
      *((_BYTE *)v14 + 20) = v22 | v14[5] & 0xFE;
      if ( v9 <= v11 )
        break;
      v8 = v11;
    }
    a3 = v81;
    v6 = a4;
    v26 = v11;
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v26 )
  {
    v68 = v26 + 1;
    v69 = (int *)(a1 + 32 * v26);
    v70 = *v69;
    v71 = a1 + (v68 << 6) - 32;
    *v69 = *(_DWORD *)v71;
    v72 = *(_QWORD *)(v71 + 8);
    *(_DWORD *)v71 = v70;
    v73 = *((_QWORD *)v69 + 1);
    *((_QWORD *)v69 + 1) = v72;
    v74 = *(_BYTE *)(v71 + 4);
    *(_QWORD *)(v71 + 8) = v73;
    LOBYTE(v73) = *((_BYTE *)v69 + 4);
    *((_BYTE *)v69 + 4) = v74 & 2 | v73 & 0xFD;
    LOBYTE(v73) = v73 & 2 | *(_BYTE *)(v71 + 4) & 0xFD;
    *(_BYTE *)(v71 + 4) = v73;
    v75 = *((_BYTE *)v69 + 4);
    *((_BYTE *)v69 + 4) = v73 & 1 | v75 & 0xFE;
    LODWORD(v72) = *(_DWORD *)(v71 + 16);
    *(_BYTE *)(v71 + 4) = v75 & 1 | *(_BYTE *)(v71 + 4) & 0xFE;
    LODWORD(v73) = v69[4];
    v69[4] = v72;
    v76 = *(_QWORD *)(v71 + 24);
    *(_DWORD *)(v71 + 16) = v73;
    v77 = *((_QWORD *)v69 + 3);
    *((_QWORD *)v69 + 3) = v76;
    v78 = *(_BYTE *)(v71 + 20);
    *(_QWORD *)(v71 + 24) = v77;
    LOBYTE(v77) = *((_BYTE *)v69 + 20);
    *((_BYTE *)v69 + 20) = v78 & 2 | v77 & 0xFD;
    LOBYTE(v77) = v77 & 2 | *(_BYTE *)(v71 + 20) & 0xFD;
    *(_BYTE *)(v71 + 20) = v77;
    v79 = v69[5] & 1;
    *((_BYTE *)v69 + 20) = v77 & 1 | v69[5] & 0xFE;
    v26 = 2 * v68 - 1;
    *(_BYTE *)(v71 + 20) = v79 | *(_BYTE *)(v71 + 20) & 0xFE;
  }
  v27 = *((_BYTE *)v6 + 20);
  v28 = *v6;
  v29 = *((_BYTE *)v6 + 4);
  v30 = v6[4];
  v31 = (v29 & 2) != 0;
  v86 = *v6;
  v84 = v29 & 1;
  v89 = v30;
  v87 = (2 * v31) | v29 & 1 | v87 & 0xFC;
  v32 = *((_QWORD *)v6 + 1);
  v33 = v27 & 1;
  v34 = (v27 & 2) != 0;
  *((_QWORD *)v6 + 1) = 0;
  v83 = v32;
  v88 = v32;
  v90 = (2 * v34) | v33 | v90 & 0xFC;
  v35 = v90;
  v36 = *((_QWORD *)v6 + 3);
  *((_QWORD *)v6 + 3) = 0;
  v85 = v36;
  v91 = v36;
  v37 = (v26 - 1) / 2;
  if ( v26 <= a2 )
  {
    v53 = (int *)(a1 + 32 * v26);
    v52 = v53[5] & 1;
    v50 = (v53[5] & 2) != 0;
    goto LABEL_34;
  }
  v38 = v35;
  while ( 1 )
  {
    v53 = (int *)(a1 + 32 * v37);
    if ( (v38 & 1) != 0 || v89 != 1 || (v53[5] & 1) != 0 || (v30 = v53[4], v30 != 1) )
    {
      v39 = sub_1848D40(v7, &v86, a1 + 32 * v37);
      v7 = qword_1C7F2C0;
      if ( !v39 )
        goto LABEL_32;
LABEL_20:
      v40 = *v53;
      v38 = v90;
      goto LABEL_21;
    }
    if ( (v87 & 1) != 0 || (v53[1] & 1) != 0 )
    {
      v55 = sub_182C7B0(v7, &v86, a1 + 32 * v37);
      v7 = qword_1C7F2C0;
      if ( v55 >= 0 )
      {
LABEL_32:
        v28 = v86;
        v30 = v89;
        v38 = v90;
        v83 = v88;
        v53 = (int *)(a1 + 32 * v26);
        v54 = *((_BYTE *)v53 + 20);
        v84 = v87 & 1;
        v31 = (v87 & 2) != 0;
        v85 = v91;
        v50 = (v54 & 2) != 0;
        goto LABEL_33;
      }
      goto LABEL_20;
    }
    v28 = v86;
    v40 = *v53;
    if ( v86 >= *v53 )
    {
      v84 = v87 & 1;
      v53 = (int *)(a1 + 32 * v26);
      v83 = v88;
      v31 = (v87 & 2) != 0;
      v54 = *((_BYTE *)v53 + 20);
      v85 = v91;
      v50 = (v54 & 2) != 0;
LABEL_33:
      v56 = v38;
      v52 = v54 & 1;
      v33 = v38 & 1;
      v34 = (v56 & 2) != 0;
      goto LABEL_34;
    }
LABEL_21:
    v41 = (int *)(a1 + 32 * v26);
    v42 = *v41;
    *v41 = v40;
    v43 = *((_QWORD *)v41 + 1);
    *v53 = v42;
    *((_QWORD *)v41 + 1) = *((_QWORD *)v53 + 1);
    v44 = *((_BYTE *)v53 + 4);
    *((_QWORD *)v53 + 1) = v43;
    LOBYTE(v42) = *((_BYTE *)v41 + 4);
    *((_BYTE *)v41 + 4) = v44 & 2 | v42 & 0xFD;
    LOBYTE(v43) = v42 & 2 | v53[1] & 0xFD;
    *((_BYTE *)v53 + 4) = v43;
    v45 = *((_BYTE *)v41 + 4);
    *((_BYTE *)v41 + 4) = v43 & 1 | v45 & 0xFE;
    v46 = v53[4];
    *((_BYTE *)v53 + 4) = v45 & 1 | v53[1] & 0xFE;
    LODWORD(v43) = v41[4];
    v41[4] = v46;
    v47 = *((_QWORD *)v53 + 3);
    v53[4] = v43;
    v48 = *((_QWORD *)v41 + 3);
    *((_QWORD *)v41 + 3) = v47;
    v49 = *((_BYTE *)v53 + 20);
    *((_QWORD *)v53 + 3) = v48;
    LOBYTE(v48) = *((_BYTE *)v41 + 20);
    *((_BYTE *)v41 + 20) = v49 & 2 | v48 & 0xFD;
    v50 = (v48 & 2) != 0;
    v51 = (2 * v50) | v53[5] & 0xFD;
    *((_BYTE *)v53 + 20) = v51;
    v52 = v41[5] & 1;
    *((_BYTE *)v41 + 20) = v51 & 1 | v41[5] & 0xFE;
    v26 = v37;
    *((_BYTE *)v53 + 20) = v52 | v53[5] & 0xFE;
    if ( a2 >= v37 )
      break;
    v37 = (v37 - 1) / 2;
  }
  v67 = v38;
  v28 = v86;
  v33 = v38 & 1;
  v30 = v89;
  v83 = v88;
  v34 = (v67 & 2) != 0;
  v84 = v87 & 1;
  v31 = (v87 & 2) != 0;
  v85 = v91;
LABEL_34:
  v57 = *v53;
  *v53 = v28;
  v58 = v87;
  v59 = v33 | (2 * v34);
  v60 = *((_BYTE *)v53 + 20);
  v86 = v57;
  v61 = *((_QWORD *)v53 + 1);
  *((_QWORD *)v53 + 1) = v83;
  v88 = v61;
  LOBYTE(v61) = *((_BYTE *)v53 + 4);
  v62 = v60 & 0xFC | v59 & 3;
  v63 = v90;
  *((_BYTE *)v53 + 20) = v62;
  v64 = v61 & 0xFC | (v84 | (2 * v31)) & 3;
  v87 = v58 & 0xFC | v61 & 3;
  LODWORD(v61) = v53[4];
  *((_BYTE *)v53 + 4) = v64;
  v53[4] = v30;
  v89 = v61;
  v65 = *((_QWORD *)v53 + 3);
  *((_QWORD *)v53 + 3) = v85;
  v91 = v65;
  v90 = v63 & 0xFC | (v52 | (2 * v50)) & 3;
  sub_182CBA0(v7, &v86);
  return sub_182CBA0(v7, &v89);
}

