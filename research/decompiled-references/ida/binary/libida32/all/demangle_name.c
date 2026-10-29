__int64 __fastcall demangle_name(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r12d
  __int64 *v7; // r15
  const char *v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 ph; // rax
  bool v12; // zf
  char v13; // al
  int v14; // r14d
  char v15; // al
  int v16; // eax
  int v17; // eax
  bool v18; // al
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  void *v22; // rdi
  __int64 v24; // rdx
  __m128i v25; // xmm0
  unsigned int v26; // r14d
  size_t v27; // rax
  const void *v28; // r9
  size_t v29; // r15
  void *v30; // rdi
  __int64 v31; // rdx
  __m128i v32; // xmm0
  const char *v33; // rdi
  char v34; // al
  char v35; // al
  char v36; // dl
  char v37; // al
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // r13
  unsigned __int64 v43; // r12
  _BYTE *v44; // rsi
  char *v45; // rbx
  unsigned __int64 v46; // rcx
  char *v47; // rax
  char *v48; // r12
  unsigned int v49; // edx
  unsigned int v50; // eax
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // r12
  const char *v54; // r13
  __int64 v55; // rbx
  __int64 v56; // r15
  char *v57; // rsi
  __int64 v58; // rdx
  char *v59; // rbx
  __int64 v60; // rbx
  __int64 v61; // r13
  unsigned __int64 v62; // r12
  char *v63; // rsi
  char *v64; // rbx
  int v65; // eax
  __int64 v66; // r13
  const char *v67; // r12
  __int64 v68; // rbx
  __int64 v69; // r15
  char *v70; // rsi
  __int64 v71; // rdx
  char *v72; // rax
  unsigned __int64 v73; // rcx
  char *v74; // rax
  const char *v75; // rdx
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // esi
  __int64 v79; // rdi
  int v80; // eax
  __int64 v81; // r12
  const char *v82; // r13
  __int64 v83; // rbx
  __int64 v84; // rbp
  char *v85; // rsi
  char *v86; // rbx
  char *v87; // rsi
  unsigned __int64 v88; // rdx
  __int64 v89; // r15
  __int64 v90; // rbx
  __int64 v91; // r13
  char *v92; // r12
  char *v93; // rax
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rdx
  char *v96; // rbx
  const char *v97; // r13
  unsigned int v98; // ecx
  __int64 v99; // rsi
  void *v100; // rdi
  __int64 v101; // rdx
  unsigned __int64 v102; // rdx
  char *v103; // rbx
  const char *v104; // r13
  unsigned int v105; // ecx
  __int64 v106; // rsi
  __int64 v107; // rbx
  __int64 v108; // r13
  unsigned __int64 v109; // r12
  char *v110; // rsi
  __int64 v111; // rbx
  __int64 v112; // r13
  unsigned __int64 v113; // r12
  char *v114; // rsi
  __m128i si128; // xmm0
  __int64 v116; // rbx
  unsigned __int64 v117; // r12
  __int64 v118; // r13
  char *v119; // rsi
  __int64 v120; // rbx
  __int64 v121; // r13
  unsigned __int64 v122; // r12
  char *v123; // rsi
  __int64 v124; // rbx
  __int64 v125; // r13
  unsigned __int64 v126; // r12
  char *v127; // rsi
  __int64 v128; // rbx
  __int64 v129; // r13
  unsigned __int64 v130; // r12
  char *v131; // rsi
  char *v132; // rbx
  __int64 v133; // rbx
  __int64 v134; // r13
  unsigned __int64 v135; // r12
  char *v136; // rsi
  char *v137; // rbx
  __int64 v138; // rbx
  __int64 v139; // r13
  unsigned __int64 v140; // r12
  char *v141; // rsi
  char *v142; // rbx
  __int64 v143; // rbx
  __int64 v144; // r13
  unsigned __int64 v145; // r12
  char *v146; // rsi
  char *v147; // rbx
  __int64 v148; // rbx
  __int64 v149; // r13
  unsigned __int64 v150; // r12
  char *v151; // rsi
  __m128i v152; // xmm0
  size_t v153; // rax
  size_t v154; // r12
  __int64 v155; // r15
  char v156; // al
  char *v157; // rdi
  char v158; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v159; // [rsp+0h] [rbp-D0h]
  __int64 v160; // [rsp+8h] [rbp-C8h]
  _DWORD *src; // [rsp+18h] [rbp-B8h]
  void *srca; // [rsp+18h] [rbp-B8h]
  void *srcb; // [rsp+18h] [rbp-B8h]
  void *srcc; // [rsp+18h] [rbp-B8h]
  const void *v166; // [rsp+20h] [rbp-B0h]
  int v167; // [rsp+34h] [rbp-9Ch] BYREF
  void *ptr; // [rsp+38h] [rbp-98h] BYREF
  __m128i v169; // [rsp+40h] [rbp-90h] BYREF
  void *dest; // [rsp+58h] [rbp-78h] BYREF
  __m128i v171; // [rsp+60h] [rbp-70h] BYREF
  char *s1; // [rsp+78h] [rbp-58h] BYREF
  __int128 v173; // [rsp+80h] [rbp-50h]
  unsigned __int64 v174; // [rsp+90h] [rbp-40h]

  v4 = a3;
  v174 = __readfsqword(0x28u);
  v169 = 0;
  ptr = nullptr;
  if ( sub_375980(0x3Eu, &v167, &ptr, a2, a3, (unsigned int)a4) == 1 )
  {
    v22 = ptr;
    if ( a1 )
    {
      v22 = *(void **)a1;
      v24 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = ptr;
      v25 = _mm_loadu_si128(&v169);
      ptr = v22;
      v169.m128i_i64[1] = v24;
      *(__m128i *)(a1 + 8) = v25;
    }
    v14 = v167;
  }
  else if ( a2 && *(_BYTE *)a2 )
  {
    v7 = *(__int64 **)(qword_2CA1698 + 1376);
    v8 = (const char *)(v7 + 1);
    v9 = qstpncpy(v7 + 1, a2, 0x8000);
    *(_BYTE *)(v9 + 3) = 0;
    v10 = v9;
    *(_WORD *)(v9 + 1) = 0;
    ph = get_ph(v7 + 1, (const char *)a2);
    v12 = *(_DWORD *)(ph + 4) == 15;
    src = (_DWORD *)ph;
    v158 = 0;
    v13 = *((_BYTE *)v7 + 8);
    if ( v12 && v13 == 46 )
    {
      v158 = 1;
      v13 = *((_BYTE *)v7 + 9);
      v8 = (char *)v7 + 9;
    }
    if ( v13 == 106 && v8[1] == 95 )
    {
      v158 |= 2u;
      v8 += 2;
    }
    if ( (unsigned __int64)(v8 + 3) < v10 && !strcmp((const char *)(v10 - 3), ".eh") )
    {
      v158 |= 4u;
      *(_BYTE *)(v10 - 3) = 0;
    }
    v14 = v4 & 0x70000000;
    if ( (v4 & 0x70000000) != 0x70000000 )
    {
      v160 = *v7;
      qmutex_lock(*v7);
      if ( v14 )
      {
        if ( a4 )
        {
          v17 = v4 & 0x70000000;
          if ( (v4 & 0x70000000) > 0x4FFFFFFF )
            goto LABEL_17;
LABEL_45:
          if ( v17 == 0x20000000 )
          {
LABEL_52:
            if ( *v8 == 95 && v8[1] == 84 )
              goto LABEL_22;
          }
          goto LABEL_46;
        }
LABEL_32:
        if ( (debug & 0x400) != 0 )
          sub_383DA0();
        goto LABEL_33;
      }
      if ( a4 )
      {
        switch ( getinf(57) & 0xF )
        {
          case 1LL:
            goto LABEL_108;
          case 2LL:
          case 8LL:
            v14 = 0x20000000;
            goto LABEL_52;
          case 3LL:
            v14 = 805306368;
            goto LABEL_46;
          case 6LL:
            v35 = getinf(38);
            v36 = *v8;
            if ( (v35 & 4) != 0 )
            {
              v18 = 1;
              v14 = 1610612736;
              if ( v36 != 95 )
                goto LABEL_293;
            }
            else
            {
              if ( v36 != 95 )
                goto LABEL_101;
              v14 = 1342177280;
            }
            v156 = v8[1];
            if ( v156 == 84 || v156 == 95 && v8[2] == 84 )
            {
LABEL_106:
              v14 = 0x40000000;
              goto LABEL_46;
            }
            v18 = v14 == 1610612736;
LABEL_293:
            v19 = src[1];
            break;
          case 7LL:
            goto LABEL_114;
          default:
            v15 = *v8;
            if ( *v8 != 95 )
              goto LABEL_11;
            v37 = v8[1];
            if ( v37 == 84 || v37 == 95 && v8[2] == 84 )
              goto LABEL_106;
            goto LABEL_13;
        }
      }
      else
      {
        v15 = *v8;
        if ( *v8 == 95 )
        {
          v34 = v8[1];
          if ( v34 == 84 || v34 == 95 && v8[2] == 84 )
          {
            v14 = 0x40000000;
            goto LABEL_32;
          }
LABEL_13:
          v16 = demangle(0, 0, v8, 0);
          v14 = v16;
          if ( v16 != 1879048192 )
          {
            if ( v16 )
            {
              v17 = v16 & 0x70000000;
              if ( a4 )
              {
                if ( v17 > 1342177279 )
                {
LABEL_17:
                  v18 = v17 == 1610612736;
                  v19 = src[1];
                  goto LABEL_18;
                }
                goto LABEL_45;
              }
            }
            goto LABEL_32;
          }
          v38 = getinf(5);
          if ( (unsigned __int16)v38 > 0x14u || (v39 = 1311744, !_bittest64(&v39, v38)) )
          {
            v40 = *((_DWORD *)v7 + 16387);
            if ( v40 != -1 )
              goto LABEL_112;
            s1 = nullptr;
            v173 = 0;
            get_idasgn_desc(0, &s1, 0);
            v157 = s1;
            if ( (_QWORD)v173 )
            {
              v157 = s1;
              v40 = strcmp(s1, "vac35wc") == 0;
              *((_DWORD *)v7 + 16387) = v40;
              if ( !v157 )
              {
LABEL_112:
                if ( v40 )
                {
                  if ( a4 )
                  {
LABEL_114:
                    v14 = 1879048192;
                    goto LABEL_22;
                  }
                  goto LABEL_32;
                }
                goto LABEL_318;
              }
            }
            else
            {
              *((_DWORD *)v7 + 16387) = 0;
              if ( !v157 )
              {
LABEL_318:
                if ( a4 )
                {
LABEL_108:
                  v14 = 0x10000000;
LABEL_46:
                  if ( !(unsigned __int8)qgetenv("IDA_NOAUTOCOMP") )
                    v14 &= 0x8FFFFFFF;
LABEL_22:
                  if ( a4 > 0 )
                  {
                    v20 = *(unsigned __int32 *)((char *)&stru_10010.st_name + (_QWORD)v7);
                    if ( v20 )
                    {
                      if ( v20 == 2 )
                        v4 = v4 & 0xFFFFFED8 | 0x125;
                    }
                    else if ( (~(_BYTE)v4 & 7) == 0 )
                    {
                      v4 = v4 & 0xFFFFFFF8 | 3;
                    }
                  }
                  dest = nullptr;
                  v171 = 0;
                  if ( ((*v8 - 43) & 0xFD) == 0 && v8[1] == 91 )
                  {
                    if ( a4 == 2 )
                    {
                      v153 = strlen(v8);
                      v154 = v153;
                      if ( v153 )
                      {
                        v155 = v153 + 1;
                        dest = (void *)qvector_reserve(&dest, 0, v153 + 1, 1);
                        v171.m128i_i64[0] = v155;
                        memmove(dest, v8, v154);
                        *((_BYTE *)dest + v154) = 0;
                      }
                    }
                    v14 |= 1u;
                  }
                  else
                  {
                    v21 = v4 | v14;
                    switch ( a4 )
                    {
                      case -8:
                      case -4:
                      case -2:
                        srca = nullptr;
                        v26 = a4;
                        break;
                      case 1:
                        srca = nullptr;
                        v26 = 0x7FFFFFFF;
                        break;
                      case 2:
                        v26 = 0x8000;
                        srca = (char *)v7 + 32780;
                        break;
                      default:
                        srca = nullptr;
                        v26 = 0;
                        break;
                    }
                    if ( (debug & 0x400) != 0 )
                      sub_383DA0();
                    v14 = demangle(srca, v26, v8, v21);
                    if ( v14 > 0 && srca )
                    {
                      srcb = (char *)v7 + 32780;
                      v27 = strlen((const char *)v7 + 32780);
                      v28 = (char *)v7 + 32780;
                      v29 = v27;
                      if ( !v27 )
                      {
                        v171.m128i_i64[0] = 0;
LABEL_62:
                        if ( !under_debugger )
                          interr(1234);
                        goto LABEL_331;
                      }
                      v100 = dest;
                      v101 = v27 + 1;
                      if ( v171.m128i_i64[1] < v27 + 1 )
                      {
                        v166 = srcb;
                        srcc = (void *)(v27 + 1);
                        dest = (void *)qvector_reserve(&dest, dest, v101, 1);
                        v28 = v166;
                        v100 = dest;
                        v101 = (__int64)srcc;
                      }
                      v171.m128i_i64[0] = v101;
                      memmove(v100, v28, v29);
                      *((_BYTE *)dest + v29) = 0;
                      if ( v171.m128i_i64[0] <= 1uLL )
                        goto LABEL_62;
                      if ( (v14 & 0x70000000) != 0x50000000 )
                      {
                        if ( (v158 & 4) == 0 )
                        {
LABEL_75:
                          if ( (debug & 0x400) == 0 || a4 < 0 )
                            goto LABEL_77;
                          s1 = nullptr;
                          v173 = 0;
                          if ( a4 != 2 )
                          {
                            switch ( v14 & 0xF )
                            {
                              case 0:
                                v87 = nullptr;
                                v88 = 5;
                                v89 = 4;
                                v90 = 0;
                                v91 = 4;
                                v92 = "data";
                                goto LABEL_175;
                              case 1:
                                goto LABEL_126;
                              case 2:
                                v87 = nullptr;
                                v88 = 6;
                                v89 = 5;
                                v90 = 0;
                                v91 = 5;
                                v92 = "cdecl";
                                goto LABEL_175;
                              case 3:
                                v87 = nullptr;
                                v88 = 7;
                                v89 = 6;
                                v90 = 0;
                                v91 = 6;
                                v92 = "pascal";
                                goto LABEL_175;
                              case 4:
                                v87 = nullptr;
                                v88 = 8;
                                v89 = 7;
                                v90 = 0;
                                v91 = 7;
                                v92 = "stdcall";
                                goto LABEL_175;
                              case 5:
                                v87 = nullptr;
                                v88 = 9;
                                v89 = 8;
                                v90 = 0;
                                v91 = 8;
                                v92 = "fastcall";
                                goto LABEL_175;
                              case 6:
                                v87 = nullptr;
                                v88 = 9;
                                v89 = 8;
                                v90 = 0;
                                v91 = 8;
                                v92 = "thiscall";
                                goto LABEL_175;
                              case 7:
                                v87 = nullptr;
                                v88 = 8;
                                v89 = 7;
                                v90 = 0;
                                v91 = 7;
                                v92 = "fortran";
                                goto LABEL_175;
                              case 8:
                                v87 = nullptr;
                                v88 = 8;
                                v89 = 7;
                                v90 = 0;
                                v91 = 7;
                                v92 = "syscall";
                                goto LABEL_175;
                              case 9:
                                v87 = nullptr;
                                v88 = 10;
                                v89 = 9;
                                v90 = 0;
                                v91 = 9;
                                v92 = "interrupt";
                                goto LABEL_175;
                              case 0xA:
                                v87 = nullptr;
                                v88 = 13;
                                v89 = 12;
                                v90 = 0;
                                v91 = 12;
                                v92 = "__msfastcall";
                                goto LABEL_175;
                              case 0xC:
                                v87 = nullptr;
                                v88 = 6;
                                v89 = 5;
                                v90 = 0;
                                v91 = 5;
                                v92 = "Dcall";
                                goto LABEL_175;
                              case 0xE:
                                v87 = nullptr;
                                v88 = 10;
                                v89 = 9;
                                v90 = 0;
                                v91 = 9;
                                v92 = "__regcall";
                                goto LABEL_175;
                              default:
                                v87 = nullptr;
                                v88 = 5;
                                v89 = 4;
                                v90 = 0;
                                v91 = 4;
                                v92 = "?prc";
                                goto LABEL_175;
                            }
                          }
LABEL_122:
                          sub_3573A0(&s1);
                          switch ( v14 & 0xF )
                          {
                            case 0:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 4;
                              v92 = "data";
                              v87 = s1;
                              goto LABEL_191;
                            case 1:
                              goto LABEL_126;
                            case 2:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 5;
                              v92 = "cdecl";
                              v87 = s1;
                              goto LABEL_191;
                            case 3:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 6;
                              v92 = "pascal";
                              v87 = s1;
                              goto LABEL_191;
                            case 4:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 7;
                              v92 = "stdcall";
                              v87 = s1;
                              goto LABEL_191;
                            case 5:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 8;
                              v92 = "fastcall";
                              v87 = s1;
                              goto LABEL_191;
                            case 6:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 8;
                              v92 = "thiscall";
                              v87 = s1;
                              goto LABEL_191;
                            case 7:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 7;
                              v92 = "fortran";
                              v87 = s1;
                              goto LABEL_191;
                            case 8:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 7;
                              v92 = "syscall";
                              v87 = s1;
                              goto LABEL_191;
                            case 9:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 9;
                              v92 = "interrupt";
                              v87 = s1;
                              goto LABEL_191;
                            case 0xA:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 12;
                              v92 = "__msfastcall";
                              v87 = s1;
                              goto LABEL_191;
                            case 0xC:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 5;
                              v92 = "Dcall";
                              v87 = s1;
                              goto LABEL_191;
                            case 0xE:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 9;
                              v92 = "__regcall";
                              v87 = s1;
                              goto LABEL_191;
                            default:
                              v94 = *((_QWORD *)&v173 + 1);
                              v90 = v173;
                              v91 = 4;
                              v92 = "?prc";
                              v87 = s1;
LABEL_191:
                              if ( v90 )
                              {
                                v89 = --v90 + v91;
                                v88 = v90 + v91 + 1;
                              }
                              else
                              {
                                v88 = v91 + 1;
                                v89 = v91;
                              }
                              if ( v94 < v88 )
                              {
LABEL_175:
                                v159 = v88;
                                s1 = (char *)qvector_reserve(&s1, v87, v88, 1);
                                v88 = v159;
                                v87 = s1;
                              }
                              *(_QWORD *)&v173 = v88;
                              v87[v89] = 0;
                              v93 = &s1[v90];
                              if ( (unsigned int)v91 >= 8 )
                              {
                                v46 = (unsigned __int64)(v93 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                                *(_QWORD *)v93 = *(_QWORD *)v92;
                                *(_QWORD *)&v93[v91 - 8] = *(_QWORD *)&v92[v91 - 8];
                                v47 = &v93[-v46];
                                v48 = (char *)(v92 - v47);
                                if ( (((_DWORD)v91 + (_DWORD)v47) & 0xFFFFFFF8) >= 8 )
                                {
                                  v49 = (v91 + (_DWORD)v47) & 0xFFFFFFF8;
                                  v50 = 0;
                                  do
                                  {
                                    v51 = v50;
                                    v50 += 8;
                                    *(_QWORD *)(v46 + v51) = *(_QWORD *)&v48[v51];
                                  }
                                  while ( v50 < v49 );
                                }
                              }
                              else
                              {
                                *(_DWORD *)v93 = *(_DWORD *)v92;
                                *(_DWORD *)&v93[(unsigned int)v91 - 4] = *(_DWORD *)&v92[(unsigned int)v91 - 4];
                              }
LABEL_126:
                              if ( (v14 & 0x10) != 0 )
                              {
                                v133 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v134 = v173 + 8;
                                  v135 = v173 + 9;
                                  v133 = v173 - 1;
                                }
                                else
                                {
                                  v135 = 10;
                                  v134 = 9;
                                }
                                v136 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v135 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v135, 1);
                                  v136 = s1;
                                }
                                *(_QWORD *)&v173 = v135;
                                v136[v134] = 0;
                                v137 = &s1[v133];
                                *(_QWORD *)v137 = 0x6765726576617320LL;
                                v137[8] = 115;
                              }
                              v52 = v14 & 0xE0;
                              if ( v52 == 64 )
                              {
                                v53 = 8;
                                v54 = " private";
                              }
                              else if ( (v14 & 0xE0u) > 0x40 )
                              {
                                v53 = 10;
                                v54 = " protected";
                                if ( v52 != 96 )
                                {
                                  v54 = " member";
                                  v53 = 7;
                                  if ( v52 != 128 )
                                    v54 = " ?class";
                                }
                              }
                              else
                              {
                                v53 = 7;
                                v54 = " public";
                                if ( (v14 & 0xE0) == 0 )
                                  goto LABEL_136;
                              }
                              v55 = v173;
                              v56 = v53;
                              if ( (_QWORD)v173 )
                              {
                                v55 = v173 - 1;
                                v56 = v173 - 1 + v53;
                              }
                              v57 = s1;
                              v58 = v56 + 1;
                              if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v56 + 1) )
                              {
                                s1 = (char *)qvector_reserve(&s1, s1, v58, 1);
                                v58 = v56 + 1;
                                v57 = s1;
                              }
                              *(_QWORD *)&v173 = v58;
                              v57[v56] = 0;
                              v59 = &s1[v55];
                              if ( (unsigned int)v53 >= 8 )
                              {
                                v102 = (unsigned __int64)(v59 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                                *(_QWORD *)v59 = *(_QWORD *)v54;
                                *(_QWORD *)&v59[v53 - 8] = *(_QWORD *)&v54[v53 - 8];
                                v103 = &v59[-v102];
                                v104 = (const char *)(v54 - v103);
                                if ( (((_DWORD)v53 + (_DWORD)v103) & 0xFFFFFFF8) >= 8 )
                                {
                                  v105 = 0;
                                  do
                                  {
                                    v106 = v105;
                                    v105 += 8;
                                    *(_QWORD *)(v102 + v106) = *(_QWORD *)&v104[v106];
                                  }
                                  while ( v105 < (((_DWORD)v53 + (_DWORD)v103) & 0xFFFFFFF8) );
                                }
                              }
                              else
                              {
                                *(_DWORD *)v59 = *(_DWORD *)v54;
                                *(_DWORD *)&v59[(unsigned int)v53 - 4] = *(_DWORD *)&v54[(unsigned int)v53 - 4];
                              }
LABEL_136:
                              if ( (v14 & 0xFF00) != 0 )
                              {
                                sub_357520((__int64 *)&s1);
                                if ( (v14 & 0x10000) == 0 )
                                {
                                  if ( (v14 & 0x1FF00) != 0 )
                                    goto LABEL_143;
                                  goto LABEL_138;
                                }
                              }
                              else if ( (v14 & 0x10000) == 0 )
                              {
LABEL_138:
                                v60 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v61 = v173 + 4;
                                  v62 = v173 + 5;
                                  v60 = v173 - 1;
                                }
                                else
                                {
                                  v62 = 6;
                                  v61 = 5;
                                }
                                v63 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v62 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v62, 1);
                                  v63 = s1;
                                }
                                *(_QWORD *)&v173 = v62;
                                v63[v61] = 0;
                                v64 = &s1[v60];
                                *(_DWORD *)v64 = 1768912416;
                                v64[4] = 100;
                                goto LABEL_143;
                              }
                              v116 = v173;
                              if ( (_QWORD)v173 )
                              {
                                v118 = v173 + 3;
                                v117 = v173 + 4;
                                v116 = v173 - 1;
                              }
                              else
                              {
                                v117 = 5;
                                v118 = 4;
                              }
                              v119 = s1;
                              if ( *((_QWORD *)&v173 + 1) < v117 )
                              {
                                s1 = (char *)qvector_reserve(&s1, s1, v117, 1);
                                v119 = s1;
                              }
                              *(_QWORD *)&v173 = v117;
                              v119[v118] = 0;
                              *(_DWORD *)&s1[v116] = 774778400;
LABEL_143:
                              if ( (v14 & 0x20000) != 0 )
                              {
                                v128 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v129 = v173 + 6;
                                  v130 = v173 + 7;
                                  v128 = v173 - 1;
                                }
                                else
                                {
                                  v130 = 8;
                                  v129 = 7;
                                }
                                v131 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v130 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v130, 1);
                                  v131 = s1;
                                }
                                *(_QWORD *)&v173 = v130;
                                v131[v129] = 0;
                                v132 = &s1[v128];
                                *(_DWORD *)v132 = 1635021600;
                                *(_DWORD *)(v132 + 3) = 1667855457;
                              }
                              if ( (v14 & 0x40000) != 0 )
                              {
                                v124 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v125 = v173 + 7;
                                  v126 = v173 + 8;
                                  v124 = v173 - 1;
                                }
                                else
                                {
                                  v126 = 9;
                                  v125 = 8;
                                }
                                v127 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v126 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v126, 1);
                                  v127 = s1;
                                }
                                *(_QWORD *)&v173 = v126;
                                v127[v125] = 0;
                                *(_QWORD *)&s1[v124] = 0x6C61757472697620LL;
                              }
                              if ( (v14 & 0x80000) != 0 )
                              {
                                v120 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v121 = v173 + 11;
                                  v122 = v173 + 12;
                                  v120 = v173 - 1;
                                }
                                else
                                {
                                  v122 = 13;
                                  v121 = 12;
                                }
                                v123 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v122 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v122, 1);
                                  v123 = s1;
                                }
                                *(_QWORD *)&v173 = v122;
                                v123[v121] = 0;
                                qmemcpy(&s1[v120], " autocreated", 12);
                              }
                              v65 = v14 & 0x700000;
                              if ( (v14 & 0x700000) == 0x200000 )
                              {
                                v66 = 12;
                                v67 = " constructor";
                              }
                              else if ( (v14 & 0x700000u) > 0x200000 )
                              {
                                v66 = 11;
                                v67 = " destructor";
                                if ( v65 != 3145728 )
                                {
                                  v66 = 9;
                                  v67 = " ?typmask";
                                }
                              }
                              else
                              {
                                v66 = 9;
                                v67 = " operator";
                                if ( !v65 )
                                  goto LABEL_156;
                              }
                              v68 = v173;
                              v69 = v66;
                              if ( (_QWORD)v173 )
                              {
                                v68 = v173 - 1;
                                v69 = v173 - 1 + v66;
                              }
                              v70 = s1;
                              v71 = v69 + 1;
                              if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v69 + 1) )
                              {
                                s1 = (char *)qvector_reserve(&s1, s1, v71, 1);
                                v71 = v69 + 1;
                                v70 = s1;
                              }
                              *(_QWORD *)&v173 = v71;
                              v70[v69] = 0;
                              v72 = &s1[v68];
                              *(_QWORD *)v72 = *(_QWORD *)v67;
                              v73 = (unsigned __int64)(v72 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                              *(_QWORD *)&v72[v66 - 8] = *(_QWORD *)&v67[v66 - 8];
                              v74 = &v72[-v73];
                              v75 = (const char *)(v67 - v74);
                              v76 = (v66 + (_DWORD)v74) & 0xFFFFFFF8;
                              if ( v76 >= 8 )
                              {
                                v77 = v76 & 0xFFFFFFF8;
                                v78 = 0;
                                do
                                {
                                  v79 = v78;
                                  v78 += 8;
                                  *(_QWORD *)(v73 + v79) = *(_QWORD *)&v75[v79];
                                }
                                while ( v78 < v77 );
                              }
LABEL_156:
                              if ( (v14 & 0xC00000) != 0 )
                              {
                                v111 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v112 = v173 + 15;
                                  v113 = v173 + 16;
                                  v111 = v173 - 1;
                                }
                                else
                                {
                                  v113 = 17;
                                  v112 = 16;
                                }
                                v114 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v113 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v113, 1);
                                  v114 = s1;
                                }
                                si128 = _mm_load_si128((const __m128i *)&xmmword_2384300);
                                *(_QWORD *)&v173 = v113;
                                v114[v112] = 0;
                                *(__m128i *)&s1[v111] = si128;
                              }
                              if ( (v14 & 0x1000000) != 0 )
                              {
                                v107 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v108 = v173 + 7;
                                  v109 = v173 + 8;
                                  v107 = v173 - 1;
                                }
                                else
                                {
                                  v109 = 9;
                                  v108 = 8;
                                }
                                v110 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v109 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v109, 1);
                                  v110 = s1;
                                }
                                *(_QWORD *)&v173 = v109;
                                v110[v108] = 0;
                                *(_QWORD *)&s1[v107] = 0x5D6B6E7568745B20LL;
                              }
                              if ( (v14 & 0x2000000) != 0 )
                              {
                                v148 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v149 = v173 + 15;
                                  v150 = v173 + 16;
                                  v148 = v173 - 1;
                                }
                                else
                                {
                                  v150 = 17;
                                  v149 = 16;
                                }
                                v151 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v150 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v150, 1);
                                  v151 = s1;
                                }
                                v152 = _mm_load_si128((const __m128i *)&xmmword_2384310);
                                *(_QWORD *)&v173 = v150;
                                v151[v149] = 0;
                                *(__m128i *)&s1[v148] = v152;
                              }
                              if ( (v14 & 0x4000000) != 0 )
                              {
                                v143 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v144 = v173 + 8;
                                  v145 = v173 + 9;
                                  v143 = v173 - 1;
                                }
                                else
                                {
                                  v145 = 10;
                                  v144 = 9;
                                }
                                v146 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v145 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v145, 1);
                                  v146 = s1;
                                }
                                *(_QWORD *)&v173 = v145;
                                v146[v144] = 0;
                                v147 = &s1[v143];
                                *(_QWORD *)v147 = 0x74616C706D657420LL;
                                v147[8] = 101;
                              }
                              if ( (v14 & 0x8000000) != 0 )
                              {
                                v138 = v173;
                                if ( (_QWORD)v173 )
                                {
                                  v139 = v173 + 2;
                                  v140 = v173 + 3;
                                  v138 = v173 - 1;
                                }
                                else
                                {
                                  v140 = 4;
                                  v139 = 3;
                                }
                                v141 = s1;
                                if ( *((_QWORD *)&v173 + 1) < v140 )
                                {
                                  s1 = (char *)qvector_reserve(&s1, s1, v140, 1);
                                  v141 = s1;
                                }
                                *(_QWORD *)&v173 = v140;
                                v141[v139] = 0;
                                v142 = &s1[v138];
                                *(_WORD *)v142 = 25376;
                                v142[2] = 118;
                              }
                              v80 = v14 & 0x70000000;
                              if ( (v14 & 0x70000000) == 0x40000000 )
                              {
                                v81 = 6;
                                v82 = " Swift";
                                if ( *(_BYTE *)(a2 + 1) == 68 )
                                {
                                  v81 = 5;
                                  v82 = " dm_D";
                                }
                              }
                              else if ( (v14 & 0x70000000u) > 0x40000000 )
                              {
                                if ( v80 == 1610612736 )
                                {
                                  v81 = 5;
                                  v82 = " GCC3";
                                }
                                else
                                {
                                  v81 = 10;
                                  v82 = " VisualAge";
                                  if ( v80 != 1879048192 )
                                  {
                                    v82 = " ?compiler";
                                    if ( v80 == 1342177280 )
                                    {
                                      v81 = 4;
                                      v82 = " GNU";
                                    }
                                  }
                                }
                              }
                              else if ( v80 == 0x20000000 )
                              {
                                v81 = 8;
                                v82 = " borland";
                              }
                              else
                              {
                                v81 = 7;
                                v82 = " watcom";
                                if ( v80 != 805306368 )
                                {
                                  v82 = " ?compiler";
                                  v81 = 10;
                                  if ( v80 == 0x10000000 )
                                    v82 = " microsoft";
                                }
                              }
                              v83 = v173;
                              v84 = v81;
                              if ( (_QWORD)v173 )
                              {
                                v83 = v173 - 1;
                                v84 = v173 - 1 + v81;
                              }
                              v85 = s1;
                              if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v84 + 1) )
                              {
                                s1 = (char *)qvector_reserve(&s1, s1, v84 + 1, 1);
                                v85 = s1;
                              }
                              *(_QWORD *)&v173 = v84 + 1;
                              v85[v84] = 0;
                              v86 = &s1[v83];
                              if ( (unsigned int)v81 >= 8 )
                              {
                                v95 = (unsigned __int64)(v86 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                                *(_QWORD *)v86 = *(_QWORD *)v82;
                                *(_QWORD *)&v86[v81 - 8] = *(_QWORD *)&v82[v81 - 8];
                                v96 = &v86[-v95];
                                v97 = (const char *)(v82 - v96);
                                if ( (((_DWORD)v81 + (_DWORD)v96) & 0xFFFFFFF8) >= 8 )
                                {
                                  v98 = 0;
                                  do
                                  {
                                    v99 = v98;
                                    v98 += 8;
                                    *(_QWORD *)(v95 + v99) = *(_QWORD *)&v97[v99];
                                  }
                                  while ( v98 < (((_DWORD)v81 + (_DWORD)v96) & 0xFFFFFFF8) );
                                }
                              }
                              else
                              {
                                *(_DWORD *)v86 = *(_DWORD *)v82;
                                *(_DWORD *)&v86[(unsigned int)v81 - 4] = *(_DWORD *)&v82[(unsigned int)v81 - 4];
                              }
                              sub_365330();
                          }
                        }
                        goto LABEL_72;
                      }
                      goto LABEL_88;
                    }
                  }
                  if ( v14 == -1 )
                  {
                    if ( !under_debugger )
                      interr(1223);
LABEL_331:
                    BUG();
                  }
                  if ( (v14 & 0x70000000) != 0x50000000 )
                  {
LABEL_70:
                    if ( (v158 & 4) == 0 )
                      goto LABEL_74;
                    if ( v14 <= 0 )
                      goto LABEL_81;
LABEL_72:
                    if ( a4 == 2 )
                    {
                      v41 = v171.m128i_i64[0];
                      if ( v171.m128i_i64[0] )
                      {
                        v42 = v171.m128i_i64[0] + 5;
                        v43 = v171.m128i_i64[0] + 6;
                        v41 = v171.m128i_i64[0] - 1;
                      }
                      else
                      {
                        v43 = 7;
                        v42 = 6;
                      }
                      v44 = dest;
                      if ( v171.m128i_i64[1] < v43 )
                      {
                        dest = (void *)qvector_reserve(&dest, dest, v43, 1);
                        v44 = dest;
                      }
                      v171.m128i_i64[0] = v43;
                      v44[v42] = 0;
                      v45 = (char *)dest + v41;
                      *(_DWORD *)v45 = 1697523744;
                      *((_WORD *)v45 + 2) = 10600;
                      v14 &= 0xFFFFFFF0;
                      if ( v14 )
                      {
                        if ( (debug & 0x400) == 0 )
                        {
LABEL_77:
                          if ( a1 )
                          {
                            v30 = *(void **)a1;
                            v31 = *(_QWORD *)(a1 + 16);
                            *(_QWORD *)a1 = dest;
                            v32 = _mm_loadu_si128(&v171);
                            dest = v30;
                            v171.m128i_i64[1] = v31;
                            *(__m128i *)(a1 + 8) = v32;
                          }
                          else
                          {
                            v30 = dest;
                          }
LABEL_79:
                          if ( v30 )
                          {
                            v171.m128i_i64[0] = 0;
                            qfree(v30);
                          }
LABEL_33:
                          qmutex_unlock(v160);
                          v22 = ptr;
                          goto LABEL_34;
                        }
                        s1 = nullptr;
                        v173 = 0;
                        goto LABEL_122;
                      }
                      goto LABEL_81;
                    }
                    v14 &= 0xFFFFFFF0;
LABEL_74:
                    if ( v14 > 0 )
                      goto LABEL_75;
LABEL_81:
                    v30 = dest;
                    goto LABEL_79;
                  }
                  v33 = haystack;
                  if ( !v171.m128i_i64[0] )
                  {
LABEL_83:
                    if ( !strcmp(v33, v8) )
                    {
                      v30 = dest;
                      v14 = -3;
                      goto LABEL_79;
                    }
                    goto LABEL_70;
                  }
LABEL_88:
                  v33 = (const char *)dest;
                  goto LABEL_83;
                }
                v14 = 0x10000000;
                goto LABEL_32;
              }
            }
            *(_QWORD *)&v173 = 0;
            qfree(v157);
            v40 = *((_DWORD *)v7 + 16387);
            goto LABEL_112;
          }
LABEL_214:
          v14 = 1342177280;
          if ( a4 )
          {
LABEL_101:
            v14 = 1342177280;
            goto LABEL_22;
          }
          goto LABEL_32;
        }
LABEL_11:
        if ( ((v15 - 43) & 0xFD) != 0 || v8[1] != 91 )
          goto LABEL_13;
        if ( (getinf(38) & 4) == 0 )
          goto LABEL_214;
        if ( !a4 )
        {
          v14 = 1610612736;
          goto LABEL_32;
        }
        v14 = 1610612736;
        v19 = src[1];
        v18 = 1;
      }
LABEL_18:
      if ( v19 || !v18 || *v8 == 64 && v8[1] == 95 && v8[2] == 90 || (unsigned int)getinf(5) == 25 )
        goto LABEL_22;
      goto LABEL_46;
    }
    v22 = ptr;
    v14 = -6;
  }
  else
  {
    v22 = ptr;
    v14 = -3;
  }
LABEL_34:
  if ( v22 )
  {
    v169.m128i_i64[0] = 0;
    qfree(v22);
  }
  return (unsigned int)v14;
}

