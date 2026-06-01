__int64 __fastcall sub_CB7FC0(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  void *v7; // rdi
  __int64 i; // rbp
  unsigned int v9; // eax
  __int64 v10; // rbx
  int *v11; // rdx
  int v12; // ecx
  int *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  char v16; // r8
  char v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // r8
  char v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  char v25; // si
  char v26; // al
  __int64 v27; // r10
  int v28; // r9d
  int v29; // r8d
  char v30; // cl
  bool v31; // si
  char v32; // dl
  char v33; // r11
  bool v34; // dl
  __int64 v35; // rax
  __int64 v36; // r14
  char v37; // al
  int v38; // eax
  int *v39; // rbx
  int v40; // edx
  __int64 v41; // rax
  char v42; // si
  char v43; // si
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rax
  char v47; // si
  bool v48; // al
  char v49; // r11
  int *v50; // rbp
  char v51; // cl
  char v52; // r11
  int v53; // eax
  int v54; // ecx
  char v55; // r9
  __int64 v56; // rcx
  char v57; // r10
  __int64 v58; // rcx
  __int64 v60; // rcx
  int *v61; // rbx
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  char v66; // r8
  char v67; // r8
  __int64 v68; // rsi
  __int64 v69; // rdx
  char v70; // r8
  char v71; // r8
  unsigned int v72; // eax
  __int64 v73; // [rsp+0h] [rbp-78h]
  char v75; // [rsp+8h] [rbp-70h]
  __int64 v76; // [rsp+10h] [rbp-68h]
  char v77; // [rsp+1Fh] [rbp-59h]
  int v78; // [rsp+20h] [rbp-58h] BYREF
  char v79; // [rsp+24h] [rbp-54h]
  __int64 v80; // [rsp+28h] [rbp-50h]
  int v81; // [rsp+30h] [rbp-48h] BYREF
  char v82; // [rsp+34h] [rbp-44h]
  __int64 v83; // [rsp+38h] [rbp-40h]

  v73 = (a3 - 1) / 2;
  v7 = qword_1C7F2C0;
  if ( a2 >= v73 )
  {
    v10 = a2;
  }
  else
  {
    for ( i = a2; ; i = v10 )
    {
      v22 = (i + 1) << 6;
      v23 = a1 + v22 - 32;
      v24 = a1 + v22;
      if ( (*(_BYTE *)(v24 + 20) & 1) != 0
        || *(_DWORD *)(v24 + 16) != 1
        || (*(_BYTE *)(v23 + 20) & 1) != 0
        || *(_DWORD *)(v23 + 16) != 1 )
      {
        LOBYTE(v9) = sub_1848D40(v7, v24, v23);
        v7 = qword_1C7F2C0;
      }
      else if ( (*(_BYTE *)(v24 + 4) & 1) != 0 || (*(_BYTE *)(v23 + 4) & 1) != 0 )
      {
        v72 = sub_182C7B0(v7, v24, v23);
        v7 = qword_1C7F2C0;
        v9 = v72 >> 31;
      }
      else
      {
        LOBYTE(v9) = *(_DWORD *)v24 < *(_DWORD *)v23;
      }
      v10 = 2 * (i + 1) - (unsigned __int8)v9;
      v11 = (int *)(a1 + 32 * i);
      v12 = *v11;
      v13 = (int *)(a1 + 32 * v10);
      *v11 = *v13;
      v14 = *((_QWORD *)v13 + 1);
      *v13 = v12;
      v15 = *((_QWORD *)v11 + 1);
      *((_QWORD *)v11 + 1) = v14;
      v16 = *((_BYTE *)v13 + 4);
      *((_QWORD *)v13 + 1) = v15;
      LOBYTE(v14) = *((_BYTE *)v11 + 4);
      *((_BYTE *)v11 + 4) = v16 & 2 | v14 & 0xFD;
      LOBYTE(v15) = v14 & 2 | v13[1] & 0xFD;
      *((_BYTE *)v13 + 4) = v15;
      v17 = *((_BYTE *)v11 + 4);
      *((_BYTE *)v11 + 4) = v15 & 1 | v17 & 0xFE;
      LODWORD(v14) = v13[4];
      *((_BYTE *)v13 + 4) = v17 & 1 | v13[1] & 0xFE;
      LODWORD(v15) = v11[4];
      v11[4] = v14;
      v18 = *((_QWORD *)v13 + 3);
      v13[4] = v15;
      v19 = *((_QWORD *)v11 + 3);
      *((_QWORD *)v11 + 3) = v18;
      v20 = *((_BYTE *)v13 + 20);
      *((_QWORD *)v13 + 3) = v19;
      LOBYTE(v18) = *((_BYTE *)v11 + 20);
      *((_BYTE *)v11 + 20) = v20 & 2 | v18 & 0xFD;
      LOBYTE(v19) = v18 & 2 | v13[5] & 0xFD;
      *((_BYTE *)v13 + 20) = v19;
      v21 = v11[5] & 1;
      *((_BYTE *)v11 + 20) = v19 & 1 | v11[5] & 0xFE;
      *((_BYTE *)v13 + 20) = v21 | v13[5] & 0xFE;
      if ( v73 <= v10 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v10 )
  {
    v60 = v10 + 1;
    v61 = (int *)(a1 + 32 * v10);
    v62 = *v61;
    v63 = a1 + (v60 << 6) - 32;
    *v61 = *(_DWORD *)v63;
    v64 = *(_QWORD *)(v63 + 8);
    *(_DWORD *)v63 = v62;
    v65 = *((_QWORD *)v61 + 1);
    *((_QWORD *)v61 + 1) = v64;
    v66 = *(_BYTE *)(v63 + 4);
    *(_QWORD *)(v63 + 8) = v65;
    LOBYTE(v65) = *((_BYTE *)v61 + 4);
    *((_BYTE *)v61 + 4) = v66 & 2 | v65 & 0xFD;
    LOBYTE(v65) = v65 & 2 | *(_BYTE *)(v63 + 4) & 0xFD;
    *(_BYTE *)(v63 + 4) = v65;
    v67 = *((_BYTE *)v61 + 4);
    *((_BYTE *)v61 + 4) = v65 & 1 | v67 & 0xFE;
    LODWORD(v64) = *(_DWORD *)(v63 + 16);
    *(_BYTE *)(v63 + 4) = v67 & 1 | *(_BYTE *)(v63 + 4) & 0xFE;
    LODWORD(v65) = v61[4];
    v61[4] = v64;
    v68 = *(_QWORD *)(v63 + 24);
    *(_DWORD *)(v63 + 16) = v65;
    v69 = *((_QWORD *)v61 + 3);
    *((_QWORD *)v61 + 3) = v68;
    v70 = *(_BYTE *)(v63 + 20);
    *(_QWORD *)(v63 + 24) = v69;
    LOBYTE(v69) = *((_BYTE *)v61 + 20);
    *((_BYTE *)v61 + 20) = v70 & 2 | v69 & 0xFD;
    LOBYTE(v69) = v69 & 2 | *(_BYTE *)(v63 + 20) & 0xFD;
    *(_BYTE *)(v63 + 20) = v69;
    v71 = v61[5] & 1;
    *((_BYTE *)v61 + 20) = v69 & 1 | v61[5] & 0xFE;
    v10 = 2 * v60 - 1;
    *(_BYTE *)(v63 + 20) = v71 | *(_BYTE *)(v63 + 20) & 0xFE;
  }
  v25 = *((_BYTE *)a4 + 4);
  v26 = v79;
  v27 = *((_QWORD *)a4 + 1);
  v28 = *a4;
  *((_QWORD *)a4 + 1) = 0;
  v29 = a4[4];
  v30 = v25 & 1;
  v31 = (v25 & 2) != 0;
  v78 = v28;
  v75 = v30;
  v32 = *((_BYTE *)a4 + 20);
  v80 = v27;
  v79 = (2 * v31) | v30 | v26 & 0xFC;
  v81 = v29;
  v33 = v32 & 1;
  v34 = (v32 & 2) != 0;
  v77 = v33;
  v82 = (2 * v34) | v33 | v82 & 0xFC;
  v35 = *((_QWORD *)a4 + 3);
  *((_QWORD *)a4 + 3) = 0;
  v76 = v35;
  v83 = v35;
  v36 = (v10 - 1) / 2;
  if ( v10 <= a2 )
  {
    v50 = (int *)(a1 + 32 * v10);
    v49 = v50[5] & 1;
    v48 = (v50[5] & 2) != 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v50 = (int *)(a1 + 32 * v36);
    if ( (v50[5] & 1) != 0 || v50[4] != 1 || (v51 = v82, (v82 & 1) != 0) || (v29 = v81, v81 != 1) )
    {
      v37 = sub_1848D40(v7, a1 + 32 * v36, &v78);
      v7 = qword_1C7F2C0;
      if ( !v37 )
        goto LABEL_32;
LABEL_20:
      v38 = *v50;
      goto LABEL_21;
    }
    if ( (v50[1] & 1) != 0 || (v79 & 1) != 0 )
    {
      v53 = sub_182C7B0(v7, a1 + 32 * v36, &v78);
      v7 = qword_1C7F2C0;
      if ( v53 >= 0 )
      {
LABEL_32:
        v28 = v78;
        v27 = v80;
        v29 = v81;
        v50 = (int *)(a1 + 32 * v10);
        v51 = v82;
        v75 = v79 & 1;
        v52 = *((_BYTE *)v50 + 20);
        v31 = (v79 & 2) != 0;
        v76 = v83;
        v48 = (v52 & 2) != 0;
        goto LABEL_33;
      }
      goto LABEL_20;
    }
    v38 = *v50;
    v28 = v78;
    if ( *v50 >= v78 )
    {
      v75 = v79 & 1;
      v27 = v80;
      v50 = (int *)(a1 + 32 * v10);
      v76 = v83;
      v31 = (v79 & 2) != 0;
      v52 = *((_BYTE *)v50 + 20);
      v48 = (v52 & 2) != 0;
LABEL_33:
      v49 = v52 & 1;
      v77 = v51 & 1;
      v34 = (v51 & 2) != 0;
      goto LABEL_34;
    }
LABEL_21:
    v39 = (int *)(a1 + 32 * v10);
    v40 = *v39;
    *v39 = v38;
    v41 = *((_QWORD *)v39 + 1);
    *v50 = v40;
    *((_QWORD *)v39 + 1) = *((_QWORD *)v50 + 1);
    v42 = *((_BYTE *)v50 + 4);
    *((_QWORD *)v50 + 1) = v41;
    LOBYTE(v40) = *((_BYTE *)v39 + 4);
    *((_BYTE *)v39 + 4) = v42 & 2 | v40 & 0xFD;
    LOBYTE(v41) = v40 & 2 | v50[1] & 0xFD;
    *((_BYTE *)v50 + 4) = v41;
    v43 = *((_BYTE *)v39 + 4);
    *((_BYTE *)v39 + 4) = v41 & 1 | v43 & 0xFE;
    v44 = v50[4];
    *((_BYTE *)v50 + 4) = v43 & 1 | v50[1] & 0xFE;
    LODWORD(v41) = v39[4];
    v39[4] = v44;
    v45 = *((_QWORD *)v50 + 3);
    v50[4] = v41;
    v46 = *((_QWORD *)v39 + 3);
    *((_QWORD *)v39 + 3) = v45;
    v47 = *((_BYTE *)v50 + 20);
    *((_QWORD *)v50 + 3) = v46;
    LOBYTE(v46) = *((_BYTE *)v39 + 20);
    *((_BYTE *)v39 + 20) = v47 & 2 | v46 & 0xFD;
    v48 = (v46 & 2) != 0;
    LOBYTE(v45) = (2 * v48) | v50[5] & 0xFD;
    *((_BYTE *)v50 + 20) = v45;
    v49 = v39[5] & 1;
    *((_BYTE *)v39 + 20) = v45 & 1 | v39[5] & 0xFE;
    v10 = v36;
    *((_BYTE *)v50 + 20) = v49 | v50[5] & 0xFE;
    if ( a2 >= v36 )
      break;
    v36 = (v36 - 1) / 2;
  }
  v28 = v78;
  v27 = v80;
  v29 = v81;
  v75 = v79 & 1;
  v76 = v83;
  v31 = (v79 & 2) != 0;
  v77 = v82 & 1;
  v34 = (v82 & 2) != 0;
LABEL_34:
  v54 = *v50;
  *v50 = v28;
  v55 = v79;
  v78 = v54;
  v56 = *((_QWORD *)v50 + 1);
  *((_QWORD *)v50 + 1) = v27;
  v80 = v56;
  v57 = *((_BYTE *)v50 + 4);
  v79 = v55 & 0xFC | v57 & 3;
  LODWORD(v56) = v50[4];
  *((_BYTE *)v50 + 4) = v57 & 0xFC | (v75 | (2 * v31)) & 3;
  v81 = v56;
  v58 = *((_QWORD *)v50 + 3);
  v50[4] = v29;
  v83 = v58;
  LOBYTE(v58) = *((_BYTE *)v50 + 20);
  *((_QWORD *)v50 + 3) = v76;
  *((_BYTE *)v50 + 20) = v58 & 0xFC | (v77 | (2 * v34)) & 3;
  v82 = v82 & 0xFC | (v49 | (2 * v48)) & 3;
  sub_182CBA0(v7, &v78);
  return sub_182CBA0(v7, &v81);
}

