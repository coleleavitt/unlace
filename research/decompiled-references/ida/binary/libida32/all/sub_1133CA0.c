void __fastcall sub_1133CA0(__int64 *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r14
  _QWORD *v11; // rdx
  char v12; // al
  int v13; // eax
  char *v14; // rsi
  char *v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r15
  _QWORD *v23; // r14
  __int64 v24; // rax
  unsigned __int8 *v25; // r14
  _QWORD *v26; // rdx
  __int64 v27; // rax
  void *v28; // rdi
  void **v29; // r14
  unsigned __int64 v30; // rax
  void **v31; // rax
  void **v32; // r15
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // r15
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rbx
  _QWORD *v39; // r14
  __int64 v40; // rax
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int8 *v44; // rbx
  _QWORD *v45; // rdx
  __int64 v46; // rax
  void *v47; // rdi
  void **v48; // rbp
  unsigned __int64 v49; // rax
  void **v50; // r12
  void **v51; // rbx
  void **v52; // rdi
  void **v53; // rdi
  void **v54; // rbx
  void **v55; // r12
  unsigned __int8 *v56; // r14
  _QWORD *v57; // rdx
  __int64 v58; // rax
  unsigned __int8 *v59; // r14
  _QWORD *v60; // rdx
  __int64 v61; // rax
  void *v62; // rdi
  void **v63; // r14
  unsigned __int64 v64; // rax
  void **v65; // rdx
  void **v66; // r15
  void **v67; // rdi
  void **v68; // rdi
  void **v69; // r15
  __int64 v70; // rdx
  char *v71; // rsi
  char *v72; // rsi
  char *v73; // rsi
  char *v74; // rsi
  unsigned __int64 v75; // rdx
  int v76; // eax
  unsigned __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // r15
  __int64 v82; // rdx
  __int64 v83; // r15
  void *v84; // rdi
  __int64 v85; // rdx
  unsigned __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // rdx
  __int64 v91; // r15
  void *v92; // rdi
  unsigned __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // r15
  __int64 v97; // rdx
  __int64 v98; // r15
  void *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // r12
  __int64 v102; // r13
  __int64 v103; // r12
  void *v104; // rdi
  __int64 v105; // rax
  int v106; // rdx^4
  int v107; // edx
  _QWORD *v108; // [rsp+0h] [rbp-98h]
  void **v109; // [rsp+0h] [rbp-98h]
  void **v110; // [rsp+0h] [rbp-98h]
  _QWORD *v111; // [rsp+0h] [rbp-98h]
  void **v112; // [rsp+0h] [rbp-98h]
  void **v113; // [rsp+0h] [rbp-98h]
  __int64 v114; // [rsp+0h] [rbp-98h]
  __int64 v115; // [rsp+0h] [rbp-98h]
  __int64 v116; // [rsp+0h] [rbp-98h]
  char v117; // [rsp+Eh] [rbp-8Ah]
  bool v118; // [rsp+Fh] [rbp-89h]
  void *v119; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v120; // [rsp+18h] [rbp-80h]
  __int64 v121; // [rsp+20h] [rbp-78h]
  void *v122; // [rsp+30h] [rbp-68h]
  _BYTE v123[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v124; // [rsp+50h] [rbp-48h]

  if ( a2[9] == 41 )
  {
    v73 = *(char **)(a4 + 8);
    v120 = 4;
    v119 = "+spe";
    if ( v73 == *(char **)(a4 + 16) )
    {
      sub_1052040(a4, v73, &v119);
    }
    else
    {
      *(_QWORD *)v73 = "+spe";
      v74 = v73 + 16;
      *((_QWORD *)v74 - 1) = 4;
      *(_QWORD *)(a4 + 8) = v74;
    }
  }
  sub_11A89F0(a1, a2, a3, a4, 56);
  if ( (unsigned int)sub_1133350(a1, a3) == 1 )
  {
    v71 = *(char **)(a4 + 8);
    v120 = 11;
    v119 = "-hard-float";
    if ( v71 == *(char **)(a4 + 16) )
    {
      sub_1052040(a4, v71, &v119);
    }
    else
    {
      *(_QWORD *)v71 = "-hard-float";
      v72 = v71 + 16;
      *((_QWORD *)v72 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v72;
    }
  }
  LODWORD(v119) = 2854;
  v8 = sub_2193060(a3, &v119, 1);
  v9 = *(_QWORD *)(a3 + 8);
  v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
  v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
  if ( v10 != v11 )
  {
    while ( 1 )
    {
      if ( *v10 )
      {
        v108 = v11;
        v12 = sub_2195AD0(*v10, 2854);
        v11 = v108;
        if ( v12 )
          break;
      }
      if ( v11 == ++v10 )
        goto LABEL_7;
    }
    if ( v108 != v10 )
    {
      do
      {
        v40 = *v10;
        if ( *(_QWORD *)(*v10 + 16LL) )
          v40 = *(_QWORD *)(*v10 + 16LL);
        ++v10;
        *(_BYTE *)(v40 + 44) |= 1u;
        if ( v10 == v11 )
          break;
        while ( 1 )
        {
          if ( *v10 )
          {
            v111 = v11;
            v41 = sub_2195AD0(*v10, 2854);
            v11 = v111;
            if ( v41 )
              break;
          }
          if ( v11 == ++v10 )
            goto LABEL_12;
        }
      }
      while ( v111 != v10 );
      goto LABEL_12;
    }
  }
LABEL_7:
  if ( (unsigned int)(a2[8] - 21) <= 1 )
  {
    v13 = a2[11];
    if ( v13 == 3 )
    {
      if ( (unsigned int)sub_2293DC0(a2) > 0xC
        || (v105 = sub_2293DC0(a2), !((v107 | HIDWORD(v105)) & 0x7FFFFFFF | (unsigned int)v105 | v106 & 0x7FFFFFFF)) )
      {
LABEL_12:
        v14 = *(char **)(a4 + 8);
        v120 = 11;
        v119 = "+secure-plt";
        if ( v14 == *(char **)(a4 + 16) )
        {
          sub_1052040(a4, v14, &v119);
        }
        else
        {
          *(_QWORD *)v14 = "+secure-plt";
          v15 = v14 + 16;
          *((_QWORD *)v15 - 1) = 11;
          *(_QWORD *)(a4 + 8) = v15;
        }
        goto LABEL_14;
      }
      v13 = a2[11];
    }
    if ( (unsigned int)(v13 - 11) > 1 && a2[12] != 49 && (unsigned int)(a2[12] - 18) > 7 && v13 != 39 )
      goto LABEL_14;
    goto LABEL_12;
  }
LABEL_14:
  v117 = sub_1197260(a2);
  v118 = a2[13] == 8;
  LODWORD(v119) = 2231;
  v16 = sub_2193060(a3, &v119, 1);
  v17 = *(_QWORD *)(a3 + 8);
  v18 = (_QWORD *)(v17 + 8LL * (unsigned int)v16);
  v19 = (_QWORD *)(v17 + 8 * HIDWORD(v16));
  if ( v18 != v19 )
  {
    while ( !*v18 || !(unsigned __int8)sub_2195AD0(*v18, 2231) )
    {
      if ( v19 == ++v18 )
        goto LABEL_18;
    }
    if ( v18 != v19 )
    {
      while ( 2 )
      {
        v42 = *v18;
        if ( *(_QWORD *)(*v18 + 16LL) )
          v42 = *(_QWORD *)(*v18 + 16LL);
        ++v18;
        *(_BYTE *)(v42 + 44) |= 1u;
        if ( v18 != v19 )
        {
          while ( !*v18 || !(unsigned __int8)sub_2195AD0(*v18, 2231) )
          {
            if ( v19 == ++v18 )
            {
              if ( a2[11] != 20 )
                goto LABEL_31;
              goto LABEL_74;
            }
          }
          if ( v19 != v18 )
            continue;
        }
        break;
      }
LABEL_30:
      if ( a2[11] == 20 )
      {
LABEL_74:
        if ( (unsigned __int8)sub_2294160(a2) )
          goto LABEL_50;
      }
LABEL_31:
      sub_FA3370((__int64)&v119, *a1, 0, 51);
      v25 = (unsigned __int8 *)v119;
      if ( !v119 )
      {
        v77 = v120;
        v78 = *(_DWORD *)(v120 + 14976);
        if ( v78 )
        {
          v80 = (unsigned int)(v78 - 1);
          *(_DWORD *)(v120 + 14976) = v80;
          v25 = *(unsigned __int8 **)(v77 + 8 * v80 + 14848);
          v81 = *((unsigned int *)v25 + 134);
          *v25 = 0;
          v82 = *((_QWORD *)v25 + 66);
          *((_DWORD *)v25 + 106) = 0;
          v83 = v82 + (v81 << 6);
          while ( v82 != v83 )
          {
            while ( 1 )
            {
              v83 -= 64;
              v84 = *(void **)(v83 + 24);
              if ( v84 == (void *)(v83 + 40) )
                break;
              v114 = v82;
              operator delete(v84);
              v82 = v114;
              if ( v114 == v83 )
                goto LABEL_169;
            }
          }
LABEL_169:
          *((_DWORD *)v25 + 134) = 0;
        }
        else
        {
          v25 = (unsigned __int8 *)operator new(0x3A0u);
          *v25 = 0;
          *((_QWORD *)v25 + 12) = v25 + 112;
          *((_QWORD *)v25 + 16) = v25 + 144;
          *((_QWORD *)v25 + 20) = v25 + 176;
          *((_QWORD *)v25 + 24) = v25 + 208;
          *((_QWORD *)v25 + 28) = v25 + 240;
          *((_QWORD *)v25 + 32) = v25 + 272;
          *((_QWORD *)v25 + 36) = v25 + 304;
          *((_QWORD *)v25 + 40) = v25 + 336;
          *((_QWORD *)v25 + 44) = v25 + 368;
          *((_QWORD *)v25 + 48) = v25 + 400;
          *((_QWORD *)v25 + 52) = v25 + 432;
          *((_QWORD *)v25 + 13) = 0;
          v25[112] = 0;
          *((_QWORD *)v25 + 17) = 0;
          v25[144] = 0;
          *((_QWORD *)v25 + 21) = 0;
          v25[176] = 0;
          *((_QWORD *)v25 + 25) = 0;
          v25[208] = 0;
          *((_QWORD *)v25 + 29) = 0;
          v25[240] = 0;
          *((_QWORD *)v25 + 33) = 0;
          v25[272] = 0;
          *((_QWORD *)v25 + 37) = 0;
          v25[304] = 0;
          *((_QWORD *)v25 + 41) = 0;
          v25[336] = 0;
          *((_QWORD *)v25 + 45) = 0;
          v25[368] = 0;
          *((_QWORD *)v25 + 49) = 0;
          v25[400] = 0;
          *((_QWORD *)v25 + 53) = 0x800000000LL;
          *((_QWORD *)v25 + 66) = v25 + 544;
          *((_QWORD *)v25 + 67) = 0x600000000LL;
        }
        v119 = v25;
      }
      v25[*v25 + 1] = 1;
      v26 = v119;
      v27 = *(unsigned __int8 *)v119;
      *(_BYTE *)v119 = v27 + 1;
      v26[v27 + 2] = "-maix-small-local-[exec|dynamic]-tls";
      if ( (_BYTE)v124 )
      {
        sub_FA3A50(v121, (__int64)&v119, SHIBYTE(v124));
        v28 = v122;
        v121 = 0;
        v124 = 0;
        if ( v122 == v123 )
          goto LABEL_35;
      }
      else
      {
        v28 = v122;
        if ( v122 == v123 )
        {
LABEL_35:
          v29 = (void **)v119;
          if ( v119 )
          {
            v30 = v120;
            if ( v120 )
            {
              if ( (unsigned __int64)v119 < v120 || (unsigned __int64)v119 > v120 + 14848 )
              {
                v31 = *((void ***)v119 + 66);
                v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v119 + 134)];
                if ( v31 != v32 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v32 -= 8;
                      v33 = (void **)v32[3];
                      if ( v33 == v32 + 5 )
                        break;
                      v109 = v31;
                      operator delete(v33);
                      v31 = v109;
                      if ( v109 == v32 )
                        goto LABEL_41;
                    }
                  }
                  while ( v31 != v32 );
LABEL_41:
                  v32 = (void **)v29[66];
                }
                if ( v32 != v29 + 68 )
                  free(v32);
                v34 = (void **)v29[52];
                if ( v34 != v29 + 54 )
                  free(v34);
                v35 = v29 + 48;
                v110 = v29 + 8;
                do
                {
                  while ( *v35 != v35 + 2 )
                  {
                    operator delete(*v35);
                    v35 -= 4;
                    if ( v110 == v35 )
                      goto LABEL_49;
                  }
                  v35 -= 4;
                }
                while ( v35 != v110 );
LABEL_49:
                operator delete(v29, 0x3A0u);
              }
              else
              {
                v70 = *(unsigned int *)(v120 + 14976);
                *(_DWORD *)(v120 + 14976) = v70 + 1;
                *(_QWORD *)(v30 + 8 * v70 + 14848) = v29;
              }
            }
          }
LABEL_50:
          if ( (unsigned __int8)sub_2193B10(a3, 553, 1078, (unsigned __int8)(v118 | v117)) )
            goto LABEL_51;
          sub_FA3370((__int64)&v119, *a1, 0, 324);
          v56 = (unsigned __int8 *)v119;
          if ( !v119 )
          {
            v93 = v120;
            v94 = *(_DWORD *)(v120 + 14976);
            if ( v94 )
            {
              v95 = (unsigned int)(v94 - 1);
              *(_DWORD *)(v120 + 14976) = v95;
              v56 = *(unsigned __int8 **)(v93 + 8 * v95 + 14848);
              v96 = *((unsigned int *)v56 + 134);
              *v56 = 0;
              v97 = *((_QWORD *)v56 + 66);
              *((_DWORD *)v56 + 106) = 0;
              v98 = v97 + (v96 << 6);
              while ( v97 != v98 )
              {
                while ( 1 )
                {
                  v98 -= 64;
                  v99 = *(void **)(v98 + 24);
                  if ( v99 == (void *)(v98 + 40) )
                    break;
                  v116 = v97;
                  operator delete(v99);
                  v97 = v116;
                  if ( v116 == v98 )
                    goto LABEL_182;
                }
              }
LABEL_182:
              *((_DWORD *)v56 + 134) = 0;
            }
            else
            {
              v56 = (unsigned __int8 *)operator new(0x3A0u);
              *v56 = 0;
              *((_QWORD *)v56 + 12) = v56 + 112;
              *((_QWORD *)v56 + 16) = v56 + 144;
              *((_QWORD *)v56 + 20) = v56 + 176;
              *((_QWORD *)v56 + 24) = v56 + 208;
              *((_QWORD *)v56 + 28) = v56 + 240;
              *((_QWORD *)v56 + 32) = v56 + 272;
              *((_QWORD *)v56 + 36) = v56 + 304;
              *((_QWORD *)v56 + 40) = v56 + 336;
              *((_QWORD *)v56 + 44) = v56 + 368;
              *((_QWORD *)v56 + 48) = v56 + 400;
              *((_QWORD *)v56 + 52) = v56 + 432;
              *((_QWORD *)v56 + 13) = 0;
              v56[112] = 0;
              *((_QWORD *)v56 + 17) = 0;
              v56[144] = 0;
              *((_QWORD *)v56 + 21) = 0;
              v56[176] = 0;
              *((_QWORD *)v56 + 25) = 0;
              v56[208] = 0;
              *((_QWORD *)v56 + 29) = 0;
              v56[240] = 0;
              *((_QWORD *)v56 + 33) = 0;
              v56[272] = 0;
              *((_QWORD *)v56 + 37) = 0;
              v56[304] = 0;
              *((_QWORD *)v56 + 41) = 0;
              v56[336] = 0;
              *((_QWORD *)v56 + 45) = 0;
              v56[368] = 0;
              *((_QWORD *)v56 + 49) = 0;
              v56[400] = 0;
              *((_QWORD *)v56 + 53) = 0x800000000LL;
              *((_QWORD *)v56 + 66) = v56 + 544;
              *((_QWORD *)v56 + 67) = 0x600000000LL;
            }
            v119 = v56;
          }
          v56[*v56 + 1] = 1;
          v57 = v119;
          v58 = *(unsigned __int8 *)v119;
          *(_BYTE *)v119 = v58 + 1;
          v57[v58 + 2] = "-maix-small-local-[exec|dynamic]-tls";
          v59 = (unsigned __int8 *)v119;
          if ( !v119 )
          {
            v86 = v120;
            v87 = *(_DWORD *)(v120 + 14976);
            if ( v87 )
            {
              v88 = (unsigned int)(v87 - 1);
              *(_DWORD *)(v120 + 14976) = v88;
              v59 = *(unsigned __int8 **)(v86 + 8 * v88 + 14848);
              v89 = *((unsigned int *)v59 + 134);
              *v59 = 0;
              v90 = *((_QWORD *)v59 + 66);
              *((_DWORD *)v59 + 106) = 0;
              v91 = v90 + (v89 << 6);
              while ( v90 != v91 )
              {
                while ( 1 )
                {
                  v91 -= 64;
                  v92 = *(void **)(v91 + 24);
                  if ( v92 == (void *)(v91 + 40) )
                    break;
                  v115 = v90;
                  operator delete(v92);
                  v90 = v115;
                  if ( v115 == v91 )
                    goto LABEL_176;
                }
              }
LABEL_176:
              *((_DWORD *)v59 + 134) = 0;
            }
            else
            {
              v59 = (unsigned __int8 *)operator new(0x3A0u);
              *v59 = 0;
              *((_QWORD *)v59 + 12) = v59 + 112;
              *((_QWORD *)v59 + 16) = v59 + 144;
              *((_QWORD *)v59 + 20) = v59 + 176;
              *((_QWORD *)v59 + 24) = v59 + 208;
              *((_QWORD *)v59 + 28) = v59 + 240;
              *((_QWORD *)v59 + 32) = v59 + 272;
              *((_QWORD *)v59 + 36) = v59 + 304;
              *((_QWORD *)v59 + 40) = v59 + 336;
              *((_QWORD *)v59 + 44) = v59 + 368;
              *((_QWORD *)v59 + 48) = v59 + 400;
              *((_QWORD *)v59 + 52) = v59 + 432;
              *((_QWORD *)v59 + 13) = 0;
              v59[112] = 0;
              *((_QWORD *)v59 + 17) = 0;
              v59[144] = 0;
              *((_QWORD *)v59 + 21) = 0;
              v59[176] = 0;
              *((_QWORD *)v59 + 25) = 0;
              v59[208] = 0;
              *((_QWORD *)v59 + 29) = 0;
              v59[240] = 0;
              *((_QWORD *)v59 + 33) = 0;
              v59[272] = 0;
              *((_QWORD *)v59 + 37) = 0;
              v59[304] = 0;
              *((_QWORD *)v59 + 41) = 0;
              v59[336] = 0;
              *((_QWORD *)v59 + 45) = 0;
              v59[368] = 0;
              *((_QWORD *)v59 + 49) = 0;
              v59[400] = 0;
              *((_QWORD *)v59 + 53) = 0x800000000LL;
              *((_QWORD *)v59 + 66) = v59 + 544;
              *((_QWORD *)v59 + 67) = 0x600000000LL;
            }
            v119 = v59;
          }
          v59[*v59 + 1] = 1;
          v60 = v119;
          v61 = *(unsigned __int8 *)v119;
          *(_BYTE *)v119 = v61 + 1;
          v60[v61 + 2] = "-fdata-sections";
          if ( (_BYTE)v124 )
          {
            sub_FA3A50(v121, (__int64)&v119, SHIBYTE(v124));
            v62 = v122;
            v121 = 0;
            v124 = 0;
            if ( v122 == v123 )
              goto LABEL_119;
          }
          else
          {
            v62 = v122;
            if ( v122 == v123 )
            {
LABEL_119:
              v63 = (void **)v119;
              if ( v119 )
              {
                v64 = v120;
                if ( v120 )
                {
                  if ( (unsigned __int64)v119 < v120 || (unsigned __int64)v119 > v120 + 14848 )
                  {
                    v65 = *((void ***)v119 + 66);
                    v66 = &v65[8 * (unsigned __int64)*((unsigned int *)v119 + 134)];
                    if ( v65 != v66 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v66 -= 8;
                          v67 = (void **)v66[3];
                          if ( v67 == v66 + 5 )
                            break;
                          v112 = v65;
                          operator delete(v67);
                          v65 = v112;
                          if ( v112 == v66 )
                            goto LABEL_125;
                        }
                      }
                      while ( v65 != v66 );
LABEL_125:
                      v66 = (void **)v63[66];
                    }
                    if ( v66 != v63 + 68 )
                      free(v66);
                    v68 = (void **)v63[52];
                    if ( v68 != v63 + 54 )
                      free(v68);
                    v69 = v63 + 48;
                    v113 = v63 + 8;
                    do
                    {
                      while ( *v69 != v69 + 2 )
                      {
                        operator delete(*v69);
                        v69 -= 4;
                        if ( v113 == v69 )
                          goto LABEL_133;
                      }
                      v69 -= 4;
                    }
                    while ( v69 != v113 );
LABEL_133:
                    operator delete(v63, 0x3A0u);
                  }
                  else
                  {
                    v79 = *(unsigned int *)(v120 + 14976);
                    *(_DWORD *)(v120 + 14976) = v79 + 1;
                    *(_QWORD *)(v64 + 8 * v79 + 14848) = v63;
                  }
                }
              }
              goto LABEL_51;
            }
          }
          operator delete(v62);
          goto LABEL_119;
        }
      }
      operator delete(v28);
      goto LABEL_35;
    }
  }
LABEL_18:
  LODWORD(v119) = 2230;
  v20 = sub_2193060(a3, &v119, 1);
  v21 = *(_QWORD *)(a3 + 8);
  v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
  v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
  if ( v22 != v23 )
  {
    while ( !*v22 || !(unsigned __int8)sub_2195AD0(*v22, 2230) )
    {
      if ( v23 == ++v22 )
        goto LABEL_51;
    }
    if ( v23 != v22 )
    {
      do
      {
        v24 = *(_QWORD *)(*v22 + 16LL);
        if ( !v24 )
          v24 = *v22;
        ++v22;
        *(_BYTE *)(v24 + 44) |= 1u;
        if ( v22 == v23 )
          break;
        while ( !*v22 || !(unsigned __int8)sub_2195AD0(*v22, 2230) )
        {
          if ( v23 == ++v22 )
            goto LABEL_30;
        }
      }
      while ( v23 != v22 );
      goto LABEL_30;
    }
  }
LABEL_51:
  LODWORD(v119) = 2229;
  v36 = sub_2193060(a3, &v119, 1);
  v37 = *(_QWORD *)(a3 + 8);
  v38 = (_QWORD *)(v37 + 8LL * (unsigned int)v36);
  v39 = (_QWORD *)(v37 + 8 * HIDWORD(v36));
  if ( v38 != v39 )
  {
    while ( !*v38 || !(unsigned __int8)sub_2195AD0(*v38, 2229) )
    {
      if ( v39 == ++v38 )
        return;
    }
    if ( v38 != v39 )
    {
      do
      {
        v43 = *v38;
        if ( *(_QWORD *)(*v38 + 16LL) )
          v43 = *(_QWORD *)(*v38 + 16LL);
        ++v38;
        *(_BYTE *)(v43 + 44) |= 1u;
        if ( v38 == v39 )
          break;
        while ( !*v38 || !(unsigned __int8)sub_2195AD0(*v38, 2229) )
        {
          if ( v39 == ++v38 )
            goto LABEL_85;
        }
      }
      while ( v39 != v38 );
LABEL_85:
      if ( a2[11] != 20 || !(unsigned __int8)sub_2294160(a2) )
      {
        sub_FA3370((__int64)&v119, *a1, 0, 51);
        v44 = (unsigned __int8 *)v119;
        if ( !v119 )
        {
          v75 = v120;
          v76 = *(_DWORD *)(v120 + 14976);
          if ( v76 )
          {
            v100 = (unsigned int)(v76 - 1);
            *(_DWORD *)(v120 + 14976) = v100;
            v44 = *(unsigned __int8 **)(v75 + 8 * v100 + 14848);
            v101 = *((unsigned int *)v44 + 134);
            *v44 = 0;
            v102 = *((_QWORD *)v44 + 66);
            *((_DWORD *)v44 + 106) = 0;
            v103 = v102 + (v101 << 6);
            while ( v102 != v103 )
            {
              while ( 1 )
              {
                v103 -= 64;
                v104 = *(void **)(v103 + 24);
                if ( v104 == (void *)(v103 + 40) )
                  break;
                operator delete(v104);
                if ( v102 == v103 )
                  goto LABEL_187;
              }
            }
LABEL_187:
            *((_DWORD *)v44 + 134) = 0;
          }
          else
          {
            v44 = (unsigned __int8 *)operator new(0x3A0u);
            *v44 = 0;
            *((_QWORD *)v44 + 12) = v44 + 112;
            *((_QWORD *)v44 + 16) = v44 + 144;
            *((_QWORD *)v44 + 20) = v44 + 176;
            *((_QWORD *)v44 + 24) = v44 + 208;
            *((_QWORD *)v44 + 28) = v44 + 240;
            *((_QWORD *)v44 + 32) = v44 + 272;
            *((_QWORD *)v44 + 36) = v44 + 304;
            *((_QWORD *)v44 + 40) = v44 + 336;
            *((_QWORD *)v44 + 44) = v44 + 368;
            *((_QWORD *)v44 + 48) = v44 + 400;
            *((_QWORD *)v44 + 52) = v44 + 432;
            *((_QWORD *)v44 + 13) = 0;
            v44[112] = 0;
            *((_QWORD *)v44 + 17) = 0;
            v44[144] = 0;
            *((_QWORD *)v44 + 21) = 0;
            v44[176] = 0;
            *((_QWORD *)v44 + 25) = 0;
            v44[208] = 0;
            *((_QWORD *)v44 + 29) = 0;
            v44[240] = 0;
            *((_QWORD *)v44 + 33) = 0;
            v44[272] = 0;
            *((_QWORD *)v44 + 37) = 0;
            v44[304] = 0;
            *((_QWORD *)v44 + 41) = 0;
            v44[336] = 0;
            *((_QWORD *)v44 + 45) = 0;
            v44[368] = 0;
            *((_QWORD *)v44 + 49) = 0;
            v44[400] = 0;
            *((_QWORD *)v44 + 53) = 0x800000000LL;
            *((_QWORD *)v44 + 66) = v44 + 544;
            *((_QWORD *)v44 + 67) = 0x600000000LL;
          }
          v119 = v44;
        }
        v44[*v44 + 1] = 1;
        v45 = v119;
        v46 = *(unsigned __int8 *)v119;
        *(_BYTE *)v119 = v46 + 1;
        v45[v46 + 2] = "-maix-shared-lib-tls-model-opt";
        if ( (_BYTE)v124 )
        {
          sub_FA3A50(v121, (__int64)&v119, SHIBYTE(v124));
          v47 = v122;
          v121 = 0;
          v124 = 0;
          if ( v122 == v123 )
            goto LABEL_90;
        }
        else
        {
          v47 = v122;
          if ( v122 == v123 )
          {
LABEL_90:
            v48 = (void **)v119;
            if ( v119 )
            {
              v49 = v120;
              if ( v120 )
              {
                if ( (unsigned __int64)v119 >= v120 && (unsigned __int64)v119 <= v120 + 14848 )
                {
                  v85 = *(unsigned int *)(v120 + 14976);
                  *(_DWORD *)(v120 + 14976) = v85 + 1;
                  *(_QWORD *)(v49 + 8 * v85 + 14848) = v48;
                }
                else
                {
                  v50 = *((void ***)v119 + 66);
                  v51 = &v50[8 * (unsigned __int64)*((unsigned int *)v119 + 134)];
                  if ( v50 != v51 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v51 -= 8;
                        v52 = (void **)v51[3];
                        if ( v52 == v51 + 5 )
                          break;
                        operator delete(v52);
                        if ( v50 == v51 )
                          goto LABEL_97;
                      }
                    }
                    while ( v50 != v51 );
LABEL_97:
                    v51 = (void **)v48[66];
                  }
                  if ( v51 != v48 + 68 )
                    free(v51);
                  v53 = (void **)v48[52];
                  if ( v53 != v48 + 54 )
                    free(v53);
                  v54 = v48 + 48;
                  v55 = v48 + 8;
                  do
                  {
                    while ( *v54 != v54 + 2 )
                    {
                      operator delete(*v54);
                      v54 -= 4;
                      if ( v54 == v55 )
                        goto LABEL_105;
                    }
                    v54 -= 4;
                  }
                  while ( v55 != v54 );
LABEL_105:
                  operator delete(v48, 0x3A0u);
                }
              }
            }
            return;
          }
        }
        operator delete(v47);
        goto LABEL_90;
      }
    }
  }
}

