__int64 __fastcall sub_B067F0(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  void *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebx
  void *v13; // rdi
  __int64 v14; // rdx
  void *v15; // r14
  int v16; // edx
  __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // ebx
  void *v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rsi
  unsigned int v26; // ebx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rdx
  char v30; // si
  __int64 v31; // rdx
  char v32; // si
  void *v33; // rdi
  __int64 v35; // rax
  unsigned int v36; // ebx
  void *v37; // rdi
  int v38; // edx
  int v39; // eax
  __int64 v40; // rax
  unsigned int i; // r13d
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // ebx
  void *v45; // rdi
  int v46; // edx
  unsigned int v47; // ebx
  __int64 v48; // rax
  void *v49; // r14
  int v50; // edx
  __int64 v51; // rdx
  char v52; // cl
  char v53; // si
  __int64 v54; // rax
  char v55; // cl
  unsigned int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int j; // r13d
  __int64 v61; // rbx
  void *v62; // rbx
  void *v63; // r13
  __int64 v64; // rax
  unsigned int v65; // r13d
  void *v66; // r12
  void *v67; // r12
  void *v68; // rbp
  char v69; // cl
  int v70; // eax
  __int64 v71; // rax
  char v72; // dl
  char v73; // si
  int v74; // edx
  __int64 v75; // rax
  char v76; // cl
  __int64 v77; // rdx
  void *v78; // rbx
  void *v79; // rbx
  __int64 v80; // rax
  unsigned int v81; // ebx
  bool v82; // al
  void *v83; // rdi
  int v84; // eax
  int v85; // edx
  __int64 v86; // rdx
  char v87; // cl
  char v88; // si
  __int64 v89; // rax
  char v90; // cl
  __int64 v93; // [rsp+10h] [rbp-198h]
  void *v94; // [rsp+20h] [rbp-188h]
  _QWORD v95[2]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v96[2]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v97; // [rsp+70h] [rbp-138h] BYREF
  __int64 v98; // [rsp+78h] [rbp-130h]
  __int64 v99; // [rsp+80h] [rbp-128h] BYREF
  __int64 v100; // [rsp+88h] [rbp-120h]
  _QWORD v101[4]; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v102[4]; // [rsp+B0h] [rbp-F8h] BYREF
  char v103[16]; // [rsp+D0h] [rbp-D8h] BYREF
  int v104; // [rsp+E0h] [rbp-C8h]
  char v105; // [rsp+E4h] [rbp-C4h]
  int v106; // [rsp+F0h] [rbp-B8h] BYREF
  char v107; // [rsp+F4h] [rbp-B4h]
  __int64 v108; // [rsp+F8h] [rbp-B0h]
  int v109; // [rsp+100h] [rbp-A8h] BYREF
  char v110; // [rsp+104h] [rbp-A4h]
  __int64 v111; // [rsp+108h] [rbp-A0h]
  int v112; // [rsp+110h] [rbp-98h] BYREF
  char v113; // [rsp+114h] [rbp-94h]
  __int64 v114; // [rsp+118h] [rbp-90h]
  int v115; // [rsp+120h] [rbp-88h] BYREF
  char v116; // [rsp+124h] [rbp-84h]
  __int64 v117; // [rsp+128h] [rbp-80h]
  __int64 v118; // [rsp+130h] [rbp-78h] BYREF
  __int64 v119; // [rsp+138h] [rbp-70h]
  __int64 v120; // [rsp+140h] [rbp-68h] BYREF
  __int64 v121; // [rsp+148h] [rbp-60h]
  __int64 v122; // [rsp+150h] [rbp-58h] BYREF
  __int64 v123; // [rsp+158h] [rbp-50h]
  __int64 v124; // [rsp+160h] [rbp-48h] BYREF
  __int64 v125; // [rsp+168h] [rbp-40h]

  v3 = 0;
  v95[0] = 0;
  v95[1] = 0;
  v96[0] = 1;
  v96[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v96);
  v5 = *a1;
  BYTE4(v96[0]) &= ~1u;
  LODWORD(v96[0]) = 1;
  if ( !v5 )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)a2 )
        goto LABEL_10;
LABEL_43:
      v26 = 1;
      goto LABEL_38;
    }
LABEL_39:
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&qword_1C7F2A0, a2) )
      goto LABEL_10;
    if ( *a1 )
    {
      sub_B03660(*a1);
      *(_DWORD *)(*a1 - 4) = 0;
    }
    sub_27B950((__int64)qword_1C7F2C0, a2, &qword_1C7F2A0);
    goto LABEL_43;
  }
  do
  {
    if ( v3 >= *(_DWORD *)(v5 - 4) )
      break;
    v118 = 0;
    v119 = 0;
    v120 = 1;
    v6 = 40LL * v3;
    v121 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v118, (int *)(v5 + v6 + 8));
    if ( (int)v118 < 0 )
    {
      BYTE4(v122) &= 0xFCu;
      BYTE4(v124) &= 0xFCu;
      LODWORD(v122) = 0;
      v123 = 0;
      LODWORD(v124) = 1;
      v125 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v122, (int *)&v118);
      sub_1831620(qword_1C7F2C0, &v122);
      v27 = v6 + *a1;
      v28 = *(_DWORD *)(v27 + 8);
      *(_DWORD *)(v27 + 8) = v122;
      LODWORD(v122) = v28;
      v29 = *(_QWORD *)(v27 + 16);
      *(_QWORD *)(v27 + 16) = v123;
      v123 = v29;
      LOBYTE(v29) = *(_BYTE *)(v27 + 12);
      *(_BYTE *)(v27 + 12) = BYTE4(v122) & 2 | v29 & 0xFD;
      BYTE4(v122) = v29 & 2 | BYTE4(v122) & 0xFD;
      v30 = *(_BYTE *)(v27 + 12);
      *(_BYTE *)(v27 + 12) = BYTE4(v122) & 1 | v30 & 0xFE;
      BYTE4(v122) = v30 & 1 | BYTE4(v122) & 0xFE;
      LODWORD(v29) = *(_DWORD *)(v27 + 24);
      *(_DWORD *)(v27 + 24) = v124;
      LODWORD(v124) = v29;
      v31 = *(_QWORD *)(v27 + 32);
      *(_QWORD *)(v27 + 32) = v125;
      v125 = v31;
      LOBYTE(v31) = *(_BYTE *)(v27 + 28);
      *(_BYTE *)(v27 + 28) = BYTE4(v124) & 2 | v31 & 0xFD;
      BYTE4(v124) = v31 & 2 | BYTE4(v124) & 0xFD;
      v32 = *(_BYTE *)(v27 + 28) & 1;
      *(_BYTE *)(v27 + 28) = BYTE4(v124) & 1 | *(_BYTE *)(v27 + 28) & 0xFE;
      BYTE4(v124) = v32 | BYTE4(v124) & 0xFE;
      sub_25A130((char *)&v122);
      v33 = qword_1C7F2C0;
      *(_DWORD *)(v6 + *a1) ^= 1u;
      sub_89ABF0((__int64)v33, a2, (__int64)&v118, a2);
    }
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v95, *a1 + v6 + 8, (__int64)v95);
    ++v3;
    sub_25A130((char *)&v118);
    v5 = *a1;
  }
  while ( *a1 );
  if ( !a3 )
    goto LABEL_39;
  if ( !*(_DWORD *)a2 && (!v5 || !*(_DWORD *)(v5 - 4)) )
    goto LABEL_43;
LABEL_10:
  if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v95, a2) )
  {
    if ( !a3 )
    {
      v7 = *a1;
      if ( !*a1 )
        goto LABEL_58;
      goto LABEL_13;
    }
    if ( !sub_3ED680((__int64)qword_1C7F2C0, a2, (__int64)v95) )
    {
      v7 = *a1;
      if ( !*a1 )
      {
LABEL_34:
        v26 = *(int *)a2 >> 31;
        goto LABEL_38;
      }
LABEL_13:
      v8 = 0;
      while ( v8 < *(_DWORD *)(v7 - 4) )
      {
        v9 = v7 + 40LL * v8;
        if ( (*(_BYTE *)(v9 + 28) & 1) == 0 )
        {
          ++v8;
          if ( *(_DWORD *)(v9 + 24) == 1 )
            continue;
        }
        v113 &= 0xFCu;
        v116 &= 0xFCu;
        v112 = 0;
        v94 = (void *)(a2 + 16);
        v10 = qword_1C7F2C0;
        v114 = 0;
        v115 = 1;
        v117 = 0;
        if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v112, v94);
        else
          v112 = *(_DWORD *)(a2 + 16);
        sub_182CBA0(v10, &v115);
        v11 = *a1;
        v116 &= ~1u;
        v12 = 0;
        v115 = 1;
        if ( v11 )
        {
          do
          {
            v13 = qword_1C7F2C0;
            if ( v12 >= *(_DWORD *)(v11 - 4) )
              break;
            BYTE4(v118) &= 0xFCu;
            BYTE4(v120) &= 0xFCu;
            LODWORD(v118) = 0;
            v14 = v11 + 40LL * v12;
            v119 = 0;
            LODWORD(v120) = 1;
            v121 = 0;
            if ( (*(_BYTE *)(v14 + 28) & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v118, v14 + 24);
            else
              LODWORD(v118) = *(_DWORD *)(v14 + 24);
            sub_182CBA0(v13, &v120);
            v15 = qword_1C7F2C0;
            BYTE4(v120) &= ~1u;
            BYTE4(v122) &= 0xFCu;
            BYTE4(v124) &= 0xFCu;
            LODWORD(v120) = 1;
            LODWORD(v122) = 0;
            v123 = 0;
            LODWORD(v124) = 1;
            v125 = 0;
            sub_1836B00(qword_1C7F2C0, &v112, &v118, &v122);
            sub_182CBA0(v15, &v124);
            v16 = v122;
            ++v12;
            LODWORD(v122) = v112;
            v112 = v16;
            v17 = v123;
            v123 = v114;
            v114 = v17;
            v18 = BYTE4(v122) & 1;
            LOBYTE(v17) = v113 & 0xFC | BYTE4(v122) & 2;
            BYTE4(v122) = v113 & 1 | BYTE4(v122) & 0xFC | v113 & 2;
            v113 = v18 | v17;
            LODWORD(v124) = v115;
            v19 = v117;
            v117 = v125;
            v125 = v19;
            v115 = 1;
            LOBYTE(v17) = v116 & 0xFC | BYTE4(v124) & 2;
            BYTE4(v124) = v116 & 1 | v116 & 2 | BYTE4(v124) & 0xFC;
            v116 = v17;
            sub_25A130((char *)&v122);
            sub_25A130((char *)&v118);
            v11 = *a1;
          }
          while ( *a1 );
        }
        v20 = qword_1C7F2C0;
        if ( (*(_BYTE *)(a2 + 20) & 1) != 0 || *(_DWORD *)(a2 + 16) != 1 || (v116 & 1) != 0 || v115 != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, a2, &v112);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, a2, &v112);
          sub_182CBA0(v20, v94);
          *(_BYTE *)(a2 + 20) &= ~1u;
          *(_DWORD *)(a2 + 16) = 1;
        }
        v21 = *a1;
        if ( *a1 )
        {
          v22 = 0;
          do
          {
            if ( v22 >= *(_DWORD *)(v21 - 4) )
              break;
            v23 = qword_1C7F2C0;
            v24 = v21 + 40LL * v22;
            v25 = v24 + 8;
            if ( (*(_BYTE *)(v24 + 28) & 1) != 0 || *(_DWORD *)(v24 + 24) != 1 || (v116 & 1) != 0 || v115 != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, v25, &v112);
            }
            else
            {
              sub_1831650(qword_1C7F2C0, v25, &v112);
              sub_182CBA0(v23, v24 + 24);
              *(_BYTE *)(v24 + 28) &= ~1u;
              *(_DWORD *)(v24 + 24) = 1;
            }
            v21 = *a1;
            ++v22;
          }
          while ( *a1 );
        }
        sub_25A130((char *)&v112);
        break;
      }
      if ( a3 )
        goto LABEL_34;
LABEL_58:
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v95, &qword_1C7F2A0);
      v40 = *a1;
      for ( i = 0; *a1; v40 = *a1 )
      {
        if ( i >= *(_DWORD *)(v40 - 4) )
          break;
        v122 = 0;
        v123 = 0;
        v124 = 1;
        v42 = 40LL * i;
        v125 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v122, (int *)(v40 + v42 + 8));
        if ( sub_3ED700((__int64)qword_1C7F2C0, a2, (__int64)&v122) )
          sub_27B950((__int64)qword_1C7F2C0, v42 + *a1 + 8, (int *)a2);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v95, *a1 + v42 + 8, (__int64)v95);
        ++i;
        sub_25A130((char *)&v122);
      }
      if ( !sub_3ED680((__int64)qword_1C7F2C0, (__int64)v95, a2) )
      {
LABEL_71:
        v97 = 0;
        v98 = 0;
        v99 = 1;
        v100 = 0;
        sub_182CBA0(qword_1C7F2C0, &v99);
        BYTE4(v99) &= ~1u;
        v47 = 0;
        LODWORD(v99) = 1;
        if ( (v97 & 0x100000000LL) != 0 )
          goto LABEL_73;
LABEL_72:
        if ( (_DWORD)v97 != 1 || (v99 & 0x100000000LL) != 0 || (_DWORD)v99 != 1 )
        {
LABEL_73:
          while ( 1 )
          {
            v48 = *a1;
            if ( !*a1 || v47 >= *(_DWORD *)(v48 - 4) )
              break;
            v118 = 0;
            v119 = 0;
            v120 = 1;
            v121 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v118, (int *)(v48 + 40LL * v47 + 8));
            if ( !sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v118, a2) )
            {
              v49 = qword_1C7F2C0;
              if ( (_DWORD)v97 )
              {
                BYTE4(v122) &= 0xFCu;
                BYTE4(v124) &= 0xFCu;
                LODWORD(v122) = 0;
                v123 = 0;
                LODWORD(v124) = 1;
                v125 = 0;
                sub_1832C70(qword_1C7F2C0, &v97, &v118, &v122);
                sub_182CBA0(v49, &v124);
                v50 = v122;
                LODWORD(v122) = v97;
                LODWORD(v97) = v50;
                v51 = v123;
                v123 = v98;
                v98 = v51;
                v52 = BYTE4(v122) & 1;
                LOBYTE(v51) = BYTE4(v97) & 0xFC | BYTE4(v122) & 2;
                BYTE4(v122) = BYTE4(v97) & 1 | BYTE4(v122) & 0xFC | BYTE4(v97) & 2;
                BYTE4(v97) = v52 | v51;
                v53 = BYTE4(v99) & 2;
                LODWORD(v124) = v99;
                v54 = v100;
                v100 = v125;
                v125 = v54;
                LODWORD(v99) = 1;
                v55 = BYTE4(v99) & 1;
                BYTE4(v99) = BYTE4(v99) & 0xFC | BYTE4(v124) & 2;
                BYTE4(v124) = v55 | v53 | BYTE4(v124) & 0xFC;
                sub_25A130((char *)&v122);
              }
              else
              {
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v97, (int *)&v118);
              }
            }
            ++v47;
            sub_25A130((char *)&v118);
            if ( (v97 & 0x100000000LL) == 0 )
              goto LABEL_72;
          }
          if ( !(_DWORD)v97 )
          {
            if ( v48 )
            {
              v56 = 0;
              do
              {
                if ( v56 >= *(_DWORD *)(v48 - 4) )
                  break;
                sub_27B950((__int64)qword_1C7F2C0, v48 + 40LL * v56 + 8, &qword_1C7F280);
                v48 = *a1;
                ++v56;
              }
              while ( *a1 );
            }
            sub_27B950((__int64)qword_1C7F2C0, a2, &qword_1C7F280);
            goto LABEL_87;
          }
        }
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&qword_1C7F280, (__int64)&v97) )
        {
          v78 = qword_1C7F2C0;
          v112 = 0;
          v113 &= 0xFCu;
          v116 &= 0xFCu;
          v114 = 0;
          v115 = 1;
          v117 = 0;
          sub_1833EB0(qword_1C7F2C0, a2, &v97, &v112);
          sub_182CBA0(v78, &v115);
          v79 = qword_1C7F2C0;
          v116 &= ~1u;
          BYTE4(v122) &= 0xFCu;
          BYTE4(v124) &= 0xFCu;
          v115 = 1;
          LODWORD(v122) = 0;
          v123 = 0;
          LODWORD(v124) = 1;
          v125 = 0;
          sub_1831270(qword_1C7F2C0, a2, &v97, &v122);
          sub_182CBA0(v79, &v124);
          LODWORD(v79) = v122;
          LODWORD(v124) = 1;
          BYTE4(v124) &= ~1u;
          sub_25A130((char *)&v122);
          if ( (_DWORD)v79 )
          {
            LODWORD(v118) = 0;
            BYTE4(v118) &= 0xFCu;
            BYTE4(v120) &= 0xFCu;
            v119 = 0;
            LODWORD(v120) = 1;
            v121 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v118, &v112);
            BYTE4(v122) &= 0xFCu;
            BYTE4(v124) &= 0xFCu;
            LODWORD(v122) = 1;
            v123 = 0;
            LODWORD(v124) = 1;
            v125 = 0;
            sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v112, (__int64)&v122, (__int64)&v112);
            sub_25A130((char *)&v118);
          }
          v80 = *a1;
          if ( *a1 )
          {
            v81 = 0;
            do
            {
              if ( v81 >= *(_DWORD *)(v80 - 4) )
                break;
              v118 = 0;
              v119 = 0;
              v120 = 1;
              v93 = 40LL * v81;
              v121 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v118, (int *)(v80 + v93 + 8));
              v82 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v118, a2);
              v83 = qword_1C7F2C0;
              if ( v82 )
              {
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v118, &v112);
              }
              else
              {
                LODWORD(v122) = 0;
                BYTE4(v122) &= 0xFCu;
                BYTE4(v124) &= 0xFCu;
                v123 = 0;
                LODWORD(v124) = 1;
                v125 = 0;
                sub_1833EB0(qword_1C7F2C0, &v118, &v97, &v122);
                sub_182CBA0(v83, &v124);
                v85 = v122;
                LODWORD(v122) = v118;
                LODWORD(v118) = v85;
                v86 = v123;
                v123 = v119;
                v119 = v86;
                v87 = BYTE4(v122) & 1;
                LOBYTE(v86) = BYTE4(v118) & 0xFC | BYTE4(v122) & 2;
                BYTE4(v122) = BYTE4(v118) & 1 | BYTE4(v122) & 0xFC | BYTE4(v118) & 2;
                BYTE4(v118) = v87 | v86;
                v88 = BYTE4(v120) & 2;
                LODWORD(v124) = v120;
                v89 = v121;
                v121 = v125;
                v125 = v89;
                LODWORD(v120) = 1;
                v90 = BYTE4(v120) & 1;
                BYTE4(v120) = BYTE4(v120) & 0xFC | BYTE4(v124) & 2;
                BYTE4(v124) = v90 | v88 | BYTE4(v124) & 0xFC;
                sub_25A130((char *)&v122);
              }
              sub_27B950((__int64)qword_1C7F2C0, *a1 + v93 + 8, (int *)&v118);
              ++v81;
              sub_25A130((char *)&v118);
              v80 = *a1;
            }
            while ( *a1 );
          }
          sub_27B950((__int64)qword_1C7F2C0, a2, &v112);
          sub_25A130((char *)&v112);
        }
LABEL_87:
        if ( (*(_BYTE *)(a2 + 4) & 1) != 0
          || *(_DWORD *)a2 != 1
          || (*(_BYTE *)(a2 + 20) & 1) != 0
          || *(_DWORD *)(a2 + 16) != 1 )
        {
          v57 = *a1;
          v101[0] = 0;
          v101[1] = 0;
          v101[2] = 1;
          v101[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v101, (int *)(v57 + 8));
          v58 = *a1;
          v102[0] = 0;
          v102[1] = 0;
          v102[2] = 1;
          v102[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v102, (int *)(v58 + 8));
          v59 = *a1;
          for ( j = 1; *a1; ++j )
          {
            if ( j >= *(_DWORD *)(v59 - 4) )
              break;
            v61 = 40LL * j;
            if ( sub_3ED700((__int64)qword_1C7F2C0, v59 + v61 + 8, (__int64)v101) )
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v101, (int *)(v61 + *a1 + 8));
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v102, v61 + *a1 + 8) )
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v102, (int *)(*a1 + v61 + 8));
            v59 = *a1;
          }
          sub_27B620((__int64)v103, a2, (__int64)v102);
          v62 = qword_1C7F2C0;
          v106 = 0;
          v107 &= 0xFCu;
          v110 &= 0xFCu;
          v108 = 0;
          v109 = 1;
          v111 = 0;
          sub_18495B0(qword_1C7F2C0, v103, &v106);
          sub_182CBA0(v62, &v109);
          v109 = 1;
          v110 &= ~1u;
          sub_27B620((__int64)&v118, a2, (__int64)v101);
          v63 = qword_1C7F2C0;
          BYTE4(v122) &= 0xFCu;
          BYTE4(v124) &= 0xFCu;
          LODWORD(v122) = 0;
          v123 = 0;
          LODWORD(v124) = 1;
          v125 = 0;
          sub_1849700(qword_1C7F2C0, &v118, &v122);
          sub_182CBA0(v63, &v124);
          BYTE4(v124) &= ~1u;
          LODWORD(v124) = 1;
          sub_3EBB80((__int64)&v112, (__int64)&v122, (__int64)&qword_1C7F280);
          sub_25A130((char *)&v122);
          sub_25A130((char *)&v118);
          if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v106, (__int64)&v112) && ((v105 & 1) != 0 || v104 != 1) )
          {
            v64 = *a1;
            if ( *a1 )
            {
              v65 = 0;
              do
              {
                if ( v65 >= *(_DWORD *)(v64 - 4) )
                  break;
                sub_27B950((__int64)qword_1C7F2C0, v64 + 40LL * v65 + 8, &qword_1C7F280);
                v64 = *a1;
                ++v65;
              }
              while ( *a1 );
            }
            v122 = 0;
            v66 = qword_1C7F2C0;
            v123 = 0;
            v124 = 1;
            v125 = 0;
            if ( (v107 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v122, &v106);
            else
              LODWORD(v122) = v106;
            if ( (v110 & 1) != 0 )
            {
              sub_182C690(v66, &v124, &v109);
            }
            else
            {
              BYTE4(v124) &= ~1u;
              LODWORD(v124) = v109;
            }
            sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v122, (__int64)&qword_1C7F280, (__int64)&v122);
            BYTE4(v118) &= 0xFCu;
            v67 = qword_1C7F2C0;
            BYTE4(v120) &= 0xFCu;
            LODWORD(v118) = 0;
            v119 = 0;
            LODWORD(v120) = 1;
            v121 = 0;
            if ( (v122 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v118, &v122);
            else
              LODWORD(v118) = v122;
            if ( (v124 & 0x100000000LL) != 0 )
            {
              sub_182C690(v67, &v120, &v124);
            }
            else
            {
              BYTE4(v120) &= ~1u;
              LODWORD(v120) = v124;
            }
            v68 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v122);
            sub_182CBA0(v68, &v124);
            v69 = BYTE4(v118);
            v70 = *(_DWORD *)a2;
            *(_DWORD *)a2 = v118;
            LODWORD(v118) = v70;
            v71 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)(a2 + 8) = v119;
            v72 = v69;
            v69 &= ~2u;
            v119 = v71;
            v73 = *(_BYTE *)(a2 + 4);
            LOBYTE(v71) = v73 & 2;
            v73 &= ~2u;
            BYTE4(v118) = v73 & 1 | (v69 | v71) & 0xFE;
            LODWORD(v71) = *(_DWORD *)(a2 + 16);
            *(_BYTE *)(a2 + 4) = v69 & 1 | v73 & 0xFE | v72 & 2;
            v74 = v120;
            LODWORD(v120) = v71;
            v75 = *(_QWORD *)(a2 + 24);
            v76 = BYTE4(v120);
            *(_DWORD *)(a2 + 16) = v74;
            v77 = v121;
            v121 = v75;
            LOBYTE(v75) = *(_BYTE *)(a2 + 20);
            *(_QWORD *)(a2 + 24) = v77;
            LOBYTE(v77) = v76;
            v76 &= ~2u;
            BYTE4(v120) = v75 & 1 | v76 & 0xFE | v75 & 2;
            *(_BYTE *)(a2 + 20) = v76 & 1 | v75 & 0xFC | v77 & 2;
            sub_25A130((char *)&v118);
          }
          sub_25A130((char *)&v112);
          sub_25A130((char *)&v106);
          sub_25A130(v103);
          sub_25A130((char *)v102);
          sub_25A130((char *)v101);
        }
        v26 = 0;
        sub_25A130((char *)&v97);
        goto LABEL_38;
      }
      v43 = *a1;
      if ( *a1 )
      {
        v44 = 0;
        while ( 1 )
        {
          v45 = qword_1C7F2C0;
          if ( v44 >= *(_DWORD *)(v43 - 4) )
            break;
          sub_27B950((__int64)qword_1C7F2C0, v43 + 40LL * v44 + 8, &qword_1C7F280);
          v43 = *a1;
          ++v44;
          if ( !*a1 )
            goto LABEL_68;
        }
        v84 = *(_DWORD *)(v43 - 4);
        v122 = 0;
        v123 = 0;
        v124 = 1;
        v46 = v84;
        v125 = 0;
        if ( v84 < 0 )
        {
          sub_1830C40(qword_1C7F2C0, &v122, (unsigned int)v84);
          goto LABEL_70;
        }
      }
      else
      {
LABEL_68:
        v122 = 0;
        v45 = qword_1C7F2C0;
        v46 = 0;
        v123 = 0;
        v124 = 1;
        v125 = 0;
      }
      LODWORD(v122) = v46;
LABEL_70:
      sub_182CBA0(v45, &v124);
      LODWORD(v124) = 1;
      BYTE4(v124) &= ~1u;
      sub_27B950((__int64)qword_1C7F2C0, a2, (int *)&v122);
      sub_25A130((char *)&v122);
      goto LABEL_71;
    }
    v35 = *a1;
    if ( *a1 )
    {
      v36 = 0;
      while ( 1 )
      {
        v37 = qword_1C7F2C0;
        if ( v36 >= *(_DWORD *)(v35 - 4) )
          break;
        sub_27B950((__int64)qword_1C7F2C0, v35 + 40LL * v36 + 8, &qword_1C7F280);
        v35 = *a1;
        ++v36;
        if ( !*a1 )
          goto LABEL_54;
      }
      v39 = *(_DWORD *)(v35 - 4);
      v122 = 0;
      v123 = 0;
      v124 = 1;
      v38 = v39;
      v125 = 0;
      if ( v39 < 0 )
      {
        sub_1830C40(qword_1C7F2C0, &v122, (unsigned int)v39);
        goto LABEL_57;
      }
    }
    else
    {
LABEL_54:
      v122 = 0;
      v37 = qword_1C7F2C0;
      v38 = 0;
      v123 = 0;
      v124 = 1;
      v125 = 0;
    }
    LODWORD(v122) = v38;
LABEL_57:
    sub_182CBA0(v37, &v124);
    LODWORD(v124) = 1;
    BYTE4(v124) &= ~1u;
    sub_27B950((__int64)qword_1C7F2C0, a2, (int *)&v122);
    v26 = 0;
    sub_25A130((char *)&v122);
    goto LABEL_38;
  }
  if ( *a1 )
  {
    sub_B03660(*a1);
    *(_DWORD *)(*a1 - 4) = 0;
  }
  sub_27B950((__int64)qword_1C7F2C0, a2, &qword_1C7F280);
  v26 = -1;
LABEL_38:
  sub_25A130((char *)v95);
  return v26;
}

