__int64 __fastcall sub_467D10(__int64 a1, __int64 *a2, __int64 a3)
{
  char **v3; // r12
  char **v4; // rbx
  char **exception; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  char v11; // dl
  __int64 v12; // r13
  void *v13; // rdi
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // eax
  int v19; // edx
  char v20; // si
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // si
  char v24; // si
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // si
  int *v28; // r14
  int v29; // eax
  __int64 v30; // rax
  char v31; // dl
  char v32; // cl
  __int64 v33; // rax
  char v34; // dl
  char v35; // cl
  void *v36; // r12
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rbp
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 *v44; // rcx
  void *v45; // rbp
  __int64 v46; // rax
  int *v47; // rbp
  void *v48; // r12
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rbp
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 *v56; // rcx
  void *v57; // rbp
  unsigned int v58; // edx
  __int64 v59; // rax
  _DWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // rax
  int *v64; // rbp
  void *v65; // r13
  __int64 v66; // rsi
  int *v67; // rbp
  __int64 v68; // r12
  unsigned __int64 v69; // rdx
  int *v70; // r12
  char v71; // dl
  int *v72; // r13
  void *v73; // rdi
  __int64 v74; // rax
  char v75; // dl
  __int64 v76; // rax
  unsigned int v77; // eax
  int v78; // eax
  int v79; // edx
  char v80; // si
  __int64 v81; // rdx
  __int64 v82; // rax
  char v83; // si
  char v84; // si
  __int64 v85; // rdx
  __int64 v86; // rax
  char v87; // si
  int *v88; // r14
  int v89; // eax
  __int64 v90; // rax
  char v91; // dl
  char v92; // cl
  __int64 v93; // rax
  char v94; // dl
  char v95; // cl
  void *v96; // rbp
  void *v97; // rbp
  __int64 result; // rax
  __int64 v99; // rbp
  __int64 v100; // rax
  int *v101; // r13
  void *v102; // r12
  __int64 v103; // rsi
  unsigned int v104; // eax
  void *v105; // rbp
  void *v106; // rbp
  __int64 v107; // rax
  __int64 v108; // rbp
  _QWORD *v109; // rdx
  unsigned int v110; // eax
  __int64 v111; // rcx
  int v112; // eax
  __int64 *v113; // rcx
  void *v114; // rbp
  void *v115; // rbp
  unsigned int v116; // eax
  unsigned int v117; // r12d
  unsigned int v118; // ecx
  unsigned int *v119; // rax
  unsigned int v120; // r12d
  unsigned int v121; // ecx
  unsigned int *v122; // rax
  unsigned int v123; // r12d
  unsigned int v124; // ecx
  unsigned int *v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  _QWORD *v128; // rax
  __int64 i; // [rsp+0h] [rbp-168h]
  int v130; // [rsp+0h] [rbp-168h]
  int *v131; // [rsp+8h] [rbp-160h]
  int *v132; // [rsp+10h] [rbp-158h]
  __int64 v134; // [rsp+18h] [rbp-150h]
  __int64 v136; // [rsp+50h] [rbp-118h]
  __int64 v137; // [rsp+58h] [rbp-110h]
  __int64 v138; // [rsp+78h] [rbp-F0h]
  int *v139; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD v140[2]; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v141[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD v142[2]; // [rsp+B0h] [rbp-B8h] BYREF
  _QWORD v143[2]; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD v144[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v145[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v146; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v147; // [rsp+F8h] [rbp-70h]
  __int64 v148; // [rsp+100h] [rbp-68h] BYREF
  __int64 v149; // [rsp+108h] [rbp-60h]
  __int64 v150; // [rsp+110h] [rbp-58h] BYREF
  __int64 v151; // [rsp+118h] [rbp-50h]
  int v152; // [rsp+120h] [rbp-48h] BYREF
  char v153; // [rsp+124h] [rbp-44h]
  __int64 v154; // [rsp+128h] [rbp-40h]

  v139 = nullptr;
  v137 = a1 + 96;
  sub_4AD370(a1 + 96, 0, &v139);
  v7 = (__int64)v139;
  if ( v139 )
  {
    v8 = 8LL * (unsigned int)*(v139 - 1);
    v131 = &v139[v8];
    if ( &v139[v8] != v139 )
    {
      _BitScanReverse64(&v9, (v8 * 4) >> 5);
      sub_4644E0((__int64)v139, (unsigned __int64)&v139[v8], 2LL * (int)v9);
      if ( (unsigned __int64)v8 > 128 )
      {
        v10 = v7 + 512;
        sub_4650A0((int *)v7, (int *)(v7 + 512));
        while ( 1 )
        {
          v11 = *(_BYTE *)(v10 + 4);
          v12 = v10 - 32;
          v13 = qword_1C7F2C0;
          LODWORD(v150) = *(_DWORD *)v10;
          BYTE4(v150) = v11 & 3 | BYTE4(v150) & 0xFC;
          v14 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = 0;
          v151 = v14;
          v15 = *(_BYTE *)(v10 + 20);
          v152 = *(_DWORD *)(v10 + 16);
          v153 = v15 & 3 | v153 & 0xFC;
          v16 = *(_QWORD *)(v10 + 24);
          *(_QWORD *)(v10 + 24) = 0;
          v154 = v16;
          while ( 1 )
          {
            v28 = (int *)(v12 + 32);
            if ( (*(_BYTE *)(v12 + 20) & 1) != 0 || *(_DWORD *)(v12 + 16) != 1 || (v153 & 1) != 0 || v152 != 1 )
            {
              LOBYTE(v17) = sub_1848D40(v13, v12, &v150);
              v13 = qword_1C7F2C0;
              goto LABEL_7;
            }
            if ( (*(_BYTE *)(v12 + 4) & 1) == 0 && (v150 & 0x100000000LL) == 0 )
              break;
            v116 = sub_182C7B0(v13, v12, &v150);
            v13 = qword_1C7F2C0;
            v17 = v116 >> 31;
LABEL_7:
            if ( !(_BYTE)v17 )
              goto LABEL_16;
LABEL_8:
            v18 = *(_DWORD *)(v12 + 32);
            v19 = *(_DWORD *)v12;
            v12 -= 32;
            v20 = *(_BYTE *)(v12 + 36);
            *(_DWORD *)(v12 + 64) = v19;
            v21 = *(_QWORD *)(v12 + 40);
            *(_DWORD *)(v12 + 32) = v18;
            v22 = *(_QWORD *)(v12 + 72);
            *(_QWORD *)(v12 + 72) = v21;
            *(_QWORD *)(v12 + 40) = v22;
            LOBYTE(v21) = *((_BYTE *)v28 + 4);
            *((_BYTE *)v28 + 4) = v20 & 2 | v21 & 0xFD;
            LOBYTE(v22) = v21 & 2 | *(_BYTE *)(v12 + 36) & 0xFD;
            *(_BYTE *)(v12 + 36) = v22;
            v23 = *((_BYTE *)v28 + 4);
            *((_BYTE *)v28 + 4) = v22 & 1 | v23 & 0xFE;
            LODWORD(v21) = *(_DWORD *)(v12 + 48);
            LOBYTE(v22) = v23 & 1 | *(_BYTE *)(v12 + 36) & 0xFE;
            v24 = *(_BYTE *)(v12 + 52);
            *(_BYTE *)(v12 + 36) = v22;
            LODWORD(v22) = *(_DWORD *)(v12 + 80);
            *(_DWORD *)(v12 + 80) = v21;
            v25 = *(_QWORD *)(v12 + 56);
            *(_DWORD *)(v12 + 48) = v22;
            v26 = *(_QWORD *)(v12 + 88);
            *(_QWORD *)(v12 + 88) = v25;
            *(_QWORD *)(v12 + 56) = v26;
            LOBYTE(v25) = *((_BYTE *)v28 + 20);
            *((_BYTE *)v28 + 20) = v24 & 2 | v25 & 0xFD;
            LOBYTE(v26) = v25 & 2 | *(_BYTE *)(v12 + 52) & 0xFD;
            *(_BYTE *)(v12 + 52) = v26;
            v27 = v28[5] & 1;
            *((_BYTE *)v28 + 20) = v26 & 1 | v28[5] & 0xFE;
            *(_BYTE *)(v12 + 52) = v27 | *(_BYTE *)(v12 + 52) & 0xFE;
          }
          if ( *(_DWORD *)v12 < (int)v150 )
            goto LABEL_8;
LABEL_16:
          v29 = *v28;
          v10 += 32;
          *v28 = v150;
          LODWORD(v150) = v29;
          v30 = *(_QWORD *)(v12 + 40);
          *(_QWORD *)(v12 + 40) = v151;
          v151 = v30;
          v31 = *(_BYTE *)(v12 + 36);
          *(_BYTE *)(v12 + 36) = BYTE4(v150) & 2 | v31 & 0xFD;
          BYTE4(v150) = v31 & 2 | BYTE4(v150) & 0xFD;
          v32 = *(_BYTE *)(v12 + 36);
          *(_BYTE *)(v12 + 36) = BYTE4(v150) & 1 | v32 & 0xFE;
          BYTE4(v150) = v32 & 1 | BYTE4(v150) & 0xFE;
          LODWORD(v30) = *(_DWORD *)(v12 + 48);
          *(_DWORD *)(v12 + 48) = v152;
          v152 = v30;
          v33 = *(_QWORD *)(v12 + 56);
          *(_QWORD *)(v12 + 56) = v154;
          v154 = v33;
          v34 = *(_BYTE *)(v12 + 52);
          *(_BYTE *)(v12 + 52) = v153 & 2 | v34 & 0xFD;
          v153 = v34 & 2 | v153 & 0xFD;
          v35 = *(_BYTE *)(v12 + 52) & 1;
          *(_BYTE *)(v12 + 52) = v153 & 1 | *(_BYTE *)(v12 + 52) & 0xFE;
          v153 = v35 | v153 & 0xFE;
          sub_182CBA0(v13, &v150);
          sub_182CBA0(v13, &v152);
          if ( v131 == (int *)v10 )
          {
            v7 = (__int64)v139;
            goto LABEL_19;
          }
        }
      }
      sub_4650A0((int *)v7, v131);
      v7 = (__int64)v139;
    }
  }
LABEL_19:
  v138 = *(_QWORD *)(a1 + 32);
  v136 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(*a2 + 8);
  v146 = 0;
  v36 = qword_1C7F2C0;
  v147 = 0;
  v148 = 1;
  v149 = 0;
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v146, v7);
  else
    LODWORD(v146) = *(_DWORD *)v7;
  if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
  {
    sub_182C690(v36, &v148, v7 + 16);
  }
  else
  {
    v37 = *(_DWORD *)(v7 + 16);
    BYTE4(v148) &= ~1u;
    LODWORD(v148) = v37;
  }
  v38 = sub_4660A0((_QWORD *)a1, v136, (__int64)&v146);
  v39 = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  v40 = *(_QWORD **)(a3 + 8);
  if ( v40 )
  {
    v41 = *((_DWORD *)v40 - 1);
    if ( v41 == *((_DWORD *)v40 - 2) )
    {
      v123 = (3 * v41 + 1) >> 1;
      v124 = 8 * v123 + 8;
      if ( 8 * v41 + 8 >= v124 || v41 >= v123 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v150, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v150);
        sub_233E40((__int64)&v150);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v125 = (unsigned int *)sub_186B300(v40 - 1, v124);
      v40 = v125 + 2;
      *v125 = v123;
      *(_QWORD *)(a3 + 8) = v125 + 2;
      LODWORD(v125) = v125[1];
      v44 = &v40[(unsigned int)v125];
      v43 = (_DWORD)v125 + 1;
    }
    else
    {
      v42 = v41;
      v43 = v41 + 1;
      v44 = &v40[v42];
    }
  }
  else
  {
    v128 = (_QWORD *)sub_186B270(0x18u);
    *v128 = 2;
    v40 = v128 + 1;
    *(_QWORD *)(a3 + 8) = v128 + 1;
    v44 = v128 + 1;
    v43 = 1;
  }
  *v44 = v39;
  v45 = qword_1C7F2C0;
  *((_DWORD *)v40 - 1) = v43;
  sub_182CBA0(v45, &v146);
  sub_182CBA0(v45, &v148);
  v46 = 0x7FFFFFFF8LL;
  if ( v139 )
    v46 = 8LL * (unsigned int)(*(v139 - 1) - 1);
  v47 = &v139[v46];
  v48 = qword_1C7F2C0;
  v146 = 0;
  v147 = 0;
  v148 = 1;
  v149 = 0;
  if ( (v139[v46 + 1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v146, v47);
    if ( (v47[5] & 1) == 0 )
      goto LABEL_34;
  }
  else
  {
    LODWORD(v146) = *v47;
    if ( (v47[5] & 1) == 0 )
    {
LABEL_34:
      v49 = v47[4];
      BYTE4(v148) &= ~1u;
      LODWORD(v148) = v49;
      goto LABEL_35;
    }
  }
  sub_182C690(v48, &v148, v47 + 4);
LABEL_35:
  v50 = sub_4660A0((_QWORD *)a1, v136, (__int64)&v146);
  v51 = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v52 = *(_QWORD **)(a3 + 8);
  if ( v52 )
  {
    v53 = *((_DWORD *)v52 - 1);
    if ( v53 == *((_DWORD *)v52 - 2) )
    {
      v120 = (3 * v53 + 1) >> 1;
      v121 = 8 * v120 + 8;
      if ( 8 * v53 + 8 >= v121 || v53 >= v120 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v150, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v150);
        sub_233E40((__int64)&v150);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v122 = (unsigned int *)sub_186B300(v52 - 1, v121);
      v52 = v122 + 2;
      *v122 = v120;
      *(_QWORD *)(a3 + 8) = v122 + 2;
      LODWORD(v122) = v122[1];
      v56 = &v52[(unsigned int)v122];
      v55 = (_DWORD)v122 + 1;
    }
    else
    {
      v54 = v53;
      v55 = v53 + 1;
      v56 = &v52[v54];
    }
  }
  else
  {
    v127 = (_QWORD *)sub_186B270(0x18u);
    *v127 = 2;
    v52 = v127 + 1;
    *(_QWORD *)(a3 + 8) = v127 + 1;
    v56 = v127 + 1;
    v55 = 1;
  }
  *v56 = v51;
  v57 = qword_1C7F2C0;
  *((_DWORD *)v52 - 1) = v55;
  sub_182CBA0(v57, &v146);
  sub_182CBA0(v57, &v148);
  v58 = *(_DWORD *)(a1 + 100);
  v140[0] = 0;
  v140[1] = 0;
  v141[0] = 1;
  v141[1] = 0;
  v142[0] = 0;
  v142[1] = 0;
  v143[0] = 1;
  v143[1] = 0;
  for ( i = 0; (unsigned int)i < v58; ++i )
  {
    v59 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * i);
    v134 = v59;
    if ( v59 )
    {
      v60 = *(_DWORD **)(sub_15D1F10(v59) + 24);
      if ( v60 && *v60 == 5 && v60[1] == 1 || (v61 = sub_15D1F10(v134), (unsigned __int8)sub_1673B10(a1 + 56, v61)) )
      {
        v62 = (__int64)v139;
        if ( v139 )
        {
          v63 = (unsigned int)*(v139 - 1);
          if ( (_DWORD)v63 )
          {
            v64 = &v139[8 * v63];
            do
            {
              v65 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v62);
              v66 = v62 + 16;
              v62 += 32;
              sub_182CBA0(v65, v66);
            }
            while ( (int *)v62 != v64 );
            v62 = (__int64)v139;
          }
          *(_DWORD *)(v62 - 4) = 0;
        }
        sub_4AD370(v137, (unsigned int)i, &v139);
        v67 = v139;
        if ( v139 )
        {
          v68 = 8LL * (unsigned int)*(v139 - 1);
          v132 = &v139[v68];
          if ( v139 != &v139[v68] )
          {
            _BitScanReverse64(&v69, (v68 * 4) >> 5);
            sub_4644E0((__int64)v139, (unsigned __int64)&v139[v68], 2LL * (int)v69);
            if ( (unsigned __int64)v68 <= 128 )
            {
              sub_4650A0(v67, v132);
              goto LABEL_67;
            }
            v70 = v67 + 128;
            sub_4650A0(v67, v67 + 128);
            do
            {
              v71 = *((_BYTE *)v70 + 4);
              v72 = v70 - 8;
              v73 = qword_1C7F2C0;
              LODWORD(v150) = *v70;
              BYTE4(v150) = v71 & 3 | BYTE4(v150) & 0xFC;
              v74 = *((_QWORD *)v70 + 1);
              *((_QWORD *)v70 + 1) = 0;
              v151 = v74;
              v75 = *((_BYTE *)v70 + 20);
              v152 = v70[4];
              v153 = v75 & 3 | v153 & 0xFC;
              v76 = *((_QWORD *)v70 + 3);
              *((_QWORD *)v70 + 3) = 0;
              v154 = v76;
              while ( 1 )
              {
                v88 = v72 + 8;
                if ( (v72[5] & 1) != 0 || v72[4] != 1 || (v153 & 1) != 0 || v152 != 1 )
                {
                  LOBYTE(v77) = sub_1848D40(v73, v72, &v150);
                  v73 = qword_1C7F2C0;
                  goto LABEL_57;
                }
                if ( (v72[1] & 1) == 0 && (v150 & 0x100000000LL) == 0 )
                  break;
                v104 = sub_182C7B0(v73, v72, &v150);
                v73 = qword_1C7F2C0;
                v77 = v104 >> 31;
LABEL_57:
                if ( !(_BYTE)v77 )
                  goto LABEL_66;
LABEL_58:
                v78 = v72[8];
                v79 = *v72;
                v72 -= 8;
                v80 = *((_BYTE *)v72 + 36);
                v72[16] = v79;
                v81 = *((_QWORD *)v72 + 5);
                v72[8] = v78;
                v82 = *((_QWORD *)v72 + 9);
                *((_QWORD *)v72 + 9) = v81;
                *((_QWORD *)v72 + 5) = v82;
                LOBYTE(v81) = *((_BYTE *)v88 + 4);
                *((_BYTE *)v88 + 4) = v80 & 2 | v81 & 0xFD;
                LOBYTE(v82) = v81 & 2 | v72[9] & 0xFD;
                *((_BYTE *)v72 + 36) = v82;
                v83 = *((_BYTE *)v88 + 4);
                *((_BYTE *)v88 + 4) = v82 & 1 | v83 & 0xFE;
                LODWORD(v81) = v72[12];
                LOBYTE(v82) = v83 & 1 | v72[9] & 0xFE;
                v84 = *((_BYTE *)v72 + 52);
                *((_BYTE *)v72 + 36) = v82;
                LODWORD(v82) = v72[20];
                v72[20] = v81;
                v85 = *((_QWORD *)v72 + 7);
                v72[12] = v82;
                v86 = *((_QWORD *)v72 + 11);
                *((_QWORD *)v72 + 11) = v85;
                *((_QWORD *)v72 + 7) = v86;
                LOBYTE(v85) = *((_BYTE *)v88 + 20);
                *((_BYTE *)v88 + 20) = v84 & 2 | v85 & 0xFD;
                LOBYTE(v86) = v85 & 2 | v72[13] & 0xFD;
                *((_BYTE *)v72 + 52) = v86;
                v87 = v88[5] & 1;
                *((_BYTE *)v88 + 20) = v86 & 1 | v88[5] & 0xFE;
                *((_BYTE *)v72 + 52) = v87 | v72[13] & 0xFE;
              }
              if ( *v72 < (int)v150 )
                goto LABEL_58;
LABEL_66:
              v89 = *v88;
              v70 += 8;
              *v88 = v150;
              LODWORD(v150) = v89;
              v90 = *((_QWORD *)v72 + 5);
              *((_QWORD *)v72 + 5) = v151;
              v151 = v90;
              v91 = *((_BYTE *)v72 + 36);
              *((_BYTE *)v72 + 36) = BYTE4(v150) & 2 | v91 & 0xFD;
              BYTE4(v150) = v91 & 2 | BYTE4(v150) & 0xFD;
              v92 = *((_BYTE *)v72 + 36);
              *((_BYTE *)v72 + 36) = BYTE4(v150) & 1 | v92 & 0xFE;
              BYTE4(v150) = v92 & 1 | BYTE4(v150) & 0xFE;
              LODWORD(v90) = v72[12];
              v72[12] = v152;
              v152 = v90;
              v93 = *((_QWORD *)v72 + 7);
              *((_QWORD *)v72 + 7) = v154;
              v154 = v93;
              v94 = *((_BYTE *)v72 + 52);
              *((_BYTE *)v72 + 52) = v153 & 2 | v94 & 0xFD;
              v153 = v94 & 2 | v153 & 0xFD;
              v95 = v72[13] & 1;
              *((_BYTE *)v72 + 52) = v153 & 1 | v72[13] & 0xFE;
              v153 = v95 | v153 & 0xFE;
              sub_182CBA0(v73, &v150);
              sub_182CBA0(v73, &v152);
            }
            while ( v132 != v70 );
          }
        }
LABEL_67:
        if ( (unsigned __int8)sub_465900(a1, (__int64 *)&v139, (__int64)v140, (__int64)v142) )
        {
          v146 = 0;
          v105 = qword_1C7F2C0;
          v147 = 0;
          v148 = 1;
          v149 = 0;
          if ( (v142[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v146, v142);
          else
            LODWORD(v146) = v142[0];
          if ( (v143[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v105, &v148, v143);
          }
          else
          {
            BYTE4(v148) &= ~1u;
            LODWORD(v148) = v143[0];
          }
          v144[0] = 0;
          v106 = qword_1C7F2C0;
          v144[1] = 0;
          v145[0] = 1;
          v145[1] = 0;
          if ( (v140[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, v144, v140);
          else
            LODWORD(v144[0]) = v140[0];
          if ( (v141[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v106, v145, v141);
          }
          else
          {
            BYTE4(v145[0]) &= ~1u;
            LODWORD(v145[0]) = v141[0];
          }
          v107 = sub_466210(a1, v134, (__int64)v144, (__int64)&v146);
          v108 = v107;
          if ( v107 )
            ++*(_DWORD *)(v107 + 8);
          v109 = *(_QWORD **)(a3 + 8);
          if ( v109 )
          {
            v110 = *((_DWORD *)v109 - 1);
            if ( v110 == *((_DWORD *)v109 - 2) )
            {
              v117 = (3 * v110 + 1) >> 1;
              v118 = 8 * v117 + 8;
              if ( 8 * v110 + 8 >= v118 || v110 >= v117 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v150, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, &v150);
                sub_233E40((__int64)&v150);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v119 = (unsigned int *)sub_186B300(v109 - 1, v118);
              v109 = v119 + 2;
              *v119 = v117;
              *(_QWORD *)(a3 + 8) = v119 + 2;
              LODWORD(v119) = v119[1];
              v113 = &v109[(unsigned int)v119];
              v112 = (_DWORD)v119 + 1;
            }
            else
            {
              v111 = v110;
              v112 = v110 + 1;
              v113 = &v109[v111];
            }
          }
          else
          {
            v126 = (_QWORD *)sub_186B270(0x18u);
            *v126 = 2;
            v109 = v126 + 1;
            *(_QWORD *)(a3 + 8) = v126 + 1;
            v113 = v126 + 1;
            v112 = 1;
          }
          *v113 = v108;
          v114 = qword_1C7F2C0;
          *((_DWORD *)v109 - 1) = v112;
          sub_182CBA0(v114, v144);
          sub_182CBA0(v114, v145);
          v115 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v146);
          sub_182CBA0(v115, &v148);
        }
      }
      v58 = *(_DWORD *)(a1 + 100);
    }
  }
  v96 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v142);
  sub_182CBA0(v96, v143);
  v97 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v140);
  result = sub_182CBA0(v97, v141);
  if ( v136 )
  {
    v130 = *(_DWORD *)(v136 + 8);
    result = (unsigned int)(v130 - 1);
    *(_DWORD *)(v136 + 8) = result;
    if ( v130 == 1 )
      result = sub_15D7BC0(v138, v136);
  }
  v99 = (__int64)v139;
  if ( v139 )
  {
    v100 = (unsigned int)*(v139 - 1);
    if ( (_DWORD)v100 )
    {
      v101 = &v139[8 * v100];
      do
      {
        v102 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v99);
        v103 = v99 + 16;
        v99 += 32;
        sub_182CBA0(v102, v103);
      }
      while ( (int *)v99 != v101 );
      v99 = (__int64)v139;
    }
    return sub_186B220((void *)(v99 - 8));
  }
  return result;
}

