__int64 __fastcall sub_7F2940(unsigned __int8 *a1, __int64 a2, unsigned __int16 a3, __int64 a4, unsigned int a5)
{
  unsigned __int8 *v7; // rbx
  unsigned __int16 v8; // ax
  const char *v9; // r15
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r14
  _BYTE *v14; // rsi
  __int64 v15; // rbp
  void *v16; // rax
  char *v17; // rdi
  int v18; // ecx
  int v19; // ebp
  int v20; // r12d
  const char *v21; // rsi
  char v22; // al
  unsigned __int8 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r15
  unsigned int v27; // ebp
  __int64 v29; // rax
  __int64 v30; // rax
  const char **v31; // r8
  unsigned __int64 v32; // rcx
  const char *v33; // rsi
  unsigned __int64 v34; // rax
  __m128i v35; // xmm1
  const char *v36; // r12
  __m128i v37; // xmm0
  __int64 v38; // rbp
  __int64 v39; // r14
  void *v40; // rax
  char *v41; // r14
  unsigned __int64 v42; // rbp
  char v43; // al
  unsigned __int64 v44; // rcx
  _BYTE *v45; // r12
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // r9
  unsigned __int64 v49; // rdi
  _BYTE *v50; // rsi
  int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // r15d
  int v54; // ebp
  bool v55; // cf
  int v56; // edx
  __int64 v57; // r8
  unsigned int v58; // eax
  void *v59; // rdi
  _QWORD *v60; // rcx
  void **v61; // rax
  void *v62; // rdi
  void *v63; // rsi
  void **v64; // r12
  void *k; // rbx
  __int64 v66; // rbp
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rsi
  void (__fastcall *v70)(_QWORD, __int64); // rax
  unsigned __int8 v71; // r12
  int v72; // ebp
  char v73; // r10
  unsigned __int64 v74; // rdx
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rbp
  unsigned __int16 v78; // ax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r12
  __int64 v81; // rbp
  char *v82; // rax
  __int64 v83; // rbp
  void *v84; // r12
  _BYTE *v85; // rdi
  void **v86; // r15
  void *v87; // rdi
  __int64 v88; // r12
  __int64 j; // rbp
  __int64 v90; // r14
  void *v91; // rdi
  char **v92; // rax
  const char *v93; // rbp
  _QWORD *v94; // r14
  void *v95; // rdi
  __int64 v96; // rbx
  void *v97; // rdi
  bool v98; // zf
  void **v99; // rbx
  void *v100; // rdi
  void *v101; // r12
  void *i; // r13
  __int64 v103; // r15
  void *v104; // rdi
  void *v105; // rbp
  void *v106; // rdi
  void **v107; // rbp
  void *v108; // rdi
  __m128i si128; // xmm0
  char *v110; // rbp
  __int64 v111; // r12
  void *v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  void *v115; // rbp
  void *v116; // rdi
  void **v117; // r15
  void *v118; // rdi
  __int64 v119; // r12
  __int64 v120; // rbp
  __int64 v121; // r14
  void *v122; // rdi
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rax
  void *v126; // rax
  __int64 nc; // [rsp+8h] [rbp-500h]
  size_t n; // [rsp+8h] [rbp-500h]
  size_t nd; // [rsp+8h] [rbp-500h]
  __int64 *na; // [rsp+8h] [rbp-500h]
  __int64 *nb; // [rsp+8h] [rbp-500h]
  const char **v132; // [rsp+10h] [rbp-4F8h]
  _QWORD *v133; // [rsp+10h] [rbp-4F8h]
  _QWORD *v134; // [rsp+10h] [rbp-4F8h]
  void **v135; // [rsp+10h] [rbp-4F8h]
  _QWORD *v136; // [rsp+10h] [rbp-4F8h]
  const char *v137; // [rsp+10h] [rbp-4F8h]
  _QWORD *v138; // [rsp+10h] [rbp-4F8h]
  _QWORD *v139; // [rsp+10h] [rbp-4F8h]
  _QWORD *v140; // [rsp+10h] [rbp-4F8h]
  unsigned __int64 v141; // [rsp+10h] [rbp-4F8h]
  int v144; // [rsp+20h] [rbp-4E8h]
  __int64 *v146; // [rsp+28h] [rbp-4E0h]
  __int16 v147; // [rsp+30h] [rbp-4D8h]
  char v149; // [rsp+38h] [rbp-4D0h]
  unsigned __int8 *v150; // [rsp+38h] [rbp-4D0h]
  _QWORD *v151; // [rsp+38h] [rbp-4D0h]
  __int64 v152; // [rsp+38h] [rbp-4D0h]
  char v153; // [rsp+47h] [rbp-4C1h]
  unsigned __int8 v154; // [rsp+5Fh] [rbp-4A9h] BYREF
  _BYTE *v155; // [rsp+60h] [rbp-4A8h] BYREF
  void *v156[2]; // [rsp+68h] [rbp-4A0h]
  __int128 v157; // [rsp+78h] [rbp-490h]
  _BYTE v158[24]; // [rsp+90h] [rbp-478h] BYREF
  __int128 v159; // [rsp+A8h] [rbp-460h]
  _BYTE v160[1032]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int64 v161; // [rsp+4C8h] [rbp-40h]

  v7 = a1;
  v161 = __readfsqword(0x28u);
  v8 = sub_7F1E40((__int64)a1);
  if ( *a1 )
    return 2;
  v9 = (const char *)v8;
  if ( !v8 )
  {
    if ( a5 )
    {
      *(_BYTE *)a2 = 1;
      v10 = *(__int64 **)(a4 + 48);
      v155 = nullptr;
      v146 = v10;
      *(_QWORD *)&v157 = v10;
      *(_OWORD *)v156 = 0;
LABEL_5:
      if ( qlread(*((_QWORD *)v7 + 2), v158, 1) != 1 )
        *v7 = 1;
      v149 = v158[0];
      v147 = sub_7F1DC0((__int64)v7);
      if ( *v7 )
        goto LABEL_27;
LABEL_8:
      v11 = v146[1];
      v12 = *v146;
      if ( v146[2] < (unsigned __int64)(v11 + 1) )
      {
        v68 = qvector_reserve(v146, v12, v11 + 1, 104);
        *v146 = v68;
        v11 = v146[1];
        v12 = v68;
      }
      v13 = v12 + 104 * v11;
      *(_QWORD *)(v13 + 96) = 0;
      *(_QWORD *)v13 = 0;
      memset(
        (void *)((v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((_DWORD)v12 + 104 * (_DWORD)v11 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 104) >> 3));
      ++v146[1];
      *(_QWORD *)(v13 + 96) = v146;
      v14 = v155;
      v15 = 0x4EC4EC4EC4EC4EC5LL * ((v13 - *v146) >> 3);
      v16 = v156[0];
      v17 = (char *)v156[0] + 1;
      *(_DWORD *)v158 = v15;
      v18 = v15;
      if ( v158 >= v155 && v158 < &v155[4 * (__int64)v156[1]] )
      {
        if ( v156[1] < v17 )
        {
          v155 = (_BYTE *)qvector_reserve(&v155, v155, (char *)v156[0] + 1, 4);
          v14 = v155;
          v16 = v156[0];
        }
        *(_DWORD *)&v14[4 * (_QWORD)v16] = v15;
      }
      else
      {
        if ( v156[1] < v17 )
        {
          v155 = (_BYTE *)qvector_reserve(&v155, v155, (char *)v156[0] + 1, 4);
          v14 = v155;
          v18 = *(_DWORD *)v158;
          v16 = v156[0];
        }
        *(_DWORD *)&v14[4 * (_QWORD)v16] = v18;
      }
      ++v156[0];
      *(_BYTE *)(v13 + 66) = v149;
      *(_WORD *)(v13 + 64) = v147;
      *(_DWORD *)v13 = sub_7F2030((__int64)v7, a4);
      if ( *v7 )
        goto LABEL_27;
      v19 = 0;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v13 + 16);
        v25 = *(_QWORD *)(v13 + 8);
        if ( *(_QWORD *)(v13 + 24) < (unsigned __int64)(v24 + 1) )
        {
          v29 = qvector_reserve(v13 + 8, v25, v24 + 1, 32);
          *(_QWORD *)(v13 + 8) = v29;
          v24 = *(_QWORD *)(v13 + 16);
          v25 = v29;
        }
        v26 = v25 + 32 * v24;
        *(_QWORD *)v26 = 0;
        *(_OWORD *)(v26 + 8) = 0;
        ++*(_QWORD *)(v13 + 16);
        if ( !v26 )
          break;
        if ( *(_BYTE *)(a4 + 6) > 8u )
        {
          v20 = sub_7F1EE0((__int64)v7);
          if ( *v7 )
            goto LABEL_27;
        }
        else
        {
          v20 = (unsigned __int16)sub_7F1E40((__int64)v7);
          if ( *v7 )
            goto LABEL_27;
        }
        v21 = (const char *)v26;
        if ( (unsigned int)sub_7F2100((__int64)v7, v26, &v154) )
          goto LABEL_27;
        v22 = *(_BYTE *)(v26 + 28);
        if ( (v22 & 0x10) != 0 )
        {
          v20 = -v20;
          *(_BYTE *)(v26 + 28) = v22 & 0xEF;
        }
        v19 += v20;
        *(_DWORD *)(v26 + 24) = v19;
        v23 = v154;
        if ( (v154 & 1) == 0 )
        {
          if ( (v154 & 2) == 0 )
            goto LABEL_115;
          v71 = 1;
          if ( *(_BYTE *)(a4 + 6) <= 7u )
          {
LABEL_106:
            v72 = 0;
            while ( 1 )
            {
              v21 = v158;
              v144 = sub_7F2030((__int64)v7, a4);
              if ( qlread(*((_QWORD *)v7 + 2), v158, 1) != 1 )
                break;
              v73 = v158[0];
              if ( *v7 )
                goto LABEL_27;
              v74 = *(_QWORD *)(v13 + 80);
              if ( v74 <= 0xFE )
              {
                v75 = *(_QWORD *)(v13 + 72);
                v21 = (const char *)(v74 + 1);
                if ( *(_QWORD *)(v13 + 88) < v74 + 1 )
                {
                  v153 = v158[0];
                  v75 = qvector_reserve(v13 + 72, *(_QWORD *)(v13 + 72), v74 + 1, 8);
                  v74 = *(_QWORD *)(v13 + 80);
                  v73 = v153;
                  *(_QWORD *)(v13 + 72) = v75;
                  v21 = (const char *)(v74 + 1);
                }
                v76 = v75 + 8 * v74;
                *(_QWORD *)(v13 + 80) = v21;
                *(_BYTE *)(v76 + 4) = v73;
                *(_DWORD *)v76 = v144;
              }
              if ( v71 <= ++v72 )
                goto LABEL_115;
            }
LABEL_108:
            *v7 = 1;
            goto LABEL_27;
          }
          v21 = v158;
          if ( qlread(*((_QWORD *)v7 + 2), v158, 1) != 1 )
            goto LABEL_108;
          v71 = v158[0];
          if ( *v7 )
          {
LABEL_27:
            v27 = 2;
            goto LABEL_28;
          }
          if ( v158[0] )
            goto LABEL_106;
LABEL_115:
          if ( (v23 & 4) != 0 )
          {
            if ( *(_BYTE *)(a4 + 6) > 7u )
            {
              if ( qlread(*((_QWORD *)v7 + 2), v158, 1) != 1 )
                goto LABEL_108;
              if ( *v7 )
                goto LABEL_27;
            }
            *(_DWORD *)(v13 + 56) = sub_7F2030((__int64)v7, a4);
            if ( qlread(*((_QWORD *)v7 + 2), v158, 1) != 1 )
              goto LABEL_108;
            v77 = v158[0];
            if ( *v7 )
              goto LABEL_27;
            if ( !v158[0] )
            {
              v78 = sub_7F1E40((__int64)v7);
              v77 = v78;
              if ( *v7 || !v78 )
                goto LABEL_27;
            }
            v79 = *(_QWORD *)(v13 + 40);
            v80 = v77 + 1;
            if ( v79 < v77 + 1 )
            {
              v123 = *(_QWORD *)(v13 + 32);
              if ( *(_QWORD *)(v13 + 48) < v80 )
              {
                v125 = qvector_reserve(v13 + 32, v123, v77 + 1, 1);
                *(_QWORD *)(v13 + 32) = v125;
                v123 = v125;
                v79 = *(_QWORD *)(v13 + 40);
              }
              memset((void *)(v123 + v79), 0, v80 - v79);
              *(_QWORD *)(v13 + 40) = v80;
            }
            else if ( v80 != v79 )
            {
              *(_QWORD *)(v13 + 40) = v80;
            }
            *(_BYTE *)(*(_QWORD *)(v13 + 32) + v77) = 0;
            v21 = *(const char **)(v13 + 32);
            qlread(*((_QWORD *)v7 + 2), v21, v77);
            v81 = v77 - 1;
            v82 = &byte_2CA12E1;
            if ( *(_QWORD *)(v13 + 40) | v81 )
              v82 = (char *)(v81 + *(_QWORD *)(v13 + 32));
            if ( !*v82 )
              *(_DWORD *)(v13 + 56) = -*(_DWORD *)(v13 + 56);
          }
          if ( (v23 & 8) == 0 )
          {
            if ( (v23 & 0x10) == 0 )
            {
              if ( !*(_QWORD *)(a2 + 8) )
              {
                v83 = qalloc_or_throw(32, v21);
                *(_QWORD *)v83 = 0;
                *(_OWORD *)(v83 + 8) = 0;
                v84 = v156[0];
                if ( v156[0] )
                {
                  v126 = (void *)qalloc_or_throw(4 * (__int64)v156[0], v21);
                  *(_QWORD *)v83 = v126;
                  *(_QWORD *)(v83 + 16) = v84;
                  memcpy(v126, v155, 4LL * (_QWORD)v84);
                  *(_QWORD *)(v83 + 8) = v84;
                }
                *(_QWORD *)(v83 + 24) = v157;
                v85 = v155;
                *(_QWORD *)(a2 + 8) = v83;
                if ( v85 )
                {
                  v156[0] = nullptr;
                  qfree(v85);
                }
                return 2 * (unsigned int)*v7;
              }
              if ( !under_debugger )
                interr(712);
LABEL_219:
              BUG();
            }
            goto LABEL_5;
          }
          goto LABEL_8;
        }
      }
      v70 = *((void (__fastcall **)(_QWORD, __int64))v7 + 1);
      if ( v70 )
        v70(*((_QWORD *)v7 + 2), 1);
      free_idasgn((void *)a4);
      v27 = 1;
LABEL_28:
      if ( v155 )
      {
        v156[0] = nullptr;
        qfree(v155);
      }
    }
    else
    {
      return 4;
    }
    return v27;
  }
  *(_BYTE *)a2 = 0;
  v30 = qalloc_or_throw(24, (const char *)a2);
  *(_QWORD *)v30 = 0;
  v31 = (const char **)v30;
  *(_OWORD *)(v30 + 8) = 0;
  *(_QWORD *)(a2 + 8) = v30;
  if ( v9 == *(const char **)(v30 + 8) )
  {
    v41 = *(char **)v30;
    goto LABEL_51;
  }
  LOBYTE(v155) = 0;
  *(_OWORD *)v156 = 0;
  v157 = 0;
  v32 = *(_QWORD *)(v30 + 8);
  if ( (unsigned __int64)v9 < v32 )
  {
    v137 = v9;
    v93 = v9;
    v94 = (_QWORD *)v30;
    n = *(_QWORD *)(v30 + 8);
    v152 = a4;
    while ( 1 )
    {
      v96 = *v94 + 40LL * (_QWORD)v93;
      v97 = *(void **)(v96 + 16);
      if ( v97 )
      {
        *(_QWORD *)(v96 + 24) = 0;
        qfree(v97);
      }
      v98 = *(_BYTE *)v96 == 0;
      v99 = *(void ***)(v96 + 8);
      if ( v98 )
        break;
      if ( v99 )
      {
        v95 = *v99;
        if ( *v99 )
        {
          v99[1] = nullptr;
          qfree(v95);
        }
LABEL_154:
        qfree(v99);
      }
LABEL_155:
      if ( (unsigned __int64)++v93 >= n )
      {
        v7 = a1;
        a4 = v152;
        v94[1] = v137;
        goto LABEL_169;
      }
    }
    if ( !v99 )
      goto LABEL_155;
    v100 = *v99;
    if ( *v99 )
    {
      v101 = v99[1];
      if ( v101 )
      {
        for ( i = nullptr; i != v101; i = (char *)i + 1 )
        {
          v103 = (__int64)v100 + 40 * (_QWORD)i;
          v104 = *(void **)(v103 + 16);
          if ( v104 )
          {
            *(_QWORD *)(v103 + 24) = 0;
            qfree(v104);
          }
          sub_7F1A70(v103);
          v100 = *v99;
        }
      }
      v99[1] = nullptr;
      qfree(v100);
    }
    goto LABEL_154;
  }
  if ( v32 >= (unsigned __int64)v9 )
    goto LABEL_138;
  v33 = *(const char **)v30;
  v34 = *(_QWORD *)(v30 + 16);
  if ( &v155 < (_BYTE **)v33 || &v155 >= (_BYTE **)&v33[40 * v34] )
  {
    if ( v34 >= (unsigned __int64)v9
      || (na = (__int64 *)v31,
          v114 = qvector_reserve(v31, v33, v9, 40),
          v31 = (const char **)na,
          v33 = (const char *)v114,
          v32 = na[1],
          *na = v114,
          v32 < (unsigned __int64)v9) )
    {
      while ( 1 )
      {
        si128 = _mm_load_si128((const __m128i *)&v155);
        v110 = (char *)&v33[40 * v32];
        *((_QWORD *)v110 + 2) = 0;
        *(__m128i *)v110 = si128;
        *(_OWORD *)(v110 + 24) = 0;
        v111 = v157;
        if ( (_QWORD)v157 )
        {
          v141 = v32;
          nd = (size_t)v31;
          v112 = (void *)qalloc_or_throw(2 * v157, v33);
          *((_QWORD *)v110 + 2) = v112;
          *((_QWORD *)v110 + 4) = v111;
          memcpy(v112, v156[1], 2 * v111);
          *((_QWORD *)v110 + 3) = v111;
          v32 = v141;
          v31 = (const char **)nd;
        }
        if ( ++v32 >= (unsigned __int64)v9 )
          break;
        v33 = *v31;
      }
    }
    v31[1] = v9;
  }
  else
  {
    v35 = _mm_load_si128((const __m128i *)&v155);
    v159 = 0;
    *(_QWORD *)&v158[16] = 0;
    *(__m128i *)v158 = v35;
    if ( v31[2] < v9 )
    {
      nb = (__int64 *)v31;
      v124 = qvector_reserve(v31, *v31, v9, 40);
      v31 = (const char **)nb;
      *nb = v124;
    }
    v36 = v31[1];
    if ( v36 < v9 )
    {
      do
      {
        v37 = _mm_load_si128((const __m128i *)v158);
        v38 = (__int64)&(*v31)[40 * (_QWORD)v36];
        *(_QWORD *)(v38 + 16) = 0;
        *(__m128i *)v38 = v37;
        *(_OWORD *)(v38 + 24) = 0;
        v39 = v159;
        if ( (_QWORD)v159 )
        {
          v132 = v31;
          nc = 2 * v159;
          v40 = (void *)qalloc_or_throw(2 * v159, (const char *)(2 * v159));
          *(_QWORD *)(v38 + 16) = v40;
          *(_QWORD *)(v38 + 32) = v39;
          memcpy(v40, *(const void **)&v158[16], nc);
          *(_QWORD *)(v38 + 24) = v39;
          v31 = v132;
        }
        ++v36;
      }
      while ( v9 != v36 );
    }
    v31[1] = v9;
    if ( *(_QWORD *)&v158[16] )
    {
      *(_QWORD *)&v159 = 0;
      qfree(*(void **)&v158[16]);
    }
    if ( v158[0] )
    {
      v115 = *(void **)&v158[8];
      if ( *(_QWORD *)&v158[8] )
      {
        v116 = **(void ***)&v158[8];
        if ( **(_QWORD **)&v158[8] )
        {
          *(_QWORD *)(*(_QWORD *)&v158[8] + 8LL) = 0;
          qfree(v116);
        }
        qfree(v115);
      }
    }
    else
    {
      v117 = *(void ***)&v158[8];
      if ( *(_QWORD *)&v158[8] )
      {
        v118 = **(void ***)&v158[8];
        if ( **(_QWORD **)&v158[8] )
        {
          v119 = *(_QWORD *)(*(_QWORD *)&v158[8] + 8LL);
          v120 = 0;
          if ( v119 )
          {
            do
            {
              v121 = (__int64)v118 + 40 * v120;
              v122 = *(void **)(v121 + 16);
              if ( v122 )
              {
                *(_QWORD *)(v121 + 24) = 0;
                qfree(v122);
              }
              ++v120;
              sub_7F1A70(v121);
              v118 = *v117;
            }
            while ( v119 != v120 );
          }
          v117[1] = nullptr;
          qfree(v118);
        }
        qfree(v117);
      }
    }
  }
LABEL_169:
  if ( v156[1] )
  {
    *(_QWORD *)&v157 = 0;
    qfree(v156[1]);
  }
  if ( (_BYTE)v155 )
  {
    v105 = v156[0];
    if ( v156[0] )
    {
      v106 = *(void **)v156[0];
      if ( *(_QWORD *)v156[0] )
      {
        *((_QWORD *)v156[0] + 1) = 0;
        qfree(v106);
      }
      qfree(v105);
    }
  }
  else
  {
LABEL_138:
    v86 = (void **)v156[0];
    if ( v156[0] )
    {
      v87 = *(void **)v156[0];
      if ( *(_QWORD *)v156[0] )
      {
        v88 = *((_QWORD *)v156[0] + 1);
        if ( v88 )
        {
          for ( j = 0; j != v88; ++j )
          {
            v90 = (__int64)v87 + 40 * j;
            v91 = *(void **)(v90 + 16);
            if ( v91 )
            {
              *(_QWORD *)(v90 + 24) = 0;
              qfree(v91);
            }
            sub_7F1A70(v90);
            v87 = *v86;
          }
        }
        v86[1] = nullptr;
        qfree(v87);
      }
      qfree(v86);
    }
  }
  v92 = *(char ***)(a2 + 8);
  v41 = *v92;
  if ( !(40LL * (_QWORD)v92[1]) )
    return 2 * (unsigned int)*v7;
  while ( 1 )
  {
LABEL_51:
    if ( *(_BYTE *)(a4 + 6) <= 9u )
    {
      if ( qlread(*((_QWORD *)v7 + 2), v158, 1) != 1 )
      {
        *v7 = 1;
        return 2;
      }
      v43 = *v7;
      v42 = v158[0];
    }
    else
    {
      v42 = (unsigned __int16)sub_7F1E40((__int64)v7);
      v43 = *v7;
    }
    if ( v43 || a3 < v42 )
      return 2;
    v44 = *((_QWORD *)v41 + 3);
    if ( v44 < v42 )
    {
      v69 = *((_QWORD *)v41 + 2);
      if ( *((_QWORD *)v41 + 4) < v42 )
      {
        v113 = qvector_reserve(v41 + 16, v69, v42, 2);
        v44 = *((_QWORD *)v41 + 3);
        *((_QWORD *)v41 + 2) = v113;
        v69 = v113;
      }
      memset((void *)(v69 + 2 * v44), 0, 2 * (v42 - v44));
      *((_QWORD *)v41 + 3) = v42;
    }
    else if ( v42 != v44 )
    {
      *((_QWORD *)v41 + 3) = v42;
    }
    v45 = *((_BYTE **)v41 + 2);
    memset(v158, 0, sizeof(v158));
    LODWORD(v159) = 0;
    *(_QWORD *)v158 = qvector_reserve(v158, 0, 8, 1);
    **(_QWORD **)v158 = 0;
    sub_7F2280(v7, (__int64)v158, v42);
    if ( *v7 )
      break;
    v46 = (unsigned int)v159;
    if ( (unsigned int)v159 > 0x3FFuLL )
      v46 = 1023;
    LODWORD(v47) = v46 - 1;
    if ( v46 )
    {
      v48 = *(_QWORD *)v158;
      v49 = *(_QWORD *)&v158[8];
      v47 = (int)v47;
      v50 = v160;
      do
      {
        if ( (unsigned int)v47 >> 3 >= v49 )
        {
          if ( !under_debugger )
            interr(709);
          goto LABEL_219;
        }
        ++v50;
        v51 = *(unsigned __int8 *)(v48 + (v47 >> 3));
        v52 = v47-- & 7;
        *(v50 - 1) = _bittest(&v51, v52) + 48;
      }
      while ( (_DWORD)v47 != -1 );
    }
    else
    {
      v50 = v160;
    }
    *v50 = 0;
    if ( v42 )
    {
      v53 = v42 - 1;
      v54 = 0;
      do
      {
        while ( 1 )
        {
          if ( (unsigned __int64)(v53 >> 3) >= *(_QWORD *)&v158[8] )
          {
            if ( !under_debugger )
              interr(709);
            goto LABEL_219;
          }
          v56 = *(unsigned __int8 *)(*(_QWORD *)v158 + ((unsigned __int64)v53 >> 3));
          if ( !_bittest(&v56, v53 & 7) )
            break;
          *v45 = 0;
          v45 += 2;
          v55 = v53-- == 0;
          if ( v55 )
            goto LABEL_74;
        }
        *v45 = 1;
        if ( qlread(*((_QWORD *)v7 + 2), &v155, 1) != 1 )
          *v7 = 1;
        v45[1] = (_BYTE)v155;
        if ( *v7 )
          goto LABEL_90;
        ++v54;
        v45 += 2;
        v55 = v53-- == 0;
      }
      while ( !v55 );
LABEL_74:
      v57 = v54 + a5;
    }
    else
    {
      v57 = a5;
    }
    v58 = sub_7F2940(v7, v41, a3, a4, v57);
    v27 = v58;
    if ( v58 )
    {
      if ( v58 != 4 )
        goto LABEL_91;
      v59 = *((void **)v41 + 2);
      v60 = *(_QWORD **)(a2 + 8);
      if ( v59 )
      {
        *((_QWORD *)v41 + 3) = 0;
        v133 = v60;
        qfree(v59);
        v60 = v133;
      }
      if ( *v41 )
      {
        v107 = *((void ***)v41 + 1);
        if ( v107 )
        {
          v108 = *v107;
          if ( *v107 )
          {
            v107[1] = nullptr;
            v138 = v60;
            qfree(v108);
            v60 = v138;
          }
          v139 = v60;
          qfree(v107);
          v60 = v139;
        }
      }
      else
      {
        v61 = *((void ***)v41 + 1);
        if ( v61 )
        {
          v62 = *v61;
          if ( *v61 )
          {
            v63 = v61[1];
            if ( v63 )
            {
              v134 = v60;
              v64 = *((void ***)v41 + 1);
              v150 = v7;
              for ( k = nullptr; k != v63; k = (char *)k + 1 )
              {
                v66 = (__int64)v62 + 40 * (_QWORD)k;
                v67 = *(void **)(v66 + 16);
                if ( v67 )
                {
                  *(_QWORD *)(v66 + 24) = 0;
                  qfree(v67);
                }
                sub_7F1A70(v66);
                v62 = *v64;
              }
              v60 = v134;
              v7 = v150;
              v61 = v64;
            }
            v61[1] = nullptr;
            v151 = v60;
            v135 = v61;
            qfree(v62);
            v60 = v151;
            v61 = v135;
          }
          v136 = v60;
          qfree(v61);
          v60 = v136;
        }
      }
      v140 = v60;
      memmove(v41, v41 + 40, *v60 + 40LL * v60[1] - (_QWORD)v41 - 40);
      --v140[1];
    }
    else
    {
      v41 += 40;
    }
    if ( *(_QWORD *)v158 )
    {
      *(_QWORD *)&v158[8] = 0;
      qfree(*(void **)v158);
    }
    if ( v41 == (char *)(**(_QWORD **)(a2 + 8) + 40LL * *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL)) )
      return 2 * (unsigned int)*v7;
  }
LABEL_90:
  v27 = 2;
LABEL_91:
  if ( *(_QWORD *)v158 )
  {
    *(_QWORD *)&v158[8] = 0;
    qfree(*(void **)v158);
  }
  return v27;
}

