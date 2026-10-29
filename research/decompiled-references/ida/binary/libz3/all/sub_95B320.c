__int64 __fastcall sub_95B320(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 *v5; // r10
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 *i; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  _QWORD *v14; // r11
  int v15; // r8d
  __int64 v16; // rsi
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rdi
  __int64 v22; // r15
  int v23; // r9d
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // r9
  __int64 v29; // r11
  unsigned __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // r15
  int v35; // r10d
  int v36; // eax
  int v37; // r9d
  int v38; // edi
  int v39; // r10d
  __int64 v40; // r9
  __int64 v41; // rdi
  int v42; // r10d
  __int64 v43; // r13
  __int64 v44; // r10
  __int64 v45; // r14
  unsigned __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // r11
  unsigned int v50; // esi
  int v51; // eax
  unsigned int v52; // r15d
  __int64 v53; // r14
  _OWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  char *v57; // rdi
  const double *v58; // r13
  unsigned int v59; // r9d
  __int64 v60; // rcx
  char *v61; // r8
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  unsigned __int64 v66; // r13
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // r14
  __int64 v73; // rax
  int v74; // r8d
  unsigned __int64 v75; // r9
  __int64 v76; // rsi
  __int64 *v77; // rcx
  unsigned int v78; // edx
  int v79; // eax
  unsigned int v80; // ebp
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rdx
  char *v84; // rdi
  const double *v85; // rbp
  int v86; // r14d
  __int64 v87; // r13
  char *v88; // rcx
  __int64 v89; // r15
  __int64 v90; // rax
  __int64 v91; // rsi
  _QWORD *v92; // rcx
  unsigned int v93; // edx
  int v94; // eax
  __int64 v95; // r13
  _OWORD *v96; // rax
  _OWORD *v97; // rbx
  _OWORD *v98; // rbp
  __int64 v99; // rax
  __m128i *v100; // rdi
  int v101; // r14d
  const __m128i *v102; // r13
  __int64 v103; // rbp
  const __m128i *v104; // r15
  __int64 v105; // rax
  _OWORD *v106; // rdx
  __int64 v107; // [rsp+8h] [rbp-50h]
  __int64 v108; // [rsp+8h] [rbp-50h]
  __int64 v109; // [rsp+8h] [rbp-50h]
  __int64 v110; // [rsp+10h] [rbp-48h]
  __int64 v111; // [rsp+10h] [rbp-48h]
  __int64 v112; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v5 = *(__int64 **)(a1 + 104);
  ++*(_DWORD *)(*(_QWORD *)a1 + 76LL);
  v6 = *(unsigned int *)(a1 + 112);
  v7 = 24 * v6;
  v8 = &v5[3 * v6];
  v9 = 24LL * ((unsigned int)a2 & ((_DWORD)v6 - 1));
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != 24 * v6 )
  {
    for ( i = &v5[(unsigned __int64)v9 / 8]; v8 != i; i += 3 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v4 == (_DWORD)v12 && a2 == v12 )
        {
LABEL_16:
          v22 = i[1];
          v23 = *(_DWORD *)(v22 + 12);
          v110 = i[2];
          v24 = (((*(_DWORD *)(v110 + 12) - v23)
                ^ (v23 << 8)
                ^ ((v23 - ((*(_DWORD *)(v110 + 12) - v23) ^ (v23 << 8))) << 16))
               + ((*(_DWORD *)(v110 + 12) - v23) ^ (v23 << 8))
               - v23)
              ^ ((v23 - ((*(_DWORD *)(v110 + 12) - v23) ^ (v23 << 8))) << 10);
          v25 = *(unsigned int *)(a1 + 88);
          v107 = *(_QWORD *)(a1 + 80);
          v26 = 24 * v25;
          v27 = 24LL * (v24 & (unsigned int)(v25 - 1));
          v28 = 24 * v25 + v107;
          v29 = v107 + v27;
          result = v107 + v27;
          if ( v27 != v26 )
          {
            do
            {
              v30 = *(_QWORD *)(result + 8);
              if ( v30 > 1 )
              {
                if ( *(_DWORD *)result == v24 && v22 == v30 && v110 == *(_QWORD *)(result + 16) )
                {
LABEL_71:
                  v49 = result + 24;
                  if ( v28 == result + 24 )
                    v49 = *(_QWORD *)(a1 + 80);
                  v50 = *(_DWORD *)(a1 + 92) - 1;
                  if ( *(_QWORD *)(v49 + 8) )
                  {
                    *(_QWORD *)(result + 8) = 1;
                    v51 = *(_DWORD *)(a1 + 96);
                    *(_DWORD *)(a1 + 92) = v50;
                    result = (unsigned int)(v51 + 1);
                    if ( v50 < 0x40 )
                      v50 = 64;
                    *(_DWORD *)(a1 + 96) = result;
                    if ( v50 < (unsigned int)result )
                    {
                      if ( !(unsigned __int8)sub_186AF10(v9) )
                      {
                        v52 = *(_DWORD *)(a1 + 88);
                        v53 = sub_186B270(24LL * v52);
                        v54 = (_OWORD *)(v53 + 8);
                        v55 = v53 + 24LL * v52 + 8;
                        if ( v52 )
                        {
                          if ( ((24 * (_BYTE)v52) & 8) == 0 || (*v54 = 0, v54 = (_OWORD *)(v53 + 32), v55 != v53 + 32) )
                          {
                            do
                            {
                              *v54 = 0;
                              v54 += 3;
                              *(_OWORD *)((char *)v54 - 24) = 0;
                            }
                            while ( (_OWORD *)v55 != v54 );
                          }
                        }
                        v56 = *(unsigned int *)(a1 + 88);
                        v57 = *(char **)(a1 + 80);
                        v58 = (const double *)v57;
                        v59 = v56 - 1;
                        v60 = 24 * v56;
                        v61 = &v57[24 * v56];
                        v62 = v53 + 24 * v56;
                        if ( v57 != v61 )
                        {
                          do
                          {
                            if ( *((_QWORD *)v58 + 1) > 1u )
                            {
                              v63 = 24LL * (*(_DWORD *)v58 & v59);
                              v64 = v53 + v63;
                              if ( v60 == v63 )
                              {
LABEL_184:
                                if ( v53 == v64 )
                                {
LABEL_190:
                                  sub_1872CE0("");
                                  sub_1873130(114, 213);
                                }
                                v65 = v53;
                                while ( *(_QWORD *)(v65 + 8) )
                                {
                                  v65 += 24;
                                  if ( v64 == v65 )
                                    goto LABEL_190;
                                }
                              }
                              else
                              {
                                v65 = v53 + v63;
                                while ( *(_QWORD *)(v65 + 8) )
                                {
                                  v65 += 24;
                                  if ( v62 == v65 )
                                    goto LABEL_184;
                                }
                              }
                              *(_DWORD *)v65 = *(_DWORD *)v58;
                              *(__m128 *)(v65 + 8) = _mm_loadh_ps(v58 + 2);
                            }
                            v58 += 3;
                          }
                          while ( v61 != (char *)v58 );
                          v57 = *(char **)(a1 + 80);
                        }
                        if ( v57 )
                          sub_186B220(v57);
                        *(_QWORD *)(a1 + 80) = v53;
                        *(_DWORD *)(a1 + 96) = 0;
                      }
                      result = *(unsigned int *)(a1 + 112);
                      v5 = *(__int64 **)(a1 + 104);
                      v7 = 24 * result;
                      v8 = &v5[3 * result];
                      v9 = 24LL * ((unsigned int)a2 & ((_DWORD)result - 1));
                      v10 = &v5[(unsigned __int64)v9 / 8];
                    }
                  }
                  else
                  {
                    *(_QWORD *)(result + 8) = 0;
                    *(_DWORD *)(a1 + 92) = v50;
                  }
                  goto LABEL_23;
                }
              }
              else if ( !v30 )
              {
                goto LABEL_23;
              }
              result += 24;
            }
            while ( v28 != result );
          }
          result = *(_QWORD *)(a1 + 80);
          if ( v107 != v29 )
          {
            do
            {
              v66 = *(_QWORD *)(result + 8);
              if ( v66 > 1 )
              {
                if ( *(_DWORD *)result == v24 && v22 == v66 && v110 == *(_QWORD *)(result + 16) )
                  goto LABEL_71;
              }
              else if ( !v66 )
              {
                break;
              }
              result += 24;
            }
            while ( v29 != result );
          }
LABEL_23:
          if ( v9 == v7 )
          {
LABEL_31:
            if ( v5 == v10 )
              return result;
            result = (__int64)v5;
            while ( 1 )
            {
              v32 = *(_QWORD *)result;
              if ( *(_QWORD *)result > 1u )
              {
                if ( a2 == v32 && v4 == (_DWORD)v32 )
                  goto LABEL_135;
              }
              else if ( !v32 )
              {
                return result;
              }
              result += 24;
              if ( (__int64 *)result == v10 )
                return result;
            }
          }
          result = (__int64)v10;
          while ( 1 )
          {
            while ( 1 )
            {
              v31 = *(_QWORD *)result;
              if ( *(_QWORD *)result > 1u )
                break;
              if ( !v31 )
                return result;
              result += 24;
              if ( (__int64 *)result == v8 )
                goto LABEL_31;
            }
            if ( a2 == v31 && v4 == (_DWORD)v31 )
              break;
            result += 24;
            if ( (__int64 *)result == v8 )
              goto LABEL_31;
          }
LABEL_135:
          v77 = (__int64 *)(result + 24);
          if ( (__int64 *)(result + 24) == v8 )
            v77 = v5;
          v78 = *(_DWORD *)(a1 + 116) - 1;
          if ( !*v77 )
          {
            *(_QWORD *)result = 0;
            *(_DWORD *)(a1 + 116) = v78;
            return result;
          }
          *(_QWORD *)result = 1;
          v79 = *(_DWORD *)(a1 + 120);
          *(_DWORD *)(a1 + 116) = v78;
          result = (unsigned int)(v79 + 1);
          if ( v78 < 0x40 )
            v78 = 64;
          *(_DWORD *)(a1 + 120) = result;
          if ( v78 >= (unsigned int)result )
            return result;
          result = sub_186AF10(v9);
          if ( (_BYTE)result )
            return result;
          v80 = *(_DWORD *)(a1 + 112);
          v81 = sub_186B270(24LL * v80);
          v82 = v81;
          if ( v80 )
          {
            if ( v80 == 1 )
              goto LABEL_148;
            v83 = v81 + 48LL * (v80 >> 1);
            do
            {
              *(_OWORD *)v81 = 0;
              v81 += 48;
              *(_OWORD *)(v81 - 32) = 0;
              *(_OWORD *)(v81 - 16) = 0;
            }
            while ( v81 != v83 );
            if ( (v80 & 1) != 0 )
            {
              v81 = v82 + 24LL * (v80 & 0xFFFFFFFE);
LABEL_148:
              *(_QWORD *)(v81 + 16) = 0;
              *(_OWORD *)v81 = 0;
            }
          }
          result = *(unsigned int *)(a1 + 112);
          v84 = *(char **)(a1 + 104);
          v85 = (const double *)v84;
          v86 = result - 1;
          v87 = 24 * result;
          v88 = &v84[24 * result];
          v89 = v82 + 24 * result;
          if ( v84 != v88 )
          {
            do
            {
              if ( *(_QWORD *)v85 > 1u )
              {
                v90 = 24LL * ((unsigned int)*(_QWORD *)v85 & v86);
                v91 = v82 + v90;
                if ( v87 == v90 )
                {
LABEL_195:
                  if ( v91 == v82 )
                  {
LABEL_200:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  result = v82;
                  while ( *(_QWORD *)result )
                  {
                    result += 24;
                    if ( v91 == result )
                      goto LABEL_200;
                  }
                }
                else
                {
                  result = v82 + v90;
                  while ( *(_QWORD *)result )
                  {
                    result += 24;
                    if ( v89 == result )
                      goto LABEL_195;
                  }
                }
                *(__m128 *)result = _mm_loadh_ps(v85 + 1);
                *(double *)(result + 16) = v85[2];
              }
              v85 += 3;
            }
            while ( v88 != (char *)v85 );
            v84 = *(char **)(a1 + 104);
          }
          if ( v84 )
            result = sub_186B220(v84);
          *(_QWORD *)(a1 + 104) = v82;
          *(_DWORD *)(a1 + 120) = 0;
          return result;
        }
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v5 != v10 )
  {
    for ( i = v5; v10 != i; i += 3 )
    {
      v33 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v4 == (_DWORD)v33 && a2 == v33 )
          goto LABEL_16;
      }
      else if ( !v33 )
      {
        break;
      }
    }
  }
LABEL_8:
  v13 = *(unsigned int *)(a1 + 216);
  v14 = *(_QWORD **)(a1 + 208);
  v15 = v13 - 1;
  v16 = 32 * v13;
  v17 = (char *)v14 + v16;
  v18 = 32LL * ((unsigned int)a2 & v15);
  v19 = (__int64)&v14[(unsigned __int64)v18 / 8];
  result = (__int64)&v14[(unsigned __int64)v18 / 8];
  if ( v18 == v16 )
  {
LABEL_62:
    if ( v14 == (_QWORD *)v19 )
      return result;
    result = *(_QWORD *)(a1 + 208);
    while ( 1 )
    {
      v48 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( v4 == (_DWORD)v48 && a2 == v48 )
          goto LABEL_47;
      }
      else if ( !v48 )
      {
        return result;
      }
      result += 32;
      if ( v19 == result )
        return result;
    }
  }
  while ( 1 )
  {
    v21 = *(_QWORD *)result;
    if ( *(_QWORD *)result <= 1u )
    {
      if ( !v21 )
        return result;
      goto LABEL_12;
    }
    if ( v4 == (_DWORD)v21 && a2 == v21 )
      break;
LABEL_12:
    result += 32;
    if ( v17 == (char *)result )
      goto LABEL_62;
  }
LABEL_47:
  v34 = *(_QWORD *)(result + 8);
  v35 = *(_DWORD *)(v34 + 12);
  v111 = *(_QWORD *)(result + 16);
  v112 = *(_QWORD *)(result + 24);
  v36 = (((*(_DWORD *)(v111 + 12) - v35) ^ (v35 << 8))
       - v35
       + ((*(_DWORD *)(v111 + 12) - v35) ^ (v35 << 8) ^ ((v35 - ((*(_DWORD *)(v111 + 12) - v35) ^ (v35 << 8))) << 16)))
      ^ ((v35 - ((*(_DWORD *)(v111 + 12) - v35) ^ (v35 << 8))) << 10);
  v37 = (*(_DWORD *)(v112 + 12) - v36) ^ (v36 << 8);
  v38 = (v36 - v37) << 10;
  v39 = v37 - v36 + (v37 ^ ((v36 - v37) << 16));
  v40 = *(unsigned int *)(a1 + 192);
  v41 = v39 ^ (unsigned int)v38;
  v108 = *(_QWORD *)(a1 + 184);
  v42 = v40 - 1;
  v40 *= 32;
  v43 = v108 + v40;
  v44 = 32LL * ((unsigned int)v41 & v42);
  v45 = v108 + v44;
  result = v108 + v44;
  if ( v44 != v40 )
  {
    do
    {
      v46 = *(_QWORD *)(result + 8);
      if ( v46 > 1 )
      {
        if ( *(_DWORD *)result == (_DWORD)v41
          && v46 == v34
          && *(_QWORD *)(result + 16) == v111
          && *(_QWORD *)(result + 24) == v112 )
        {
LABEL_103:
          v67 = result + 32;
          if ( v43 == result + 32 )
            v67 = *(_QWORD *)(a1 + 184);
          v41 = (unsigned int)(*(_DWORD *)(a1 + 196) - 1);
          if ( *(_QWORD *)(v67 + 8) )
          {
            *(_QWORD *)(result + 8) = 1;
            v68 = *(_DWORD *)(a1 + 200);
            *(_DWORD *)(a1 + 196) = v41;
            result = (unsigned int)(v68 + 1);
            if ( (unsigned int)v41 < 0x40 )
              v41 = 64;
            *(_DWORD *)(a1 + 200) = result;
            if ( (unsigned int)v41 < (unsigned int)result )
            {
              if ( !(unsigned __int8)sub_186AF10(v41) )
              {
                v69 = *(unsigned int *)(a1 + 192);
                v70 = sub_186B270(32 * v69);
                v71 = v70;
                v72 = v70 + 32 * v69;
                if ( (_DWORD)v69 )
                {
                  do
                  {
                    *(_QWORD *)(v70 + 24) = 0;
                    v70 += 32;
                    *(_OWORD *)(v70 - 24) = 0;
                  }
                  while ( v70 != v72 );
                }
                sub_960280(*(_QWORD *)(a1 + 184), *(unsigned int *)(a1 + 192), v71, *(unsigned int *)(a1 + 192), 0.0);
                v41 = *(_QWORD *)(a1 + 184);
                if ( v41 )
                  sub_186B220((void *)v41);
                *(_QWORD *)(a1 + 184) = v71;
                *(_DWORD *)(a1 + 200) = 0;
              }
              v73 = *(unsigned int *)(a1 + 216);
              v14 = *(_QWORD **)(a1 + 208);
              v74 = v73 - 1;
              result = 32 * v73;
              v16 = result;
              v17 = (char *)v14 + result;
              v18 = 32LL * ((unsigned int)a2 & v74);
              v19 = (__int64)&v14[(unsigned __int64)v18 / 8];
            }
          }
          else
          {
            *(_QWORD *)(result + 8) = 0;
            *(_DWORD *)(a1 + 196) = v41;
          }
          goto LABEL_54;
        }
      }
      else if ( !v46 )
      {
        goto LABEL_54;
      }
      result += 32;
    }
    while ( v43 != result );
  }
  result = *(_QWORD *)(a1 + 184);
  if ( v108 != v45 )
  {
    do
    {
      v75 = *(_QWORD *)(result + 8);
      if ( v75 > 1 )
      {
        if ( *(_DWORD *)result == (_DWORD)v41
          && v75 == v34
          && *(_QWORD *)(result + 16) == v111
          && *(_QWORD *)(result + 24) == v112 )
        {
          goto LABEL_103;
        }
      }
      else if ( !v75 )
      {
        break;
      }
      result += 32;
    }
    while ( v45 != result );
  }
LABEL_54:
  if ( v18 != v16 )
  {
    for ( result = v19; (char *)result != v17; result += 32 )
    {
      v47 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( a2 == v47 && v4 == (_DWORD)v47 )
        {
LABEL_160:
          v92 = (_QWORD *)(result + 32);
          if ( (char *)(result + 32) == v17 )
            v92 = v14;
          v93 = *(_DWORD *)(a1 + 220) - 1;
          if ( *v92 )
          {
            *(_QWORD *)result = 1;
            v94 = *(_DWORD *)(a1 + 224);
            *(_DWORD *)(a1 + 220) = v93;
            result = (unsigned int)(v94 + 1);
            if ( v93 < 0x40 )
              v93 = 64;
            *(_DWORD *)(a1 + 224) = result;
            if ( v93 < (unsigned int)result )
            {
              result = sub_186AF10(v41);
              if ( !(_BYTE)result )
              {
                v95 = *(unsigned int *)(a1 + 216);
                v96 = (_OWORD *)sub_186B270(32 * v95);
                v97 = v96;
                v98 = &v96[2 * v95];
                if ( (_DWORD)v95 )
                {
                  do
                  {
                    *v96 = 0;
                    v96 += 2;
                    *(v96 - 1) = 0;
                  }
                  while ( v98 != v96 );
                }
                v99 = *(unsigned int *)(a1 + 216);
                v100 = *(__m128i **)(a1 + 208);
                v101 = v99 - 1;
                v102 = v100;
                v103 = 32 * v99;
                v104 = &v100[2 * v99];
                result = (__int64)&v97[2 * v99];
                v109 = result;
                if ( v100 != v104 )
                {
                  do
                  {
                    result = v102->m128i_i64[0];
                    if ( v102->m128i_i64[0] > 1uLL )
                    {
                      v105 = 32LL * (v101 & (unsigned int)result);
                      v106 = &v97[(unsigned __int64)v105 / 0x10];
                      if ( v103 == v105 )
                      {
LABEL_205:
                        if ( v106 == v97 )
                        {
LABEL_210:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = (__int64)v97;
                        while ( *(_QWORD *)result )
                        {
                          result += 32;
                          if ( v106 == (_OWORD *)result )
                            goto LABEL_210;
                        }
                      }
                      else
                      {
                        result = (__int64)&v97[(unsigned __int64)v105 / 0x10];
                        while ( *(_QWORD *)result )
                        {
                          result += 32;
                          if ( v109 == result )
                            goto LABEL_205;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v102);
                      *(__m128i *)(result + 16) = _mm_loadu_si128(v102 + 1);
                    }
                    v102 += 2;
                  }
                  while ( v104 != v102 );
                  v100 = *(__m128i **)(a1 + 208);
                }
                if ( v100 )
                  result = sub_186B220(v100);
                *(_QWORD *)(a1 + 208) = v97;
                *(_DWORD *)(a1 + 224) = 0;
              }
            }
          }
          else
          {
            *(_QWORD *)result = 0;
            *(_DWORD *)(a1 + 220) = v93;
          }
          return result;
        }
      }
      else if ( !v47 )
      {
        return result;
      }
    }
  }
  if ( v14 != (_QWORD *)v19 )
  {
    for ( result = (__int64)v14; result != v19; result += 32 )
    {
      v76 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( v4 == (_DWORD)v76 && a2 == v76 )
          goto LABEL_160;
      }
      else if ( !v76 )
      {
        return result;
      }
    }
  }
  return result;
}

