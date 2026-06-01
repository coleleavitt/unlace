_QWORD *__fastcall sub_BE5FE0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // r15
  _DWORD *v6; // rax
  void *v7; // rbx
  _QWORD *result; // rax
  __int64 v9; // rax
  _DWORD *v11; // rdx
  unsigned int *v12; // rbp
  __int64 v13; // rbx
  unsigned int *v14; // r13
  char v15; // al
  void *v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  _QWORD *v20; // rbp
  int v21; // r9d
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // r8
  _DWORD *v26; // rsi
  _QWORD *v27; // r13
  _DWORD *v28; // r8
  _DWORD *v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *v31; // rsi
  _DWORD *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rt0
  int v35; // esi
  __int64 v36; // r14
  int v37; // eax
  unsigned int v38; // edx
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdi
  _QWORD *v45; // rcx
  unsigned int v46; // r12d
  int v47; // r8d
  unsigned int v48; // r14d
  _QWORD *v49; // rdx
  int v50; // r9d
  __int64 v51; // rax
  _QWORD *v52; // rdi
  __int64 v53; // rcx
  _QWORD *v54; // r10
  _QWORD *v55; // rax
  _QWORD *v56; // rsi
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // ebp
  int v61; // r8d
  unsigned int v62; // r12d
  _QWORD **v63; // rdx
  int v64; // r9d
  __int64 v65; // rax
  _QWORD *v66; // rdi
  __int64 v67; // rcx
  _QWORD **v68; // r10
  _QWORD **v69; // rsi
  _QWORD *v70; // rcx
  size_t v71; // r15
  __int8 *v72; // rax
  unsigned int v73; // edx
  __m128i *v74; // r10
  int v75; // r8d
  _DWORD *v76; // rax
  int v77; // ecx
  __m128i *v78; // rdi
  _QWORD *v79; // rax
  const __m128i *v80; // r13
  int v81; // ecx
  int v82; // esi
  __m128i *v83; // r12
  __m128i *v84; // rbx
  unsigned int v85; // r11d
  const __m128i *v86; // rbp
  unsigned int v87; // r8d
  int v88; // r14d
  unsigned int v89; // et1
  int v90; // r10d
  __int64 v91; // rdx
  __m128i *v92; // rsi
  __m128i *v93; // rdx
  int v94; // eax
  _QWORD *v95; // rax
  _QWORD *v96; // r15
  char *v97; // rdi
  char *v98; // r9
  char *v99; // rbx
  __int64 v100; // rdx
  _QWORD *v101; // rsi
  _QWORD *v102; // rdx
  size_t v103; // r14
  _QWORD *v104; // rax
  _QWORD *v105; // r15
  char *v106; // rdi
  char *v107; // r9
  char *v108; // rbx
  __int64 v109; // rax
  _QWORD *v110; // rdx
  _QWORD *v111; // rax
  unsigned int n; // [rsp+0h] [rbp-98h]
  size_t na; // [rsp+0h] [rbp-98h]
  __int64 nb; // [rsp+0h] [rbp-98h]
  __int64 v115; // [rsp+8h] [rbp-90h]
  __m128i *v116; // [rsp+8h] [rbp-90h]
  unsigned int v117; // [rsp+10h] [rbp-88h]
  __int64 v118; // [rsp+10h] [rbp-88h]
  __int64 v119; // [rsp+18h] [rbp-80h]
  char v120; // [rsp+3Fh] [rbp-59h] BYREF
  _QWORD v121[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v122[9]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = *(_WORD *)(a2 + 4) == 0;
  v121[0] = 0;
  v121[1] = 0;
  v5 = *(_QWORD *)(v3 + 16);
  v122[0] = 1;
  v122[1] = 0;
  if ( !v4
    || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v6 != 5
    || v6[1] != 6
    || *(_DWORD *)(a2 + 24) != 2
    || (v9 = *(_QWORD *)(a2 + 40), *(_WORD *)(v9 + 4))
    || (v11 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) == nullptr
    || *v11 != 5
    || v11[1] != 9
    || *(_DWORD *)(v9 + 24) != 2 )
  {
    v7 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v121);
    return (_QWORD *)sub_182CBA0(v7, v122);
  }
  v12 = *(unsigned int **)(a2 + 32);
  v13 = a1;
  v14 = *(unsigned int **)(v9 + 40);
  v15 = sub_1666AE0(a1 + 152, *(_QWORD *)(v9 + 32), v121, &v120);
  v16 = qword_1C7F2C0;
  if ( !v15
    || (v121[0] & 0x100000000LL) != 0
    || LODWORD(v121[0]) != -1
    || (v122[0] & 0x100000000LL) != 0
    || LODWORD(v122[0]) != 1 )
  {
    sub_182CBA0(qword_1C7F2C0, v121);
    return (_QWORD *)sub_182CBA0(v16, v122);
  }
  sub_182CBA0(qword_1C7F2C0, v121);
  sub_182CBA0(v16, v122);
  result = *(_QWORD **)(v5 + 8656);
  if ( result )
  {
    v17 = *v12;
    v18 = *((_DWORD *)result - 1);
    if ( (unsigned int)v17 < v18 )
    {
      if ( result[v17] )
      {
        v19 = *v14;
        if ( (unsigned int)v19 < v18 )
        {
          if ( result[v19] )
          {
            v20 = (_QWORD *)sub_966570(*(_QWORD *)a1, v12)[1];
            result = sub_966570(*(_QWORD *)a1, v14);
            if ( v20 )
            {
              v21 = *(_DWORD *)(a1 + 64);
              v22 = v20;
              v23 = *v20;
              if ( *(_WORD *)(*v20 + 4LL) )
                goto LABEL_29;
              v24 = nullptr;
              while ( 1 )
              {
                v26 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
                if ( !v26 || v21 != *v26 )
                  goto LABEL_28;
                while ( 1 )
                {
                  if ( v26[1] == 12 && *(_DWORD *)(v23 + 24) == 1 )
                  {
                    v27 = (_QWORD *)result[1];
                    if ( !v27 )
                      return result;
                    v28 = (_DWORD *)*v27;
                    result = (_QWORD *)result[1];
                    v29 = (_DWORD *)*v27;
                    if ( *(_WORD *)(*v27 + 4LL) )
                      goto LABEL_47;
                    v30 = nullptr;
                    while ( 2 )
                    {
                      v32 = *(_DWORD **)(*((_QWORD *)v29 + 2) + 24LL);
                      if ( !v32 || v21 != *v32 )
                        goto LABEL_46;
                      while ( 1 )
                      {
                        if ( v32[1] == 12 && v29[6] == 1 )
                        {
                          v33 = *v20;
                          if ( *v28 < *(_DWORD *)*v20 )
                          {
                            v33 = *v27;
                            a3 = -a3;
                            v28 = (_DWORD *)*v20;
                            v34 = v27;
                            v27 = v20;
                            v20 = v34;
                          }
                          v35 = *(_DWORD *)(v33 + 12);
                          v36 = *(unsigned int *)(v13 + 200);
                          v37 = (v28[3] - v35) ^ (v35 << 8);
                          v38 = 2 * v36;
                          v39 = ((v37 ^ ((v35 - v37) << 16)) + v37 - v35) ^ ((v35 - v37) << 10);
                          if ( 3 * (int)v36 >= (unsigned int)(4 * (*(_DWORD *)(v13 + 204) + *(_DWORD *)(v13 + 208))) )
                            goto LABEL_64;
                          v36 = v38;
                          v71 = 24LL * v38;
                          n = v38;
                          v72 = (__int8 *)sub_186B270(v71);
                          v73 = n;
                          v74 = (__m128i *)v72;
                          if ( n )
                          {
                            v75 = n - 1;
                            if ( n - 1 <= 2 )
                            {
                              v77 = n;
                              goto LABEL_131;
                            }
                            v76 = v72 + 20;
                            do
                            {
                              *v76 = 0;
                              v76 += 24;
                              *(_OWORD *)(v76 - 29) = 0;
                              *(_OWORD *)(v76 - 23) = 0;
                              *(_OWORD *)(v76 - 17) = 0;
                              *(_OWORD *)(v76 - 11) = 0;
                              *(v76 - 18) = 0;
                              *(v76 - 12) = 0;
                              *(v76 - 6) = 0;
                            }
                            while ( v76 != (_DWORD *)((char *)v74[6 * (n >> 2) + 1].m128i_i64 + 4) );
                            v77 = n & 2;
                            v72 = &v74->m128i_i8[24 * (n & 0xFFFFFFFC)];
                            if ( (n & 2) != 0 )
                            {
                              do
                              {
LABEL_131:
                                *(_OWORD *)v72 = 0;
                                v72 += 24;
                                *((_DWORD *)v72 - 1) = 0;
                                --v77;
                              }
                              while ( v77 );
                            }
                          }
                          else
                          {
                            v75 = -1;
                          }
                          v78 = *(__m128i **)(v13 + 192);
                          if ( v78 != (__m128i *)((char *)v78 + 24 * *(unsigned int *)(v13 + 200)) )
                          {
                            v79 = v27;
                            v80 = (__m128i *)((char *)v78 + 24 * *(unsigned int *)(v13 + 200));
                            v81 = v39;
                            v82 = a3;
                            v115 = v13;
                            v83 = v74;
                            v84 = (__m128i *)((char *)v74 + v71);
                            v85 = n;
                            na = (size_t)v20;
                            v86 = v78;
                            v89 = v36;
                            v88 = v75;
                            v87 = v89;
                            v90 = v82;
                            do
                            {
                              if ( v86->m128i_i64[0] > 1uLL )
                              {
                                v91 = 24LL * (v86[1].m128i_i32[1] & (unsigned int)v88);
                                v92 = (__m128i *)((char *)v83 + v91);
                                if ( v91 == v71 )
                                {
LABEL_141:
                                  if ( v92 == v83 )
                                  {
LABEL_212:
                                    sub_1872CE0("");
                                    sub_1873130(114, 213);
                                  }
                                  v93 = v83;
                                  while ( v93->m128i_i64[0] )
                                  {
                                    v93 = (__m128i *)((char *)v93 + 24);
                                    if ( v92 == v93 )
                                      goto LABEL_212;
                                  }
                                }
                                else
                                {
                                  v93 = (__m128i *)((char *)v83 + v91);
                                  while ( v93->m128i_i64[0] )
                                  {
                                    v93 = (__m128i *)((char *)v93 + 24);
                                    if ( v84 == v93 )
                                      goto LABEL_141;
                                  }
                                }
                                *v93 = _mm_loadu_si128(v86);
                                v93[1].m128i_i64[0] = v86[1].m128i_i64[0];
                              }
                              v86 = (const __m128i *)((char *)v86 + 24);
                            }
                            while ( v80 != v86 );
                            v27 = v79;
                            v20 = (_QWORD *)na;
                            v94 = v90;
                            v39 = v81;
                            v78 = *(__m128i **)(v115 + 192);
                            v74 = v83;
                            v36 = v87;
                            v13 = v115;
                            v73 = v85;
                            a3 = v94;
                          }
                          if ( v78 )
                          {
                            v117 = v73;
                            v116 = v74;
                            sub_186B220(v78);
                            v73 = v117;
                            v74 = v116;
                          }
                          *(_QWORD *)(v13 + 192) = v74;
                          *(_DWORD *)(v13 + 200) = v73;
                          *(_DWORD *)(v13 + 208) = 0;
LABEL_64:
                          v40 = *(_QWORD *)(v13 + 192);
                          v41 = 24LL * (v39 & (unsigned int)(v36 - 1));
                          v42 = v40 + v41;
                          if ( v41 == 24 * v36 )
                          {
                            v44 = 0;
                          }
                          else
                          {
                            v43 = v40 + v41;
                            v44 = 0;
                            do
                            {
                              v45 = *(_QWORD **)v43;
                              if ( *(_QWORD *)v43 > 1u )
                              {
                                if ( *(_DWORD *)(v43 + 20) == v39 && v20 == v45 && v27 == *(_QWORD **)(v43 + 8) )
                                {
                                  *(_QWORD *)v43 = v20;
                                  *(_QWORD *)(v43 + 8) = v27;
                                  *(_DWORD *)(v43 + 16) = a3;
                                  *(_DWORD *)(v43 + 20) = v39;
                                  goto LABEL_76;
                                }
                              }
                              else
                              {
                                if ( !v45 )
                                {
                                  if ( v44 )
                                  {
                                    --*(_DWORD *)(v13 + 208);
                                    v43 = v44;
                                  }
                                  *(_QWORD *)v43 = v20;
                                  *(_QWORD *)(v43 + 8) = v27;
                                  *(_DWORD *)(v43 + 16) = a3;
                                  *(_DWORD *)(v43 + 20) = v39;
                                  ++*(_DWORD *)(v13 + 204);
LABEL_76:
                                  v46 = *(_DWORD *)(v13 + 176);
                                  v47 = *(_DWORD *)(v13 + 184);
                                  v48 = 2 * v46;
                                  if ( 3 * v46 < 4 * (v47 + *(_DWORD *)(v13 + 180)) )
                                  {
                                    v46 *= 2;
                                    nb = 8LL * v48;
                                    v95 = (_QWORD *)sub_186B270(nb);
                                    v96 = v95;
                                    if ( v48 )
                                      memset(v95, 0, nb);
                                    v97 = *(char **)(v13 + 168);
                                    v98 = &v97[8 * *(unsigned int *)(v13 + 176)];
                                    if ( v97 != v98 )
                                    {
                                      v119 = v13;
                                      v99 = *(char **)(v13 + 168);
                                      do
                                      {
                                        if ( *(_QWORD *)v99 > 1u )
                                        {
                                          v100 = 8LL * (*(_DWORD *)(**(_QWORD **)v99 + 12LL) & (v48 - 1));
                                          v101 = &v96[(unsigned __int64)v100 / 8];
                                          if ( nb == v100 )
                                          {
LABEL_164:
                                            if ( v96 == v101 )
                                            {
LABEL_200:
                                              sub_1872CE0("");
                                              sub_1873130(114, 213);
                                            }
                                            v102 = v96;
                                            while ( *v102 )
                                            {
                                              if ( v101 == ++v102 )
                                                goto LABEL_200;
                                            }
                                          }
                                          else
                                          {
                                            v102 = &v96[(unsigned __int64)v100 / 8];
                                            while ( *v102 )
                                            {
                                              if ( &v96[(unsigned __int64)nb / 8] == ++v102 )
                                                goto LABEL_164;
                                            }
                                          }
                                          *v102 = *(_QWORD *)v99;
                                        }
                                        v99 += 8;
                                      }
                                      while ( v98 != v99 );
                                      v13 = v119;
                                      v46 = v48;
                                      v97 = *(char **)(v119 + 168);
                                    }
                                    if ( v97 )
                                      sub_186B220(v97);
                                    *(_QWORD *)(v13 + 168) = v96;
                                    v47 = 0;
                                    *(_DWORD *)(v13 + 176) = v48;
                                    *(_DWORD *)(v13 + 184) = 0;
                                  }
                                  v49 = *(_QWORD **)(v13 + 168);
                                  v50 = *(_DWORD *)(*v20 + 12LL);
                                  v51 = 8LL * v46;
                                  v52 = &v49[(unsigned __int64)v51 / 8];
                                  v53 = 8LL * (v50 & (v46 - 1));
                                  v54 = &v49[(unsigned __int64)v53 / 8];
                                  if ( v53 == v51 )
                                  {
                                    v56 = nullptr;
                                  }
                                  else
                                  {
                                    v55 = &v49[(unsigned __int64)v53 / 8];
                                    v56 = nullptr;
                                    do
                                    {
                                      v57 = (_QWORD *)*v55;
                                      if ( *v55 > 1u )
                                      {
                                        if ( *(_DWORD *)(*v57 + 12LL) == v50 && v20 == v57 )
                                        {
                                          *v55 = v20;
                                          goto LABEL_107;
                                        }
                                      }
                                      else
                                      {
                                        if ( !v57 )
                                        {
                                          if ( v56 )
                                          {
                                            v55 = v56;
                                            *(_DWORD *)(v13 + 184) = v47 - 1;
                                          }
                                          *v55 = v20;
                                          ++*(_DWORD *)(v13 + 180);
LABEL_107:
                                          v60 = *(_DWORD *)(v13 + 176);
                                          v61 = *(_DWORD *)(v13 + 184);
                                          v62 = 2 * v60;
                                          if ( 3 * v60 < 4 * (v61 + *(_DWORD *)(v13 + 180)) )
                                          {
                                            v60 *= 2;
                                            v103 = 8LL * v62;
                                            v104 = (_QWORD *)sub_186B270(v103);
                                            v105 = v104;
                                            if ( v62 )
                                              memset(v104, 0, 8LL * v62);
                                            v106 = *(char **)(v13 + 168);
                                            v107 = &v106[8 * *(unsigned int *)(v13 + 176)];
                                            if ( v106 != v107 )
                                            {
                                              v118 = v13;
                                              v108 = *(char **)(v13 + 168);
                                              do
                                              {
                                                if ( *(_QWORD *)v108 > 1u )
                                                {
                                                  v109 = 8LL * (*(_DWORD *)(**(_QWORD **)v108 + 12LL) & (v62 - 1));
                                                  v110 = &v105[(unsigned __int64)v109 / 8];
                                                  if ( v103 == v109 )
                                                  {
LABEL_187:
                                                    if ( v105 == v110 )
                                                    {
LABEL_199:
                                                      sub_1872CE0("");
                                                      sub_1873130(114, 213);
                                                    }
                                                    v111 = v105;
                                                    while ( *v111 )
                                                    {
                                                      if ( v110 == ++v111 )
                                                        goto LABEL_199;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v111 = &v105[(unsigned __int64)v109 / 8];
                                                    while ( *v111 )
                                                    {
                                                      if ( &v105[v103 / 8] == ++v111 )
                                                        goto LABEL_187;
                                                    }
                                                  }
                                                  *v111 = *(_QWORD *)v108;
                                                }
                                                v108 += 8;
                                              }
                                              while ( v107 != v108 );
                                              v13 = v118;
                                              v106 = *(char **)(v118 + 168);
                                            }
                                            if ( v106 )
                                              sub_186B220(v106);
                                            *(_QWORD *)(v13 + 168) = v105;
                                            v61 = 0;
                                            *(_DWORD *)(v13 + 176) = v62;
                                            *(_DWORD *)(v13 + 184) = 0;
                                          }
                                          v63 = *(_QWORD ***)(v13 + 168);
                                          v64 = *(_DWORD *)(*v27 + 12LL);
                                          v65 = 8LL * v60;
                                          v66 = &v63[(unsigned __int64)v65 / 8];
                                          v67 = 8LL * (v64 & (v60 - 1));
                                          v68 = &v63[(unsigned __int64)v67 / 8];
                                          if ( v67 == v65 )
                                          {
                                            v69 = nullptr;
LABEL_117:
                                            if ( v63 == v68 )
                                            {
LABEL_125:
                                              sub_1872CE0("");
                                              sub_1873130(114, 405);
                                            }
                                            while ( 1 )
                                            {
                                              result = *v63;
                                              if ( (unsigned __int64)*v63 > 1 )
                                              {
                                                if ( *(_DWORD *)(*result + 12LL) == v64 && v27 == result )
                                                {
                                                  *v63 = v27;
                                                  return result;
                                                }
                                              }
                                              else
                                              {
                                                if ( !result )
                                                {
                                                  if ( v69 )
                                                  {
                                                    v63 = v69;
                                                    *(_DWORD *)(v13 + 184) = v61 - 1;
                                                  }
                                                  *v63 = v27;
                                                  ++*(_DWORD *)(v13 + 180);
                                                  return result;
                                                }
                                                v69 = v63;
                                              }
                                              if ( v68 == ++v63 )
                                                goto LABEL_125;
                                            }
                                          }
                                          result = &v63[(unsigned __int64)v67 / 8];
                                          v69 = nullptr;
                                          while ( 1 )
                                          {
                                            v70 = (_QWORD *)*result;
                                            if ( *result > 1u )
                                            {
                                              if ( *(_DWORD *)(*v70 + 12LL) == v64 && v27 == v70 )
                                              {
                                                *result = v27;
                                                return result;
                                              }
                                            }
                                            else
                                            {
                                              if ( !v70 )
                                              {
                                                if ( v69 )
                                                {
                                                  result = v69;
                                                  *(_DWORD *)(v13 + 184) = v61 - 1;
                                                }
                                                *result = v27;
                                                ++*(_DWORD *)(v13 + 180);
                                                return result;
                                              }
                                              v69 = (_QWORD **)result;
                                            }
                                            if ( v66 == ++result )
                                              goto LABEL_117;
                                          }
                                        }
                                        v56 = v55;
                                      }
                                      ++v55;
                                    }
                                    while ( v52 != v55 );
                                  }
                                  if ( v49 == v54 )
                                  {
LABEL_173:
                                    sub_1872CE0("");
                                    sub_1873130(114, 405);
                                  }
                                  while ( 1 )
                                  {
                                    v58 = (_QWORD *)*v49;
                                    if ( *v49 > 1u )
                                    {
                                      if ( *(_DWORD *)(*v58 + 12LL) == v50 && v20 == v58 )
                                      {
                                        *v49 = v20;
                                        goto LABEL_107;
                                      }
                                    }
                                    else
                                    {
                                      if ( !v58 )
                                      {
                                        if ( v56 )
                                        {
                                          v49 = v56;
                                          *(_DWORD *)(v13 + 184) = v47 - 1;
                                        }
                                        *v49 = v20;
                                        ++*(_DWORD *)(v13 + 180);
                                        goto LABEL_107;
                                      }
                                      v56 = v49;
                                    }
                                    if ( v54 == ++v49 )
                                      goto LABEL_173;
                                  }
                                }
                                v44 = v43;
                              }
                              v43 += 24;
                            }
                            while ( v40 + 24 * v36 != v43 );
                          }
                          if ( v40 == v42 )
                          {
LABEL_103:
                            sub_1872CE0("");
                            sub_1873130(114, 405);
                          }
                          while ( 1 )
                          {
                            v59 = *(_QWORD **)v40;
                            if ( *(_QWORD *)v40 > 1u )
                            {
                              if ( *(_DWORD *)(v40 + 20) == v39 && v20 == v59 && v27 == *(_QWORD **)(v40 + 8) )
                              {
                                *(_QWORD *)v40 = v20;
                                *(_QWORD *)(v40 + 8) = v27;
                                *(_DWORD *)(v40 + 16) = a3;
                                *(_DWORD *)(v40 + 20) = v39;
                                goto LABEL_76;
                              }
                            }
                            else
                            {
                              if ( !v59 )
                              {
                                if ( v44 )
                                {
                                  --*(_DWORD *)(v13 + 208);
                                  v40 = v44;
                                }
                                *(_QWORD *)v40 = v20;
                                *(_QWORD *)(v40 + 8) = v27;
                                *(_DWORD *)(v40 + 16) = a3;
                                *(_DWORD *)(v40 + 20) = v39;
                                ++*(_DWORD *)(v13 + 204);
                                goto LABEL_76;
                              }
                              v44 = v40;
                            }
                            v40 += 24;
                            if ( v42 == v40 )
                              goto LABEL_103;
                          }
                        }
LABEL_46:
                        v31 = result;
                        if ( v30 )
                          goto LABEL_53;
LABEL_47:
                        v31 = (_QWORD *)result[2];
                        if ( v27 == v31 && v27 == result )
                          return result;
                        v29 = (_DWORD *)*v31;
                        if ( *(_WORD *)(*v31 + 4LL) )
                          break;
                        v32 = *(_DWORD **)(*((_QWORD *)v29 + 2) + 24LL);
                        if ( !v32 || v21 != *v32 )
                          break;
                        v30 = result;
                        result = (_QWORD *)result[2];
                      }
                      v30 = result;
LABEL_53:
                      result = v31;
                      do
                      {
                        result = (_QWORD *)result[2];
                        if ( v27 == result && v27 == v30 )
                          return result;
                        v29 = (_DWORD *)*result;
                      }
                      while ( *(_WORD *)(*result + 4LL) );
                      continue;
                    }
                  }
LABEL_28:
                  v25 = v22;
                  if ( v24 )
                    break;
LABEL_29:
                  v25 = (_QWORD *)v22[2];
                  if ( v20 == v22 && v20 == v25 )
                    return result;
                  v23 = *v25;
                  if ( *(_WORD *)(*v25 + 4LL)
                    || (v26 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL)) == nullptr
                    || v21 != *v26 )
                  {
                    v24 = v22;
                    break;
                  }
                  v24 = v22;
                  v22 = (_QWORD *)v22[2];
                }
                v22 = v25;
                do
                {
                  v22 = (_QWORD *)v22[2];
                  if ( v20 == v24 && v20 == v22 )
                    return result;
                  v23 = *v22;
                }
                while ( *(_WORD *)(*v22 + 4LL) );
              }
            }
          }
        }
      }
    }
  }
  return result;
}

