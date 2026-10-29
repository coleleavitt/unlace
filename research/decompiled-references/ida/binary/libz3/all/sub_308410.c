__int64 __fastcall sub_308410(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  char **exception; // r12
  char **v5; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 *v20; // rcx
  int v21; // edi
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // r9
  __int64 *i; // rax
  __int64 v27; // rdx
  void *v28; // r15
  __int64 v29; // rax
  void *v30; // r15
  int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // r11d
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r9
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // r11
  __int64 v43; // rsi
  __int64 v44; // rdx
  void *v45; // r15
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 *v48; // rdx
  int v49; // esi
  __int64 v50; // r11
  __int64 *v51; // rcx
  __int64 v52; // r10
  __int64 *v53; // rdi
  __int64 *v54; // rax
  _QWORD *v55; // r15
  int v56; // eax
  void *v57; // rbp
  _QWORD *v58; // rsi
  __int64 v59; // rdx
  __int64 v61; // rax
  unsigned int v62; // r15d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rcx
  char v66; // al
  char v67; // al
  int v68; // eax
  void *v69; // rbp
  __int64 v70; // rbp
  _QWORD *v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 *v75; // rcx
  unsigned int v76; // r15d
  unsigned int v77; // ecx
  unsigned int *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r15
  int v81; // r11d
  __int64 v82; // rdx
  __int64 *v83; // r15
  __int64 v84; // rdx
  __int64 *v85; // r9
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rdi
  __int64 v89; // rdx
  int v90; // edi
  int v91; // esi
  __int64 v92; // rdi
  __int64 v93; // rsi
  char v94; // r10
  char v95; // r10
  __int64 v96; // rdi
  __int64 v97; // rsi
  char v98; // r10
  char v99; // r10
  char *v100; // r15
  char *v101; // rbx
  void *v102; // r12
  _QWORD *v103; // rsi
  int v104; // eax
  int v105; // edx
  __int64 v106; // rax
  char v107; // cl
  __int64 v108; // rax
  char v109; // cl
  _QWORD *v110; // rax
  int v111; // eax
  int v112; // ecx
  __int64 v113; // rax
  char v114; // si
  __int64 v115; // rax
  char v116; // si
  _QWORD *v117; // rax
  int v118; // edx
  int v119; // ecx
  __int64 v120; // rdx
  char v121; // si
  __int64 v122; // rdx
  char v123; // si
  void *v124; // [rsp+8h] [rbp-D0h]
  __int64 v125; // [rsp+10h] [rbp-C8h]
  __int64 v126; // [rsp+20h] [rbp-B8h]
  size_t v128; // [rsp+30h] [rbp-A8h]
  __int64 v129; // [rsp+30h] [rbp-A8h]
  __int64 v130; // [rsp+30h] [rbp-A8h]
  int v131; // [rsp+38h] [rbp-A0h]
  __int64 v132; // [rsp+38h] [rbp-A0h]
  unsigned int v133; // [rsp+38h] [rbp-A0h]
  __int64 *v134; // [rsp+40h] [rbp-98h]
  __int64 v135; // [rsp+40h] [rbp-98h]
  __int64 v136; // [rsp+48h] [rbp-90h]
  __int64 v137; // [rsp+50h] [rbp-88h]
  unsigned int v138; // [rsp+58h] [rbp-80h]
  int v139; // [rsp+58h] [rbp-80h]
  int v140; // [rsp+5Ch] [rbp-7Ch]
  __int64 v141; // [rsp+70h] [rbp-68h] BYREF
  __int64 v142; // [rsp+78h] [rbp-60h] BYREF
  __int64 v143; // [rsp+80h] [rbp-58h]
  __int64 v144; // [rsp+88h] [rbp-50h] BYREF
  __int64 v145; // [rsp+90h] [rbp-48h]

  v8 = a1;
  v9 = sub_186B270(0x140u);
  *(_QWORD *)(v9 + 224) = 1;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 1;
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 1;
  *(_QWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 104) = 1;
  *(_QWORD *)(v9 + 112) = 0;
  *(_QWORD *)(v9 + 120) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  *(_QWORD *)(v9 + 136) = 0;
  *(_QWORD *)(v9 + 144) = 1;
  *(_QWORD *)(v9 + 152) = 0;
  *(_QWORD *)(v9 + 160) = 0;
  *(_QWORD *)(v9 + 168) = 0;
  *(_QWORD *)(v9 + 176) = 0;
  *(_QWORD *)(v9 + 184) = 1;
  *(_QWORD *)(v9 + 192) = 0;
  *(_QWORD *)(v9 + 200) = 0;
  *(_QWORD *)(v9 + 208) = 0;
  *(_QWORD *)(v9 + 216) = 0;
  *(_BYTE *)(v9 + 228) = 0;
  *(_QWORD *)(v9 + 248) = 0;
  *(_OWORD *)(v9 + 232) = 0;
  *(_QWORD *)(v9 + 256) = 0;
  v10 = *a3;
  *(_QWORD *)(v9 + 264) = 1;
  *(_QWORD *)(v9 + 272) = 0;
  *(_QWORD *)(v9 + 280) = 0;
  *(_QWORD *)(v9 + 288) = 0;
  *(_QWORD *)(v9 + 296) = 0;
  *(_QWORD *)(v9 + 304) = 1;
  *(_QWORD *)(v9 + 312) = 0;
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = 8;
  *(_DWORD *)(a1 + 16) = 0;
  if ( !v10 )
    return v8;
  v125 = v10 + 56LL * *(unsigned int *)(v10 - 4);
  if ( v10 == v125 )
    return v8;
  v11 = v10;
  do
  {
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
      ++*(_DWORD *)(v12 + 8);
    v13 = *(_QWORD **)(a2 + 24);
    if ( v13 )
    {
      v14 = *((_DWORD *)v13 - 1);
      if ( v14 == *((_DWORD *)v13 - 2) )
      {
        v62 = (3 * v14 + 1) >> 1;
        v63 = 8 * v62 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v63 || v14 >= v62 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v141, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v141);
          sub_233E40((__int64)&v141);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v64 = (unsigned int *)sub_186B300(v13 - 1, v63);
        v65 = v64[1];
        v13 = v64 + 2;
        *v64 = v62;
        *(_QWORD *)(a2 + 24) = v64 + 2;
        LODWORD(v64) = v65;
        v17 = &v13[v65];
        v16 = (_DWORD)v64 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = &v13[v15];
      }
    }
    else
    {
      v110 = (_QWORD *)sub_186B270(0x18u);
      v13 = v110 + 1;
      *v110 = 2;
      v16 = 1;
      *(_QWORD *)(a2 + 24) = v13;
      v17 = v13;
    }
    *v17 = v12;
    v18 = *(_QWORD *)v11;
    *((_DWORD *)v13 - 1) = v16;
    v19 = *(unsigned int *)(v8 + 8);
    v142 = 0;
    v20 = *(__int64 **)v8;
    v144 = 1;
    v21 = *(_DWORD *)(v18 + 12);
    v22 = v19 - 1;
    v19 *= 40;
    v141 = v18;
    v23 = (__int64 *)((char *)v20 + v19);
    v143 = 0;
    v145 = 0;
    v24 = 40LL * (v21 & v22);
    v25 = &v20[(unsigned __int64)v24 / 8];
    if ( v24 != v19 )
    {
      for ( i = &v20[(unsigned __int64)v24 / 8]; v23 != i; i += 5 )
      {
        v27 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v27 + 12) == v21 && v18 == v27 )
          {
LABEL_36:
            v45 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v142);
            sub_182CBA0(v45, &v144);
            v46 = *(_QWORD *)v11;
            v47 = *(unsigned int *)(v8 + 8);
            v142 = 0;
            v144 = 1;
            v48 = *(__int64 **)v8;
            v49 = *(_DWORD *)(v46 + 12);
            v141 = v46;
            v143 = 0;
            v50 = 40 * v47;
            v145 = 0;
            v51 = &v48[5 * v47];
            v52 = 40LL * (v49 & (unsigned int)(v47 - 1));
            v53 = &v48[(unsigned __int64)v52 / 8];
            v54 = &v48[(unsigned __int64)v52 / 8];
            if ( v52 == v50 )
            {
LABEL_58:
              if ( v48 == v53 )
              {
LABEL_66:
                v55 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v55 = (_QWORD *)*v48;
                    if ( (unsigned __int64)*v48 > 1 )
                      break;
                    if ( !v55 )
                      goto LABEL_43;
                    v48 += 5;
                    if ( v53 == v48 )
                      goto LABEL_66;
                  }
                  if ( *((_DWORD *)v55 + 3) == v49 && v55 == (_QWORD *)v46 )
                    break;
                  v48 += 5;
                  if ( v53 == v48 )
                    goto LABEL_66;
                }
                v55 = v48;
              }
LABEL_43:
              v124 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v142);
              sub_182CBA0(v124, &v144);
              v56 = *(_DWORD *)(v11 + 16);
              v57 = qword_1C7F2C0;
              v58 = v55 + 1;
              if ( v56 )
              {
                v59 = v11 + 16;
                if ( *((_DWORD *)v55 + 2) )
                {
                  if ( (*((_BYTE *)v55 + 28) & 1) != 0
                    || *((_DWORD *)v55 + 6) != 1
                    || (*(_BYTE *)(v11 + 36) & 1) != 0
                    || *(_DWORD *)(v11 + 32) != 1 )
                  {
                    sub_1851D20(qword_1C7F2C0, v58, v59, v55 + 1);
                  }
                  else
                  {
                    sub_1831A80(qword_1C7F2C0, v58, v59, v55 + 1);
                    sub_182CBA0(v57, v55 + 3);
                    *((_BYTE *)v55 + 28) &= ~1u;
                    *((_DWORD *)v55 + 6) = 1;
                  }
                }
                else
                {
                  if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
                  {
                    sub_182C690(qword_1C7F2C0, v58, v59);
                  }
                  else
                  {
                    *((_BYTE *)v55 + 12) &= ~1u;
                    *((_DWORD *)v55 + 2) = v56;
                  }
                  if ( (*(_BYTE *)(v11 + 36) & 1) != 0 )
                  {
                    sub_182C690(v57, v55 + 3, v11 + 32);
                  }
                  else
                  {
                    v68 = *(_DWORD *)(v11 + 32);
                    *((_BYTE *)v55 + 28) &= ~1u;
                    *((_DWORD *)v55 + 6) = v68;
                  }
                }
              }
              else
              {
                v66 = *((_BYTE *)v55 + 12);
                if ( (v66 & 1) != 0 )
                  sub_182C690(qword_1C7F2C0, v58, v55 + 1);
                else
                  *((_BYTE *)v55 + 12) = v66 & 0xFE;
                v67 = *((_BYTE *)v55 + 28);
                if ( (v67 & 1) != 0 )
                  sub_182C690(v57, v55 + 3, v55 + 3);
                else
                  *((_BYTE *)v55 + 28) = v67 & 0xFE;
              }
              goto LABEL_48;
            }
            while ( 1 )
            {
              v55 = (_QWORD *)*v54;
              if ( (unsigned __int64)*v54 > 1 )
              {
                if ( *((_DWORD *)v55 + 3) == v49 && v55 == (_QWORD *)v46 )
                {
                  v55 = v54;
                  goto LABEL_43;
                }
              }
              else if ( !v55 )
              {
                goto LABEL_43;
              }
              v54 += 5;
              if ( v51 == v54 )
                goto LABEL_58;
            }
          }
        }
        else if ( !v27 )
        {
          goto LABEL_16;
        }
      }
    }
    for ( ; v25 != v20; v20 += 5 )
    {
      v61 = *v20;
      if ( (unsigned __int64)*v20 > 1 )
      {
        if ( *(_DWORD *)(v61 + 12) == v21 && v18 == v61 )
          goto LABEL_36;
      }
      else if ( !v61 )
      {
        break;
      }
    }
LABEL_16:
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v142);
    sub_182CBA0(v28, &v144);
    v29 = *(_QWORD *)v11;
    v30 = qword_1C7F2C0;
    v142 = 0;
    v143 = 0;
    v141 = v29;
    v144 = 1;
    v145 = 0;
    if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v142, v11 + 16);
      if ( (*(_BYTE *)(v11 + 36) & 1) != 0 )
      {
LABEL_114:
        sub_182C690(v30, &v144, v11 + 32);
        goto LABEL_19;
      }
    }
    else
    {
      LODWORD(v142) = *(_DWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v11 + 36) & 1) != 0 )
        goto LABEL_114;
    }
    v31 = *(_DWORD *)(v11 + 32);
    BYTE4(v144) &= ~1u;
    LODWORD(v144) = v31;
LABEL_19:
    v32 = *(unsigned int *)(v8 + 8);
    v33 = 2 * v32;
    if ( 3 * (int)v32 < (unsigned int)(4 * (*(_DWORD *)(v8 + 12) + *(_DWORD *)(v8 + 16))) )
    {
      v80 = v33;
      v131 = 2 * v32;
      v128 = 40LL * v33;
      v126 = v128;
      v35 = sub_186B270(v128);
      v81 = v131;
      if ( v131 )
      {
        v82 = v35;
        do
        {
          *(_OWORD *)(v82 + 24) = 0;
          v82 += 40;
          *(_OWORD *)(v82 - 32) = 0;
          *(_QWORD *)(v82 - 40) = 0;
          *(_BYTE *)(v82 - 28) = 0;
          *(_DWORD *)(v82 - 16) = 1;
          *(_BYTE *)(v82 - 12) = 0;
        }
        while ( v35 + 40 * v80 != v82 );
      }
      v83 = *(__int64 **)v8;
      v34 = v131 - 1;
      v84 = *(unsigned int *)(v8 + 8);
      v85 = (__int64 *)(*(_QWORD *)v8 + 40 * v84);
      v36 = v35 + v128;
      if ( *(__int64 **)v8 != v85 )
      {
        do
        {
          while ( 1 )
          {
            v86 = *v83;
            if ( (unsigned __int64)*v83 > 1 )
              break;
            v83 += 5;
            if ( v85 == v83 )
              goto LABEL_100;
          }
          v87 = 40LL * (*(_DWORD *)(v86 + 12) & v34);
          v88 = v35 + v87;
          if ( v128 == v87 )
          {
LABEL_108:
            if ( v35 == v88 )
            {
LABEL_123:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v89 = v35;
            while ( *(_QWORD *)v89 )
            {
              v89 += 40;
              if ( v88 == v89 )
                goto LABEL_123;
            }
          }
          else
          {
            v89 = v35 + v87;
            while ( *(_QWORD *)v89 )
            {
              v89 += 40;
              if ( v36 == v89 )
                goto LABEL_108;
            }
          }
          v90 = *((_DWORD *)v83 + 2);
          *(_QWORD *)v89 = v86;
          v83 += 5;
          v91 = *(_DWORD *)(v89 + 8);
          *(_DWORD *)(v89 + 8) = v90;
          v92 = *(v83 - 3);
          *((_DWORD *)v83 - 8) = v91;
          v93 = *(_QWORD *)(v89 + 16);
          *(_QWORD *)(v89 + 16) = v92;
          v94 = *((_BYTE *)v83 - 28);
          *(v83 - 3) = v93;
          LOBYTE(v93) = *(_BYTE *)(v89 + 12);
          *(_BYTE *)(v89 + 12) = v94 & 2 | v93 & 0xFD;
          LOBYTE(v93) = v93 & 2 | *((_BYTE *)v83 - 28) & 0xFD;
          *((_BYTE *)v83 - 28) = v93;
          v95 = *(_BYTE *)(v89 + 12);
          *(_BYTE *)(v89 + 12) = v93 & 1 | v95 & 0xFE;
          LODWORD(v92) = *((_DWORD *)v83 - 4);
          *((_BYTE *)v83 - 28) = v95 & 1 | *((_BYTE *)v83 - 28) & 0xFE;
          LODWORD(v93) = *(_DWORD *)(v89 + 24);
          *(_DWORD *)(v89 + 24) = v92;
          v96 = *(v83 - 1);
          *((_DWORD *)v83 - 4) = v93;
          v97 = *(_QWORD *)(v89 + 32);
          *(_QWORD *)(v89 + 32) = v96;
          v98 = *((_BYTE *)v83 - 12);
          *(v83 - 1) = v97;
          LOBYTE(v97) = *(_BYTE *)(v89 + 28);
          *(_BYTE *)(v89 + 28) = v98 & 2 | v97 & 0xFD;
          LOBYTE(v97) = v97 & 2 | *((_BYTE *)v83 - 12) & 0xFD;
          *((_BYTE *)v83 - 12) = v97;
          v99 = *(_BYTE *)(v89 + 28) & 1;
          *(_BYTE *)(v89 + 28) = v97 & 1 | *(_BYTE *)(v89 + 28) & 0xFE;
          *((_BYTE *)v83 - 12) = v99 | *((_BYTE *)v83 - 12) & 0xFE;
        }
        while ( v85 != v83 );
LABEL_100:
        v84 = *(unsigned int *)(v8 + 8);
        v85 = *(__int64 **)v8;
      }
      if ( v85 )
      {
        if ( (_DWORD)v84 )
        {
          v129 = v11;
          v132 = v35;
          v134 = v85;
          v100 = (char *)&v85[5 * v84];
          v138 = v34;
          v136 = v36;
          v140 = v81;
          v137 = v8;
          v101 = (char *)v85;
          do
          {
            v102 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v101 + 8);
            v103 = v101 + 24;
            v101 += 40;
            sub_182CBA0(v102, v103);
          }
          while ( v100 != v101 );
          v11 = v129;
          v35 = v132;
          v85 = v134;
          v34 = v138;
          v36 = v136;
          v8 = v137;
          v81 = v140;
        }
        v139 = v81;
        v135 = v36;
        v133 = v34;
        v130 = v35;
        sub_186B220(v85);
        v35 = v130;
        v34 = v133;
        v36 = v135;
        v81 = v139;
      }
      *(_QWORD *)v8 = v35;
      *(_DWORD *)(v8 + 8) = v81;
      *(_DWORD *)(v8 + 16) = 0;
    }
    else
    {
      v34 = v32 - 1;
      v35 = *(_QWORD *)v8;
      v126 = 40 * v32;
      v36 = *(_QWORD *)v8 + 40 * v32;
    }
    v37 = v141;
    v38 = *(_DWORD *)(v141 + 12);
    v39 = 40LL * (v38 & v34);
    v40 = v35 + v39;
    if ( v39 != v126 )
    {
      v41 = v35 + v39;
      v42 = 0;
      while ( 1 )
      {
        v43 = *(_QWORD *)v41;
        if ( *(_QWORD *)v41 > 1u )
        {
          if ( *(_DWORD *)(v43 + 12) == v38 && v141 == v43 )
          {
            v111 = *(_DWORD *)(v41 + 8);
            v112 = v142;
            *(_QWORD *)v41 = v141;
            *(_DWORD *)(v41 + 8) = v112;
            LODWORD(v142) = v111;
            v113 = *(_QWORD *)(v41 + 16);
            *(_QWORD *)(v41 + 16) = v143;
            v143 = v113;
            LOBYTE(v112) = *(_BYTE *)(v41 + 12);
            *(_BYTE *)(v41 + 12) = BYTE4(v142) & 2 | v112 & 0xFD;
            BYTE4(v142) = v112 & 2 | BYTE4(v142) & 0xFD;
            v114 = *(_BYTE *)(v41 + 12);
            *(_BYTE *)(v41 + 12) = v114 & 0xFE | BYTE4(v142) & 1;
            BYTE4(v142) = v114 & 1 | BYTE4(v142) & 0xFE;
            LODWORD(v113) = *(_DWORD *)(v41 + 24);
            *(_DWORD *)(v41 + 24) = v144;
            LODWORD(v144) = v113;
            v115 = *(_QWORD *)(v41 + 32);
            *(_QWORD *)(v41 + 32) = v145;
            v145 = v115;
            LOBYTE(v112) = *(_BYTE *)(v41 + 28);
            *(_BYTE *)(v41 + 28) = BYTE4(v144) & 2 | v112 & 0xFD;
            BYTE4(v144) = v112 & 2 | BYTE4(v144) & 0xFD;
            v116 = *(_BYTE *)(v41 + 28) & 1;
            *(_BYTE *)(v41 + 28) = *(_BYTE *)(v41 + 28) & 0xFE | BYTE4(v144) & 1;
            BYTE4(v144) = v116 | BYTE4(v144) & 0xFE;
            goto LABEL_79;
          }
        }
        else
        {
          if ( !v43 )
          {
            if ( v42 )
              goto LABEL_116;
            v42 = v41;
            goto LABEL_117;
          }
          v42 = v41;
        }
        v41 += 40;
        if ( v41 == v36 )
          goto LABEL_32;
      }
    }
    v42 = 0;
    while ( 1 )
    {
LABEL_32:
      if ( v40 == v35 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v44 = *(_QWORD *)v35;
      if ( *(_QWORD *)v35 <= 1u )
        break;
      if ( *(_DWORD *)(v44 + 12) == v38 && v141 == v44 )
      {
        v118 = *(_DWORD *)(v35 + 8);
        v119 = v142;
        *(_QWORD *)v35 = v141;
        *(_DWORD *)(v35 + 8) = v119;
        LODWORD(v142) = v118;
        v120 = *(_QWORD *)(v35 + 16);
        *(_QWORD *)(v35 + 16) = v143;
        v143 = v120;
        LOBYTE(v120) = *(_BYTE *)(v35 + 12);
        *(_BYTE *)(v35 + 12) = BYTE4(v142) & 2 | v120 & 0xFD;
        BYTE4(v142) = v120 & 2 | BYTE4(v142) & 0xFD;
        v121 = *(_BYTE *)(v35 + 12);
        *(_BYTE *)(v35 + 12) = v121 & 0xFE | BYTE4(v142) & 1;
        BYTE4(v142) = v121 & 1 | BYTE4(v142) & 0xFE;
        LODWORD(v120) = *(_DWORD *)(v35 + 24);
        *(_DWORD *)(v35 + 24) = v144;
        LODWORD(v144) = v120;
        v122 = *(_QWORD *)(v35 + 32);
        *(_QWORD *)(v35 + 32) = v145;
        v145 = v122;
        LOBYTE(v122) = *(_BYTE *)(v35 + 28);
        *(_BYTE *)(v35 + 28) = BYTE4(v144) & 2 | v122 & 0xFD;
        BYTE4(v144) = v122 & 2 | BYTE4(v144) & 0xFD;
        v123 = *(_BYTE *)(v35 + 28) & 1;
        *(_BYTE *)(v35 + 28) = *(_BYTE *)(v35 + 28) & 0xFE | BYTE4(v144) & 1;
        BYTE4(v144) = v123 | BYTE4(v144) & 0xFE;
        goto LABEL_79;
      }
LABEL_31:
      v35 += 40;
    }
    if ( v44 )
    {
      v42 = v35;
      goto LABEL_31;
    }
    if ( v42 )
LABEL_116:
      --*(_DWORD *)(v8 + 16);
    else
      v42 = v35;
LABEL_117:
    v104 = *(_DWORD *)(v42 + 8);
    v105 = v142;
    *(_QWORD *)v42 = v37;
    *(_DWORD *)(v42 + 8) = v105;
    LODWORD(v142) = v104;
    v106 = *(_QWORD *)(v42 + 16);
    *(_QWORD *)(v42 + 16) = v143;
    v143 = v106;
    LOBYTE(v105) = *(_BYTE *)(v42 + 12);
    *(_BYTE *)(v42 + 12) = BYTE4(v142) & 2 | v105 & 0xFD;
    BYTE4(v142) = v105 & 2 | BYTE4(v142) & 0xFD;
    v107 = *(_BYTE *)(v42 + 12);
    *(_BYTE *)(v42 + 12) = BYTE4(v142) & 1 | v107 & 0xFE;
    BYTE4(v142) = v107 & 1 | BYTE4(v142) & 0xFE;
    LODWORD(v106) = *(_DWORD *)(v42 + 24);
    *(_DWORD *)(v42 + 24) = v144;
    LODWORD(v144) = v106;
    v108 = *(_QWORD *)(v42 + 32);
    *(_QWORD *)(v42 + 32) = v145;
    v145 = v108;
    LOBYTE(v105) = *(_BYTE *)(v42 + 28);
    *(_BYTE *)(v42 + 28) = BYTE4(v144) & 2 | v105 & 0xFD;
    BYTE4(v144) = v105 & 2 | BYTE4(v144) & 0xFD;
    v109 = *(_BYTE *)(v42 + 28) & 1;
    *(_BYTE *)(v42 + 28) = BYTE4(v144) & 1 | *(_BYTE *)(v42 + 28) & 0xFE;
    LOBYTE(v108) = BYTE4(v144);
    ++*(_DWORD *)(v8 + 12);
    BYTE4(v144) = v109 | v108 & 0xFE;
LABEL_79:
    v69 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v142);
    sub_182CBA0(v69, &v144);
    v70 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
      ++*(_DWORD *)(v70 + 8);
    v71 = *(_QWORD **)(a4 + 8);
    if ( v71 )
    {
      v72 = *((_DWORD *)v71 - 1);
      if ( v72 == *((_DWORD *)v71 - 2) )
      {
        v76 = (3 * v72 + 1) >> 1;
        v77 = 8 * v76 + 8;
        if ( 8 * v72 + 8 >= v77 || v72 >= v76 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v141, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v141);
          sub_233E40((__int64)&v141);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v78 = (unsigned int *)sub_186B300(v71 - 1, v77);
        v79 = v78[1];
        v71 = v78 + 2;
        *v78 = v76;
        LODWORD(v78) = v79;
        *(_QWORD *)(a4 + 8) = v71;
        v75 = &v71[v79];
        v74 = (_DWORD)v78 + 1;
      }
      else
      {
        v73 = v72;
        v74 = v72 + 1;
        v75 = &v71[v73];
      }
    }
    else
    {
      v117 = (_QWORD *)sub_186B270(0x18u);
      *v117 = 2;
      v71 = v117 + 1;
      *(_QWORD *)(a4 + 8) = v117 + 1;
      v75 = v117 + 1;
      v74 = 1;
    }
    *v75 = v70;
    *((_DWORD *)v71 - 1) = v74;
LABEL_48:
    v11 += 56;
  }
  while ( v125 != v11 );
  return v8;
}

