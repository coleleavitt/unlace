__int64 *__fastcall sub_422C40(__int64 *a1, int a2, _QWORD *a3, __int64 a4)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  _QWORD *v6; // r9
  __int64 *v7; // r14
  int v8; // esi
  __int64 v9; // r13
  unsigned int v10; // ecx
  _QWORD *v11; // rbx
  size_t v12; // r15
  unsigned int v13; // r14d
  char *v14; // rbp
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // r12
  int v23; // esi
  __int64 v24; // r14
  unsigned int v25; // r9d
  _QWORD *v26; // rbx
  size_t v27; // r13
  int v28; // eax
  char *v29; // rbp
  int v30; // edi
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rcx
  __int64 *v37; // r13
  int v38; // esi
  unsigned int v39; // r8d
  __int64 v40; // r14
  _QWORD *v41; // rbx
  size_t v42; // r15
  int v43; // eax
  char *v44; // rbp
  int v45; // edi
  __int64 v46; // rax
  _QWORD *v47; // r8
  _QWORD *v48; // rax
  _QWORD *v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rbp
  _QWORD *v53; // rax
  int v54; // r9d
  char *v55; // r15
  char *v56; // r10
  __int64 v57; // rdx
  _QWORD *v58; // rsi
  _QWORD *v59; // rdx
  __int64 v60; // rsi
  _QWORD *v61; // r13
  _QWORD *i; // r14
  __int64 v63; // rdx
  unsigned int v64; // ecx
  unsigned int v65; // eax
  __int64 v66; // r15
  unsigned __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rbx
  unsigned int v70; // eax
  __int64 v71; // rax
  int v72; // edx
  char *v73; // r13
  char *v74; // r14
  __int64 v75; // rsi
  char *v76; // rax
  __int64 *v77; // rbx
  __int64 *j; // r12
  __int64 v79; // rbp
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  __int64 *v83; // rbx
  unsigned __int64 v84; // rbp
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 *result; // rax
  __int64 v89; // rbp
  _QWORD *v90; // rax
  int v91; // r8d
  char *v92; // r12
  char *v93; // r9
  __int64 v94; // rdx
  _QWORD *v95; // rsi
  _QWORD *v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rbp
  _QWORD *v99; // rax
  int v100; // ecx
  char *v101; // r12
  char *v102; // r8
  __int64 v103; // rdx
  _QWORD *v104; // rsi
  _QWORD *v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // [rsp+0h] [rbp-278h]
  __int64 *v108; // [rsp+8h] [rbp-270h]
  __int64 *v109; // [rsp+10h] [rbp-268h]
  __int64 v110; // [rsp+10h] [rbp-268h]
  int v111; // [rsp+18h] [rbp-260h]
  __int64 v112; // [rsp+20h] [rbp-258h]
  int v113; // [rsp+28h] [rbp-250h]
  __int64 *v114; // [rsp+30h] [rbp-248h]
  int v115; // [rsp+38h] [rbp-240h]
  __int64 *v116; // [rsp+40h] [rbp-238h]
  _QWORD *v117; // [rsp+48h] [rbp-230h]
  int v118[4]; // [rsp+50h] [rbp-228h] BYREF
  void *v119; // [rsp+60h] [rbp-218h] BYREF
  __int64 v120; // [rsp+68h] [rbp-210h]
  int v121; // [rsp+70h] [rbp-208h]
  void *v122; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v123; // [rsp+88h] [rbp-1F0h]
  int v124; // [rsp+90h] [rbp-1E8h]
  void *v125; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v126; // [rsp+B0h] [rbp-1C8h] BYREF
  int v127[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  void *v128; // [rsp+C8h] [rbp-1B0h] BYREF
  void *v129; // [rsp+D0h] [rbp-1A8h]
  void *v130; // [rsp+E0h] [rbp-198h]
  __int64 v131; // [rsp+F8h] [rbp-180h]
  char v132[16]; // [rsp+100h] [rbp-178h] BYREF
  char v133[24]; // [rsp+110h] [rbp-168h] BYREF
  char v134[16]; // [rsp+128h] [rbp-150h] BYREF
  char v135[64]; // [rsp+138h] [rbp-140h] BYREF
  __int64 v136; // [rsp+178h] [rbp-100h] BYREF
  __m128 v137; // [rsp+180h] [rbp-F8h]
  int v138; // [rsp+190h] [rbp-E8h]
  __int64 *v139; // [rsp+198h] [rbp-E0h]
  __int64 v140; // [rsp+1A0h] [rbp-D8h]
  int v141; // [rsp+1A8h] [rbp-D0h]
  __int64 *v142; // [rsp+1B0h] [rbp-C8h]
  __int64 v143; // [rsp+1B8h] [rbp-C0h]
  int v144; // [rsp+1C0h] [rbp-B8h]
  __int64 v145; // [rsp+1C8h] [rbp-B0h]
  __int64 v146; // [rsp+1D0h] [rbp-A8h]
  __int64 *v147; // [rsp+1D8h] [rbp-A0h]
  __int64 v148; // [rsp+1E0h] [rbp-98h]
  __int64 v149; // [rsp+1E8h] [rbp-90h]
  __int64 v150; // [rsp+1F0h] [rbp-88h]
  __int64 v151; // [rsp+1F8h] [rbp-80h]
  char v152[24]; // [rsp+200h] [rbp-78h] BYREF
  char v153[8]; // [rsp+218h] [rbp-60h] BYREF
  void *v154; // [rsp+220h] [rbp-58h]
  void *v155; // [rsp+228h] [rbp-50h]

  v116 = a1;
  v115 = a2;
  v117 = a3;
  v112 = a4;
  v4 = (_OWORD *)sub_186B270(0x40u);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v119 = v4;
  v120 = 8;
  v121 = 0;
  v5 = (_OWORD *)sub_186B270(0x40u);
  v122 = v5;
  v7 = (__int64 *)a1[2];
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v123 = 8;
  v124 = 0;
  *(__m128i *)v118 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v119, (__m128i)(unsigned __int64)&v122);
  if ( v7 )
  {
    v114 = &v7[6 * *((unsigned int *)v7 - 1)];
    if ( v114 != v7 )
    {
      v109 = v7;
      while ( 1 )
      {
        v8 = v121;
        v9 = *v109;
        v10 = 2 * v120;
        if ( 3 * (int)v120 < (unsigned int)(4 * (v121 + HIDWORD(v120))) )
        {
          v98 = v10;
          LODWORD(v108) = 2 * v120;
          v12 = 8LL * v10;
          v99 = (_QWORD *)sub_186B270(v12);
          v100 = (int)v108;
          v11 = v99;
          if ( (_DWORD)v108 )
          {
            memset(v99, 0, 8 * v98);
            v100 = (int)v108;
          }
          v101 = (char *)v119;
          v13 = v100 - 1;
          v14 = (char *)&v11[v12 / 8];
          v102 = (char *)v119 + 8 * (unsigned int)v120;
          if ( v119 != v102 )
          {
            do
            {
              while ( *(_QWORD *)v101 <= 1u )
              {
                v101 += 8;
                if ( v102 == v101 )
                  goto LABEL_177;
              }
              v103 = 8LL * (*(_DWORD *)(*(_QWORD *)v101 + 12LL) & v13);
              v104 = &v11[(unsigned __int64)v103 / 8];
              if ( v12 == v103 )
              {
LABEL_181:
                if ( v11 == v104 )
                {
LABEL_195:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v105 = v11;
                while ( *v105 )
                {
                  if ( v104 == ++v105 )
                    goto LABEL_195;
                }
              }
              else
              {
                v105 = &v11[(unsigned __int64)v103 / 8];
                while ( *v105 )
                {
                  if ( v14 == (char *)++v105 )
                    goto LABEL_181;
                }
              }
              v106 = *(_QWORD *)v101;
              v101 += 8;
              *v105 = v106;
            }
            while ( v102 != v101 );
LABEL_177:
            v102 = (char *)v119;
          }
          if ( v102 )
          {
            LODWORD(v108) = v100;
            sub_186B220(v102);
            v100 = (int)v108;
          }
          v119 = v11;
          v8 = 0;
          LODWORD(v120) = v100;
          v121 = 0;
        }
        else
        {
          v11 = v119;
          v12 = 8LL * (unsigned int)v120;
          v13 = v120 - 1;
          v14 = (char *)v119 + v12;
        }
        LODWORD(v15) = *(_DWORD *)(v9 + 12);
        v16 = 8LL * ((unsigned int)v15 & v13);
        v17 = &v11[(unsigned __int64)v16 / 8];
        if ( v16 != v12 )
        {
          v18 = &v11[(unsigned __int64)v16 / 8];
          v19 = nullptr;
          while ( 1 )
          {
            v20 = *v18;
            if ( *v18 > 1u )
            {
              if ( *(_DWORD *)(v20 + 12) == (_DWORD)v15 && v9 == v20 )
              {
                *v18 = v9;
                goto LABEL_22;
              }
            }
            else
            {
              if ( !v20 )
              {
                if ( v19 )
                  goto LABEL_190;
                v19 = v18;
                goto LABEL_191;
              }
              v19 = v18;
            }
            if ( ++v18 == (_QWORD *)v14 )
              goto LABEL_17;
          }
        }
        v19 = nullptr;
        while ( 1 )
        {
LABEL_17:
          if ( v17 == v11 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v21 = *v11;
          if ( *v11 > 1u )
            break;
          if ( !v21 )
          {
            if ( v19 )
LABEL_190:
              v121 = v8 - 1;
            else
              v19 = v11;
LABEL_191:
            *v19 = v9;
            ++HIDWORD(v120);
            goto LABEL_22;
          }
          v19 = v11;
LABEL_16:
          ++v11;
        }
        if ( *(_DWORD *)(v21 + 12) != (_DWORD)v15 || v9 != v21 )
          goto LABEL_16;
        *v11 = v9;
LABEL_22:
        v22 = (__int64 *)v109[3];
        if ( !v22 )
          goto LABEL_43;
        v108 = &v22[*((unsigned int *)v22 - 1)];
        if ( v108 == v22 )
          goto LABEL_43;
        while ( 2 )
        {
          v23 = v121;
          v24 = *v22;
          v25 = 2 * v120;
          if ( 3 * (int)v120 < (unsigned int)(4 * (v121 + HIDWORD(v120))) )
          {
            v52 = v25;
            v111 = 2 * v120;
            v27 = 8LL * v25;
            v53 = (_QWORD *)sub_186B270(v27);
            v54 = v111;
            v26 = v53;
            if ( v111 )
            {
              memset(v53, 0, 8 * v52);
              v54 = v111;
            }
            v55 = (char *)v119;
            v28 = v54 - 1;
            v29 = (char *)&v26[v27 / 8];
            v56 = (char *)v119 + 8 * (unsigned int)v120;
            if ( v119 != v56 )
            {
              do
              {
                while ( *(_QWORD *)v55 <= 1u )
                {
                  v55 += 8;
                  if ( v56 == v55 )
                    goto LABEL_76;
                }
                v57 = 8LL * (*(_DWORD *)(*(_QWORD *)v55 + 12LL) & (unsigned int)v28);
                v58 = &v26[(unsigned __int64)v57 / 8];
                if ( v27 == v57 )
                {
LABEL_80:
                  if ( v26 == v58 )
                  {
LABEL_88:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v59 = v26;
                  while ( *v59 )
                  {
                    if ( v58 == ++v59 )
                      goto LABEL_88;
                  }
                }
                else
                {
                  v59 = &v26[(unsigned __int64)v57 / 8];
                  while ( *v59 )
                  {
                    if ( v29 == (char *)++v59 )
                      goto LABEL_80;
                  }
                }
                v60 = *(_QWORD *)v55;
                v55 += 8;
                *v59 = v60;
              }
              while ( v56 != v55 );
LABEL_76:
              v56 = (char *)v119;
            }
            if ( v56 )
            {
              v113 = v54;
              v111 = v54 - 1;
              sub_186B220(v56);
              v54 = v113;
              v28 = v111;
            }
            v119 = v26;
            v23 = 0;
            LODWORD(v120) = v54;
            v121 = 0;
          }
          else
          {
            v26 = v119;
            v27 = 8LL * (unsigned int)v120;
            v28 = v120 - 1;
            v29 = (char *)v119 + v27;
          }
          v30 = *(_DWORD *)(v24 + 12);
          v31 = 8LL * (v30 & (unsigned int)v28);
          v6 = &v26[(unsigned __int64)v31 / 8];
          if ( v31 != v27 )
          {
            v32 = &v26[(unsigned __int64)v31 / 8];
            v15 = nullptr;
            while ( 1 )
            {
              v33 = *v32;
              if ( *v32 > 1u )
              {
                if ( *(_DWORD *)(v33 + 12) == v30 && v24 == v33 )
                {
                  *v32 = v24;
                  goto LABEL_42;
                }
              }
              else
              {
                if ( !v33 )
                {
                  if ( v15 )
                    goto LABEL_86;
                  v15 = v32;
                  goto LABEL_87;
                }
                v15 = v32;
              }
              if ( ++v32 == (_QWORD *)v29 )
                goto LABEL_37;
            }
          }
          v15 = nullptr;
LABEL_37:
          while ( 2 )
          {
            if ( v6 == v26 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v34 = *v26;
            if ( *v26 > 1u )
            {
              if ( *(_DWORD *)(v34 + 12) == v30 && v24 == v34 )
              {
                *v26 = v24;
                goto LABEL_42;
              }
              goto LABEL_36;
            }
            if ( v34 )
            {
              v15 = v26;
LABEL_36:
              ++v26;
              continue;
            }
            break;
          }
          if ( v15 )
LABEL_86:
            v121 = v23 - 1;
          else
            v15 = v26;
LABEL_87:
          *v15 = v24;
          ++HIDWORD(v120);
LABEL_42:
          if ( v108 != ++v22 )
            continue;
          break;
        }
LABEL_43:
        v35 = v109[4];
        v128 = nullptr;
        v129 = nullptr;
        sub_423C20(
          (int)v118,
          (int)v127,
          v35,
          (int)v15,
          (int)v19,
          (int)v6,
          v107,
          (int)v108,
          (int)v109,
          v111,
          v112,
          v113,
          (int)v114,
          v115,
          (int)v116,
          v117);
        if ( v129 )
        {
          sub_186B220(v129);
          v109 = (__int64 *)(v110 + 48);
          if ( v114 == v109 )
            break;
        }
        else
        {
          v109 = (__int64 *)(v110 + 48);
          if ( v114 == v109 )
            break;
        }
      }
    }
  }
  v36 = (__int64 *)*v117;
  if ( !*v117 )
    goto LABEL_103;
  v108 = &v36[*((unsigned int *)v36 - 1)];
  if ( v108 == v36 )
    goto LABEL_103;
  v37 = (__int64 *)*v117;
  do
  {
    v38 = v121;
    v39 = 2 * v120;
    v40 = *(_QWORD *)(*(_QWORD *)(*v37 + 40) + 16LL);
    if ( 3 * (int)v120 < (unsigned int)(4 * (v121 + HIDWORD(v120))) )
    {
      v89 = v39;
      LODWORD(v109) = 2 * v120;
      v42 = 8LL * v39;
      v90 = (_QWORD *)sub_186B270(v42);
      v91 = (int)v109;
      v41 = v90;
      if ( (_DWORD)v109 )
      {
        memset(v90, 0, 8 * v89);
        v91 = (int)v109;
      }
      v92 = (char *)v119;
      v43 = v91 - 1;
      v44 = (char *)&v41[v42 / 8];
      v93 = (char *)v119 + 8 * (unsigned int)v120;
      if ( v119 != v93 )
      {
        do
        {
          while ( *(_QWORD *)v92 <= 1u )
          {
            v92 += 8;
            if ( v93 == v92 )
              goto LABEL_157;
          }
          v94 = 8LL * (*(_DWORD *)(*(_QWORD *)v92 + 12LL) & (unsigned int)v43);
          v95 = &v41[(unsigned __int64)v94 / 8];
          if ( v42 == v94 )
          {
LABEL_161:
            if ( v41 == v95 )
            {
LABEL_196:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v96 = v41;
            while ( *v96 )
            {
              if ( v95 == ++v96 )
                goto LABEL_196;
            }
          }
          else
          {
            v96 = &v41[(unsigned __int64)v94 / 8];
            while ( *v96 )
            {
              if ( v44 == (char *)++v96 )
                goto LABEL_161;
            }
          }
          v97 = *(_QWORD *)v92;
          v92 += 8;
          *v96 = v97;
        }
        while ( v93 != v92 );
LABEL_157:
        v93 = (char *)v119;
      }
      if ( v93 )
      {
        v111 = v91;
        LODWORD(v109) = v91 - 1;
        sub_186B220(v93);
        v91 = v111;
        v43 = (int)v109;
      }
      v119 = v41;
      v38 = 0;
      LODWORD(v120) = v91;
      v121 = 0;
    }
    else
    {
      v41 = v119;
      v42 = 8LL * (unsigned int)v120;
      v43 = v120 - 1;
      v44 = (char *)v119 + v42;
    }
    v45 = *(_DWORD *)(v40 + 12);
    v46 = 8LL * (v45 & (unsigned int)v43);
    v47 = &v41[(unsigned __int64)v46 / 8];
    if ( v46 != v42 )
    {
      v48 = &v41[(unsigned __int64)v46 / 8];
      v49 = nullptr;
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 > 1u )
        {
          if ( *(_DWORD *)(v50 + 12) == v45 && v40 == v50 )
          {
            *v48 = v40;
            goto LABEL_95;
          }
        }
        else
        {
          if ( !v50 )
          {
            if ( v49 )
              goto LABEL_193;
            v49 = v48;
            goto LABEL_194;
          }
          v49 = v48;
        }
        if ( ++v48 == (_QWORD *)v44 )
          goto LABEL_61;
      }
    }
    v49 = nullptr;
    while ( 1 )
    {
LABEL_61:
      if ( v47 == v41 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v51 = *v41;
      if ( *v41 <= 1u )
        break;
      if ( *(_DWORD *)(v51 + 12) == v45 && v40 == v51 )
      {
        *v41 = v40;
        goto LABEL_95;
      }
LABEL_60:
      ++v41;
    }
    if ( v51 )
    {
      v49 = v41;
      goto LABEL_60;
    }
    if ( v49 )
LABEL_193:
      v121 = v38 - 1;
    else
      v49 = v41;
LABEL_194:
    *v49 = v40;
    ++HIDWORD(v120);
LABEL_95:
    ++v37;
  }
  while ( v108 != v37 );
  v61 = (_QWORD *)*v117;
  if ( *v117 )
  {
    for ( i = &v61[*((unsigned int *)v61 - 1)]; i != v61; ++v61 )
    {
      while ( 1 )
      {
        v63 = *v61;
        v64 = *(_DWORD *)(*v61 + 68LL);
        v65 = *(_DWORD *)(*v61 + 56LL);
        if ( v64 < v65 )
          break;
LABEL_102:
        if ( i == ++v61 )
          goto LABEL_103;
      }
      v66 = v63 + 8LL * v64;
      v67 = v63 + 8 * (v64 + (unsigned __int64)(v65 - 1 - v64)) + 8;
      do
      {
        while ( 1 )
        {
          v68 = *(_QWORD *)(v66 + 80);
          v128 = nullptr;
          v129 = nullptr;
          sub_423C20(
            (int)v118,
            (int)v127,
            v68 & 0xFFFFFFF8,
            v64,
            (int)v47,
            (int)v49,
            v107,
            (int)v108,
            (int)v109,
            v111,
            v112,
            v113,
            (int)v114,
            v115,
            (int)v116,
            v117);
          if ( !v129 )
            break;
          sub_186B220(v129);
          v66 += 8;
          if ( v67 == v66 )
            goto LABEL_102;
        }
        v66 += 8;
      }
      while ( v66 != v67 );
    }
  }
LABEL_103:
  v69 = *v116;
  *(_QWORD *)v127 = qword_1C7A350;
  sub_16511B0(&v128);
  v131 = v69;
  *(_QWORD *)v127 = &off_1C63D10;
  sub_16669D0(v132, v69);
  sub_16744A0(v133, v69);
  sub_1684300(v134, v69);
  sub_15C5470(v135, v69);
  v136 = v69;
  sub_180C5A0(&v125, "seq");
  v70 = sub_15DA4C0(v69 + 560, &v125);
  v71 = sub_15D2690(v69, v70);
  v137 = _mm_loadh_ps((const double *)(v71 + 88));
  v72 = *(_DWORD *)(v71 + 16);
  v139 = &v136;
  v140 = v136;
  v143 = v136;
  v146 = v136;
  v138 = v72;
  v141 = v72;
  v142 = &v136;
  v144 = v72;
  v145 = 0;
  v147 = nullptr;
  v148 = 0;
  v149 = 0;
  v150 = 0xFFFFFFFFLL;
  v151 = 0;
  sub_15F01E0(v152, v69);
  sub_1624F90(v153, v69);
  v73 = (char *)v122;
  v74 = (char *)v122 + 8 * (unsigned int)v123;
  if ( v122 != v74 )
  {
    while ( *(_QWORD *)v73 <= 1u )
    {
      v73 += 8;
      if ( v74 == v73 )
        goto LABEL_114;
    }
    if ( v74 != v73 )
    {
      v75 = *(_QWORD *)v73;
      do
      {
        v125 = nullptr;
        sub_160ADF0(v112, v75, v127, &v125, 0, "declare-fun");
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(&v125);
        v76 = v73 + 8;
        if ( v74 == v73 + 8 )
          break;
        while ( 1 )
        {
          v75 = *(_QWORD *)v76;
          v73 = v76;
          if ( *(_QWORD *)v76 > 1u )
            break;
          v76 += 8;
          if ( v74 == v76 )
            goto LABEL_114;
        }
      }
      while ( v76 != v74 );
    }
  }
LABEL_114:
  sub_4221E0((__int64 *)&v125, (__int64)v116);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v125 != &v126 )
    operator delete(v125, v126 + 1);
  v77 = (__int64 *)*v117;
  if ( *v117 )
  {
    for ( j = &v77[*((unsigned int *)v77 - 1)]; j != v77; ++v77 )
    {
      v79 = *v77;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_62F730(v115, v79, v112, v80, v81, v82, v107, (_DWORD)v108, (_DWORD)v109, v111);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  *(_QWORD *)v127 = &off_1C63D10;
  if ( v155 )
    sub_186B220(v155);
  if ( v154 )
    sub_186B220(v154);
  v83 = v147;
  if ( v147 )
  {
    v84 = (unsigned __int64)&v147[*((unsigned int *)v147 - 1)];
    if ( (unsigned __int64)v147 >= v84 )
      goto LABEL_131;
    do
    {
      while ( 1 )
      {
        v85 = *v83;
        if ( *v83 )
        {
          v86 = v146;
          if ( (*(_DWORD *)(v85 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v83 >= v84 )
          goto LABEL_130;
      }
      sub_15D7BC0(v86, v85);
      ++v83;
    }
    while ( (unsigned __int64)v83 < v84 );
LABEL_130:
    v83 = v147;
    if ( v147 )
LABEL_131:
      sub_186B220(v83 - 1);
  }
  if ( v145 )
    sub_186B220((void *)(v145 - 8));
  result = qword_1C7A350;
  *(_QWORD *)v127 = qword_1C7A350;
  if ( v130 )
    result = (__int64 *)sub_186B220(v130);
  if ( v128 )
    result = (__int64 *)sub_186B220(v128);
  if ( v122 )
    result = (__int64 *)sub_186B220(v122);
  if ( v119 )
    return (__int64 *)sub_186B220(v119);
  return result;
}

