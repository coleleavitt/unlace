__int64 __fastcall sub_AC6640(__int64 a1, __int64 a2, int *a3)
{
  void *v5; // r15
  int v6; // eax
  int v7; // edx
  int v8; // r12d
  int v9; // eax
  int v10; // r15d
  int v11; // edx
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  int v20; // eax
  void *v21; // rdi
  int v22; // eax
  bool v23; // al
  int v24; // eax
  bool v25; // al
  int v26; // eax
  __int64 v27; // rax
  char v28; // si
  __int64 v29; // rax
  char v30; // si
  void *v31; // rbx
  int v33; // eax
  __int64 v34; // rax
  char v35; // di
  __int64 v36; // rax
  char v37; // di
  int v38; // eax
  void *v39; // rdi
  int v40; // eax
  bool v41; // al
  bool v42; // al
  unsigned int v43; // r14d
  __int64 v44; // rax
  char *v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rax
  char *v48; // r12
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  int v55; // edx
  int v56; // esi
  __int64 v57; // rsi
  __int64 v58; // rdx
  char v59; // di
  char v60; // di
  __int64 v61; // rsi
  __int64 v62; // rdx
  char v63; // di
  char v64; // si
  char v65; // dl
  char v66; // dl
  char v67; // di
  char *v68; // r15
  void *v69; // r14
  char *v70; // rsi
  int v71; // edx
  int v72; // esi
  __int64 v73; // rsi
  __int64 v74; // rdx
  char v75; // di
  char v76; // di
  __int64 v77; // rsi
  __int64 v78; // rdx
  char v79; // di
  int v80; // eax
  __int64 v81; // [rsp+8h] [rbp-90h]
  char *v82; // [rsp+8h] [rbp-90h]
  __int64 v83; // [rsp+8h] [rbp-90h]
  int v84; // [rsp+10h] [rbp-88h]
  __int64 v85; // [rsp+10h] [rbp-88h]
  __int64 v86; // [rsp+10h] [rbp-88h]
  __int64 v87; // [rsp+10h] [rbp-88h]
  int v88; // [rsp+10h] [rbp-88h]
  __int64 v89; // [rsp+18h] [rbp-80h]
  int v90; // [rsp+18h] [rbp-80h]
  int v91; // [rsp+18h] [rbp-80h]
  __int64 v92; // [rsp+18h] [rbp-80h]
  int v93; // [rsp+20h] [rbp-78h]
  __int64 v94; // [rsp+30h] [rbp-68h] BYREF
  __int64 v95; // [rsp+38h] [rbp-60h]
  __int64 v96; // [rsp+40h] [rbp-58h] BYREF
  __int64 v97; // [rsp+48h] [rbp-50h]
  int v98; // [rsp+50h] [rbp-48h]
  int v99; // [rsp+58h] [rbp-40h]

  v94 = 0;
  v95 = 0;
  v5 = qword_1C7F2C0;
  v96 = 1;
  v97 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v94, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_45:
    sub_182C690(v5, &v96, a2 + 16);
    goto LABEL_4;
  }
  LODWORD(v94) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
    goto LABEL_45;
LABEL_3:
  v6 = *(_DWORD *)(a2 + 16);
  BYTE4(v96) &= ~1u;
  LODWORD(v96) = v6;
LABEL_4:
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a2 + 32);
  v99 = *a3;
  v9 = *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 24);
  v98 = v8;
  v84 = 2 * v7;
  if ( 3 * v7 < (unsigned int)(4 * v9) )
  {
    v43 = 2 * v7;
    v44 = sub_AC65C0(2 * v7);
    v45 = *(char **)(a1 + 8);
    v46 = v44;
    v92 = v44;
    v47 = *(unsigned int *)(a1 + 16);
    v48 = &v45[56 * v47];
    v49 = 56LL * v43;
    v50 = v46 + v49;
    if ( v45 != v48 )
    {
      do
      {
        while ( *((_DWORD *)v45 + 1) != 2 )
        {
          v45 += 56;
          if ( v48 == v45 )
            goto LABEL_56;
        }
        v51 = *(_DWORD *)v45;
        v52 = 56LL * (*(_DWORD *)v45 & (v43 - 1));
        v53 = v92 + v52;
        if ( v49 == v52 )
        {
LABEL_64:
          v54 = v92;
          if ( v92 == v53 )
          {
LABEL_72:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          while ( *(_DWORD *)(v54 + 4) )
          {
            v54 += 56;
            if ( v53 == v54 )
              goto LABEL_72;
          }
          *(_DWORD *)v54 = v51;
          v71 = *(_DWORD *)(v54 + 8);
          v72 = *((_DWORD *)v45 + 2);
          *(_DWORD *)(v54 + 4) = 2;
          *(_DWORD *)(v54 + 8) = v72;
          v73 = *((_QWORD *)v45 + 2);
          *((_DWORD *)v45 + 2) = v71;
          v74 = *(_QWORD *)(v54 + 16);
          *(_QWORD *)(v54 + 16) = v73;
          v75 = v45[12];
          *((_QWORD *)v45 + 2) = v74;
          LOBYTE(v74) = *(_BYTE *)(v54 + 12);
          *(_BYTE *)(v54 + 12) = v75 & 2 | v74 & 0xFD;
          LOBYTE(v74) = v74 & 2 | v45[12] & 0xFD;
          v45[12] = v74;
          v76 = *(_BYTE *)(v54 + 12);
          *(_BYTE *)(v54 + 12) = v74 & 1 | v76 & 0xFE;
          LODWORD(v73) = *((_DWORD *)v45 + 6);
          v45[12] = v76 & 1 | v45[12] & 0xFE;
          LODWORD(v74) = *(_DWORD *)(v54 + 24);
          *(_DWORD *)(v54 + 24) = v73;
          v77 = *((_QWORD *)v45 + 4);
          *((_DWORD *)v45 + 6) = v74;
          v78 = *(_QWORD *)(v54 + 32);
          *(_QWORD *)(v54 + 32) = v77;
          v79 = v45[28];
          *((_QWORD *)v45 + 4) = v78;
          LOBYTE(v78) = *(_BYTE *)(v54 + 28);
          *(_BYTE *)(v54 + 28) = v79 & 2 | v78 & 0xFD;
          v64 = v78 & 2;
        }
        else
        {
          v54 = v92 + v52;
          while ( *(_DWORD *)(v54 + 4) )
          {
            v54 += 56;
            if ( v50 == v54 )
              goto LABEL_64;
          }
          *(_DWORD *)v54 = v51;
          v55 = *(_DWORD *)(v54 + 8);
          v56 = *((_DWORD *)v45 + 2);
          *(_DWORD *)(v54 + 4) = 2;
          *(_DWORD *)(v54 + 8) = v56;
          v57 = *((_QWORD *)v45 + 2);
          *((_DWORD *)v45 + 2) = v55;
          v58 = *(_QWORD *)(v54 + 16);
          *(_QWORD *)(v54 + 16) = v57;
          v59 = v45[12];
          *((_QWORD *)v45 + 2) = v58;
          LOBYTE(v57) = *(_BYTE *)(v54 + 12);
          *(_BYTE *)(v54 + 12) = v59 & 2 | v57 & 0xFD;
          LOBYTE(v58) = v57 & 2 | v45[12] & 0xFD;
          v45[12] = v58;
          v60 = *(_BYTE *)(v54 + 12);
          *(_BYTE *)(v54 + 12) = v58 & 1 | v60 & 0xFE;
          LODWORD(v57) = *((_DWORD *)v45 + 6);
          v45[12] = v60 & 1 | v45[12] & 0xFE;
          LODWORD(v58) = *(_DWORD *)(v54 + 24);
          *(_DWORD *)(v54 + 24) = v57;
          v61 = *((_QWORD *)v45 + 4);
          *((_DWORD *)v45 + 6) = v58;
          v62 = *(_QWORD *)(v54 + 32);
          *(_QWORD *)(v54 + 32) = v61;
          v63 = v45[28];
          *((_QWORD *)v45 + 4) = v62;
          LOBYTE(v61) = *(_BYTE *)(v54 + 28);
          *(_BYTE *)(v54 + 28) = v63 & 2 | v61 & 0xFD;
          v64 = v61 & 2;
        }
        v65 = v45[28];
        v45 += 56;
        v66 = v64 | v65 & 0xFD;
        *(v45 - 28) = v66;
        v67 = *(_BYTE *)(v54 + 28) & 1;
        *(_BYTE *)(v54 + 28) = v66 & 1 | *(_BYTE *)(v54 + 28) & 0xFE;
        *(v45 - 28) = v67 | *(v45 - 28) & 0xFE;
        *(_DWORD *)(v54 + 40) = *((_DWORD *)v45 - 4);
        *(_DWORD *)(v54 + 48) = *((_DWORD *)v45 - 2);
      }
      while ( v48 != v45 );
LABEL_56:
      v47 = *(unsigned int *)(a1 + 16);
      v48 = *(char **)(a1 + 8);
    }
    if ( v48 )
    {
      if ( (_DWORD)v47 )
      {
        v68 = v48;
        v82 = &v48[56 * v47];
        do
        {
          v69 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v68 + 8);
          v70 = v68 + 24;
          v68 += 56;
          sub_182CBA0(v69, v70);
        }
        while ( v68 != v82 );
      }
      sub_186B220(v48);
    }
    *(_DWORD *)(a1 + 24) = 0;
    v8 = v98;
    *(_QWORD *)(a1 + 8) = v92;
    *(_DWORD *)(a1 + 16) = v84;
  }
  v10 = sub_182DB30(&v94);
  v11 = v10 + 3 * sub_182DB30(&v96);
  v12 = (v8 - v11) ^ (v11 << 8);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(unsigned int *)(a1 + 16);
  v15 = ((v12 ^ ((v11 - v12) << 16)) + v12 - v11) ^ ((v11 - v12) << 10);
  v16 = 56LL * (v15 & (unsigned int)(v14 - 1));
  v17 = v13 + v16;
  v18 = v13 + 56 * v14;
  if ( v16 != 56 * v14 )
  {
    v13 += v16;
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_DWORD *)(v13 + 4);
      if ( v20 == 2 )
      {
        if ( *(_DWORD *)v13 == v15 )
        {
          v21 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v13 + 12) & 1) != 0 || (v94 & 0x100000000LL) != 0 )
          {
            v93 = v15;
            v89 = v18;
            v85 = v17;
            v22 = sub_182C7B0(qword_1C7F2C0, v13 + 8, &v94);
            v17 = v85;
            v18 = v89;
            v15 = v93;
            v23 = v22 == 0;
          }
          else
          {
            v23 = *(_DWORD *)(v13 + 8) == (_DWORD)v94;
          }
          if ( v23 )
          {
            if ( (*(_BYTE *)(v13 + 28) & 1) != 0 || (v96 & 0x100000000LL) != 0 )
            {
              v90 = v15;
              v86 = v18;
              v81 = v17;
              v24 = sub_182C7B0(v21, v13 + 24, &v96);
              v17 = v81;
              v18 = v86;
              v15 = v90;
              v25 = v24 == 0;
            }
            else
            {
              v25 = *(_DWORD *)(v13 + 24) == (_DWORD)v96;
            }
            if ( v25 && *(_DWORD *)(v13 + 40) == v98 )
              goto LABEL_21;
          }
        }
      }
      else
      {
        if ( !v20 )
          goto LABEL_24;
        v19 = v13;
      }
      v13 += 56;
      if ( v18 == v13 )
      {
        v13 = *(_QWORD *)(a1 + 8);
        goto LABEL_31;
      }
    }
  }
  v19 = 0;
  while ( 1 )
  {
LABEL_31:
    if ( v17 == v13 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v38 = *(_DWORD *)(v13 + 4);
    if ( v38 != 2 )
      break;
    if ( *(_DWORD *)v13 == v15 )
    {
      v39 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v13 + 12) & 1) != 0 || (v94 & 0x100000000LL) != 0 )
      {
        v91 = v15;
        v87 = v17;
        v40 = sub_182C7B0(qword_1C7F2C0, v13 + 8, &v94);
        v17 = v87;
        v15 = v91;
        v41 = v40 == 0;
      }
      else
      {
        v41 = *(_DWORD *)(v13 + 8) == (_DWORD)v94;
      }
      if ( v41 )
      {
        if ( (*(_BYTE *)(v13 + 28) & 1) != 0 || (v96 & 0x100000000LL) != 0 )
        {
          v88 = v15;
          v83 = v17;
          v80 = sub_182C7B0(v39, v13 + 24, &v96);
          v17 = v83;
          v15 = v88;
          v42 = v80 == 0;
        }
        else
        {
          v42 = *(_DWORD *)(v13 + 24) == (_DWORD)v96;
        }
        if ( v42 && *(_DWORD *)(v13 + 40) == v98 )
        {
LABEL_21:
          v26 = *(_DWORD *)(v13 + 8);
          *(_DWORD *)(v13 + 8) = v94;
          LODWORD(v94) = v26;
          v27 = *(_QWORD *)(v13 + 16);
          *(_QWORD *)(v13 + 16) = v95;
          v95 = v27;
          v28 = *(_BYTE *)(v13 + 12);
          LOBYTE(v27) = v28 & 2;
          v28 &= ~2u;
          LOBYTE(v27) = v28 & 1 | BYTE4(v94) & 0xFC | v27 & 0xFE;
          *(_BYTE *)(v13 + 12) = BYTE4(v94) & 1 | v28 & 0xFE | BYTE4(v94) & 2;
          BYTE4(v94) = v27;
          LODWORD(v27) = *(_DWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 24) = v96;
          LODWORD(v96) = v27;
          v29 = *(_QWORD *)(v13 + 32);
          *(_QWORD *)(v13 + 32) = v97;
          v97 = v29;
          v30 = *(_BYTE *)(v13 + 28);
          LOBYTE(v29) = v30 & 2;
          v30 &= ~2u;
          LOBYTE(v29) = v30 & 1 | BYTE4(v96) & 0xFC | v29 & 0xFE;
          *(_BYTE *)(v13 + 28) = BYTE4(v96) & 1 | v30 & 0xFE | BYTE4(v96) & 2;
          BYTE4(v96) = v29;
          *(_DWORD *)(v13 + 40) = v98;
          LODWORD(v29) = v99;
          *(_DWORD *)(v13 + 4) = 2;
          *(_DWORD *)(v13 + 48) = v29;
          goto LABEL_22;
        }
      }
    }
LABEL_30:
    v13 += 56;
  }
  if ( v38 )
  {
    v19 = v13;
    goto LABEL_30;
  }
LABEL_24:
  if ( v19 )
    --*(_DWORD *)(a1 + 24);
  else
    v19 = v13;
  v33 = *(_DWORD *)(v19 + 8);
  *(_DWORD *)(v19 + 8) = v94;
  LODWORD(v94) = v33;
  v34 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 16) = v95;
  v95 = v34;
  v35 = *(_BYTE *)(v19 + 12);
  LOBYTE(v34) = v35 & 2;
  v35 &= ~2u;
  LOBYTE(v34) = v35 & 1 | BYTE4(v94) & 0xFC | v34 & 0xFE;
  *(_BYTE *)(v19 + 12) = BYTE4(v94) & 1 | v35 & 0xFE | BYTE4(v94) & 2;
  BYTE4(v94) = v34;
  LODWORD(v34) = *(_DWORD *)(v19 + 24);
  *(_DWORD *)(v19 + 24) = v96;
  LODWORD(v96) = v34;
  v36 = *(_QWORD *)(v19 + 32);
  *(_QWORD *)(v19 + 32) = v97;
  v97 = v36;
  v37 = *(_BYTE *)(v19 + 28);
  LOBYTE(v36) = v37 & 2;
  v37 &= ~2u;
  LOBYTE(v36) = v37 & 1 | BYTE4(v96) & 0xFC | v36 & 0xFE;
  *(_BYTE *)(v19 + 28) = BYTE4(v96) & 1 | v37 & 0xFE | BYTE4(v96) & 2;
  BYTE4(v96) = v36;
  *(_DWORD *)(v19 + 40) = v98;
  LODWORD(v36) = v99;
  *(_DWORD *)(v19 + 4) = 2;
  *(_DWORD *)(v19 + 48) = v36;
  *(_DWORD *)v19 = v15;
  ++*(_DWORD *)(a1 + 20);
LABEL_22:
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v94);
  return sub_182CBA0(v31, &v96);
}

