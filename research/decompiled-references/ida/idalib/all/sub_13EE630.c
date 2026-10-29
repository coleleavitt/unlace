void __fastcall sub_13EE630(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, __int64 a5, __int16 a6)
{
  _BYTE *v6; // rax
  __int64 v7; // r14
  __m128i si128; // xmm0
  __int64 v9; // rax
  bool v10; // zf
  _BYTE *v11; // rbx
  unsigned __int8 *v12; // r15
  char *v13; // rdi
  int *v14; // rbp
  unsigned __int64 v15; // rbx
  char *v16; // rax
  __int16 v17; // ax
  int v18; // eax
  unsigned __int8 *v19; // r12
  int v20; // eax
  int v21; // eax
  int *v22; // rdx
  unsigned __int8 *v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rsi
  int *v26; // rbx
  int v27; // ecx
  unsigned __int64 v28; // rax
  void **v29; // rdx
  void **v30; // r13
  int *v31; // rbp
  void **v32; // rbx
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // r13
  __int64 v36; // rax
  signed __int64 v37; // rbp
  __int64 v38; // rsi
  unsigned __int8 *v39; // r12
  _BOOL8 v40; // r15
  _QWORD *v41; // rdx
  __int64 v42; // rax
  void **v43; // rbx
  unsigned __int64 v44; // rax
  void **v45; // r13
  void **v46; // r12
  void **v47; // rdi
  void **v48; // rdi
  void **v49; // r13
  void **v50; // r12
  int *v51; // rax
  void *v52; // rdi
  void **v53; // rbx
  unsigned __int64 v54; // rax
  void **v55; // r12
  void **v56; // rbp
  void **v57; // rdi
  void **v58; // rdi
  void **v59; // r12
  void **v60; // rbp
  void **v61; // rbp
  unsigned __int64 v62; // rax
  void **v63; // r12
  void **v64; // rbx
  void **v65; // rdi
  void **v66; // rdi
  void **v67; // rbx
  void **v68; // r12
  __int64 v69; // rdx
  void *v70; // rsi
  unsigned int v71; // eax
  __int16 v72; // dx
  void *v73; // rdi
  __int64 v74; // rcx
  int *v75; // rax
  void **v76; // rbp
  unsigned __int64 v77; // rax
  void **v78; // r15
  void **v79; // r13
  void **v80; // rdi
  void **v81; // rdi
  void **v82; // r15
  void **v83; // r13
  __int64 v84; // rdx
  __int64 v85; // rsi
  void *v86; // rcx
  unsigned __int64 v87; // rsi
  __int64 v88; // r12
  int v89; // r13d
  __int64 v90; // r14
  unsigned int v91; // esi
  unsigned __int64 v92; // rcx
  __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  void *v95; // rdx
  __int64 v96; // rbp
  unsigned int v97; // ebp
  unsigned int v98; // eax
  int v99; // edx
  void **v100; // rbx
  unsigned __int64 v101; // rax
  void **v102; // r13
  void **v103; // r12
  void **v104; // rdi
  void **v105; // rdi
  void **v106; // r13
  void **v107; // r12
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  void **v111; // rbx
  unsigned __int64 v112; // rax
  void **v113; // r13
  void **v114; // r12
  void **v115; // rdi
  void **v116; // rdi
  void **v117; // r13
  void **v118; // r12
  unsigned __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // r13
  __int64 v124; // rdx
  __int64 v125; // r13
  __int64 v126; // rbx
  void *v127; // rdi
  __int64 v128; // rdx
  unsigned __int64 v130; // [rsp+10h] [rbp-138h]
  void *v131; // [rsp+10h] [rbp-138h]
  __int64 v134; // [rsp+28h] [rbp-120h]
  unsigned __int64 v135; // [rsp+30h] [rbp-118h]
  int v136; // [rsp+30h] [rbp-118h]
  void **v137; // [rsp+50h] [rbp-F8h]
  unsigned __int8 *v138; // [rsp+50h] [rbp-F8h]
  void **v139; // [rsp+58h] [rbp-F0h]
  int *v140; // [rsp+60h] [rbp-E8h]
  unsigned int v141; // [rsp+68h] [rbp-E0h]
  __int16 v142; // [rsp+6Eh] [rbp-DAh]
  __int64 v143[2]; // [rsp+78h] [rbp-D0h] BYREF
  int *v144; // [rsp+88h] [rbp-C0h] BYREF
  void *v145; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v146; // [rsp+98h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v148; // [rsp+A8h] [rbp-A0h]
  _DWORD s[4]; // [rsp+B0h] [rbp-98h] BYREF
  void *v150; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int64 v151; // [rsp+C8h] [rbp-80h]
  __int64 v152; // [rsp+D0h] [rbp-78h]
  void *v153; // [rsp+E0h] [rbp-68h]
  _BYTE v154[16]; // [rsp+F0h] [rbp-58h] BYREF
  __int16 v155; // [rsp+100h] [rbp-48h]

  v6 = (_BYTE *)a2;
  v7 = a5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_BYTE *)(a1 + 11) = 0;
  v143[0] = a2;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  *(__m128i *)(a1 + 24) = si128;
  *(_WORD *)(a1 + 8) = a6;
  if ( a6 == 9 )
  {
LABEL_4:
    if ( *v6 == 39 )
      goto LABEL_5;
LABEL_103:
    sub_FC70B0((__int64)&v150, *(_QWORD *)(a5 + 48), a4, 1054);
    if ( (_BYTE)v155 )
    {
      sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
      v152 = 0;
      v155 = 0;
    }
    if ( v153 != v154 )
      operator delete(v153);
    v61 = (void **)v150;
    if ( v150 )
    {
      v62 = v151;
      if ( v151 )
      {
        if ( (unsigned __int64)v150 < v151 || (unsigned __int64)v150 > v151 + 14848 )
        {
          v63 = *((void ***)v150 + 66);
          v64 = &v63[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
          if ( v63 != v64 )
          {
            do
            {
              while ( 1 )
              {
                v64 -= 8;
                v65 = (void **)v64[3];
                if ( v65 == v64 + 5 )
                  break;
                operator delete(v65);
                if ( v63 == v64 )
                  goto LABEL_113;
              }
            }
            while ( v63 != v64 );
LABEL_113:
            v64 = (void **)v61[66];
          }
          if ( v64 != v61 + 68 )
            free(v64);
          v66 = (void **)v61[52];
          if ( v66 != v61 + 54 )
            free(v66);
          v67 = v61 + 48;
          v68 = v61 + 8;
          do
          {
            while ( *v67 != v67 + 2 )
            {
              operator delete(*v67);
              v67 -= 4;
              if ( v68 == v67 )
                goto LABEL_121;
            }
            v67 -= 4;
          }
          while ( v67 != v68 );
LABEL_121:
          operator delete(v61, 0x3A0u);
        }
        else
        {
          v108 = *(unsigned int *)(v151 + 14976);
          *(_DWORD *)(v151 + 14976) = v108 + 1;
          *(_QWORD *)(v62 + 8 * v108 + 14848) = v61;
        }
      }
    }
    *(_BYTE *)(a1 + 11) = 1;
    return;
  }
  if ( a6 == 11 )
  {
    v6 = (_BYTE *)(a2 + 2);
    v143[0] = a2 + 2;
    goto LABEL_4;
  }
  v6 = (_BYTE *)(a2 + 1);
  v143[0] = a2 + 1;
  if ( *(_BYTE *)(a2 + 1) != 39 )
    goto LABEL_103;
LABEL_5:
  v9 = (__int64)(v6 + 1);
  v10 = *(a3 - 1) == 39;
  v143[0] = v9;
  if ( !v10 )
  {
    v11 = a3;
    do
      --v11;
    while ( *(v11 - 1) != 39 );
    sub_13DFFE0((_QWORD *)(a1 + 16), v11, a3 - v11);
    a3 = v11;
    *(_DWORD *)(a1 + 72) = (_DWORD)v11 - a2;
    v9 = v143[0];
  }
  v12 = a3 - 1;
  v13 = (char *)s;
  ptr = s;
  v14 = s;
  v148 = 0x400000000LL;
  v15 = (unsigned __int64)&a3[-v9 - 1];
  if ( a3 - 1 == (_BYTE *)v9 )
  {
    v140 = s;
    goto LABEL_14;
  }
  if ( v15 > 4 )
  {
    sub_2237220(&ptr, s, &a3[-v9 - 1], 4);
    v14 = (int *)ptr;
    v13 = (char *)ptr + 4 * (unsigned int)v148;
    v16 = (char *)ptr + 4 * v15;
    if ( v16 == v13 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v16 = (char *)&s[v15];
  if ( v16 != (char *)s )
LABEL_12:
    memset(v13, 0, 4 * ((unsigned __int64)(v16 - v13 - 4) >> 2) + 4);
LABEL_13:
  LODWORD(v148) = v15;
  v140 = &v14[(unsigned int)v15];
LABEL_14:
  v144 = v14;
  v17 = *(_WORD *)(a1 + 8);
  if ( v17 == 10 )
  {
    v141 = 0xFFFFFFFF >> (32 - sub_102DB30(*(unsigned __int8 **)(v7 + 64), *(_DWORD *)(*(_QWORD *)(v7 + 64) + 152LL)));
  }
  else
  {
    v141 = 127;
    if ( v17 != 11 )
    {
      v141 = 0xFFFF;
      if ( v17 != 12 )
      {
        v10 = v17 == 13;
        v18 = 1114111;
        if ( !v10 )
          v18 = 127;
        v141 = v18;
      }
    }
  }
  if ( v12 != (unsigned __int8 *)v143[0] )
  {
    v19 = (unsigned __int8 *)v143[0];
    while ( 1 )
    {
      while ( *v19 != 92 )
      {
        v23 = v19 + 1;
        v145 = v19;
        v24 = (__int64)(v19 + 1);
        do
        {
          v25 = v24;
          v143[0] = v24;
          if ( v12 == (unsigned __int8 *)v24 )
            break;
          ++v24;
        }
        while ( *(_BYTE *)(v24 - 1) != 92 );
        v26 = v144;
        if ( !(unsigned int)sub_2218E30(&v145, v25, &v144, v140, 0) )
        {
          v75 = v144;
          if ( v26 < v144 )
          {
            v138 = v12;
            do
            {
              while ( *v26 <= v141 )
              {
                if ( ++v26 >= v75 )
                  goto LABEL_164;
              }
              *(_BYTE *)(a1 + 11) = 1;
              sub_FC70B0((__int64)&v150, *(_QWORD *)(v7 + 48), a4, 1027);
              if ( (_BYTE)v155 )
              {
                sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
                v152 = 0;
                v155 = 0;
              }
              if ( v153 != v154 )
                operator delete(v153);
              v76 = (void **)v150;
              if ( v150 )
              {
                v77 = v151;
                if ( v151 )
                {
                  if ( (unsigned __int64)v150 < v151 || (unsigned __int64)v150 > v151 + 14848 )
                  {
                    v78 = *((void ***)v150 + 66);
                    v79 = &v78[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
                    if ( v78 != v79 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v79 -= 8;
                          v80 = (void **)v79[3];
                          if ( v80 == v79 + 5 )
                            break;
                          operator delete(v80);
                          if ( v78 == v79 )
                            goto LABEL_154;
                        }
                      }
                      while ( v78 != v79 );
LABEL_154:
                      v79 = (void **)v76[66];
                    }
                    if ( v79 != v76 + 68 )
                      free(v79);
                    v81 = (void **)v76[52];
                    if ( v81 != v76 + 54 )
                      free(v81);
                    v82 = v76 + 48;
                    v83 = v76 + 8;
                    do
                    {
                      while ( *v82 != v82 + 2 )
                      {
                        operator delete(*v82);
                        v82 -= 4;
                        if ( v82 == v83 )
                          goto LABEL_162;
                      }
                      v82 -= 4;
                    }
                    while ( v83 != v82 );
LABEL_162:
                    operator delete(v76, 0x3A0u);
                  }
                  else
                  {
                    v84 = *(unsigned int *)(v151 + 14976);
                    *(_DWORD *)(v151 + 14976) = v84 + 1;
                    *(_QWORD *)(v77 + 8 * v84 + 14848) = v76;
                  }
                }
              }
              v75 = v144;
              ++v26;
            }
            while ( v26 < v144 );
LABEL_164:
            v12 = v138;
          }
          v19 = (unsigned __int8 *)v143[0];
          goto LABEL_25;
        }
        v27 = 1023;
        v142 = *(_WORD *)(a1 + 8);
        if ( v142 == 9 )
          v27 = 1308;
        sub_FC70B0((__int64)&v150, *(_QWORD *)(v7 + 48), a4, v27);
        if ( (_BYTE)v155 )
        {
          sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
          v152 = 0;
          v155 = 0;
        }
        if ( v153 != v154 )
          operator delete(v153);
        v139 = (void **)v150;
        if ( v150 )
        {
          v28 = v151;
          if ( v151 )
          {
            if ( (unsigned __int64)v150 < v151 || (unsigned __int64)v150 > v151 + 14848 )
            {
              v29 = *((void ***)v150 + 66);
              v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
              if ( v29 != v30 )
              {
                v31 = v26;
                v32 = *((void ***)v150 + 66);
                do
                {
                  while ( 1 )
                  {
                    v30 -= 8;
                    v33 = (void **)v30[3];
                    if ( v33 == v30 + 5 )
                      break;
                    operator delete(v33);
                    if ( v32 == v30 )
                      goto LABEL_44;
                  }
                }
                while ( v32 != v30 );
LABEL_44:
                v26 = v31;
                v23 = v19 + 1;
                v30 = (void **)v139[66];
              }
              if ( v30 != v139 + 68 )
                free(v30);
              v34 = (void **)v139[52];
              if ( v34 != v139 + 54 )
                free(v34);
              v35 = v139 + 48;
              v137 = v139 + 8;
              do
              {
                while ( *v35 != v35 + 2 )
                {
                  operator delete(*v35);
                  v35 -= 4;
                  if ( v137 == v35 )
                    goto LABEL_52;
                }
                v35 -= 4;
              }
              while ( v137 != v35 );
LABEL_52:
              operator delete(v139, 0x3A0u);
            }
            else
            {
              v69 = *(unsigned int *)(v151 + 14976);
              v70 = v150;
              *(_DWORD *)(v151 + 14976) = v69 + 1;
              *(_QWORD *)(v28 + 8 * v69 + 14848) = v70;
            }
          }
        }
        v36 = v143[0];
        if ( v142 == 9 )
        {
          v145 = v19;
          v144 = v26;
          if ( v19 != (unsigned __int8 *)v143[0] )
          {
            while ( 1 )
            {
              v99 = *v19;
              ++v26;
              v19 = v23;
              *(v26 - 1) = v99;
              v145 = v23;
              v144 = v26;
              if ( v23 == (unsigned __int8 *)v36 )
                break;
              ++v23;
            }
          }
          goto LABEL_25;
        }
        v19 = (unsigned __int8 *)v143[0];
        *(_BYTE *)(a1 + 11) = 1;
        if ( v12 == (unsigned __int8 *)v36 )
          goto LABEL_55;
      }
      if ( (v19[1] & 0xDF) == 0x55 || v19[1] == 78 )
        break;
      v20 = sub_13DFAA0(*(_WORD *)(a1 + 8), *(_QWORD *)(v7 + 64));
      v135 = a4 | v135 & 0xFFFFFFFF00000000LL;
      v21 = sub_13E4610(
              a2,
              v143,
              v12,
              (char *)(a1 + 11),
              v135,
              *(_QWORD *)(v7 + 88),
              v20,
              *(_QWORD *)(v7 + 48),
              *(_BYTE **)(v7 + 56),
              0);
      v22 = v144;
      v19 = (unsigned __int8 *)v143[0];
      ++v144;
      *v22 = v21;
LABEL_25:
      if ( v12 == v19 )
        goto LABEL_55;
    }
    LOWORD(v145) = 0;
    v130 = a4 | v130 & 0xFFFFFFFF00000000LL;
    if ( !(unsigned __int8)sub_13E89A0(
                             a2,
                             v143,
                             v12,
                             v144,
                             &v145,
                             *(_QWORD *)(v7 + 48),
                             v130,
                             *(void **)(v7 + 88),
                             *(_BYTE **)(v7 + 56)) )
    {
      *(_BYTE *)(a1 + 11) = 1;
      v51 = v144;
LABEL_81:
      v19 = (unsigned __int8 *)v143[0];
      v144 = v51 + 1;
      goto LABEL_25;
    }
    v51 = v144;
    if ( *v144 <= v141 )
      goto LABEL_81;
    *(_BYTE *)(a1 + 11) = 1;
    sub_FC70B0((__int64)&v150, *(_QWORD *)(v7 + 48), a4, 1027);
    if ( (_BYTE)v155 )
    {
      sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
      v52 = v153;
      v152 = 0;
      v155 = 0;
      if ( v153 == v154 )
      {
LABEL_86:
        v53 = (void **)v150;
        if ( v150 )
        {
          v54 = v151;
          if ( v151 )
          {
            if ( (unsigned __int64)v150 < v151 || (unsigned __int64)v150 > v151 + 14848 )
            {
              v55 = *((void ***)v150 + 66);
              v56 = &v55[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
              if ( v55 != v56 )
              {
                do
                {
                  while ( 1 )
                  {
                    v56 -= 8;
                    v57 = (void **)v56[3];
                    if ( v57 == v56 + 5 )
                      break;
                    operator delete(v57);
                    if ( v55 == v56 )
                      goto LABEL_92;
                  }
                }
                while ( v55 != v56 );
LABEL_92:
                v56 = (void **)v53[66];
              }
              if ( v56 != v53 + 68 )
                free(v56);
              v58 = (void **)v53[52];
              if ( v58 != v53 + 54 )
                free(v58);
              v59 = v53 + 48;
              v60 = v53 + 8;
              do
              {
                while ( *v59 != v59 + 2 )
                {
                  operator delete(*v59);
                  v59 -= 4;
                  if ( v60 == v59 )
                    goto LABEL_100;
                }
                v59 -= 4;
              }
              while ( v60 != v59 );
LABEL_100:
              operator delete(v53, 0x3A0u);
            }
            else
            {
              v109 = *(unsigned int *)(v151 + 14976);
              *(_DWORD *)(v151 + 14976) = v109 + 1;
              *(_QWORD *)(v54 + 8 * v109 + 14848) = v53;
            }
          }
        }
        v51 = v144;
        goto LABEL_81;
      }
    }
    else
    {
      v52 = v153;
      if ( v153 == v154 )
        goto LABEL_86;
    }
    operator delete(v52);
    goto LABEL_86;
  }
LABEL_55:
  v37 = ((char *)v144 - (_BYTE *)ptr) >> 2;
  if ( (unsigned int)v37 <= 1 )
  {
    *(_BYTE *)(a1 + 10) = 0;
  }
  else
  {
    v38 = *(_QWORD *)(v7 + 48);
    if ( *(_WORD *)(a1 + 8) == 9 )
    {
      if ( (_DWORD)v37 == 4 )
      {
        sub_FC70B0((__int64)&v150, v38, a4, 1354);
        sub_AEA040((__int64)&v150);
      }
      else
      {
        sub_FC70B0((__int64)&v150, v38, a4, 1367);
        if ( (_BYTE)v155 )
        {
          sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
          v152 = 0;
          v155 = 0;
        }
        if ( v153 != v154 )
          operator delete(v153);
        v100 = (void **)v150;
        if ( v150 )
        {
          v101 = v151;
          if ( v151 )
          {
            if ( (unsigned __int64)v150 >= v151 && (unsigned __int64)v150 <= v151 + 14848 )
            {
              v128 = *(unsigned int *)(v151 + 14976);
              *(_DWORD *)(v151 + 14976) = v128 + 1;
              *(_QWORD *)(v101 + 8 * v128 + 14848) = v100;
            }
            else
            {
              v102 = *((void ***)v150 + 66);
              v103 = &v102[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
              if ( v102 != v103 )
              {
                do
                {
                  while ( 1 )
                  {
                    v103 -= 8;
                    v104 = (void **)v103[3];
                    if ( v104 == v103 + 5 )
                      break;
                    operator delete(v104);
                    if ( v102 == v103 )
                      goto LABEL_245;
                  }
                }
                while ( v102 != v103 );
LABEL_245:
                v103 = (void **)v100[66];
              }
              if ( v103 != v100 + 68 )
                free(v103);
              v105 = (void **)v100[52];
              if ( v105 != v100 + 54 )
                free(v105);
              v106 = v100 + 48;
              v107 = v100 + 8;
              do
              {
                while ( *v106 != v106 + 2 )
                {
                  operator delete(*v106);
                  v106 -= 4;
                  if ( v106 == v107 )
                    goto LABEL_253;
                }
                v106 -= 4;
              }
              while ( v107 != v106 );
LABEL_253:
              operator delete(v100, 0x3A0u);
            }
          }
        }
      }
    }
    else
    {
      sub_FC70B0((__int64)&v150, v38, a4, 1097);
      v39 = (unsigned __int8 *)v150;
      v40 = *(_WORD *)(a1 + 8) != 10;
      if ( !v150 )
      {
        v119 = v151;
        v120 = *(_DWORD *)(v151 + 14976);
        if ( v120 )
        {
          v122 = (unsigned int)(v120 - 1);
          *(_DWORD *)(v151 + 14976) = v122;
          v39 = *(unsigned __int8 **)(v119 + 8 * v122 + 14848);
          v123 = *((unsigned int *)v39 + 134);
          v124 = *((_QWORD *)v39 + 66);
          *v39 = 0;
          *((_DWORD *)v39 + 106) = 0;
          v125 = v124 + (v123 << 6);
          if ( v124 != v125 )
          {
            v126 = v124;
            do
            {
              while ( 1 )
              {
                v125 -= 64;
                v127 = *(void **)(v125 + 24);
                if ( v127 == (void *)(v125 + 40) )
                  break;
                operator delete(v127);
                if ( v126 == v125 )
                  goto LABEL_306;
              }
            }
            while ( v126 != v125 );
          }
LABEL_306:
          *((_DWORD *)v39 + 134) = 0;
        }
        else
        {
          v39 = (unsigned __int8 *)operator new(0x3A0u);
          *v39 = 0;
          *((_QWORD *)v39 + 12) = v39 + 112;
          *((_QWORD *)v39 + 16) = v39 + 144;
          *((_QWORD *)v39 + 20) = v39 + 176;
          *((_QWORD *)v39 + 24) = v39 + 208;
          *((_QWORD *)v39 + 28) = v39 + 240;
          *((_QWORD *)v39 + 32) = v39 + 272;
          *((_QWORD *)v39 + 36) = v39 + 304;
          *((_QWORD *)v39 + 40) = v39 + 336;
          *((_QWORD *)v39 + 44) = v39 + 368;
          *((_QWORD *)v39 + 48) = v39 + 400;
          *((_QWORD *)v39 + 52) = v39 + 432;
          *((_QWORD *)v39 + 13) = 0;
          v39[112] = 0;
          *((_QWORD *)v39 + 17) = 0;
          v39[144] = 0;
          *((_QWORD *)v39 + 21) = 0;
          v39[176] = 0;
          *((_QWORD *)v39 + 25) = 0;
          v39[208] = 0;
          *((_QWORD *)v39 + 29) = 0;
          v39[240] = 0;
          *((_QWORD *)v39 + 33) = 0;
          v39[272] = 0;
          *((_QWORD *)v39 + 37) = 0;
          v39[304] = 0;
          *((_QWORD *)v39 + 41) = 0;
          v39[336] = 0;
          *((_QWORD *)v39 + 45) = 0;
          v39[368] = 0;
          *((_QWORD *)v39 + 49) = 0;
          v39[400] = 0;
          *((_QWORD *)v39 + 53) = 0x800000000LL;
          *((_QWORD *)v39 + 66) = v39 + 544;
          *((_QWORD *)v39 + 67) = 0x600000000LL;
        }
        v150 = v39;
      }
      v39[*v39 + 1] = 2;
      v41 = v150;
      v42 = *(unsigned __int8 *)v150;
      *(_BYTE *)v150 = v42 + 1;
      v41[v42 + 2] = v40;
      if ( (_BYTE)v155 )
      {
        sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
        v152 = 0;
        v155 = 0;
      }
      if ( v153 != v154 )
        operator delete(v153);
      v43 = (void **)v150;
      if ( v150 )
      {
        v44 = v151;
        if ( v151 )
        {
          if ( (unsigned __int64)v150 < v151 || (unsigned __int64)v150 > v151 + 14848 )
          {
            v45 = *((void ***)v150 + 66);
            v46 = &v45[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
            if ( v45 != v46 )
            {
              do
              {
                while ( 1 )
                {
                  v46 -= 8;
                  v47 = (void **)v46[3];
                  if ( v47 == v46 + 5 )
                    break;
                  operator delete(v47);
                  if ( v45 == v46 )
                    goto LABEL_68;
                }
              }
              while ( v45 != v46 );
LABEL_68:
              v46 = (void **)v43[66];
            }
            if ( v46 != v43 + 68 )
              free(v46);
            v48 = (void **)v43[52];
            if ( v48 != v43 + 54 )
              free(v48);
            v49 = v43 + 48;
            v50 = v43 + 8;
            do
            {
              while ( *v49 != v49 + 2 )
              {
                operator delete(*v49);
                v49 -= 4;
                if ( v49 == v50 )
                  goto LABEL_76;
              }
              v49 -= 4;
            }
            while ( v50 != v49 );
LABEL_76:
            operator delete(v43, 0x3A0u);
          }
          else
          {
            v110 = *(unsigned int *)(v151 + 14976);
            *(_DWORD *)(v151 + 14976) = v110 + 1;
            *(_QWORD *)(v44 + 8 * v110 + 14848) = v43;
          }
        }
      }
      *(_BYTE *)(a1 + 11) = 1;
    }
    *(_BYTE *)(a1 + 10) = 1;
  }
  v71 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 64) + 14LL);
  v146 = v71;
  if ( v71 > 0x40 )
  {
    sub_2205470(&v145, 0, 0);
    v71 = v146;
  }
  else
  {
    v145 = nullptr;
  }
  v72 = *(_WORD *)(a1 + 8);
  if ( v72 != 9 || !*(_BYTE *)(a1 + 10) )
  {
    if ( !(_DWORD)v37 )
      goto LABEL_130;
    v85 = (unsigned int)*(v144 - 1);
    if ( v71 > 0x40 )
    {
      *(_QWORD *)v145 = v85;
      memset((char *)v145 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v71 + 63) >> 6) + 0x1FFFFFFF));
      v72 = *(_WORD *)(a1 + 8);
      v71 = v146;
      goto LABEL_130;
    }
    v86 = nullptr;
    v87 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v71) & v85;
    if ( v71 )
      v86 = (void *)v87;
    v145 = v86;
    goto LABEL_176;
  }
  if ( v71 <= 0x40 )
  {
    v145 = nullptr;
  }
  else
  {
    *(_QWORD *)v145 = 0;
    memset((char *)v145 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v71 + 63) >> 6) + 0x1FFFFFFF));
    v71 = v146;
  }
  if ( !(_DWORD)v37 )
  {
    v72 = *(_WORD *)(a1 + 8);
    goto LABEL_130;
  }
  v134 = v7;
  v88 = 0;
  v89 = 0;
  v90 = (unsigned int)v37;
  v136 = v37;
  while ( 1 )
  {
    if ( v71 <= 0x40 )
    {
      v91 = v71;
      if ( v145 )
      {
        _BitScanReverse64(&v92, (unsigned __int64)v145);
        v91 = v71 - 64 + (v92 ^ 0x3F);
      }
      if ( v71 == 8 )
      {
        v93 = 0;
        v94 = 255;
      }
      else
      {
        v93 = (_QWORD)v145 << 8;
        v94 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v71;
        if ( !v71 )
        {
          v95 = nullptr;
          goto LABEL_194;
        }
      }
      v95 = (void *)(v94 & v93);
LABEL_194:
      v145 = v95;
      LOBYTE(v94) = v91 <= 7;
      v96 = *((unsigned __int8 *)ptr + 4 * v88);
      LODWORD(v151) = v71;
      v89 |= v94;
      goto LABEL_195;
    }
    v98 = sub_2206780(&v145);
    LOBYTE(v98) = v98 <= 7;
    v89 |= v98;
    sub_220A130(&v145, 8);
    v96 = *((unsigned __int8 *)ptr + 4 * v88);
    LODWORD(v151) = v146;
    if ( v146 > 0x40 )
    {
      sub_2205510(&v150);
      goto LABEL_196;
    }
LABEL_195:
    v150 = v145;
LABEL_196:
    sub_2205A20(&v150, v96);
    v97 = v151;
    LODWORD(v151) = 0;
    if ( v146 > 0x40 && v145 )
    {
      v131 = v150;
      operator delete[](v145);
      v146 = v97;
      v145 = v131;
      if ( (unsigned int)v151 > 0x40 && v150 )
        operator delete[](v150);
    }
    else
    {
      v145 = v150;
      v146 = v97;
    }
    if ( ++v88 == v90 )
      break;
    v71 = v146;
  }
  v7 = v134;
  LODWORD(v37) = v136;
  if ( *(_BYTE *)(a1 + 11) != 1 && (_BYTE)v89 )
  {
    sub_FC70B0((__int64)&v150, *(_QWORD *)(v134 + 48), a4, 1324);
    if ( (_BYTE)v155 )
    {
      sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
      v152 = 0;
      v155 = 0;
    }
    if ( v153 != v154 )
      operator delete(v153);
    v111 = (void **)v150;
    if ( v150 )
    {
      v112 = v151;
      if ( v151 )
      {
        if ( (unsigned __int64)v150 < v151 || (unsigned __int64)v150 > v151 + 14848 )
        {
          v113 = *((void ***)v150 + 66);
          v114 = &v113[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
          if ( v113 != v114 )
          {
            do
            {
              while ( 1 )
              {
                v114 -= 8;
                v115 = (void **)v114[3];
                if ( v115 == v114 + 5 )
                  break;
                operator delete(v115);
                if ( v113 == v114 )
                  goto LABEL_281;
              }
            }
            while ( v113 != v114 );
LABEL_281:
            v114 = (void **)v111[66];
          }
          if ( v114 != v111 + 68 )
            free(v114);
          v116 = (void **)v111[52];
          if ( v116 != v111 + 54 )
            free(v116);
          v117 = v111 + 48;
          v118 = v111 + 8;
          do
          {
            while ( *v117 != v117 + 2 )
            {
              operator delete(*v117);
              v117 -= 4;
              if ( v118 == v117 )
                goto LABEL_289;
            }
            v117 -= 4;
          }
          while ( v117 != v118 );
LABEL_289:
          operator delete(v111, 0x3A0u);
        }
        else
        {
          v121 = *(unsigned int *)(v151 + 14976);
          *(_DWORD *)(v151 + 14976) = v121 + 1;
          *(_QWORD *)(v112 + 8 * v121 + 14848) = v111;
        }
      }
    }
  }
  v72 = *(_WORD *)(a1 + 8);
  v71 = v146;
LABEL_130:
  if ( v71 <= 0x40 )
  {
LABEL_176:
    LOBYTE(v74) = (_BYTE)v145;
    *(_QWORD *)a1 = v145;
    if ( v72 != 9 || (_DWORD)v37 != 1 || (v74 & 0x80u) == 0LL || (*(_BYTE *)(*(_QWORD *)(v7 + 56) + 46LL) & 0x40) == 0 )
      goto LABEL_133;
    goto LABEL_180;
  }
  v73 = v145;
  v74 = *(_QWORD *)v145;
  *(_QWORD *)a1 = *(_QWORD *)v145;
  if ( v72 != 9 || (_DWORD)v37 != 1 )
  {
LABEL_132:
    operator delete[](v73);
    goto LABEL_133;
  }
  if ( (v74 & 0x80u) != 0LL && (*(_BYTE *)(*(_QWORD *)(v7 + 56) + 46LL) & 0x40) != 0 )
  {
LABEL_180:
    *(_QWORD *)a1 = (char)v74;
    if ( v71 > 0x40 )
    {
      v73 = v145;
      goto LABEL_182;
    }
    goto LABEL_133;
  }
LABEL_182:
  if ( v73 )
    goto LABEL_132;
LABEL_133:
  if ( ptr != s )
    free(ptr);
}
