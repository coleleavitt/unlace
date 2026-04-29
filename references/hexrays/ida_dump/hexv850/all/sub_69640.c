unsigned __int64 __fastcall sub_69640(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  int v7; // eax
  int v8; // ebp
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rax
  int *v19; // rbp
  int v20; // r15d
  int v21; // r12d
  __int64 (__fastcall *v22)(__int64, int); // rax
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 (__fastcall *v26)(__int64, int, int); // rax
  unsigned int v27; // eax
  int v28; // edx
  int v29; // r12d
  char v30; // al
  int v31; // r8d
  __int64 v32; // rbp
  __int64 v33; // rdx
  int v34; // edx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbp
  int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rbp
  int *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  bool v58; // cf
  unsigned __int64 v59; // r9
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned __int64 v79; // r12
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 *v83; // rdi
  __int64 *v84; // rdi
  unsigned __int64 v85; // rsi
  unsigned __int64 v86; // rcx
  _QWORD *v87; // rdi
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdi
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rsi
  unsigned __int64 v98; // rcx
  _QWORD *v99; // rdi
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rbp
  unsigned __int64 v103; // rsi
  unsigned __int64 v104; // rax
  _QWORD *v105; // rdi
  unsigned __int64 v106; // rax
  __int64 i; // rax
  __int64 v108; // rdx
  int v109; // ecx
  __int64 v110; // rdx
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // rdx
  int v126; // [rsp+8h] [rbp-F0h]
  int v127; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v128; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v129; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v130; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v131; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v132; // [rsp+8h] [rbp-F0h]
  int v133; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v134; // [rsp+8h] [rbp-F0h]
  int v135; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v136; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v137; // [rsp+8h] [rbp-F0h]
  int v138; // [rsp+10h] [rbp-E8h]
  __int64 v139; // [rsp+10h] [rbp-E8h]
  int v140; // [rsp+20h] [rbp-D8h]
  int v141; // [rsp+24h] [rbp-D4h]
  bool v142; // [rsp+28h] [rbp-D0h]
  int v143; // [rsp+2Ch] [rbp-CCh]
  int v144; // [rsp+2Ch] [rbp-CCh]
  int v145; // [rsp+2Ch] [rbp-CCh]
  int v146; // [rsp+2Ch] [rbp-CCh]
  int v147; // [rsp+34h] [rbp-C4h] BYREF
  int v148; // [rsp+38h] [rbp-C0h] BYREF
  int v149; // [rsp+3Ch] [rbp-BCh] BYREF
  int v150; // [rsp+40h] [rbp-B8h] BYREF
  int v151; // [rsp+44h] [rbp-B4h] BYREF
  int v152; // [rsp+48h] [rbp-B0h] BYREF
  int v153; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v154[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 *v155; // [rsp+60h] [rbp-98h] BYREF
  __int128 v156; // [rsp+68h] [rbp-90h]
  _DWORD *v157; // [rsp+80h] [rbp-78h] BYREF
  __int128 v158; // [rsp+88h] [rbp-70h]
  unsigned __int64 v159; // [rsp+98h] [rbp-60h] BYREF
  __int128 v160; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v161; // [rsp+B8h] [rbp-40h]

  v5 = *(_QWORD *)a1;
  v161 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(__int64))(v5 + 56))(a1);
  if ( !v7 )
    return v161 - __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_37CFE0(52015);
    BUG();
  }
  v8 = v7;
  v9 = *(unsigned __int64 **)(a3 + 8);
  if ( !v9 )
    goto LABEL_45;
  v10 = *v9;
  if ( !*(_QWORD *)(a3 + 16) )
  {
    *v9 = *v9 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a3 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a3 + 8),
                                                (__m128i)*(unsigned __int64 *)(a3 + 8));
    **(_QWORD **)(a3 + 8) &= ~1uLL;
    **(_QWORD **)(a3 + 8) |= 2uLL;
    goto LABEL_6;
  }
  v39 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
  v40 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v40 & 2) == 0 )
  {
    v83 = (__int64 *)v39[1];
    if ( (*(_BYTE *)v83 & 2) != 0 )
    {
      v84 = (__int64 *)v39[2];
      if ( (*(_BYTE *)v84 & 2) != 0 )
        goto LABEL_226;
    }
    else
    {
      sub_67510(v83);
      v84 = (__int64 *)v39[2];
      if ( (*(_BYTE *)v84 & 2) != 0 )
        goto LABEL_162;
    }
    sub_67510(v84);
LABEL_162:
    v40 = *v39;
    if ( (*v39 & 2) != 0 )
    {
LABEL_163:
      if ( v10 > 3 )
        qfree(v10 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = *(unsigned __int64 **)(a3 + 8);
      v10 = *v9;
      goto LABEL_44;
    }
LABEL_226:
    *v39 = v40 | 2;
    goto LABEL_163;
  }
LABEL_44:
  *v9 = v10 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a3 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(a3 + 8),
                                              (__m128i)*(unsigned __int64 *)(a3 + 8));
  **(_QWORD **)(a3 + 8) &= ~1uLL;
  **(_QWORD **)(a3 + 8) |= 2uLL;
LABEL_45:
  *(_QWORD *)(a3 + 16) = 0;
LABEL_6:
  v157 = nullptr;
  v159 = 0;
  v158 = 0;
  v160 = 0;
  if ( v8 < 0 )
  {
    v11 = *a2;
    if ( !*a2 )
    {
      v95 = a2[3];
      if ( v95 )
      {
        a2[4] = 0;
        qfree(v95);
        a2[3] = 0;
        a2[5] = 0;
      }
      goto LABEL_11;
    }
    goto LABEL_8;
  }
  v64 = v8;
  v65 = qvector_reserve(&v157, 0, v8, 4);
  v66 = v158;
  v157 = (_DWORD *)v65;
  if ( (unsigned __int64)v158 < v8 )
  {
    *(_DWORD *)(v65 + 4 * v158) = -1;
    v67 = v66 + 1;
    if ( v66 + 1 < (unsigned __int64)v8 )
    {
      do
        v157[v67++] = -1;
      while ( v67 != v8 );
    }
  }
  v11 = *a2;
  *(_QWORD *)&v158 = v8;
  if ( v11 )
  {
LABEL_8:
    a2[1] = 0;
    qfree(v11);
    v12 = a2[3];
    *a2 = 0;
    a2[2] = 0;
    if ( v12 )
    {
      a2[4] = 0;
      qfree(v12);
      a2[3] = 0;
      a2[5] = 0;
    }
    if ( v8 < 0 )
      goto LABEL_11;
    v64 = v8;
    goto LABEL_134;
  }
  v68 = a2[3];
  if ( v68 )
  {
    a2[4] = 0;
    qfree(v68);
    a2[3] = 0;
    a2[5] = 0;
  }
LABEL_134:
  v69 = a2[1];
  LODWORD(v155) = -1;
  if ( v64 >= v69 )
  {
    if ( v69 >= v64 )
      goto LABEL_11;
    v70 = *a2;
    v71 = a2[2];
    if ( (unsigned __int64)&v155 < *a2 || (unsigned __int64)&v155 >= v70 + 4 * v71 )
    {
      if ( v71 >= v64 || (v112 = qvector_reserve(a2, v70, v64, 4), *a2 = v112, v70 = v112, v69 = a2[1], v69 < v64) )
      {
        v94 = 4 * v69;
        while ( 1 )
        {
          *(_DWORD *)(v70 + v94) = -1;
          v94 += 4;
          if ( 4 * v64 == v94 )
            break;
          v70 = *a2;
        }
      }
    }
    else if ( v71 >= v64 || (v120 = qvector_reserve(a2, v70, v64, 4), *a2 = v120, v70 = v120, v69 = a2[1], v69 < v64) )
    {
      v72 = 4 * v69;
      while ( 1 )
      {
        *(_DWORD *)(v70 + v72) = -1;
        v72 += 4;
        if ( 4 * v64 == v72 )
          break;
        v70 = *a2;
      }
    }
  }
  a2[1] = v64;
LABEL_11:
  v154[0] = 0;
  v13 = *(_QWORD *)a1;
  v154[1] = 0;
  v141 = (*(__int64 (__fastcall **)(__int64))(v13 + 80))(a1);
  v155 = nullptr;
  v156 = 0;
  sub_5F710(v154, v141);
  v14 = v160;
  if ( (_QWORD)v160 )
  {
LABEL_12:
    v142 = v141 >= 0;
    if ( (_QWORD)v158 && v141 >= 0 && v141 < (unsigned __int64)v160 )
    {
      *v157 = v141;
      *(_DWORD *)(v159 + 4LL * v141) = 0;
    }
    goto LABEL_16;
  }
  v79 = v158;
  v147 = -1;
  if ( (_QWORD)v158 )
  {
    v80 = v159;
    if ( (unsigned __int64)&v147 < v159 || (unsigned __int64)&v147 >= v159 + 4LL * *((_QWORD *)&v160 + 1) )
    {
      v110 = 0;
      if ( *((_QWORD *)&v160 + 1) >= (unsigned __int64)v158
        || (v115 = qvector_reserve(&v159, v159, v158, 4),
            v110 = v160,
            v159 = v115,
            v80 = v115,
            (unsigned __int64)v160 < v79) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v80 + 4 * v110++) = -1;
          if ( v110 == v79 )
            break;
          v80 = v159;
        }
      }
    }
    else
    {
      v81 = 0;
      if ( *((_QWORD *)&v160 + 1) >= (unsigned __int64)v158
        || (v122 = qvector_reserve(&v159, v159, v158, 4),
            v159 = v122,
            v80 = v122,
            v81 = v160,
            (unsigned __int64)v160 < v79) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v80 + 4 * v81++) = -1;
          if ( v81 == v79 )
            break;
          v80 = v159;
        }
      }
    }
    *(_QWORD *)&v160 = v79;
    do
    {
      v82 = (int)v157[v14];
      if ( (_DWORD)v82 != -1 )
        *(_DWORD *)(v159 + 4 * v82) = v14;
      ++v14;
    }
    while ( v14 != v79 );
    goto LABEL_12;
  }
  v142 = v141 >= 0;
LABEL_16:
  v16 = *((_QWORD *)&v156 + 1);
  v15 = v156;
  if ( *((_QWORD *)&v156 + 1) < (unsigned __int64)(v156 + 1) )
  {
    v73 = qvector_reserve(&v155, 0, v156 + 1, 8);
    v74 = *((_QWORD *)&v156 + 1);
    v17 = v73;
    *((_QWORD *)&v156 + 1) = v16;
    v75 = v155;
    v76 = v156 - 1;
    if ( (__int64)v156 - 1 >= 0 )
    {
      v77 = v73;
      do
      {
        v78 = *v75;
        v77 += 8;
        ++v75;
        *(_QWORD *)(v77 - 8) = v78;
        v58 = v76-- == 0;
      }
      while ( !v58 );
      v75 = v155;
    }
    qfree(v75);
    v155 = (__int64 *)v17;
    v15 = v156;
    *((_QWORD *)&v156 + 1) = v74;
  }
  else
  {
    v17 = (__int64)v155;
  }
  v140 = 0;
  *(_QWORD *)(v17 + 8 * v15) = (unsigned int)v141;
  v138 = 1;
  v18 = v156 + 1;
  *(_QWORD *)&v156 = v156 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = (int *)&v155[v18 - 1];
      v20 = *v19;
      v21 = v19[1];
      v22 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      v23 = (unsigned int)*v19;
      if ( v22 == sub_60610 )
      {
        v24 = sub_60610(a1, v23);
      }
      else
      {
        v24 = v22(a1, v23);
        v20 = *v19;
      }
      if ( v21 == v24 )
        break;
      v25 = (unsigned int)v19[1];
      v26 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
      if ( v26 == sub_60650 )
      {
        v126 = v19[1];
        v27 = sub_60650(a1, v20, v25);
        v28 = v126;
      }
      else
      {
        v27 = v26(a1, v20, v25);
        v28 = v19[1];
        v20 = *v19;
      }
      v29 = v27;
      v19[1] = v28 + 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(
             a1,
             (unsigned int)v20,
             v27) )
      {
LABEL_34:
        v18 = v156;
      }
      else
      {
        v30 = sub_5F710(v154, v29);
        v31 = *v19;
        if ( !v30 )
        {
          v32 = v160;
          if ( (_QWORD)v160 )
          {
            if ( v31 >= 0 )
            {
              v33 = v31;
              if ( v31 < (unsigned __int64)v160 )
              {
LABEL_29:
                v34 = *(_DWORD *)(v159 + 4 * v33);
                if ( v29 < 0 )
                {
                  if ( v34 < -1 )
                    goto LABEL_32;
                  if ( a2[4] )
                    goto LABEL_88;
                  v102 = a2[1];
                  v151 = -1;
                  if ( !v102 )
                    goto LABEL_88;
                  goto LABEL_214;
                }
                v35 = v29;
                if ( v29 < (unsigned __int64)v160 )
                {
                  if ( v34 < *(_DWORD *)(v159 + 4LL * v29) )
                  {
LABEL_32:
                    v36 = 2;
LABEL_33:
                    (**(void (__fastcall ***)(__int64, _QWORD, _QWORD, __int64))a3)(
                      a3,
                      (unsigned int)v31,
                      (unsigned int)v29,
                      v36);
                    goto LABEL_34;
                  }
LABEL_85:
                  v48 = a2[4];
                  if ( v48 )
                  {
LABEL_86:
                    if ( v35 < v48 )
                    {
                      v36 = 4;
                      if ( *(_DWORD *)(a2[3] + 4 * v35) != -1 )
                        goto LABEL_33;
                    }
                    goto LABEL_88;
                  }
                  v102 = a2[1];
                  if ( !v102 )
                    goto LABEL_224;
                  goto LABEL_213;
                }
                if ( v34 < -1 )
                  goto LABEL_32;
                goto LABEL_255;
              }
            }
          }
          else
          {
            v59 = v158;
            v149 = -1;
            if ( (_QWORD)v158 )
            {
              v60 = v159;
              if ( (unsigned __int64)&v149 < v159 || (unsigned __int64)&v149 >= v159 + 4LL * *((_QWORD *)&v160 + 1) )
              {
                v92 = 0;
                if ( *((_QWORD *)&v160 + 1) >= (unsigned __int64)v158
                  || (v143 = v31,
                      v129 = v158,
                      v93 = qvector_reserve(&v159, v159, v158, 4),
                      v92 = v160,
                      v59 = v129,
                      v159 = v93,
                      v60 = v93,
                      v31 = v143,
                      (unsigned __int64)v160 < v129) )
                {
                  while ( 1 )
                  {
                    *(_DWORD *)(v60 + 4 * v92++) = -1;
                    if ( v92 == v59 )
                      break;
                    v60 = v159;
                  }
                }
              }
              else
              {
                v61 = 0;
                if ( *((_QWORD *)&v160 + 1) >= (unsigned __int64)v158
                  || (v144 = v31,
                      v132 = v158,
                      v119 = qvector_reserve(&v159, v159, v158, 4),
                      v159 = v119,
                      v59 = v132,
                      v60 = v119,
                      v61 = v160,
                      v31 = v144,
                      (unsigned __int64)v160 < v132) )
                {
                  while ( 1 )
                  {
                    *(_DWORD *)(v60 + 4 * v61++) = -1;
                    if ( v61 == v59 )
                      break;
                    v60 = v159;
                  }
                }
              }
              *(_QWORD *)&v160 = v59;
              v62 = 0;
              do
              {
                v63 = (int)v157[v62];
                if ( (_DWORD)v63 != -1 )
                  *(_DWORD *)(v159 + 4 * v63) = v62;
                ++v62;
              }
              while ( v62 != v59 );
              v124 = v160;
              if ( v31 >= 0 )
              {
                v33 = v31;
                if ( v31 < (unsigned __int64)v160 )
                  goto LABEL_29;
              }
              if ( !(_QWORD)v160 )
              {
                v125 = v158;
                v150 = -1;
                if ( (_QWORD)v158 )
                {
                  if ( (unsigned __int64)&v150 < v159 || (unsigned __int64)&v150 >= v159 + 4LL * *((_QWORD *)&v160 + 1) )
                  {
                    if ( *((_QWORD *)&v160 + 1) < (unsigned __int64)v158 )
                    {
                      v145 = v31;
                      v136 = v158;
                      v159 = qvector_reserve(&v159, v159, v158, 4);
                      v31 = v145;
                      v124 = v160;
                      v125 = v136;
                    }
                    if ( v124 < v125 )
                    {
                      do
                        *(_DWORD *)(v159 + 4 * v124++) = -1;
                      while ( v125 != v124 );
                    }
                  }
                  else
                  {
                    if ( *((_QWORD *)&v160 + 1) < (unsigned __int64)v158 )
                    {
                      v146 = v31;
                      v137 = v158;
                      v159 = qvector_reserve(&v159, v159, v158, 4);
                      v31 = v146;
                      v124 = v160;
                      v125 = v137;
                    }
                    if ( v124 < v125 )
                    {
                      do
                        *(_DWORD *)(v159 + 4 * v124++) = -1;
                      while ( v125 != v124 );
                    }
                  }
                  *(_QWORD *)&v160 = v125;
                  do
                  {
                    v47 = (int)v157[v32];
                    if ( (_DWORD)v47 != -1 )
                      *(_DWORD *)(v159 + 4 * v47) = v32;
                    ++v32;
                  }
                  while ( v125 != v32 );
                }
              }
            }
          }
          if ( v29 < 0 )
          {
            if ( a2[4] )
              goto LABEL_88;
LABEL_256:
            v102 = a2[1];
            if ( !v102 )
              goto LABEL_88;
LABEL_213:
            v151 = -1;
LABEL_214:
            v103 = a2[3];
            v104 = a2[5];
            v105 = a2 + 3;
            if ( (unsigned __int64)&v151 < v103 || (unsigned __int64)&v151 >= v103 + 4 * v104 )
            {
              if ( v104 < v102 )
              {
                v133 = v31;
                a2[3] = qvector_reserve(v105, v103, v102, 4);
                v31 = v133;
              }
              v114 = a2[4];
              if ( v114 < v102 )
              {
                do
                  *(_DWORD *)(a2[3] + 4 * v114++) = -1;
                while ( v102 != v114 );
              }
            }
            else
            {
              if ( v104 < v102 )
              {
                v135 = v31;
                a2[3] = qvector_reserve(v105, v103, v102, 4);
                v31 = v135;
              }
              v106 = a2[4];
              if ( v106 < v102 )
              {
                do
                  *(_DWORD *)(a2[3] + 4 * v106++) = -1;
                while ( v102 != v106 );
              }
            }
            a2[4] = v102;
            for ( i = 0; i != v102; ++i )
            {
              v108 = *(int *)(*a2 + 4 * i);
              if ( (_DWORD)v108 != -1 )
                *(_DWORD *)(a2[3] + 4 * v108) = i;
            }
LABEL_224:
            if ( v29 >= 0 )
            {
              v48 = a2[4];
              v35 = v29;
              goto LABEL_86;
            }
LABEL_88:
            v36 = 3;
            goto LABEL_33;
          }
          v35 = v29;
          if ( v29 < (unsigned __int64)v160 )
          {
            if ( *(int *)(v159 + 4LL * v29) > -1 )
              goto LABEL_32;
            goto LABEL_85;
          }
LABEL_255:
          v48 = a2[4];
          if ( v48 )
            goto LABEL_86;
          goto LABEL_256;
        }
        if ( v31 != -1 )
          (**(void (__fastcall ***)(__int64, _QWORD, _QWORD, __int64))a3)(a3, (unsigned int)v31, (unsigned int)v29, 1);
        v42 = v160;
        v43 = v138 + 1;
        if ( !(_QWORD)v160 )
        {
          v49 = v158;
          v152 = -1;
          if ( !(_QWORD)v158 )
            goto LABEL_64;
          v50 = v159;
          if ( (unsigned __int64)&v152 < v159 || (unsigned __int64)&v152 >= v159 + 4LL * *((_QWORD *)&v160 + 1) )
          {
            v90 = 0;
            if ( *((_QWORD *)&v160 + 1) >= (unsigned __int64)v158
              || (v128 = v158,
                  v91 = qvector_reserve(&v159, v159, v158, 4),
                  v90 = v160,
                  v49 = v128,
                  v159 = v91,
                  v50 = v91,
                  v43 = v138 + 1,
                  (unsigned __int64)v160 < v128) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v50 + 4 * v90++) = -1;
                if ( v90 == v49 )
                  break;
                v50 = v159;
              }
            }
          }
          else
          {
            v51 = 0;
            if ( *((_QWORD *)&v160 + 1) >= (unsigned __int64)v158
              || (v131 = v158,
                  v118 = qvector_reserve(&v159, v159, v158, 4),
                  v159 = v118,
                  v49 = v131,
                  v50 = v118,
                  v51 = v160,
                  v43 = v138 + 1,
                  (unsigned __int64)v160 < v131) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v50 + 4 * v51++) = -1;
                if ( v51 == v49 )
                  break;
                v50 = v159;
              }
            }
          }
          *(_QWORD *)&v160 = v49;
          do
          {
            v52 = (int)v157[v42];
            if ( (_DWORD)v52 != -1 )
              *(_DWORD *)(v159 + 4 * v52) = v42;
            ++v42;
          }
          while ( v42 != v49 );
        }
        if ( v138 >= 0 && v138 < (unsigned __int64)v158 && v29 >= 0 && v29 < (unsigned __int64)v160 )
        {
          v157[v138] = v29;
          *(_DWORD *)(v159 + 4LL * v29) = v138;
        }
LABEL_64:
        v44 = v156;
        if ( *((_QWORD *)&v156 + 1) < (unsigned __int64)(v156 + 1) )
        {
          v139 = *((_QWORD *)&v156 + 1);
          v127 = v43;
          v45 = qvector_reserve(&v155, 0, v156 + 1, 8);
          v53 = *((_QWORD *)&v156 + 1);
          v54 = v155;
          v55 = v156 - 1;
          *((_QWORD *)&v156 + 1) = v139;
          if ( (__int64)v156 - 1 >= 0 )
          {
            v56 = v45;
            do
            {
              v57 = *v54;
              v56 += 8;
              ++v54;
              *(_QWORD *)(v56 - 8) = v57;
              v58 = v55-- == 0;
            }
            while ( !v58 );
            v54 = v155;
          }
          qfree(v54);
          v44 = v156;
          v155 = (__int64 *)v45;
          v43 = v127;
          *((_QWORD *)&v156 + 1) = v53;
        }
        else
        {
          v45 = (__int64)v155;
        }
        v46 = (int *)(v45 + 8 * v44);
        v138 = v43;
        *v46 = v29;
        v46[1] = 0;
        v18 = v156 + 1;
        *(_QWORD *)&v156 = v156 + 1;
      }
    }
    v41 = a2[4];
    if ( !(_QWORD)v156 )
      break;
    v18 = v156 - 1;
    *(_QWORD *)&v156 = v18;
    if ( !v18 )
      break;
    if ( v41 )
      goto LABEL_49;
    v96 = a2[1];
    v148 = -1;
    if ( v96 )
    {
      v97 = a2[3];
      v98 = a2[5];
      v99 = a2 + 3;
      if ( (unsigned __int64)&v148 < v97 || (unsigned __int64)&v148 >= v97 + 4 * v98 )
      {
        v113 = 0;
        if ( v98 >= v96
          || (v130 = v96,
              v117 = qvector_reserve(v99, v97, v96, 4),
              a2[3] = v117,
              v97 = v117,
              v96 = v130,
              v113 = a2[4],
              v113 < v130) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v97 + 4 * v113++) = -1;
            if ( v96 == v113 )
              break;
            v97 = a2[3];
          }
        }
      }
      else
      {
        v100 = 0;
        if ( v98 >= v96
          || (v134 = v96,
              v123 = qvector_reserve(v99, v97, v96, 4),
              a2[3] = v123,
              v97 = v123,
              v96 = v134,
              v100 = a2[4],
              v100 < v134) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v97 + 4 * v100++) = -1;
            if ( v96 == v100 )
              break;
            v97 = a2[3];
          }
        }
      }
      a2[4] = v96;
      do
      {
        v101 = *(int *)(*a2 + 4 * v41);
        if ( (_DWORD)v101 != -1 )
          *(_DWORD *)(a2[3] + 4 * v101) = v41;
        ++v41;
      }
      while ( v96 != v41 );
LABEL_49:
      if ( v140 < 0 || v140 >= (unsigned __int64)a2[1] || v20 < 0 || v20 >= (unsigned __int64)a2[4] )
      {
        v18 = v156;
        goto LABEL_54;
      }
      *(_DWORD *)(*a2 + 4LL * v140) = v20;
      v109 = v140++;
      *(_DWORD *)(a2[3] + 4LL * v20) = v109;
      v18 = v156;
    }
    else
    {
LABEL_54:
      ++v140;
    }
  }
  if ( v41 )
    goto LABEL_69;
  v37 = a2[1];
  v153 = -1;
  if ( v37 )
  {
    v85 = a2[3];
    v86 = a2[5];
    v87 = a2 + 3;
    if ( (unsigned __int64)&v153 < v85 || (unsigned __int64)&v153 >= v85 + 4 * v86 )
    {
      v111 = 0;
      if ( v86 >= v37 || (v116 = qvector_reserve(v87, v85, v37, 4), v111 = a2[4], a2[3] = v116, v85 = v116, v111 < v37) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v85 + 4 * v111++) = -1;
          if ( v111 == v37 )
            break;
          v85 = a2[3];
        }
      }
    }
    else
    {
      v88 = 0;
      if ( v86 >= v37 || (v121 = qvector_reserve(v87, v85, v37, 4), a2[3] = v121, v85 = v121, v88 = a2[4], v88 < v37) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v85 + 4 * v88++) = -1;
          if ( v88 == v37 )
            break;
          v85 = a2[3];
        }
      }
    }
    a2[4] = v37;
    do
    {
      v89 = *(int *)(*a2 + 4 * v41);
      if ( (_DWORD)v89 != -1 )
        *(_DWORD *)(a2[3] + 4 * v89) = v41;
      ++v41;
    }
    while ( v41 != v37 );
LABEL_69:
    if ( v140 >= 0 && v140 < (unsigned __int64)a2[1] && v142 && v141 < (unsigned __int64)a2[4] )
    {
      *(_DWORD *)(*a2 + 4LL * v140) = v141;
      *(_DWORD *)(a2[3] + 4LL * v141) = v140;
    }
  }
  if ( v155 )
  {
    *(_QWORD *)&v156 = 0;
    qfree(v155);
  }
  qfree(v154[0]);
  if ( v159 )
  {
    *(_QWORD *)&v160 = 0;
    qfree(v159);
  }
  if ( v157 )
  {
    *(_QWORD *)&v158 = 0;
    qfree(v157);
  }
  return v161 - __readfsqword(0x28u);
}
