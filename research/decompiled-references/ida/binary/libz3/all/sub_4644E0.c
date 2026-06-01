__int64 __fastcall sub_4644E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  void *v12; // rdi
  unsigned int v13; // eax
  unsigned __int64 v14; // rsi
  char v15; // al
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  char v19; // cl
  char v20; // cl
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // cl
  char v25; // cl
  unsigned __int64 v26; // r12
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // cl
  char v33; // cl
  __int64 v34; // rdx
  __int64 v35; // rax
  char v36; // cl
  char v37; // cl
  unsigned int v38; // eax
  __int64 v39; // r14
  __int64 v40; // r15
  char v41; // cl
  int v42; // eax
  char v43; // r9
  int v44; // edi
  char v45; // r10
  __int64 v46; // r11
  char v47; // dl
  char v48; // dl
  char v49; // si
  __int64 v50; // r10
  char v51; // si
  int v52; // edi
  char v53; // r10
  __int64 v54; // r14
  char v55; // cl
  __int64 v56; // r11
  char v57; // r8
  int v58; // r9d
  char v59; // al
  char v60; // al
  __int64 v61; // rax
  char v62; // r15
  char v63; // dl
  char v64; // r15
  int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // r15
  char v69; // r15
  void *v70; // r15
  void *v71; // r15
  char v72; // al
  int v73; // edx
  char v74; // cl
  __int64 v75; // rax
  __int64 v76; // rdx
  char v77; // si
  __int64 v78; // rax
  char v79; // cl
  __int64 v80; // rdx
  int v81; // eax
  char v82; // al
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rax
  char v86; // cl
  char v87; // cl
  __int64 v88; // rdx
  __int64 v89; // rax
  char v90; // cl
  char v91; // cl
  unsigned int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // eax
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rax
  char v98; // cl
  char v99; // cl
  __int64 v100; // rdx
  __int64 v101; // rax
  char v102; // cl
  char v103; // cl
  unsigned int v104; // eax
  unsigned int v105; // eax
  unsigned int v106; // eax
  unsigned int v107; // eax
  void *v108; // [rsp+10h] [rbp-88h]
  void *v109; // [rsp+10h] [rbp-88h]
  __int64 v110; // [rsp+18h] [rbp-80h]
  void *v111; // [rsp+18h] [rbp-80h]
  int v112; // [rsp+20h] [rbp-78h] BYREF
  char v113; // [rsp+24h] [rbp-74h]
  __int64 v114; // [rsp+28h] [rbp-70h]
  int v115; // [rsp+30h] [rbp-68h] BYREF
  char v116; // [rsp+34h] [rbp-64h]
  __int64 v117; // [rsp+38h] [rbp-60h]
  int v118; // [rsp+40h] [rbp-58h] BYREF
  char v119; // [rsp+44h] [rbp-54h]
  __int64 v120; // [rsp+48h] [rbp-50h]
  int v121; // [rsp+50h] [rbp-48h] BYREF
  char v122; // [rsp+54h] [rbp-44h]
  __int64 v123; // [rsp+58h] [rbp-40h]

  result = a2 - a1;
  if ( (__int64)(a2 - a1) <= 512 )
    return result;
  v5 = result >> 6;
  v6 = (__int64)(a2 - a1) >> 5;
  v7 = a2;
  if ( !a3 )
    goto LABEL_40;
  while ( 2 )
  {
    v9 = 32 * v5;
    --a3;
    v10 = a1 + 32;
    v11 = a1 + v9;
    v12 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + v9 + 20) & 1) != 0
      || *(_DWORD *)(v11 + 16) != 1
      || (*(_BYTE *)(a1 + 52) & 1) != 0
      || *(_DWORD *)(a1 + 48) != 1 )
    {
      LOBYTE(v13) = sub_1848D40(qword_1C7F2C0, a1 + v9, a1 + 32);
      v12 = qword_1C7F2C0;
    }
    else if ( (*(_BYTE *)(v11 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 36) & 1) != 0 )
    {
      v105 = sub_182C7B0(qword_1C7F2C0, a1 + v9, a1 + 32);
      v12 = qword_1C7F2C0;
      v13 = v105 >> 31;
    }
    else
    {
      LOBYTE(v13) = *(_DWORD *)v11 < *(_DWORD *)(a1 + 32);
    }
    v14 = v7 - 32;
    if ( !(_BYTE)v13 )
    {
      if ( (*(_BYTE *)(v7 - 12) & 1) != 0
        || *(_DWORD *)(v7 - 16) != 1
        || (*(_BYTE *)(a1 + 52) & 1) != 0
        || *(_DWORD *)(a1 + 48) != 1 )
      {
        v72 = sub_1848D40(v12, v14, a1 + 32);
        v12 = qword_1C7F2C0;
        v14 = v7 - 32;
        if ( !v72 )
          goto LABEL_67;
      }
      else
      {
        if ( (*(_BYTE *)(v7 - 28) & 1) != 0 || (*(_BYTE *)(a1 + 36) & 1) != 0 )
        {
          v92 = sub_182C7B0(v12, v14, a1 + 32);
          v12 = qword_1C7F2C0;
          v14 = v7 - 32;
          v93 = v92 >> 31;
        }
        else
        {
          LOBYTE(v93) = *(_DWORD *)(v7 - 32) < *(_DWORD *)(a1 + 32);
        }
        if ( !(_BYTE)v93 )
        {
LABEL_67:
          if ( (*(_BYTE *)(v7 - 12) & 1) != 0
            || *(_DWORD *)(v7 - 16) != 1
            || (*(_BYTE *)(v11 + 20) & 1) != 0
            || *(_DWORD *)(v11 + 16) != 1 )
          {
            LOBYTE(v94) = sub_1848D40(v12, v14, v11);
            v12 = qword_1C7F2C0;
          }
          else if ( (*(_BYTE *)(v7 - 28) & 1) != 0 || (*(_BYTE *)(v11 + 4) & 1) != 0 )
          {
            v106 = sub_182C7B0(v12, v14, v11);
            v12 = qword_1C7F2C0;
            v94 = v106 >> 31;
          }
          else
          {
            LOBYTE(v94) = *(_DWORD *)(v7 - 32) < *(_DWORD *)v11;
          }
          if ( !(_BYTE)v94 )
          {
            v95 = *(_DWORD *)a1;
            *(_DWORD *)a1 = *(_DWORD *)v11;
            v96 = *(_QWORD *)(v11 + 8);
            *(_DWORD *)v11 = v95;
            v97 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v96;
            v98 = *(_BYTE *)(v11 + 4);
            *(_QWORD *)(v11 + 8) = v97;
            LOBYTE(v96) = *(_BYTE *)(a1 + 4);
            *(_BYTE *)(a1 + 4) = v98 & 2 | v96 & 0xFD;
            LOBYTE(v97) = v96 & 2 | *(_BYTE *)(v11 + 4) & 0xFD;
            *(_BYTE *)(v11 + 4) = v97;
            v99 = *(_BYTE *)(a1 + 4);
            *(_BYTE *)(a1 + 4) = v99 & 0xFE | v97 & 1;
            LODWORD(v96) = *(_DWORD *)(v11 + 16);
            *(_BYTE *)(v11 + 4) = v99 & 1 | *(_BYTE *)(v11 + 4) & 0xFE;
            LODWORD(v97) = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 16) = v96;
            v100 = *(_QWORD *)(v11 + 24);
            *(_DWORD *)(v11 + 16) = v97;
            v101 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 24) = v100;
            v102 = *(_BYTE *)(v11 + 20);
            *(_QWORD *)(v11 + 24) = v101;
            LOBYTE(v100) = *(_BYTE *)(a1 + 20);
            *(_BYTE *)(a1 + 20) = v102 & 2 | v100 & 0xFD;
            LOBYTE(v101) = v100 & 2 | *(_BYTE *)(v11 + 20) & 0xFD;
            *(_BYTE *)(v11 + 20) = v101;
            v103 = *(_BYTE *)(a1 + 20) & 1;
            *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xFE | v101 & 1;
            *(_BYTE *)(v11 + 20) = v103 | *(_BYTE *)(v11 + 20) & 0xFE;
            goto LABEL_12;
          }
          goto LABEL_61;
        }
      }
LABEL_49:
      v73 = *(_DWORD *)(a1 + 32);
      v74 = *(_BYTE *)(a1 + 36);
      *(_DWORD *)(a1 + 32) = *(_DWORD *)a1;
      v75 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)a1 = v73;
      v76 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = v75;
      LOBYTE(v75) = *(_BYTE *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v76;
      LOBYTE(v76) = v74;
      v74 &= ~2u;
      v77 = v75 & 0xFD;
      *(_BYTE *)(a1 + 36) = v75 & 1 | v74 & 0xFE | v75 & 2;
      LODWORD(v75) = *(_DWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 4) = v74 & 1 | v77 & 0xFE | v76 & 2;
      LODWORD(v76) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 48) = v75;
      v78 = *(_QWORD *)(a1 + 24);
      v79 = *(_BYTE *)(a1 + 52);
      *(_DWORD *)(a1 + 16) = v76;
      v80 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v78;
      LOBYTE(v78) = *(_BYTE *)(a1 + 20);
      *(_QWORD *)(a1 + 24) = v80;
      LOBYTE(v80) = v79;
      v79 &= ~2u;
      *(_BYTE *)(a1 + 52) = v78 & 1 | v79 & 0xFE | v78 & 2;
      *(_BYTE *)(a1 + 20) = v79 & 1 | v78 & 0xFC | v80 & 2;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v7 - 12) & 1) != 0
      || *(_DWORD *)(v7 - 16) != 1
      || (*(_BYTE *)(v11 + 20) & 1) != 0
      || *(_DWORD *)(v11 + 16) != 1 )
    {
      v15 = sub_1848D40(v12, v14, v11);
      v12 = qword_1C7F2C0;
      v14 = v7 - 32;
      if ( !v15 )
        goto LABEL_59;
      goto LABEL_10;
    }
    if ( (*(_BYTE *)(v7 - 28) & 1) != 0 || (*(_BYTE *)(v11 + 4) & 1) != 0 )
    {
      v81 = sub_182C7B0(v12, v14, v11);
      v12 = qword_1C7F2C0;
      v14 = v7 - 32;
      if ( v81 >= 0 )
      {
LABEL_59:
        if ( (*(_BYTE *)(v7 - 12) & 1) != 0 )
          goto LABEL_60;
        goto LABEL_79;
      }
LABEL_10:
      v16 = *(_DWORD *)v11;
      goto LABEL_11;
    }
    v16 = *(_DWORD *)v11;
    if ( *(_DWORD *)(v7 - 32) >= *(_DWORD *)v11 )
    {
LABEL_79:
      if ( *(_DWORD *)(v7 - 16) == 1 && (*(_BYTE *)(a1 + 52) & 1) == 0 && *(_DWORD *)(a1 + 48) == 1 )
      {
        if ( (*(_BYTE *)(v7 - 28) & 1) != 0 || (*(_BYTE *)(a1 + 36) & 1) != 0 )
        {
          v107 = sub_182C7B0(v12, v14, a1 + 32);
          v12 = qword_1C7F2C0;
          v104 = v107 >> 31;
        }
        else
        {
          LOBYTE(v104) = *(_DWORD *)(v7 - 32) < *(_DWORD *)(a1 + 32);
        }
        if ( (_BYTE)v104 )
          goto LABEL_61;
        goto LABEL_49;
      }
LABEL_60:
      v82 = sub_1848D40(v12, v14, a1 + 32);
      v12 = qword_1C7F2C0;
      if ( v82 )
      {
LABEL_61:
        v83 = *(_DWORD *)a1;
        *(_DWORD *)a1 = *(_DWORD *)(v7 - 32);
        v84 = *(_QWORD *)(v7 - 24);
        *(_DWORD *)(v7 - 32) = v83;
        v85 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v84;
        v86 = *(_BYTE *)(v7 - 28);
        *(_QWORD *)(v7 - 24) = v85;
        LOBYTE(v84) = *(_BYTE *)(a1 + 4);
        *(_BYTE *)(a1 + 4) = v86 & 2 | v84 & 0xFD;
        LOBYTE(v85) = v84 & 2 | *(_BYTE *)(v7 - 28) & 0xFD;
        *(_BYTE *)(v7 - 28) = v85;
        v87 = *(_BYTE *)(a1 + 4);
        *(_BYTE *)(a1 + 4) = v87 & 0xFE | v85 & 1;
        LODWORD(v84) = *(_DWORD *)(v7 - 16);
        *(_BYTE *)(v7 - 28) = v87 & 1 | *(_BYTE *)(v7 - 28) & 0xFE;
        LODWORD(v85) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v84;
        v88 = *(_QWORD *)(v7 - 8);
        *(_DWORD *)(v7 - 16) = v85;
        v89 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v88;
        v90 = *(_BYTE *)(v7 - 12);
        *(_QWORD *)(v7 - 8) = v89;
        LOBYTE(v88) = *(_BYTE *)(a1 + 20);
        *(_BYTE *)(a1 + 20) = v90 & 2 | v88 & 0xFD;
        LOBYTE(v89) = v88 & 2 | *(_BYTE *)(v7 - 12) & 0xFD;
        *(_BYTE *)(v7 - 12) = v89;
        v91 = *(_BYTE *)(a1 + 20) & 1;
        *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xFE | v89 & 1;
        *(_BYTE *)(v7 - 12) = v91 | *(_BYTE *)(v7 - 12) & 0xFE;
        goto LABEL_12;
      }
      goto LABEL_49;
    }
LABEL_11:
    v17 = *(_DWORD *)a1;
    *(_DWORD *)a1 = v16;
    v18 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)v11 = v17;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v11 + 8);
    v19 = *(_BYTE *)(v11 + 4);
    *(_QWORD *)(v11 + 8) = v18;
    LOBYTE(v17) = *(_BYTE *)(a1 + 4);
    *(_BYTE *)(a1 + 4) = v19 & 2 | v17 & 0xFD;
    LOBYTE(v18) = v17 & 2 | *(_BYTE *)(v11 + 4) & 0xFD;
    *(_BYTE *)(v11 + 4) = v18;
    v20 = *(_BYTE *)(a1 + 4);
    *(_BYTE *)(a1 + 4) = v18 & 1 | v20 & 0xFE;
    v21 = *(_DWORD *)(v11 + 16);
    *(_BYTE *)(v11 + 4) = v20 & 1 | *(_BYTE *)(v11 + 4) & 0xFE;
    LODWORD(v18) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v21;
    v22 = *(_QWORD *)(v11 + 24);
    *(_DWORD *)(v11 + 16) = v18;
    v23 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v22;
    v24 = *(_BYTE *)(v11 + 20);
    *(_QWORD *)(v11 + 24) = v23;
    LOBYTE(v22) = *(_BYTE *)(a1 + 20);
    *(_BYTE *)(a1 + 20) = v24 & 2 | v22 & 0xFD;
    LOBYTE(v23) = v22 & 2 | *(_BYTE *)(v11 + 20) & 0xFD;
    *(_BYTE *)(v11 + 20) = v23;
    v25 = *(_BYTE *)(a1 + 20) & 1;
    *(_BYTE *)(a1 + 20) = v23 & 1 | *(_BYTE *)(a1 + 20) & 0xFE;
    *(_BYTE *)(v11 + 20) = v25 | *(_BYTE *)(v11 + 20) & 0xFE;
LABEL_12:
    v26 = v7;
    while ( 1 )
    {
LABEL_16:
      if ( (*(_BYTE *)(a1 + 20) & 1) != 0
        || *(_DWORD *)(a1 + 16) != 1
        || (*(_BYTE *)(v10 + 20) & 1) != 0
        || *(_DWORD *)(v10 + 16) != 1 )
      {
        LOBYTE(v27) = sub_1848D40(v12, a1, v10);
        v12 = qword_1C7F2C0;
        goto LABEL_14;
      }
      if ( (*(_BYTE *)(a1 + 4) & 1) == 0 && (*(_BYTE *)(v10 + 4) & 1) == 0 )
        break;
      v38 = sub_182C7B0(v12, a1, v10);
      v12 = qword_1C7F2C0;
      v27 = v38 >> 31;
LABEL_14:
      if ( !(_BYTE)v27 )
        goto LABEL_23;
LABEL_15:
      v10 += 32LL;
    }
    if ( *(_DWORD *)a1 < *(_DWORD *)v10 )
      goto LABEL_15;
LABEL_23:
    v26 -= 32LL;
    while ( 2 )
    {
      if ( (*(_BYTE *)(v26 + 20) & 1) != 0
        || *(_DWORD *)(v26 + 16) != 1
        || (*(_BYTE *)(a1 + 20) & 1) != 0
        || *(_DWORD *)(a1 + 16) != 1 )
      {
        LOBYTE(v28) = sub_1848D40(v12, v26, a1);
        goto LABEL_25;
      }
      if ( (*(_BYTE *)(v26 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 4) & 1) != 0 )
      {
        v28 = (unsigned int)sub_182C7B0(v12, v26, a1) >> 31;
LABEL_25:
        if ( !(_BYTE)v28 )
          break;
        goto LABEL_26;
      }
      if ( *(_DWORD *)v26 < *(_DWORD *)a1 )
      {
LABEL_26:
        v12 = qword_1C7F2C0;
        v26 -= 32LL;
        continue;
      }
      break;
    }
    if ( v10 < v26 )
    {
      v29 = *(_DWORD *)v10;
      v10 += 32LL;
      *(_DWORD *)(v10 - 32) = *(_DWORD *)v26;
      v30 = *(_QWORD *)(v26 + 8);
      *(_DWORD *)v26 = v29;
      v31 = *(_QWORD *)(v10 - 24);
      *(_QWORD *)(v10 - 24) = v30;
      v32 = *(_BYTE *)(v26 + 4);
      *(_QWORD *)(v26 + 8) = v31;
      LOBYTE(v30) = *(_BYTE *)(v10 - 28);
      *(_BYTE *)(v10 - 28) = v32 & 2 | v30 & 0xFD;
      LOBYTE(v31) = v30 & 2 | *(_BYTE *)(v26 + 4) & 0xFD;
      *(_BYTE *)(v26 + 4) = v31;
      v33 = *(_BYTE *)(v10 - 28);
      *(_BYTE *)(v10 - 28) = v31 & 1 | v33 & 0xFE;
      LODWORD(v30) = *(_DWORD *)(v26 + 16);
      *(_BYTE *)(v26 + 4) = v33 & 1 | *(_BYTE *)(v26 + 4) & 0xFE;
      LODWORD(v31) = *(_DWORD *)(v10 - 16);
      *(_DWORD *)(v10 - 16) = v30;
      v34 = *(_QWORD *)(v26 + 24);
      *(_DWORD *)(v26 + 16) = v31;
      v35 = *(_QWORD *)(v10 - 8);
      *(_QWORD *)(v10 - 8) = v34;
      v36 = *(_BYTE *)(v26 + 20);
      *(_QWORD *)(v26 + 24) = v35;
      LOBYTE(v34) = *(_BYTE *)(v10 - 12);
      *(_BYTE *)(v10 - 12) = v36 & 2 | v34 & 0xFD;
      LOBYTE(v35) = v34 & 2 | *(_BYTE *)(v26 + 20) & 0xFD;
      *(_BYTE *)(v26 + 20) = v35;
      v37 = *(_BYTE *)(v10 - 12) & 1;
      *(_BYTE *)(v10 - 12) = v35 & 1 | *(_BYTE *)(v10 - 12) & 0xFE;
      v12 = qword_1C7F2C0;
      *(_BYTE *)(v26 + 20) = v37 | *(_BYTE *)(v26 + 20) & 0xFE;
      goto LABEL_16;
    }
    sub_4644E0(v10, v7, a3);
    result = v10 - a1;
    if ( (__int64)(v10 - a1) > 512 )
    {
      v7 = v10;
      v5 = result >> 6;
      v6 = (__int64)(v10 - a1) >> 5;
      if ( !a3 )
      {
LABEL_40:
        v39 = v5 - 1;
        v110 = v6;
        v40 = a1 + 32 * v5 - 32;
        while ( 1 )
        {
          v41 = *(_BYTE *)(v40 + 4);
          v114 = 0;
          v42 = *(_DWORD *)v40;
          v117 = 0;
          v43 = v41;
          v41 &= 2u;
          v44 = *(_DWORD *)(v40 + 16);
          v43 &= 1u;
          v112 = v42;
          v45 = v116 & 0xFC;
          v46 = *(_QWORD *)(v40 + 8);
          v118 = v42;
          LOBYTE(v42) = v119;
          v47 = v41 | v43 | v113 & 0xFC;
          *(_QWORD *)(v40 + 8) = 0;
          v113 = v47;
          v48 = *(_BYTE *)(v40 + 20);
          v115 = v44;
          v49 = v48;
          v48 &= 2u;
          v121 = v44;
          v49 &= 1u;
          v119 = v41 | v43 | v42 & 0xFC;
          v120 = v46;
          LOBYTE(v42) = v49 | v122 & 0xFC;
          v116 = v48 | v49 | v45;
          v50 = *(_QWORD *)(v40 + 24);
          *(_QWORD *)(v40 + 24) = 0;
          v122 = v48 | v42;
          v123 = v50;
          sub_463A60(a1, v39, v110, &v118);
          v40 -= 32;
          v109 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v118);
          sub_182CBA0(v109, &v121);
          if ( !v39 )
            break;
          v108 = qword_1C7F2C0;
          --v39;
          sub_182CBA0(qword_1C7F2C0, &v112);
          sub_182CBA0(v108, &v115);
        }
        v111 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v112);
        sub_182CBA0(v111, &v115);
        for ( result = v7 - a1; (__int64)(v7 - a1) > 32; result = sub_182CBA0(v71, &v115) )
        {
          v51 = *(_BYTE *)(v7 - 28);
          v7 -= 32LL;
          v53 = v51;
          v51 &= 2u;
          v54 = *(_QWORD *)(v7 + 8);
          v53 &= 1u;
          v55 = *(_BYTE *)(v7 + 20) & 2;
          v56 = *(_QWORD *)(v7 + 24);
          v57 = *(_BYTE *)(v7 + 20) & 1;
          v58 = *(_DWORD *)(v7 + 16);
          v112 = *(_DWORD *)v7;
          v52 = v112;
          v59 = v51 | v53 | v113 & 0xFC;
          *(_QWORD *)(v7 + 8) = 0;
          v113 = v59;
          v60 = v116;
          *(_QWORD *)(v7 + 24) = 0;
          v115 = v58;
          v116 = v55 | v57 | v60 & 0xFC;
          *(_DWORD *)v7 = *(_DWORD *)a1;
          v61 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)a1 = v52;
          *(_QWORD *)(v7 + 8) = v61;
          v62 = *(_BYTE *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = 0;
          v63 = *(_BYTE *)(v7 + 4);
          *(_BYTE *)(v7 + 4) = v62 & 2 | v63 & 0xFD;
          LOBYTE(v61) = v63 & 2 | *(_BYTE *)(a1 + 4) & 0xFD;
          *(_BYTE *)(a1 + 4) = v61;
          v64 = *(_BYTE *)(v7 + 4);
          *(_BYTE *)(v7 + 4) = v61 & 1 | v64 & 0xFE;
          v65 = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(a1 + 4) = v64 & 1 | *(_BYTE *)(a1 + 4) & 0xFE;
          LODWORD(v61) = *(_DWORD *)(v7 + 16);
          *(_DWORD *)(v7 + 16) = v65;
          *(_DWORD *)(a1 + 16) = v61;
          v66 = *(_QWORD *)(v7 + 24);
          v67 = *(_QWORD *)(a1 + 24);
          v120 = v54;
          v118 = v52;
          *(_QWORD *)(v7 + 24) = v67;
          v68 = *(_BYTE *)(a1 + 20);
          *(_QWORD *)(a1 + 24) = v66;
          LOBYTE(v66) = *(_BYTE *)(v7 + 20);
          v121 = v58;
          v114 = 0;
          v123 = v56;
          v117 = 0;
          *(_BYTE *)(v7 + 20) = v68 & 2 | v66 & 0xFD;
          LOBYTE(v66) = v66 & 2 | *(_BYTE *)(a1 + 20) & 0xFD;
          *(_BYTE *)(a1 + 20) = v66;
          v69 = *(_BYTE *)(v7 + 20) & 1;
          *(_BYTE *)(v7 + 20) = v66 & 1 | *(_BYTE *)(v7 + 20) & 0xFE;
          *(_BYTE *)(a1 + 20) = v69 | *(_BYTE *)(a1 + 20) & 0xFE;
          v119 = v51 | v53 | v119 & 0xFC;
          v122 = v55 | v57 | v122 & 0xFC;
          sub_463A60(a1, 0, (__int64)(v7 - a1) >> 5, &v118);
          v70 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v118);
          sub_182CBA0(v70, &v121);
          v71 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v112);
        }
        return result;
      }
      continue;
    }
    return result;
  }
}

