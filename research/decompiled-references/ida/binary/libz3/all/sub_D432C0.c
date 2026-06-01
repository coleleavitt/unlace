__int64 __fastcall sub_D432C0(unsigned __int64 ***a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // r14
  int v5; // ebp
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edx
  _QWORD *p_ptr; // r12
  __int16 v10; // dx
  _QWORD *v11; // rbx
  unsigned int v12; // r12d
  unsigned int v13; // edx
  __int64 v14; // rax
  int *v15; // rbp
  unsigned int v16; // ecx
  int v17; // edi
  int *v18; // rax
  int v19; // esi
  __int16 v20; // ax
  int v21; // edi
  unsigned __int64 **v22; // rbp
  __int64 v23; // rdx
  unsigned __int64 *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int64 *v27; // rsi
  __int64 v28; // r10
  unsigned __int64 *v29; // r8
  unsigned __int64 *v30; // rdx
  _DWORD *v31; // rcx
  unsigned __int64 *v32; // rdx
  _DWORD *v33; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  unsigned int *v37; // rbp
  unsigned int v38; // ecx
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned int **v41; // rdx
  __int64 v42; // rdx
  int v43; // eax
  int v44; // esi
  unsigned __int64 **v45; // r8
  __int64 v46; // rax
  unsigned __int64 *v47; // r11
  __int64 v48; // rdx
  __int64 v49; // r9
  int **v50; // rcx
  __int64 v51; // r10
  int **v52; // rdi
  int **v53; // rax
  int *v54; // rdx
  int **v55; // rax
  int *v56; // rdx
  __int64 v57; // rdx
  int **v58; // rax
  __int64 v59; // rdi
  int **v60; // rax
  int *v61; // rdx
  int *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 *v65; // rdx
  _DWORD *v66; // rcx
  _DWORD *v67; // rcx
  unsigned __int64 *v68; // rsi
  __int64 v69; // rdi
  unsigned int v70; // edx
  int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rbp
  __int64 v74; // rax
  unsigned int *v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned __int64 *v79; // rbp
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 *v82; // rsi
  unsigned __int64 *v83; // rax
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rdx
  unsigned int v86; // edx
  int **v87; // rax
  unsigned __int64 *v88; // rdi
  unsigned int v89; // ecx
  int v90; // ebx
  unsigned int v91; // ebx
  __int64 v92; // rax
  unsigned __int64 *v93; // r12
  __int64 v94; // rdx
  __int64 v95; // rax
  char *v96; // rdi
  unsigned __int64 *v97; // r14
  unsigned __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned __int64 *v100; // rsi
  unsigned __int64 *v101; // rbx
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  unsigned __int64 v105; // rdx
  unsigned int *v106; // rbp
  char *v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  __int64 v111; // rax
  char *v112; // rbp
  char *v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned int v116; // [rsp+0h] [rbp-1B8h]
  unsigned int v117; // [rsp+0h] [rbp-1B8h]
  unsigned int *v118; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 *v119; // [rsp+0h] [rbp-1B8h]
  unsigned int v120; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 **v121; // [rsp+0h] [rbp-1B8h]
  __int64 v122; // [rsp+8h] [rbp-1B0h]
  unsigned int *v124; // [rsp+20h] [rbp-198h]
  char *v125; // [rsp+20h] [rbp-198h]
  unsigned __int64 *v126; // [rsp+20h] [rbp-198h]
  unsigned int v127; // [rsp+28h] [rbp-190h]
  unsigned __int64 *v128; // [rsp+28h] [rbp-190h]
  char *v129; // [rsp+28h] [rbp-190h]
  unsigned int *v130; // [rsp+28h] [rbp-190h]
  unsigned __int64 *v131; // [rsp+30h] [rbp-188h]
  __int64 v132; // [rsp+30h] [rbp-188h]
  _QWORD *v133; // [rsp+30h] [rbp-188h]
  __int64 v134; // [rsp+38h] [rbp-180h]
  unsigned __int64 *v135; // [rsp+40h] [rbp-178h]
  unsigned __int64 *v136; // [rsp+40h] [rbp-178h]
  unsigned __int64 *v137; // [rsp+40h] [rbp-178h]
  unsigned int *v138; // [rsp+48h] [rbp-170h]
  unsigned int *v139; // [rsp+48h] [rbp-170h]
  unsigned int *v140; // [rsp+48h] [rbp-170h]
  _QWORD *v141; // [rsp+70h] [rbp-148h]
  __int64 v142; // [rsp+78h] [rbp-140h]
  _DWORD *ptr; // [rsp+80h] [rbp-138h] BYREF
  int v144; // [rsp+88h] [rbp-130h]

  v4 = a3;
  v5 = 1 << *a3;
  v6 = 4LL * (*a3 >> 5);
  if ( *a3 < *(_DWORD *)(a2 + 8) )
  {
    result = v6 + *(_QWORD *)(a2 + 16);
    v8 = *(_DWORD *)result;
    if ( (v5 & *(_DWORD *)result) != 0 )
      return result;
  }
  else
  {
    sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
    result = v6 + *(_QWORD *)(a2 + 16);
    v8 = *(_DWORD *)result;
  }
  p_ptr = &ptr;
  *(_DWORD *)result = v5 | v8;
  v141 = &ptr;
  ptr = v4;
  v144 = 0;
  v122 = a2 + 8;
  v142 = 0x1000000001LL;
  result = 0;
  while ( 1 )
  {
    v10 = *((_WORD *)v4 + 2);
    v11 = &p_ptr[2 * (unsigned int)result];
    if ( v10 == 1 )
      goto LABEL_36;
    if ( v10 != 2 )
      break;
    v34 = v4[18];
    v35 = *((_DWORD *)v11 + 2);
    v36 = v34 + v4[19] + 1;
    if ( v35 >= v36 )
    {
LABEL_35:
      result = (unsigned int)(v142 - 1);
LABEL_36:
      LODWORD(v142) = result;
      if ( !(_DWORD)result )
        goto LABEL_41;
LABEL_37:
      result = (unsigned int)(result - 1);
      v4 = (_DWORD *)p_ptr[2 * result];
    }
    else
    {
      if ( !v35 )
      {
        v37 = *((unsigned int **)v4 + 3);
        goto LABEL_48;
      }
      while ( 1 )
      {
        v59 = v35 - 1;
        if ( v34 < v35 )
          v59 = (unsigned int)v59 - v34;
        v37 = *(unsigned int **)&v4[4 * (unsigned int)v4[5] + 20 + 2 * v59];
LABEL_48:
        ++v35;
        v38 = *v37;
        *((_DWORD *)v11 + 2) = v35;
        if ( v38 >= *(_DWORD *)(a2 + 8) )
          break;
        v39 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v39 + 4LL * (v38 >> 5)) & (1 << v38)) == 0 )
          goto LABEL_50;
        if ( v35 >= v36 )
          goto LABEL_35;
        v34 = v4[18];
      }
      v117 = v38;
      sub_186B510(v122, v38 + 1, 0);
      v39 = *(_QWORD *)(a2 + 16);
      v38 = v117;
LABEL_50:
      *(_DWORD *)(v39 + 4LL * (v38 >> 5)) |= 1 << v38;
      v40 = (unsigned int)v142;
      if ( (unsigned int)v142 >= HIDWORD(v142) )
      {
        p_ptr = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v142)));
        v63 = 0;
        v40 = (unsigned int)v142;
        if ( (_DWORD)v142 )
        {
          do
          {
            *(__m128i *)&p_ptr[v63] = _mm_loadu_si128((const __m128i *)&v141[v63]);
            v63 += 2;
          }
          while ( 2LL * (unsigned int)v142 != v63 );
        }
        if ( v141 && v141 != &ptr )
        {
          sub_186B220(v141);
          v40 = (unsigned int)v142;
        }
        v141 = p_ptr;
        HIDWORD(v142) *= 2;
      }
      else
      {
        p_ptr = v141;
      }
      v41 = (unsigned int **)&p_ptr[2 * v40];
      *v41 = v37;
      *((_DWORD *)v41 + 2) = 0;
      v42 = (unsigned int)v142;
      v43 = v142 + 1;
LABEL_53:
      LODWORD(v142) = v43;
      result = (unsigned int)(v43 - 1);
      v4 = (_DWORD *)p_ptr[2 * v42];
    }
  }
  if ( v10 )
  {
    sub_1872CE0("");
    sub_1873130(114, 100);
  }
  v12 = v4[6];
  v13 = *((_DWORD *)v11 + 2);
  if ( v13 < v12 )
  {
    while ( 1 )
    {
      v14 = v13++;
      v15 = *(int **)&v4[2 * v14 + 8];
      *((_DWORD *)v11 + 2) = v13;
      v16 = *v15;
      if ( (unsigned int)*v15 < *(_DWORD *)(a2 + 8) )
      {
        v17 = 1 << v16;
        v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v16 >> 5));
        v19 = *v18;
        if ( ((1 << v16) & *v18) != 0 )
          goto LABEL_15;
      }
      else
      {
        v116 = *v15;
        sub_186B510(v122, v16 + 1, 0);
        v17 = 1 << v116;
        v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v116 >> 5));
        v19 = *v18;
      }
      *v18 = v19 | v17;
      v20 = *((_WORD *)v15 + 2);
      if ( v20 != 1 )
      {
        if ( v20 == 2 )
        {
          v57 = (unsigned int)v142;
          if ( (unsigned int)v142 >= HIDWORD(v142) )
          {
            p_ptr = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v142)));
            v64 = 0;
            v57 = (unsigned int)v142;
            if ( (_DWORD)v142 )
            {
              do
              {
                *(__m128i *)&p_ptr[v64] = _mm_loadu_si128((const __m128i *)&v141[v64]);
                v64 += 2;
              }
              while ( v64 != 2LL * (unsigned int)v142 );
            }
            if ( v141 != &ptr && v141 )
            {
              sub_186B220(v141);
              v57 = (unsigned int)v142;
            }
            v141 = p_ptr;
            HIDWORD(v142) *= 2;
          }
          else
          {
            p_ptr = v141;
          }
          v58 = (int **)&p_ptr[2 * v57];
          *((_DWORD *)v58 + 2) = 0;
          v42 = (unsigned int)v142;
          *v58 = v15;
          v43 = v142 + 1;
          goto LABEL_53;
        }
        if ( v20 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v15[6] )
        {
          v86 = v142;
          if ( (unsigned int)v142 >= HIDWORD(v142) )
          {
            p_ptr = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v142)));
            v104 = 0;
            v86 = v142;
            if ( (_DWORD)v142 )
            {
              do
              {
                *(__m128i *)&p_ptr[v104] = _mm_loadu_si128((const __m128i *)&v141[v104]);
                v104 += 2;
              }
              while ( 2LL * (unsigned int)v142 != v104 );
            }
            if ( v141 && v141 != &ptr )
            {
              sub_186B220(v141);
              v86 = v142;
            }
            v141 = p_ptr;
            HIDWORD(v142) *= 2;
          }
          else
          {
            p_ptr = v141;
          }
          v87 = (int **)&p_ptr[2 * v86];
          *((_DWORD *)v87 + 2) = 0;
          v42 = (unsigned int)v142;
          *v87 = v15;
          v43 = v142 + 1;
          goto LABEL_53;
        }
        v44 = v15[3];
        v45 = *a1;
        v46 = *((unsigned int *)*a1 + 2);
        v47 = **a1;
        v48 = v44 & (unsigned int)(v46 - 1);
        v49 = 24 * v46;
        v50 = (int **)&v47[3 * v46];
        v51 = 24 * v48;
        v52 = (int **)&v47[3 * v48];
        if ( 24 * v48 == 24 * v46 )
        {
LABEL_63:
          v55 = (int **)**a1;
          if ( v47 != (unsigned __int64 *)v52 )
          {
            while ( 1 )
            {
              v56 = *v55;
              if ( (unsigned __int64)*v55 > 1 )
              {
                if ( v56[3] == v44 && v15 == v56 )
                  goto LABEL_80;
              }
              else if ( !v56 )
              {
                goto LABEL_14;
              }
              v55 += 3;
              if ( v52 == v55 )
                goto LABEL_14;
            }
          }
          goto LABEL_14;
        }
        v53 = (int **)&v47[3 * v48];
        while ( 1 )
        {
          while ( 1 )
          {
            v54 = *v53;
            if ( (unsigned __int64)*v53 > 1 )
              break;
            if ( !v54 )
              goto LABEL_14;
            v53 += 3;
            if ( v50 == v53 )
              goto LABEL_63;
          }
          if ( v54[3] == v44 && v15 == v54 )
            break;
          v53 += 3;
          if ( v50 == v53 )
            goto LABEL_63;
        }
LABEL_80:
        v60 = v52;
        if ( v51 == v49 )
        {
LABEL_88:
          if ( v47 != (unsigned __int64 *)v52 )
          {
            v60 = (int **)**a1;
            while ( 1 )
            {
              v62 = *v60;
              if ( (unsigned __int64)*v60 > 1 )
              {
                if ( v62[3] == v44 && v15 == v62 )
                  goto LABEL_126;
              }
              else if ( !v62 )
              {
                goto LABEL_14;
              }
              v60 += 3;
              if ( v52 == v60 )
                goto LABEL_14;
            }
          }
          goto LABEL_14;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v61 = *v60;
            if ( (unsigned __int64)*v60 > 1 )
              break;
            if ( !v61 )
              goto LABEL_14;
            v60 += 3;
            if ( v50 == v60 )
              goto LABEL_88;
          }
          if ( v61[3] == v44 && v15 == v61 )
            break;
          v60 += 3;
          if ( v50 == v60 )
            goto LABEL_88;
        }
LABEL_126:
        v68 = (unsigned __int64 *)(v60 + 3);
        v69 = *((unsigned int *)v45 + 3);
        if ( v50 == v60 + 3 )
          v68 = **a1;
        v70 = v69 - 1;
        if ( *v68 )
        {
          *v60 = &dword_0 + 1;
          v71 = *((_DWORD *)v45 + 4);
          *((_DWORD *)v45 + 3) = v70;
          v72 = v71 + 1;
          if ( v70 < 0x40 )
            v70 = 64;
          *((_DWORD *)v45 + 4) = v72;
          if ( v70 < v72 )
          {
            v118 = (unsigned int *)v45;
            if ( !(unsigned __int8)sub_186AF10(v69) )
            {
              v124 = v118;
              v73 = v118[2];
              v74 = sub_186B270(24 * v73);
              v119 = (unsigned __int64 *)v74;
              v75 = v124;
              if ( (_DWORD)v73 )
              {
                if ( (_DWORD)v73 == 1 )
                {
LABEL_139:
                  *(_QWORD *)(v74 + 16) = 0;
                  *(_OWORD *)v74 = 0;
                }
                else
                {
                  v76 = v74 + 48LL * ((unsigned int)v73 >> 1);
                  do
                  {
                    *(_OWORD *)v74 = 0;
                    v74 += 48;
                    *(_OWORD *)(v74 - 32) = 0;
                    *(_OWORD *)(v74 - 16) = 0;
                  }
                  while ( v76 != v74 );
                  if ( (v73 & 1) != 0 )
                  {
                    v74 = (__int64)&v119[3 * ((unsigned int)v73 & 0xFFFFFFFE)];
                    goto LABEL_139;
                  }
                }
              }
              v77 = v124[2];
              v78 = v77;
              v127 = v77 - 1;
              v79 = (unsigned __int64 *)(*(_QWORD *)v124 + 16LL);
              v134 = 24 * v77;
              v125 = (char *)(*(_QWORD *)v124 + 24 * v77);
              v131 = &v119[3 * v77];
              if ( *(char **)v75 == v125 )
              {
LABEL_211:
                if ( v125 )
                {
                  if ( (_DWORD)v78 )
                  {
                    v133 = v11;
                    v106 = v75;
                    v107 = v125;
                    v129 = &v125[24 * v78];
                    do
                    {
                      while ( 1 )
                      {
                        v108 = *((_QWORD *)v107 + 2);
                        if ( v108 )
                          sub_186B220((void *)(v108 - 8));
                        v109 = *((_QWORD *)v107 + 1);
                        if ( !v109 )
                          break;
                        v107 += 24;
                        sub_186B220((void *)(v109 - 8));
                        if ( v129 == v107 )
                          goto LABEL_218;
                      }
                      v107 += 24;
                    }
                    while ( v107 != v129 );
LABEL_218:
                    v11 = v133;
                    v75 = v106;
                  }
                  v130 = v75;
                  sub_186B220(v125);
                  v75 = v130;
                }
                v75[4] = 0;
                *(_QWORD *)v75 = v119;
                goto LABEL_14;
              }
              while ( 2 )
              {
                v80 = *(v79 - 2);
                if ( v80 > 1 )
                {
                  v81 = 24LL * (*(_DWORD *)(v80 + 12) & v127);
                  v82 = &v119[(unsigned __int64)v81 / 8];
                  if ( v134 == v81 )
                  {
LABEL_199:
                    v83 = v119;
                    if ( v119 == v82 )
                    {
LABEL_223:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    while ( *v83 )
                    {
                      v83 += 3;
                      if ( v82 == v83 )
                        goto LABEL_223;
                    }
                    *v83 = v80;
                    if ( v83 + 1 != v79 - 1 )
                    {
                      v105 = v83[1];
                      if ( v105 )
                      {
                        v140 = v75;
                        v137 = v83;
                        sub_186B220((void *)(v105 - 8));
                        v75 = v140;
                        v83 = v137;
                      }
                      v83[1] = 0;
                      v83[1] = *(v79 - 1);
                      *(v79 - 1) = 0;
                    }
                    if ( v79 != v83 + 2 )
                    {
                      v85 = v83[2];
                      if ( v85 )
                      {
LABEL_155:
                        v139 = v75;
                        v136 = v83;
                        sub_186B220((void *)(v85 - 8));
                        v75 = v139;
                        v83 = v136;
                      }
LABEL_156:
                      v83[2] = 0;
                      v83[2] = *v79;
                      *v79 = 0;
                    }
                  }
                  else
                  {
                    v83 = &v119[(unsigned __int64)v81 / 8];
                    while ( *v83 )
                    {
                      v83 += 3;
                      if ( v131 == v83 )
                        goto LABEL_199;
                    }
                    *v83 = v80;
                    if ( v83 + 1 != v79 - 1 )
                    {
                      v84 = v83[1];
                      if ( v84 )
                      {
                        v138 = v75;
                        v135 = v83;
                        sub_186B220((void *)(v84 - 8));
                        v75 = v138;
                        v83 = v135;
                      }
                      v83[1] = 0;
                      v83[1] = *(v79 - 1);
                      *(v79 - 1) = 0;
                    }
                    if ( v79 != v83 + 2 )
                    {
                      v85 = v83[2];
                      if ( v85 )
                        goto LABEL_155;
                      goto LABEL_156;
                    }
                  }
                }
                if ( v125 == (char *)(v79 + 1) )
                {
                  v78 = v75[2];
                  v125 = *(char **)v75;
                  goto LABEL_211;
                }
                v79 += 3;
                continue;
              }
            }
          }
        }
        else
        {
          *v60 = nullptr;
          *((_DWORD *)v45 + 3) = v70;
        }
      }
LABEL_14:
      v13 = *((_DWORD *)v11 + 2);
LABEL_15:
      if ( v13 >= v12 )
      {
        result = (unsigned int)(v142 - 1);
        break;
      }
    }
  }
  v21 = v4[3];
  LODWORD(v142) = result;
  v22 = *a1;
  v23 = *((unsigned int *)*a1 + 2);
  v24 = **a1;
  v25 = v21 & (unsigned int)(v23 - 1);
  v26 = 24 * v23;
  v27 = &v24[3 * v23];
  v28 = 24 * v25;
  v29 = &v24[3 * v25];
  if ( 24 * v25 == 24 * v23 )
  {
LABEL_25:
    v32 = **a1;
    if ( v24 != v29 )
    {
      do
      {
        v33 = (_DWORD *)*v32;
        if ( *v32 > 1 )
        {
          if ( v33[3] == v21 && v33 == v4 )
            goto LABEL_110;
        }
        else if ( !v33 )
        {
          break;
        }
        v32 += 3;
      }
      while ( v29 != v32 );
    }
  }
  else
  {
    v30 = &v24[3 * v25];
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = (_DWORD *)*v30;
        if ( *v30 > 1 )
          break;
        if ( !v31 )
          goto LABEL_40;
        v30 += 3;
        if ( v27 == v30 )
          goto LABEL_25;
      }
      if ( v31[3] == v21 && v31 == v4 )
        break;
      v30 += 3;
      if ( v27 == v30 )
        goto LABEL_25;
    }
LABEL_110:
    v65 = v29;
    if ( v28 == v26 )
    {
LABEL_118:
      if ( v24 != v29 )
      {
        v65 = **a1;
        while ( 1 )
        {
          v67 = (_DWORD *)*v65;
          if ( *v65 > 1 )
          {
            if ( v67[3] == v21 && v67 == v4 )
              goto LABEL_161;
          }
          else if ( !v67 )
          {
            goto LABEL_40;
          }
          v65 += 3;
          if ( v29 == v65 )
            goto LABEL_40;
        }
      }
      goto LABEL_40;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v66 = (_DWORD *)*v65;
        if ( *v65 > 1 )
          break;
        if ( !v66 )
          goto LABEL_40;
        v65 += 3;
        if ( v27 == v65 )
          goto LABEL_118;
      }
      if ( v66[3] == v21 && v66 == v4 )
        break;
      v65 += 3;
      if ( v27 == v65 )
        goto LABEL_118;
    }
LABEL_161:
    v88 = v65 + 3;
    if ( v27 == v65 + 3 )
      v88 = **a1;
    v89 = *((_DWORD *)v22 + 3) - 1;
    if ( !*v88 )
    {
      *v65 = 0;
      *((_DWORD *)v22 + 3) = v89;
      goto LABEL_40;
    }
    v90 = *((_DWORD *)v22 + 4);
    *v65 = 1;
    *((_DWORD *)v22 + 3) = v89;
    if ( v89 < 0x40 )
      v89 = 64;
    *((_DWORD *)v22 + 4) = v90 + 1;
    if ( v89 < v90 + 1 )
    {
      if ( (unsigned __int8)sub_186AF10(v88) )
      {
LABEL_39:
        result = (unsigned int)v142;
        goto LABEL_40;
      }
      v91 = *((_DWORD *)v22 + 2);
      v92 = sub_186B270(24LL * v91);
      v93 = (unsigned __int64 *)v92;
      if ( !v91 )
        goto LABEL_175;
      if ( v91 != 1 )
      {
        v94 = v92 + 48LL * (v91 >> 1);
        do
        {
          *(_OWORD *)v92 = 0;
          v92 += 48;
          *(_OWORD *)(v92 - 32) = 0;
          *(_OWORD *)(v92 - 16) = 0;
        }
        while ( v94 != v92 );
        if ( (v91 & 1) == 0 )
        {
LABEL_175:
          v95 = *((unsigned int *)v22 + 2);
          v96 = (char *)*v22;
          v120 = v95 - 1;
          v97 = *v22 + 2;
          v132 = 24 * v95;
          v126 = &(*v22)[3 * v95];
          v128 = &v93[3 * v95];
          if ( *v22 == v126 )
          {
LABEL_236:
            if ( v96 )
            {
              v111 = *((unsigned int *)v22 + 2);
              if ( (_DWORD)v111 )
              {
                v121 = v22;
                v112 = v96;
                v113 = &v96[24 * v111];
                do
                {
                  while ( 1 )
                  {
                    v114 = *((_QWORD *)v112 + 2);
                    if ( v114 )
                      sub_186B220((void *)(v114 - 8));
                    v115 = *((_QWORD *)v112 + 1);
                    if ( !v115 )
                      break;
                    v112 += 24;
                    sub_186B220((void *)(v115 - 8));
                    if ( v113 == v112 )
                      goto LABEL_245;
                  }
                  v112 += 24;
                }
                while ( v112 != v113 );
LABEL_245:
                v22 = v121;
              }
              sub_186B220(v96);
            }
            *v22 = v93;
            *((_DWORD *)v22 + 4) = 0;
            goto LABEL_39;
          }
          while ( 1 )
          {
            v98 = *(v97 - 2);
            if ( v98 <= 1 )
              goto LABEL_177;
            v99 = 24LL * (*(_DWORD *)(v98 + 12) & v120);
            v100 = &v93[(unsigned __int64)v99 / 8];
            if ( v132 == v99 )
            {
LABEL_224:
              if ( v93 == v100 )
              {
LABEL_249:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v101 = v93;
              while ( *v101 )
              {
                v101 += 3;
                if ( v100 == v101 )
                  goto LABEL_249;
              }
              *v101 = v98;
              if ( v101 + 1 != v97 - 1 )
              {
                v110 = v101[1];
                if ( v110 )
                  sub_186B220((void *)(v110 - 8));
                v101[1] = 0;
                v101[1] = *(v97 - 1);
                *(v97 - 1) = 0;
              }
              if ( v97 != v101 + 2 )
              {
                v103 = v101[2];
                if ( v103 )
LABEL_190:
                  sub_186B220((void *)(v103 - 8));
LABEL_191:
                v101[2] = 0;
                v101[2] = *v97;
                *v97 = 0;
              }
            }
            else
            {
              v101 = &v93[(unsigned __int64)v99 / 8];
              while ( *v101 )
              {
                v101 += 3;
                if ( v128 == v101 )
                  goto LABEL_224;
              }
              *v101 = v98;
              if ( v101 + 1 != v97 - 1 )
              {
                v102 = v101[1];
                if ( v102 )
                  sub_186B220((void *)(v102 - 8));
                v101[1] = 0;
                v101[1] = *(v97 - 1);
                *(v97 - 1) = 0;
              }
              if ( v97 != v101 + 2 )
              {
                v103 = v101[2];
                if ( v103 )
                  goto LABEL_190;
                goto LABEL_191;
              }
            }
LABEL_177:
            if ( v126 == v97 + 1 )
            {
              v96 = (char *)*v22;
              goto LABEL_236;
            }
            v97 += 3;
          }
        }
        v92 = (__int64)&v93[3 * (v91 & 0xFFFFFFFE)];
      }
      *(_QWORD *)(v92 + 16) = 0;
      *(_OWORD *)v92 = 0;
      goto LABEL_175;
    }
  }
LABEL_40:
  p_ptr = v141;
  if ( (_DWORD)result )
    goto LABEL_37;
LABEL_41:
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

