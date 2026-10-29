__int64 __fastcall sub_CB9610(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  void *v11; // rdi
  unsigned int v12; // eax
  int v13; // edx
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // si
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  char v22; // al
  char v23; // al
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // cl
  char v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // cl
  char v34; // cl
  __int64 v35; // r14
  __int64 v36; // r15
  char v37; // cl
  int v38; // eax
  char v39; // r9
  int v40; // edi
  char v41; // r10
  __int64 v42; // r11
  char v43; // dl
  char v44; // dl
  char v45; // si
  __int64 v46; // r10
  char v47; // si
  int v48; // edi
  char v49; // r10
  __int64 v50; // r14
  char v51; // cl
  __int64 v52; // r11
  char v53; // r8
  int v54; // r9d
  char v55; // al
  char v56; // al
  __int64 v57; // rax
  char v58; // r15
  char v59; // dl
  char v60; // r15
  int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rdx
  char v64; // r15
  char v65; // r15
  void *v66; // r15
  void *v67; // r15
  char v68; // al
  int v69; // eax
  int v70; // edx
  __int64 v71; // rax
  char v72; // si
  char v73; // si
  int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // rax
  char v77; // si
  char v78; // si
  char v79; // al
  int v80; // edx
  char v81; // si
  __int64 v82; // rax
  char v83; // cl
  char v84; // dl
  char v85; // al
  char v86; // cl
  int v87; // edx
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rax
  char v91; // cl
  char v92; // cl
  int v93; // eax
  char v94; // al
  char v95; // cl
  int v96; // ecx
  __int64 v97; // rdx
  char v98; // al
  char v99; // si
  int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rdx
  char v103; // si
  char v104; // dl
  char v105; // al
  char v106; // si
  int v107; // edx
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rax
  char v111; // si
  char v112; // si
  unsigned int v113; // eax
  __int64 v114; // [rsp+0h] [rbp-98h]
  void *v115; // [rsp+10h] [rbp-88h]
  void *v116; // [rsp+10h] [rbp-88h]
  __int64 v117; // [rsp+18h] [rbp-80h]
  void *v118; // [rsp+18h] [rbp-80h]
  int v119; // [rsp+20h] [rbp-78h] BYREF
  char v120; // [rsp+24h] [rbp-74h]
  __int64 v121; // [rsp+28h] [rbp-70h]
  int v122; // [rsp+30h] [rbp-68h] BYREF
  char v123; // [rsp+34h] [rbp-64h]
  __int64 v124; // [rsp+38h] [rbp-60h]
  int v125; // [rsp+40h] [rbp-58h] BYREF
  char v126; // [rsp+44h] [rbp-54h]
  __int64 v127; // [rsp+48h] [rbp-50h]
  int v128; // [rsp+50h] [rbp-48h] BYREF
  char v129; // [rsp+54h] [rbp-44h]
  __int64 v130; // [rsp+58h] [rbp-40h]

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
    --a3;
    v9 = a1 + 32;
    v10 = a1 + 32 * v5;
    v114 = v7 - 32;
    v11 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0
      || *(_DWORD *)(a1 + 48) != 1
      || (*(_BYTE *)(v10 + 20) & 1) != 0
      || *(_DWORD *)(v10 + 16) != 1 )
    {
      if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, a1 + 32, v10) )
      {
LABEL_51:
        v11 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v10 + 20) & 1) != 0 || *(_DWORD *)(v10 + 16) != 1 )
          goto LABEL_53;
        goto LABEL_59;
      }
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 36) & 1) == 0 && (*(_BYTE *)(v10 + 4) & 1) == 0 )
      {
        if ( *(_DWORD *)(a1 + 32) < *(_DWORD *)v10 )
        {
LABEL_59:
          if ( (*(_BYTE *)(v7 - 12) & 1) == 0 && *(_DWORD *)(v7 - 16) == 1 )
          {
            if ( (*(_BYTE *)(v10 + 4) & 1) != 0 || (*(_BYTE *)(v7 - 28) & 1) != 0 )
            {
              v93 = sub_182C7B0(v11, v10, v114);
              v11 = qword_1C7F2C0;
              if ( v93 < 0 )
                goto LABEL_54;
            }
            else
            {
              v69 = *(_DWORD *)v10;
              if ( *(_DWORD *)v10 < *(_DWORD *)(v7 - 32) )
                goto LABEL_55;
            }
LABEL_63:
            v94 = sub_3ED700((__int64)v11, a1 + 32, v114);
            v80 = *(_DWORD *)a1;
            v95 = v94;
            v82 = *(_QWORD *)(a1 + 8);
            if ( !v95 )
            {
              v96 = *(_DWORD *)(a1 + 32);
              v11 = qword_1C7F2C0;
              *(_DWORD *)(a1 + 32) = v80;
              v97 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 40) = v82;
              *(_DWORD *)a1 = v96;
              v98 = *(_BYTE *)(a1 + 4);
              LOBYTE(v96) = *(_BYTE *)(a1 + 36);
              *(_QWORD *)(a1 + 8) = v97;
              LOBYTE(v97) = v96;
              LOBYTE(v96) = v96 & 0xFD;
              v99 = v98 & 0xFD;
              *(_BYTE *)(a1 + 36) = v98 & 1 | v96 & 0xFE | v98 & 2;
              v100 = *(_DWORD *)(a1 + 16);
              *(_BYTE *)(a1 + 4) = v96 & 1 | v99 & 0xFE | v97 & 2;
              LODWORD(v97) = *(_DWORD *)(a1 + 48);
              *(_DWORD *)(a1 + 48) = v100;
              v101 = *(_QWORD *)(a1 + 24);
              LOBYTE(v96) = *(_BYTE *)(a1 + 52);
              *(_DWORD *)(a1 + 16) = v97;
              v102 = *(_QWORD *)(a1 + 56);
              *(_QWORD *)(a1 + 56) = v101;
              LOBYTE(v101) = *(_BYTE *)(a1 + 20);
              *(_QWORD *)(a1 + 24) = v102;
              LOBYTE(v102) = v96;
              LOBYTE(v96) = v96 & 0xFD;
              *(_BYTE *)(a1 + 52) = v101 & 1 | v96 & 0xFE | v101 & 2;
              *(_BYTE *)(a1 + 20) = v96 & 1 | v101 & 0xFC | v102 & 2;
              goto LABEL_11;
            }
            goto LABEL_57;
          }
LABEL_53:
          v68 = sub_1848D40(v11, v10, v114);
          v11 = qword_1C7F2C0;
          if ( v68 )
          {
LABEL_54:
            v69 = *(_DWORD *)v10;
LABEL_55:
            v70 = *(_DWORD *)a1;
            *(_DWORD *)a1 = v69;
            v71 = *(_QWORD *)(a1 + 8);
            *(_DWORD *)v10 = v70;
            *(_QWORD *)(a1 + 8) = *(_QWORD *)(v10 + 8);
            v72 = *(_BYTE *)(v10 + 4);
            *(_QWORD *)(v10 + 8) = v71;
            LOBYTE(v70) = *(_BYTE *)(a1 + 4);
            *(_BYTE *)(a1 + 4) = v72 & 2 | v70 & 0xFD;
            LOBYTE(v71) = v70 & 2 | *(_BYTE *)(v10 + 4) & 0xFD;
            *(_BYTE *)(v10 + 4) = v71;
            v73 = *(_BYTE *)(a1 + 4);
            *(_BYTE *)(a1 + 4) = v71 & 1 | v73 & 0xFE;
            v74 = *(_DWORD *)(v10 + 16);
            *(_BYTE *)(v10 + 4) = v73 & 1 | *(_BYTE *)(v10 + 4) & 0xFE;
            LODWORD(v71) = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 16) = v74;
            v75 = *(_QWORD *)(v10 + 24);
            *(_DWORD *)(v10 + 16) = v71;
            v76 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 24) = v75;
            v77 = *(_BYTE *)(v10 + 20);
            *(_QWORD *)(v10 + 24) = v76;
            LOBYTE(v75) = *(_BYTE *)(a1 + 20);
            *(_BYTE *)(a1 + 20) = v77 & 2 | v75 & 0xFD;
            LOBYTE(v76) = v75 & 2 | *(_BYTE *)(v10 + 20) & 0xFD;
            *(_BYTE *)(v10 + 20) = v76;
            v78 = *(_BYTE *)(a1 + 20) & 1;
            *(_BYTE *)(a1 + 20) = v76 & 1 | *(_BYTE *)(a1 + 20) & 0xFE;
            *(_BYTE *)(v10 + 20) = v78 | *(_BYTE *)(v10 + 20) & 0xFE;
            goto LABEL_11;
          }
          goto LABEL_63;
        }
        goto LABEL_7;
      }
      if ( (int)sub_182C7B0(qword_1C7F2C0, a1 + 32, v10) < 0 )
        goto LABEL_51;
    }
    v11 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
    {
LABEL_8:
      LOBYTE(v12) = sub_1848D40(v11, a1 + 32, v114);
      v11 = qword_1C7F2C0;
      goto LABEL_9;
    }
LABEL_7:
    if ( *(_DWORD *)(a1 + 48) != 1 || (*(_BYTE *)(v7 - 12) & 1) != 0 || *(_DWORD *)(v7 - 16) != 1 )
      goto LABEL_8;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 || (*(_BYTE *)(v7 - 28) & 1) != 0 )
    {
      v113 = sub_182C7B0(v11, a1 + 32, v114);
      v11 = qword_1C7F2C0;
      v12 = v113 >> 31;
    }
    else
    {
      LOBYTE(v12) = *(_DWORD *)(a1 + 32) < *(_DWORD *)(v7 - 32);
    }
LABEL_9:
    if ( !(_BYTE)v12 )
    {
      v79 = sub_3ED700((__int64)v11, v10, v114);
      v80 = *(_DWORD *)a1;
      v81 = v79;
      v82 = *(_QWORD *)(a1 + 8);
      if ( !v81 )
      {
        *(_DWORD *)a1 = *(_DWORD *)v10;
        *(_DWORD *)v10 = v80;
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(v10 + 8);
        v103 = *(_BYTE *)(v10 + 4);
        *(_QWORD *)(v10 + 8) = v82;
        v104 = *(_BYTE *)(a1 + 4);
        *(_BYTE *)(a1 + 4) = v103 & 2 | v104 & 0xFD;
        v105 = v104 & 2 | *(_BYTE *)(v10 + 4) & 0xFD;
        *(_BYTE *)(v10 + 4) = v105;
        v106 = *(_BYTE *)(a1 + 4);
        *(_BYTE *)(a1 + 4) = v106 & 0xFE | v105 & 1;
        v107 = *(_DWORD *)(v10 + 16);
        *(_BYTE *)(v10 + 4) = v106 & 1 | *(_BYTE *)(v10 + 4) & 0xFE;
        v108 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v107;
        v109 = *(_QWORD *)(v10 + 24);
        *(_DWORD *)(v10 + 16) = v108;
        v110 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v109;
        v111 = *(_BYTE *)(v10 + 20);
        *(_QWORD *)(v10 + 24) = v110;
        LOBYTE(v109) = *(_BYTE *)(a1 + 20);
        *(_BYTE *)(a1 + 20) = v111 & 2 | v109 & 0xFD;
        LOBYTE(v110) = v109 & 2 | *(_BYTE *)(v10 + 20) & 0xFD;
        *(_BYTE *)(v10 + 20) = v110;
        v112 = *(_BYTE *)(a1 + 20) & 1;
        *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xFE | v110 & 1;
        *(_BYTE *)(v10 + 20) = v112 | *(_BYTE *)(v10 + 20) & 0xFE;
        v11 = qword_1C7F2C0;
        goto LABEL_11;
      }
LABEL_57:
      *(_DWORD *)a1 = *(_DWORD *)(v7 - 32);
      *(_DWORD *)(v7 - 32) = v80;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v7 - 24);
      v83 = *(_BYTE *)(v7 - 28);
      *(_QWORD *)(v7 - 24) = v82;
      v84 = *(_BYTE *)(a1 + 4);
      *(_BYTE *)(a1 + 4) = v83 & 2 | v84 & 0xFD;
      v85 = v84 & 2 | *(_BYTE *)(v7 - 28) & 0xFD;
      *(_BYTE *)(v7 - 28) = v85;
      v86 = *(_BYTE *)(a1 + 4);
      *(_BYTE *)(a1 + 4) = v86 & 0xFE | v85 & 1;
      v87 = *(_DWORD *)(v7 - 16);
      *(_BYTE *)(v7 - 28) = v86 & 1 | *(_BYTE *)(v7 - 28) & 0xFE;
      v88 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = v87;
      v89 = *(_QWORD *)(v7 - 8);
      *(_DWORD *)(v7 - 16) = v88;
      v90 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v89;
      v91 = *(_BYTE *)(v7 - 12);
      *(_QWORD *)(v7 - 8) = v90;
      LOBYTE(v89) = *(_BYTE *)(a1 + 20);
      *(_BYTE *)(a1 + 20) = v91 & 2 | v89 & 0xFD;
      LOBYTE(v90) = v89 & 2 | *(_BYTE *)(v7 - 12) & 0xFD;
      *(_BYTE *)(v7 - 12) = v90;
      v92 = *(_BYTE *)(a1 + 20) & 1;
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xFE | v90 & 1;
      *(_BYTE *)(v7 - 12) = v92 | *(_BYTE *)(v7 - 12) & 0xFE;
      v11 = qword_1C7F2C0;
      goto LABEL_11;
    }
    v13 = *(_DWORD *)(a1 + 32);
    v14 = *(_BYTE *)(a1 + 36);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)a1;
    v15 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)a1 = v13;
    v16 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v15;
    LOBYTE(v15) = *(_BYTE *)(a1 + 4);
    *(_QWORD *)(a1 + 8) = v16;
    LOBYTE(v16) = v14;
    v14 &= ~2u;
    v17 = v15 & 0xFD;
    *(_BYTE *)(a1 + 36) = v15 & 1 | v14 & 0xFE | v15 & 2;
    LODWORD(v15) = *(_DWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 4) = v14 & 1 | v17 & 0xFE | v16 & 2;
    LODWORD(v16) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 48) = v15;
    v18 = *(_QWORD *)(a1 + 24);
    v19 = *(_BYTE *)(a1 + 52);
    *(_DWORD *)(a1 + 16) = v16;
    v20 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v18;
    LOBYTE(v18) = *(_BYTE *)(a1 + 20);
    *(_QWORD *)(a1 + 24) = v20;
    LOBYTE(v20) = v19;
    v19 &= ~2u;
    *(_BYTE *)(a1 + 52) = v18 & 1 | v19 & 0xFE | v18 & 2;
    *(_BYTE *)(a1 + 20) = v19 & 1 | v18 & 0xFC | v20 & 2;
LABEL_11:
    v21 = v7;
    while ( 2 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v9 + 20) & 1) == 0 && *(_DWORD *)(v9 + 16) == 1 )
        {
          v23 = *(_BYTE *)(a1 + 20);
          if ( (v23 & 1) == 0 && *(_DWORD *)(a1 + 16) == 1 )
            break;
        }
        v22 = sub_1848D40(v11, v9, a1);
        v11 = qword_1C7F2C0;
        if ( !v22 )
          goto LABEL_23;
LABEL_13:
        v9 += 32LL;
      }
      if ( (*(_BYTE *)(v9 + 4) & 1) == 0 && (*(_BYTE *)(a1 + 4) & 1) == 0 )
      {
        if ( *(_DWORD *)v9 >= *(_DWORD *)a1 )
          goto LABEL_24;
        goto LABEL_13;
      }
      v24 = sub_182C7B0(v11, v9, a1);
      v11 = qword_1C7F2C0;
      if ( v24 < 0 )
        goto LABEL_13;
LABEL_23:
      v23 = *(_BYTE *)(a1 + 20);
LABEL_24:
      v21 -= 32LL;
      while ( 2 )
      {
        if ( (v23 & 1) != 0
          || *(_DWORD *)(a1 + 16) != 1
          || (*(_BYTE *)(v21 + 20) & 1) != 0
          || *(_DWORD *)(v21 + 16) != 1 )
        {
          LOBYTE(v25) = sub_1848D40(v11, a1, v21);
          goto LABEL_26;
        }
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(v21 + 4) & 1) != 0 )
        {
          v25 = (unsigned int)sub_182C7B0(v11, a1, v21) >> 31;
LABEL_26:
          if ( !(_BYTE)v25 )
            break;
          goto LABEL_27;
        }
        if ( *(_DWORD *)a1 < *(_DWORD *)v21 )
        {
LABEL_27:
          v11 = qword_1C7F2C0;
          v23 = *(_BYTE *)(a1 + 20);
          v21 -= 32LL;
          continue;
        }
        break;
      }
      if ( v9 < v21 )
      {
        v26 = *(_DWORD *)v9;
        v9 += 32LL;
        *(_DWORD *)(v9 - 32) = *(_DWORD *)v21;
        v27 = *(_QWORD *)(v21 + 8);
        *(_DWORD *)v21 = v26;
        v28 = *(_QWORD *)(v9 - 24);
        *(_QWORD *)(v9 - 24) = v27;
        v29 = *(_BYTE *)(v21 + 4);
        *(_QWORD *)(v21 + 8) = v28;
        LOBYTE(v27) = *(_BYTE *)(v9 - 28);
        *(_BYTE *)(v9 - 28) = v29 & 2 | v27 & 0xFD;
        LOBYTE(v28) = v27 & 2 | *(_BYTE *)(v21 + 4) & 0xFD;
        *(_BYTE *)(v21 + 4) = v28;
        v30 = *(_BYTE *)(v9 - 28);
        *(_BYTE *)(v9 - 28) = v28 & 1 | v30 & 0xFE;
        LODWORD(v27) = *(_DWORD *)(v21 + 16);
        *(_BYTE *)(v21 + 4) = v30 & 1 | *(_BYTE *)(v21 + 4) & 0xFE;
        LODWORD(v28) = *(_DWORD *)(v9 - 16);
        *(_DWORD *)(v9 - 16) = v27;
        v31 = *(_QWORD *)(v21 + 24);
        *(_DWORD *)(v21 + 16) = v28;
        v32 = *(_QWORD *)(v9 - 8);
        *(_QWORD *)(v9 - 8) = v31;
        v33 = *(_BYTE *)(v21 + 20);
        *(_QWORD *)(v21 + 24) = v32;
        LOBYTE(v31) = *(_BYTE *)(v9 - 12);
        *(_BYTE *)(v9 - 12) = v33 & 2 | v31 & 0xFD;
        LOBYTE(v32) = v31 & 2 | *(_BYTE *)(v21 + 20) & 0xFD;
        *(_BYTE *)(v21 + 20) = v32;
        v34 = *(_BYTE *)(v9 - 12) & 1;
        *(_BYTE *)(v9 - 12) = v32 & 1 | *(_BYTE *)(v9 - 12) & 0xFE;
        v11 = qword_1C7F2C0;
        *(_BYTE *)(v21 + 20) = v34 | *(_BYTE *)(v21 + 20) & 0xFE;
        continue;
      }
      break;
    }
    sub_CB9610(v9, v7, a3);
    result = v9 - a1;
    if ( (__int64)(v9 - a1) > 512 )
    {
      v7 = v9;
      v5 = result >> 6;
      v6 = (__int64)(v9 - a1) >> 5;
      if ( !a3 )
      {
LABEL_40:
        v35 = v5 - 1;
        v117 = v6;
        v36 = a1 + 32 * v5 - 32;
        while ( 1 )
        {
          v37 = *(_BYTE *)(v36 + 4);
          v121 = 0;
          v38 = *(_DWORD *)v36;
          v124 = 0;
          v39 = v37;
          v37 &= 2u;
          v40 = *(_DWORD *)(v36 + 16);
          v39 &= 1u;
          v119 = v38;
          v41 = v123 & 0xFC;
          v42 = *(_QWORD *)(v36 + 8);
          v125 = v38;
          LOBYTE(v38) = v126;
          v43 = v37 | v39 | v120 & 0xFC;
          *(_QWORD *)(v36 + 8) = 0;
          v120 = v43;
          v44 = *(_BYTE *)(v36 + 20);
          v122 = v40;
          v45 = v44;
          v44 &= 2u;
          v128 = v40;
          v45 &= 1u;
          v126 = v37 | v39 | v38 & 0xFC;
          v127 = v42;
          LOBYTE(v38) = v45 | v129 & 0xFC;
          v123 = v44 | v45 | v41;
          v46 = *(_QWORD *)(v36 + 24);
          *(_QWORD *)(v36 + 24) = 0;
          v129 = v44 | v38;
          v130 = v46;
          sub_CB7FC0(a1, v35, v117, &v125);
          v36 -= 32;
          v116 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v125);
          sub_182CBA0(v116, &v128);
          if ( !v35 )
            break;
          v115 = qword_1C7F2C0;
          --v35;
          sub_182CBA0(qword_1C7F2C0, &v119);
          sub_182CBA0(v115, &v122);
        }
        v118 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v119);
        sub_182CBA0(v118, &v122);
        for ( result = v7 - a1; (__int64)(v7 - a1) > 32; result = sub_182CBA0(v67, &v122) )
        {
          v47 = *(_BYTE *)(v7 - 28);
          v7 -= 32LL;
          v49 = v47;
          v47 &= 2u;
          v50 = *(_QWORD *)(v7 + 8);
          v49 &= 1u;
          v51 = *(_BYTE *)(v7 + 20) & 2;
          v52 = *(_QWORD *)(v7 + 24);
          v53 = *(_BYTE *)(v7 + 20) & 1;
          v54 = *(_DWORD *)(v7 + 16);
          v119 = *(_DWORD *)v7;
          v48 = v119;
          v55 = v47 | v49 | v120 & 0xFC;
          *(_QWORD *)(v7 + 8) = 0;
          v120 = v55;
          v56 = v123;
          *(_QWORD *)(v7 + 24) = 0;
          v122 = v54;
          v123 = v51 | v53 | v56 & 0xFC;
          *(_DWORD *)v7 = *(_DWORD *)a1;
          v57 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)a1 = v48;
          *(_QWORD *)(v7 + 8) = v57;
          v58 = *(_BYTE *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = 0;
          v59 = *(_BYTE *)(v7 + 4);
          *(_BYTE *)(v7 + 4) = v58 & 2 | v59 & 0xFD;
          LOBYTE(v57) = v59 & 2 | *(_BYTE *)(a1 + 4) & 0xFD;
          *(_BYTE *)(a1 + 4) = v57;
          v60 = *(_BYTE *)(v7 + 4);
          *(_BYTE *)(v7 + 4) = v57 & 1 | v60 & 0xFE;
          v61 = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(a1 + 4) = v60 & 1 | *(_BYTE *)(a1 + 4) & 0xFE;
          LODWORD(v57) = *(_DWORD *)(v7 + 16);
          *(_DWORD *)(v7 + 16) = v61;
          *(_DWORD *)(a1 + 16) = v57;
          v62 = *(_QWORD *)(v7 + 24);
          v63 = *(_QWORD *)(a1 + 24);
          v127 = v50;
          v125 = v48;
          *(_QWORD *)(v7 + 24) = v63;
          v64 = *(_BYTE *)(a1 + 20);
          *(_QWORD *)(a1 + 24) = v62;
          LOBYTE(v62) = *(_BYTE *)(v7 + 20);
          v128 = v54;
          v121 = 0;
          v130 = v52;
          v124 = 0;
          *(_BYTE *)(v7 + 20) = v64 & 2 | v62 & 0xFD;
          LOBYTE(v62) = v62 & 2 | *(_BYTE *)(a1 + 20) & 0xFD;
          *(_BYTE *)(a1 + 20) = v62;
          v65 = *(_BYTE *)(v7 + 20) & 1;
          *(_BYTE *)(v7 + 20) = v62 & 1 | *(_BYTE *)(v7 + 20) & 0xFE;
          *(_BYTE *)(a1 + 20) = v65 | *(_BYTE *)(a1 + 20) & 0xFE;
          v126 = v47 | v49 | v126 & 0xFC;
          v129 = v51 | v53 | v129 & 0xFC;
          sub_CB7FC0(a1, 0, (__int64)(v7 - a1) >> 5, &v125);
          v66 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v125);
          sub_182CBA0(v66, &v128);
          v67 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v119);
        }
        return result;
      }
      continue;
    }
    return result;
  }
}

