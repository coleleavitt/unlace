__int64 __fastcall sub_42D210(__int64 a1, unsigned __int64 a2, __int64 a3)
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
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // cl
  char v28; // cl
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // cl
  char v32; // cl
  unsigned int v33; // eax
  __int64 v34; // r14
  __int64 v35; // r15
  char v36; // cl
  int v37; // eax
  char v38; // r9
  int v39; // edi
  char v40; // r10
  __int64 v41; // r11
  char v42; // dl
  char v43; // dl
  char v44; // si
  __int64 v45; // r10
  char v46; // si
  int v47; // edi
  char v48; // r10
  __int64 v49; // r14
  char v50; // cl
  __int64 v51; // r11
  char v52; // r8
  int v53; // r9d
  char v54; // al
  char v55; // al
  __int64 v56; // rax
  char v57; // r15
  char v58; // dl
  char v59; // r15
  int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rdx
  char v63; // r15
  char v64; // r15
  void *v65; // r15
  void *v66; // r15
  char v67; // al
  int v68; // eax
  int v69; // edx
  __int64 v70; // rax
  char v71; // si
  char v72; // si
  int v73; // edx
  __int64 v74; // rdx
  __int64 v75; // rax
  char v76; // si
  char v77; // si
  unsigned int v78; // eax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rax
  char v82; // cl
  char v83; // cl
  __int64 v84; // rdx
  __int64 v85; // rax
  char v86; // cl
  char v87; // cl
  int v88; // eax
  char v89; // al
  char v90; // al
  char v91; // cl
  int v92; // esi
  __int64 v93; // rdx
  __int64 v94; // rsi
  char v95; // cl
  int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // rcx
  char v99; // al
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rax
  char v103; // si
  char v104; // si
  __int64 v105; // rdx
  __int64 v106; // rax
  char v107; // si
  char v108; // si
  unsigned int v109; // eax
  int v110; // eax
  unsigned int v111; // eax
  unsigned __int64 v112; // [rsp+0h] [rbp-98h]
  void *v113; // [rsp+10h] [rbp-88h]
  void *v114; // [rsp+10h] [rbp-88h]
  __int64 v115; // [rsp+18h] [rbp-80h]
  void *v116; // [rsp+18h] [rbp-80h]
  int v117; // [rsp+20h] [rbp-78h] BYREF
  char v118; // [rsp+24h] [rbp-74h]
  __int64 v119; // [rsp+28h] [rbp-70h]
  int v120; // [rsp+30h] [rbp-68h] BYREF
  char v121; // [rsp+34h] [rbp-64h]
  __int64 v122; // [rsp+38h] [rbp-60h]
  int v123; // [rsp+40h] [rbp-58h] BYREF
  char v124; // [rsp+44h] [rbp-54h]
  __int64 v125; // [rsp+48h] [rbp-50h]
  int v126; // [rsp+50h] [rbp-48h] BYREF
  char v127; // [rsp+54h] [rbp-44h]
  __int64 v128; // [rsp+58h] [rbp-40h]

  result = a2 - a1;
  if ( (__int64)(a2 - a1) <= 512 )
    return result;
  v5 = result >> 6;
  v6 = (__int64)(a2 - a1) >> 5;
  v7 = a2;
  if ( !a3 )
    goto LABEL_39;
  while ( 2 )
  {
    --a3;
    v9 = a1 + 32;
    v10 = a1 + 32 * v5;
    v112 = v7 - 32;
    v11 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0
      || *(_DWORD *)(a1 + 48) != 1
      || (*(_BYTE *)(v10 + 20) & 1) != 0
      || *(_DWORD *)(v10 + 16) != 1 )
    {
      if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, a1 + 32, v10) )
      {
LABEL_50:
        v11 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v10 + 20) & 1) != 0 || *(_DWORD *)(v10 + 16) != 1 )
          goto LABEL_52;
        goto LABEL_60;
      }
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 36) & 1) == 0 && (*(_BYTE *)(v10 + 4) & 1) == 0 )
      {
        if ( *(_DWORD *)(a1 + 32) < *(_DWORD *)v10 )
        {
LABEL_60:
          if ( (*(_BYTE *)(v7 - 12) & 1) == 0 && *(_DWORD *)(v7 - 16) == 1 )
          {
            if ( (*(_BYTE *)(v10 + 4) & 1) != 0 || (*(_BYTE *)(v7 - 28) & 1) != 0 )
            {
              v88 = sub_182C7B0(v11, v10, v112);
              v11 = qword_1C7F2C0;
              if ( v88 < 0 )
                goto LABEL_53;
            }
            else
            {
              v68 = *(_DWORD *)v10;
              if ( *(_DWORD *)v10 < *(_DWORD *)(v7 - 32) )
                goto LABEL_54;
            }
            goto LABEL_64;
          }
LABEL_52:
          v67 = sub_1848D40(v11, v10, v112);
          v11 = qword_1C7F2C0;
          if ( v67 )
          {
LABEL_53:
            v68 = *(_DWORD *)v10;
LABEL_54:
            v69 = *(_DWORD *)a1;
            *(_DWORD *)a1 = v68;
            v70 = *(_QWORD *)(a1 + 8);
            *(_DWORD *)v10 = v69;
            *(_QWORD *)(a1 + 8) = *(_QWORD *)(v10 + 8);
            v71 = *(_BYTE *)(v10 + 4);
            *(_QWORD *)(v10 + 8) = v70;
            LOBYTE(v69) = *(_BYTE *)(a1 + 4);
            *(_BYTE *)(a1 + 4) = v71 & 2 | v69 & 0xFD;
            LOBYTE(v70) = v69 & 2 | *(_BYTE *)(v10 + 4) & 0xFD;
            *(_BYTE *)(v10 + 4) = v70;
            v72 = *(_BYTE *)(a1 + 4);
            *(_BYTE *)(a1 + 4) = v70 & 1 | v72 & 0xFE;
            v73 = *(_DWORD *)(v10 + 16);
            *(_BYTE *)(v10 + 4) = v72 & 1 | *(_BYTE *)(v10 + 4) & 0xFE;
            LODWORD(v70) = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 16) = v73;
            v74 = *(_QWORD *)(v10 + 24);
            *(_DWORD *)(v10 + 16) = v70;
            v75 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 24) = v74;
            v76 = *(_BYTE *)(v10 + 20);
            *(_QWORD *)(v10 + 24) = v75;
            LOBYTE(v74) = *(_BYTE *)(a1 + 20);
            *(_BYTE *)(a1 + 20) = v76 & 2 | v74 & 0xFD;
            LOBYTE(v75) = v74 & 2 | *(_BYTE *)(v10 + 20) & 0xFD;
            *(_BYTE *)(v10 + 20) = v75;
            v77 = *(_BYTE *)(a1 + 20) & 1;
            *(_BYTE *)(a1 + 20) = v75 & 1 | *(_BYTE *)(a1 + 20) & 0xFE;
            *(_BYTE *)(v10 + 20) = v77 | *(_BYTE *)(v10 + 20) & 0xFE;
            goto LABEL_11;
          }
LABEL_64:
          v89 = *(_BYTE *)(a1 + 52);
          if ( (v89 & 1) != 0
            || *(_DWORD *)(a1 + 48) != 1
            || (*(_BYTE *)(v7 - 12) & 1) != 0
            || *(_DWORD *)(v7 - 16) != 1 )
          {
            v90 = sub_1848D40(v11, a1 + 32, v112);
            v11 = qword_1C7F2C0;
            if ( v90 )
              goto LABEL_58;
          }
          else
          {
            v91 = *(_BYTE *)(a1 + 36);
            if ( (v91 & 1) == 0 && (*(_BYTE *)(v7 - 28) & 1) == 0 )
            {
              if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v7 - 32) )
                goto LABEL_68;
LABEL_58:
              v79 = *(_DWORD *)a1;
              *(_DWORD *)a1 = *(_DWORD *)(v7 - 32);
              v80 = *(_QWORD *)(v7 - 24);
              *(_DWORD *)(v7 - 32) = v79;
              v81 = *(_QWORD *)(a1 + 8);
              *(_QWORD *)(a1 + 8) = v80;
              v82 = *(_BYTE *)(v7 - 28);
              *(_QWORD *)(v7 - 24) = v81;
              LOBYTE(v80) = *(_BYTE *)(a1 + 4);
              *(_BYTE *)(a1 + 4) = v82 & 2 | v80 & 0xFD;
              LOBYTE(v81) = v80 & 2 | *(_BYTE *)(v7 - 28) & 0xFD;
              *(_BYTE *)(v7 - 28) = v81;
              v83 = *(_BYTE *)(a1 + 4);
              *(_BYTE *)(a1 + 4) = v83 & 0xFE | v81 & 1;
              LODWORD(v80) = *(_DWORD *)(v7 - 16);
              *(_BYTE *)(v7 - 28) = v83 & 1 | *(_BYTE *)(v7 - 28) & 0xFE;
              LODWORD(v81) = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 16) = v80;
              v84 = *(_QWORD *)(v7 - 8);
              *(_DWORD *)(v7 - 16) = v81;
              v85 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)(a1 + 24) = v84;
              v86 = *(_BYTE *)(v7 - 12);
              *(_QWORD *)(v7 - 8) = v85;
              LOBYTE(v84) = *(_BYTE *)(a1 + 20);
              *(_BYTE *)(a1 + 20) = v86 & 2 | v84 & 0xFD;
              LOBYTE(v85) = v84 & 2 | *(_BYTE *)(v7 - 12) & 0xFD;
              *(_BYTE *)(v7 - 12) = v85;
              v87 = *(_BYTE *)(a1 + 20) & 1;
              *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xFE | v85 & 1;
              *(_BYTE *)(v7 - 12) = v87 | *(_BYTE *)(v7 - 12) & 0xFE;
              goto LABEL_11;
            }
            v110 = sub_182C7B0(v11, a1 + 32, v112);
            v11 = qword_1C7F2C0;
            if ( v110 < 0 )
              goto LABEL_58;
          }
          v89 = *(_BYTE *)(a1 + 52);
          v91 = *(_BYTE *)(a1 + 36);
LABEL_68:
          v92 = *(_DWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 32) = *(_DWORD *)a1;
          v93 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)a1 = v92;
          v94 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = v93;
          LOBYTE(v93) = *(_BYTE *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = v94;
          LOBYTE(v94) = v91;
          v95 = v91 & 0xFD;
          LOBYTE(v94) = v93 & 0xFD | v94 & 2;
          *(_BYTE *)(a1 + 36) = v93 & 1 | v95 & 0xFE | v93 & 2;
          LODWORD(v93) = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(a1 + 4) = v94 & 0xFE | v95 & 1;
          v96 = *(_DWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 48) = v93;
          v97 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = v96;
          v98 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = v97;
          LOBYTE(v97) = *(_BYTE *)(a1 + 20);
          *(_QWORD *)(a1 + 24) = v98;
          LOBYTE(v98) = v89;
          v99 = v89 & 0xFD;
          *(_BYTE *)(a1 + 20) = v97 & 0xFC | v98 & 2 | v99 & 1;
          *(_BYTE *)(a1 + 52) = v97 & 1 | v99 & 0xFE | v97 & 2;
          goto LABEL_11;
        }
        goto LABEL_7;
      }
      if ( (int)sub_182C7B0(qword_1C7F2C0, a1 + 32, v10) < 0 )
        goto LABEL_50;
    }
    v11 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
    {
LABEL_8:
      LOBYTE(v12) = sub_1848D40(v11, a1 + 32, v112);
      v11 = qword_1C7F2C0;
      goto LABEL_9;
    }
LABEL_7:
    if ( *(_DWORD *)(a1 + 48) != 1 || (*(_BYTE *)(v7 - 12) & 1) != 0 || *(_DWORD *)(v7 - 16) != 1 )
      goto LABEL_8;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 || (*(_BYTE *)(v7 - 28) & 1) != 0 )
    {
      v109 = sub_182C7B0(v11, a1 + 32, v112);
      v11 = qword_1C7F2C0;
      v12 = v109 >> 31;
    }
    else
    {
      LOBYTE(v12) = *(_DWORD *)(a1 + 32) < *(_DWORD *)(v7 - 32);
    }
LABEL_9:
    if ( !(_BYTE)v12 )
    {
      if ( (*(_BYTE *)(v10 + 20) & 1) != 0
        || *(_DWORD *)(v10 + 16) != 1
        || (*(_BYTE *)(v7 - 12) & 1) != 0
        || *(_DWORD *)(v7 - 16) != 1 )
      {
        LOBYTE(v78) = sub_1848D40(v11, v10, v112);
        v11 = qword_1C7F2C0;
      }
      else if ( (*(_BYTE *)(v10 + 4) & 1) != 0 || (*(_BYTE *)(v7 - 28) & 1) != 0 )
      {
        v111 = sub_182C7B0(v11, v10, v112);
        v11 = qword_1C7F2C0;
        v78 = v111 >> 31;
      }
      else
      {
        LOBYTE(v78) = *(_DWORD *)v10 < *(_DWORD *)(v7 - 32);
      }
      if ( !(_BYTE)v78 )
      {
        v100 = *(_DWORD *)a1;
        *(_DWORD *)a1 = *(_DWORD *)v10;
        v101 = *(_QWORD *)(v10 + 8);
        *(_DWORD *)v10 = v100;
        v102 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v101;
        v103 = *(_BYTE *)(v10 + 4);
        *(_QWORD *)(v10 + 8) = v102;
        LOBYTE(v101) = *(_BYTE *)(a1 + 4);
        *(_BYTE *)(a1 + 4) = v103 & 2 | v101 & 0xFD;
        LOBYTE(v102) = v101 & 2 | *(_BYTE *)(v10 + 4) & 0xFD;
        *(_BYTE *)(v10 + 4) = v102;
        v104 = *(_BYTE *)(a1 + 4);
        *(_BYTE *)(a1 + 4) = v104 & 0xFE | v102 & 1;
        LODWORD(v101) = *(_DWORD *)(v10 + 16);
        *(_BYTE *)(v10 + 4) = v104 & 1 | *(_BYTE *)(v10 + 4) & 0xFE;
        LODWORD(v102) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v101;
        v105 = *(_QWORD *)(v10 + 24);
        *(_DWORD *)(v10 + 16) = v102;
        v106 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v105;
        v107 = *(_BYTE *)(v10 + 20);
        *(_QWORD *)(v10 + 24) = v106;
        LOBYTE(v105) = *(_BYTE *)(a1 + 20);
        *(_BYTE *)(a1 + 20) = v107 & 2 | v105 & 0xFD;
        LOBYTE(v106) = v105 & 2 | *(_BYTE *)(v10 + 20) & 0xFD;
        *(_BYTE *)(v10 + 20) = v106;
        v108 = *(_BYTE *)(a1 + 20) & 1;
        *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xFE | v106 & 1;
        *(_BYTE *)(v10 + 20) = v108 | *(_BYTE *)(v10 + 20) & 0xFE;
        goto LABEL_11;
      }
      goto LABEL_58;
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
    while ( 1 )
    {
LABEL_15:
      if ( (*(_BYTE *)(v9 + 20) & 1) != 0
        || *(_DWORD *)(v9 + 16) != 1
        || (*(_BYTE *)(a1 + 20) & 1) != 0
        || *(_DWORD *)(a1 + 16) != 1 )
      {
        LOBYTE(v22) = sub_1848D40(v11, v9, a1);
        v11 = qword_1C7F2C0;
        goto LABEL_13;
      }
      if ( (*(_BYTE *)(v9 + 4) & 1) == 0 && (*(_BYTE *)(a1 + 4) & 1) == 0 )
        break;
      v33 = sub_182C7B0(v11, v9, a1);
      v11 = qword_1C7F2C0;
      v22 = v33 >> 31;
LABEL_13:
      if ( !(_BYTE)v22 )
        goto LABEL_22;
LABEL_14:
      v9 += 32LL;
    }
    if ( *(_DWORD *)v9 < *(_DWORD *)a1 )
      goto LABEL_14;
LABEL_22:
    v21 -= 32LL;
    while ( 2 )
    {
      if ( (*(_BYTE *)(a1 + 20) & 1) != 0
        || *(_DWORD *)(a1 + 16) != 1
        || (*(_BYTE *)(v21 + 20) & 1) != 0
        || *(_DWORD *)(v21 + 16) != 1 )
      {
        LOBYTE(v23) = sub_1848D40(v11, a1, v21);
        goto LABEL_24;
      }
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(v21 + 4) & 1) != 0 )
      {
        v23 = (unsigned int)sub_182C7B0(v11, a1, v21) >> 31;
LABEL_24:
        if ( !(_BYTE)v23 )
          break;
        goto LABEL_25;
      }
      if ( *(_DWORD *)a1 < *(_DWORD *)v21 )
      {
LABEL_25:
        v11 = qword_1C7F2C0;
        v21 -= 32LL;
        continue;
      }
      break;
    }
    if ( v9 < v21 )
    {
      v24 = *(_DWORD *)v9;
      v9 += 32LL;
      *(_DWORD *)(v9 - 32) = *(_DWORD *)v21;
      v25 = *(_QWORD *)(v21 + 8);
      *(_DWORD *)v21 = v24;
      v26 = *(_QWORD *)(v9 - 24);
      *(_QWORD *)(v9 - 24) = v25;
      v27 = *(_BYTE *)(v21 + 4);
      *(_QWORD *)(v21 + 8) = v26;
      LOBYTE(v25) = *(_BYTE *)(v9 - 28);
      *(_BYTE *)(v9 - 28) = v27 & 2 | v25 & 0xFD;
      LOBYTE(v26) = v25 & 2 | *(_BYTE *)(v21 + 4) & 0xFD;
      *(_BYTE *)(v21 + 4) = v26;
      v28 = *(_BYTE *)(v9 - 28);
      *(_BYTE *)(v9 - 28) = v26 & 1 | v28 & 0xFE;
      LODWORD(v25) = *(_DWORD *)(v21 + 16);
      *(_BYTE *)(v21 + 4) = v28 & 1 | *(_BYTE *)(v21 + 4) & 0xFE;
      LODWORD(v26) = *(_DWORD *)(v9 - 16);
      *(_DWORD *)(v9 - 16) = v25;
      v29 = *(_QWORD *)(v21 + 24);
      *(_DWORD *)(v21 + 16) = v26;
      v30 = *(_QWORD *)(v9 - 8);
      *(_QWORD *)(v9 - 8) = v29;
      v31 = *(_BYTE *)(v21 + 20);
      *(_QWORD *)(v21 + 24) = v30;
      LOBYTE(v29) = *(_BYTE *)(v9 - 12);
      *(_BYTE *)(v9 - 12) = v31 & 2 | v29 & 0xFD;
      LOBYTE(v30) = v29 & 2 | *(_BYTE *)(v21 + 20) & 0xFD;
      *(_BYTE *)(v21 + 20) = v30;
      v32 = *(_BYTE *)(v9 - 12) & 1;
      *(_BYTE *)(v9 - 12) = v30 & 1 | *(_BYTE *)(v9 - 12) & 0xFE;
      v11 = qword_1C7F2C0;
      *(_BYTE *)(v21 + 20) = v32 | *(_BYTE *)(v21 + 20) & 0xFE;
      goto LABEL_15;
    }
    sub_42D210(v9, v7, a3);
    result = v9 - a1;
    if ( (__int64)(v9 - a1) > 512 )
    {
      v7 = v9;
      v5 = result >> 6;
      v6 = (__int64)(v9 - a1) >> 5;
      if ( !a3 )
      {
LABEL_39:
        v34 = v5 - 1;
        v115 = v6;
        v35 = a1 + 32 * v5 - 32;
        while ( 1 )
        {
          v36 = *(_BYTE *)(v35 + 4);
          v119 = 0;
          v37 = *(_DWORD *)v35;
          v122 = 0;
          v38 = v36;
          v36 &= 2u;
          v39 = *(_DWORD *)(v35 + 16);
          v38 &= 1u;
          v117 = v37;
          v40 = v121 & 0xFC;
          v41 = *(_QWORD *)(v35 + 8);
          v123 = v37;
          LOBYTE(v37) = v124;
          v42 = v36 | v38 | v118 & 0xFC;
          *(_QWORD *)(v35 + 8) = 0;
          v118 = v42;
          v43 = *(_BYTE *)(v35 + 20);
          v120 = v39;
          v44 = v43;
          v43 &= 2u;
          v126 = v39;
          v44 &= 1u;
          v124 = v36 | v38 | v37 & 0xFC;
          v125 = v41;
          LOBYTE(v37) = v44 | v127 & 0xFC;
          v121 = v43 | v44 | v40;
          v45 = *(_QWORD *)(v35 + 24);
          *(_QWORD *)(v35 + 24) = 0;
          v127 = v43 | v37;
          v128 = v45;
          sub_42CB10(a1, v34, v115, &v123);
          v35 -= 32;
          v114 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v123);
          sub_182CBA0(v114, &v126);
          if ( !v34 )
            break;
          v113 = qword_1C7F2C0;
          --v34;
          sub_182CBA0(qword_1C7F2C0, &v117);
          sub_182CBA0(v113, &v120);
        }
        v116 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v117);
        sub_182CBA0(v116, &v120);
        for ( result = v7 - a1; (__int64)(v7 - a1) > 32; result = sub_182CBA0(v66, &v120) )
        {
          v46 = *(_BYTE *)(v7 - 28);
          v7 -= 32LL;
          v48 = v46;
          v46 &= 2u;
          v49 = *(_QWORD *)(v7 + 8);
          v48 &= 1u;
          v50 = *(_BYTE *)(v7 + 20) & 2;
          v51 = *(_QWORD *)(v7 + 24);
          v52 = *(_BYTE *)(v7 + 20) & 1;
          v53 = *(_DWORD *)(v7 + 16);
          v117 = *(_DWORD *)v7;
          v47 = v117;
          v54 = v46 | v48 | v118 & 0xFC;
          *(_QWORD *)(v7 + 8) = 0;
          v118 = v54;
          v55 = v121;
          *(_QWORD *)(v7 + 24) = 0;
          v120 = v53;
          v121 = v50 | v52 | v55 & 0xFC;
          *(_DWORD *)v7 = *(_DWORD *)a1;
          v56 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)a1 = v47;
          *(_QWORD *)(v7 + 8) = v56;
          v57 = *(_BYTE *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = 0;
          v58 = *(_BYTE *)(v7 + 4);
          *(_BYTE *)(v7 + 4) = v57 & 2 | v58 & 0xFD;
          LOBYTE(v56) = v58 & 2 | *(_BYTE *)(a1 + 4) & 0xFD;
          *(_BYTE *)(a1 + 4) = v56;
          v59 = *(_BYTE *)(v7 + 4);
          *(_BYTE *)(v7 + 4) = v56 & 1 | v59 & 0xFE;
          v60 = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(a1 + 4) = v59 & 1 | *(_BYTE *)(a1 + 4) & 0xFE;
          LODWORD(v56) = *(_DWORD *)(v7 + 16);
          *(_DWORD *)(v7 + 16) = v60;
          *(_DWORD *)(a1 + 16) = v56;
          v61 = *(_QWORD *)(v7 + 24);
          v62 = *(_QWORD *)(a1 + 24);
          v125 = v49;
          v123 = v47;
          *(_QWORD *)(v7 + 24) = v62;
          v63 = *(_BYTE *)(a1 + 20);
          *(_QWORD *)(a1 + 24) = v61;
          LOBYTE(v61) = *(_BYTE *)(v7 + 20);
          v126 = v53;
          v119 = 0;
          v128 = v51;
          v122 = 0;
          *(_BYTE *)(v7 + 20) = v63 & 2 | v61 & 0xFD;
          LOBYTE(v61) = v61 & 2 | *(_BYTE *)(a1 + 20) & 0xFD;
          *(_BYTE *)(a1 + 20) = v61;
          v64 = *(_BYTE *)(v7 + 20) & 1;
          *(_BYTE *)(v7 + 20) = v61 & 1 | *(_BYTE *)(v7 + 20) & 0xFE;
          *(_BYTE *)(a1 + 20) = v64 | *(_BYTE *)(a1 + 20) & 0xFE;
          v124 = v46 | v48 | v124 & 0xFC;
          v127 = v50 | v52 | v127 & 0xFC;
          sub_42CB10(a1, 0, (__int64)(v7 - a1) >> 5, &v123);
          v65 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v123);
          sub_182CBA0(v65, &v126);
          v66 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v117);
        }
        return result;
      }
      continue;
    }
    return result;
  }
}

