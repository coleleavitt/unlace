unsigned __int64 __fastcall sub_B1FBF0(
        __int64 a1,
        char ***a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 v8; // rbp
  __int64 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  _DWORD *v14; // rax
  unsigned int v15; // edx
  unsigned __int64 v17; // r14
  unsigned int v18; // eax
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int8 *v23; // rcx
  int v24; // edi
  char **v25; // rcx
  __int64 i; // rbp
  char **v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // r13d
  char **v30; // rax
  bool v31; // zf
  __int64 v32; // rcx
  char **v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rdi
  char **v38; // rsi
  __int64 v39; // rcx
  char **v40; // rax
  __int64 v41; // rcx
  unsigned __int8 *v42; // rsi
  int v43; // eax
  unsigned __int32 v44; // ebp
  int v45; // eax
  __int64 v46; // rax
  char **v47; // rax
  __int64 v48; // rcx
  void **v49; // rdi
  __int64 v50; // r13
  char *v51; // r12
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int8 *v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rsi
  const __m128i *v57; // r10
  const __m128i *v58; // r12
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  __m128i *v62; // rax
  __m128i *v63; // rax
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // rcx
  __int64 v67; // rdi
  unsigned __int8 *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  char **v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // rdx
  __m128i *v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // r13
  __m128i v80; // xmm0
  char *v81; // rcx
  const __m128i *v82; // r12
  const __m128i *v83; // rbp
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  __m128i *v87; // rax
  __m128i *v88; // rax
  __int64 v89; // rdx
  __m128i v90; // xmm0
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int8 *v93; // r12
  char **v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r13
  __m128i v97; // xmm0
  char *v98; // rcx
  const __m128i *v99; // r12
  const __m128i *v100; // rbp
  __int64 v101; // rax
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rdx
  __m128i *v104; // rax
  __m128i *v105; // rax
  __int64 v106; // rdx
  __m128i v107; // xmm0
  __int64 v108; // rcx
  __int64 v109; // rcx
  const __m128i *v110; // rax
  __int64 v111; // rcx
  const __m128i *v112; // r15
  __int64 v113; // rax
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  __m128i *v116; // rax
  __m128i *v117; // rax
  __int64 v118; // rdx
  __m128i v119; // xmm0
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rdx
  __m128i *v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rax
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rdx
  __m128i *v130; // rax
  __int64 v131; // rdi
  __int8 *v132; // rdi
  __int8 *v133; // rsi
  __int8 *v134; // r12
  __int64 v135; // rdx
  __int8 *v136; // rbp
  char **v137; // rax
  __int8 *v138; // rbp
  char **v139; // rax
  __int64 v140; // rdx
  __int32 v141; // r13d
  __int64 v142; // r12
  __m128i v143; // xmm0
  __int64 v144; // rcx
  char **v145; // rbp
  __int8 *v146; // rdi
  __int8 *v147; // rsi
  __int8 *v148; // rbp
  __int64 v149; // rax
  __int8 *v150; // rdi
  __int8 *v151; // rsi
  __int8 *v152; // rbp
  __int64 v153; // rax
  __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  __m128i *v156; // rcx
  __int64 v157; // rax
  __int8 *v158; // r15
  char **v159; // rax
  char **v160; // rdi
  char **v161; // rsi
  signed __int64 v162; // r15
  char *v163; // rcx
  __int64 v164; // [rsp+0h] [rbp-108h]
  __int64 v165; // [rsp+8h] [rbp-100h]
  unsigned int v166; // [rsp+1Ch] [rbp-ECh]
  int v167; // [rsp+28h] [rbp-E0h]
  unsigned __int8 *v168; // [rsp+28h] [rbp-E0h]
  unsigned __int8 *v169; // [rsp+28h] [rbp-E0h]
  unsigned __int8 *v170; // [rsp+30h] [rbp-D8h]
  __int64 v171; // [rsp+38h] [rbp-D0h]
  char **v172; // [rsp+48h] [rbp-C0h] BYREF
  int v173; // [rsp+50h] [rbp-B8h]
  int v174; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v175; // [rsp+58h] [rbp-B0h]
  __int64 v176; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v177; // [rsp+68h] [rbp-A0h]
  __m128i *v178; // [rsp+70h] [rbp-98h]
  char ***v179; // [rsp+78h] [rbp-90h]
  char ***v180; // [rsp+80h] [rbp-88h]
  unsigned __int8 *v181; // [rsp+88h] [rbp-80h]
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h]
  _BYTE v184[96]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = a3;
  v8 = 24LL * a3;
  v10 = *(__int64 **)(a1 + 16);
  v11 = *v10;
  v10[10] += v8;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[1] >= v8 + v12 && v11 )
  {
    v175 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    *v10 = v8 + v12;
    v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v175 = sub_962430((__int64)v10, v8, v8, 3, (__int64)a5, a6);
    v13 = v175;
  }
  v14 = (_DWORD *)v13;
  if ( v6 )
  {
    do
    {
      *v14 = 0;
      v14 += 6;
      *(v14 - 5) = 0;
      *((_QWORD *)v14 - 2) = 0;
      *((_QWORD *)v14 - 1) = 0;
    }
    while ( (_DWORD *)(v13 + v8) != v14 );
  }
  if ( !a3 )
    return v175;
  v15 = *((_DWORD *)a2 + 8);
  v166 = *((_DWORD *)a2 + 113);
  if ( v15 <= v166 )
    return v175;
  v17 = v175;
  v165 = 1;
  v171 = a3 - 1 + 1LL;
  v179 = a2 + 3;
  v180 = a2 + 5;
  while ( 1 )
  {
    v173 = v165 - 1;
    v172 = a2[54];
    v170 = (unsigned __int8 *)a2[55];
    v174 = *((_DWORD *)a2 + 112);
    if ( v166 < v15 )
      break;
    v19 = v170;
    v18 = v166;
LABEL_20:
    v23 = (unsigned __int8 *)(v19 - (unsigned __int8 *)a2[53]);
    ptr = v184;
    v24 = *((_DWORD *)a2 + 112);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
    v167 = (_DWORD)v23 + v24;
    if ( v18 >= v15 )
      goto LABEL_60;
    v25 = a2[55];
    for ( i = *(unsigned __int8 *)v25; (byte_23ED5E0[2 * i] & 7) == 0; i = *(unsigned __int8 *)v25 )
    {
      v28 = si128.m128i_u64[1];
      v46 = si128.m128i_i64[0];
      if ( (_BYTE)i == 60 )
      {
        v29 = 0;
        while ( 1 )
        {
          if ( v46 + 1 > v28 )
          {
            sub_22130D0(&ptr, v184, v46 + 1, 1);
            v46 = si128.m128i_i64[0];
          }
          *((_BYTE *)ptr + v46) = i;
          v30 = a2[55];
          ++si128.m128i_i64[0];
          v30 = (char **)((char *)v30 + 1);
          v31 = v30 == a2[54];
          a2[55] = v30;
          v18 = *((_DWORD *)a2 + 113);
          if ( !v31 )
            goto LABEL_38;
          v15 = *((_DWORD *)a2 + 8);
          *((_DWORD *)a2 + 113) = ++v18;
          if ( v18 < v15 )
          {
            v32 = (__int64)&a2[3][3 * v18];
            v33 = *(char ***)(v32 + 16);
            goto LABEL_43;
          }
          if ( !*((_BYTE *)a2 + 16) )
          {
            v35 = (__int64)a2[1];
            v36 = *(_DWORD *)(v35 + 52);
            if ( v36 == 1 )
            {
              v53 = *(unsigned int *)(v35 + 80);
              a6 = *(unsigned int *)(v35 + 48);
              v54 = *(unsigned __int8 **)(v35 + 64);
              a5 = *(unsigned __int8 **)(v35 + 56);
              if ( (_DWORD)v53 )
              {
                v55 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v35 + 72) + 24LL * (unsigned int)v53 - 24));
                v56 = *(_QWORD *)(*(_QWORD *)(v35 + 72) + 24LL * (unsigned int)v53 - 24 + 16);
                *(_DWORD *)(v35 + 80) = v53 - 1;
                *(_QWORD *)(v35 + 64) = v56;
                *(__m128i *)(v35 + 48) = v55;
              }
              else
              {
                v77 = *(_QWORD *)v35;
                v178 = *(__m128i **)(v35 + 56);
                v177 = v54;
                LODWORD(v176) = a6;
                sub_B1F6B0(v77, v35 + 48, v53, v35, a5, (_BYTE *)a6, v164);
                a6 = (unsigned int)v176;
                v54 = v177;
                a5 = (unsigned __int8 *)v178;
              }
              v57 = (const __m128i *)a2[1];
              v58 = v57 + 3;
              if ( v57[3].m128i_i32[1] == 2 )
              {
                v15 = *((_DWORD *)a2 + 8);
                goto LABEL_80;
              }
              v73 = v57[5].m128i_u32[0];
              v74 = v57[4].m128i_u64[1];
              v75 = v73 + 1;
              v76 = (__m128i *)(v74 + 24 * v73);
              if ( v75 > v57[5].m128i_u32[1] )
              {
                v132 = &v57[4].m128i_i8[8];
                v133 = &v57[5].m128i_i8[8];
                v178 = (__m128i *)a2[1];
                v181 = a5;
                v177 = v54;
                LODWORD(v176) = a6;
                if ( v74 > (unsigned __int64)v58 || v76 <= v58 )
                {
                  sub_22134E0(v132, v133, v75, 24);
                  v57 = v178;
                  v54 = v177;
                  a5 = v181;
                  a6 = (unsigned int)v176;
                  v76 = (__m128i *)(v178[4].m128i_i64[1] + 24LL * v178[5].m128i_u32[0]);
                }
                else
                {
                  v134 = &v58->m128i_i8[-v74];
                  sub_22134E0(v132, v133, v75, 24);
                  v57 = v178;
                  a6 = (unsigned int)v176;
                  v54 = v177;
                  a5 = v181;
                  v135 = v178[4].m128i_i64[1];
                  v58 = (const __m128i *)&v134[v135];
                  v76 = (__m128i *)(v135 + 24LL * v178[5].m128i_u32[0]);
                }
              }
              *v76 = _mm_loadu_si128(v58);
              v76[1].m128i_i64[0] = v58[1].m128i_i64[0];
              v57[3].m128i_i32[0] = a6;
              ++v57[5].m128i_i32[0];
              v57[3].m128i_i32[1] = 1;
              v57[3].m128i_i64[1] = (__int64)a5;
              v57[4].m128i_i64[0] = (__int64)v54;
              v18 = *((_DWORD *)a2 + 113);
              *((_BYTE *)a2 + 16) = 1;
LABEL_38:
              v15 = *((_DWORD *)a2 + 8);
              goto LABEL_39;
            }
            if ( v36 == 2 )
            {
              v58 = (const __m128i *)(v35 + 48);
LABEL_80:
              v59 = v15;
              v60 = (unsigned __int64)a2[3];
              v61 = v15 + 1LL;
              v62 = (__m128i *)(v60 + 24 * v59);
              if ( v61 > *((unsigned int *)a2 + 9) )
              {
                if ( v60 > (unsigned __int64)v58 || v62 <= v58 )
                {
                  sub_22134E0(v179, v180, v61, 24);
                  v62 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
                }
                else
                {
                  v93 = &v58->m128i_i8[-v60];
                  sub_22134E0(v179, v180, v61, 24);
                  v94 = a2[3];
                  v58 = (const __m128i *)&v93[(_QWORD)v94];
                  v62 = (__m128i *)&v94[3 * *((unsigned int *)a2 + 8)];
                }
              }
              *v62 = _mm_loadu_si128(v58);
              v62[1].m128i_i64[0] = v58[1].m128i_i64[0];
              v63 = (__m128i *)a2[1];
              ++*((_DWORD *)a2 + 8);
              v64 = v63[5].m128i_u32[0];
              if ( (_DWORD)v64 )
              {
                v65 = _mm_loadu_si128((const __m128i *)(v63[4].m128i_i64[1] + 24LL * (unsigned int)v64 - 24));
                v66 = *(_QWORD *)(v63[4].m128i_i64[1] + 24LL * (unsigned int)v64 - 24 + 16);
                v63[5].m128i_i32[0] = v64 - 1;
                v63[4].m128i_i64[0] = v66;
                v63[3] = v65;
              }
              else
              {
                sub_B1F6B0(v63->m128i_i64[0], (__int64)v63[3].m128i_i64, v64, v60, a5, (_BYTE *)a6, v164);
              }
              v15 = *((_DWORD *)a2 + 8);
              v18 = *((_DWORD *)a2 + 113);
              v32 = (__int64)&a2[3][3 * v18];
              v33 = *(char ***)(v32 + 16);
              if ( v15 == 1 )
              {
                a2[53] = v33;
                v67 = *(unsigned int *)(v32 + 8);
                a2[55] = v33;
                a2[54] = (char **)((char *)v33 + v67);
                *((_DWORD *)a2 + 112) = *(_DWORD *)v32;
                v33 = *(char ***)(v32 + 16);
              }
LABEL_43:
              a2[53] = v33;
              v34 = *(unsigned int *)(v32 + 8);
              a2[55] = v33;
              a2[54] = (char **)((char *)v33 + v34);
              *((_DWORD *)a2 + 112) = *(_DWORD *)v32;
LABEL_39:
              if ( (_BYTE)i == 60 )
                goto LABEL_40;
              if ( (_BYTE)i != 62 )
                goto LABEL_33;
              goto LABEL_32;
            }
            *((_BYTE *)a2 + 16) = 1;
          }
          if ( (_BYTE)i == 60 )
          {
LABEL_40:
            ++v29;
            goto LABEL_33;
          }
          if ( (_BYTE)i != 62 )
            goto LABEL_50;
LABEL_32:
          if ( !--v29 )
            goto LABEL_27;
LABEL_33:
          if ( v15 <= v18 )
            goto LABEL_50;
          v28 = si128.m128i_u64[1];
          LOBYTE(i) = *(_BYTE *)a2[55];
          v46 = si128.m128i_i64[0];
        }
      }
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        sub_22130D0(&ptr, v184, si128.m128i_i64[0] + 1, 1);
        v46 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v46) = i;
      v27 = a2[55];
      ++si128.m128i_i64[0];
      v27 = (char **)((char *)v27 + 1);
      a2[55] = v27;
      if ( v27 == a2[54] )
      {
        v15 = *((_DWORD *)a2 + 8);
        v18 = *((_DWORD *)a2 + 113) + 1;
        *((_DWORD *)a2 + 113) = v18;
        if ( v18 < v15 )
        {
          v37 = (__int64)&a2[3][3 * v18];
          v38 = *(char ***)(v37 + 16);
          goto LABEL_54;
        }
        if ( *((_BYTE *)a2 + 16) )
          goto LABEL_60;
        v47 = a2[1];
        v48 = *((unsigned int *)v47 + 13);
        if ( (_DWORD)v48 != 1 )
        {
          if ( (_DWORD)v48 != 2 )
            goto LABEL_65;
          v100 = (const __m128i *)(v47 + 6);
LABEL_111:
          v101 = v15;
          v102 = (unsigned __int64)a2[3];
          v103 = v15 + 1LL;
          v104 = (__m128i *)(v102 + 24 * v101);
          if ( v103 > *((unsigned int *)a2 + 9) )
          {
            if ( v102 > (unsigned __int64)v100 || v104 <= v100 )
            {
              sub_22134E0(v179, v180, v103, 24);
              v104 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
            }
            else
            {
              v138 = &v100->m128i_i8[-v102];
              sub_22134E0(v179, v180, v103, 24);
              v139 = a2[3];
              v100 = (const __m128i *)&v138[(_QWORD)v139];
              v104 = (__m128i *)&v139[3 * *((unsigned int *)a2 + 8)];
            }
          }
          *v104 = _mm_loadu_si128(v100);
          v104[1].m128i_i64[0] = v100[1].m128i_i64[0];
          v105 = (__m128i *)a2[1];
          ++*((_DWORD *)a2 + 8);
          v106 = v105[5].m128i_u32[0];
          if ( (_DWORD)v106 )
          {
            v107 = _mm_loadu_si128((const __m128i *)(v105[4].m128i_i64[1] + 24LL * (unsigned int)v106 - 24));
            v108 = *(_QWORD *)(v105[4].m128i_i64[1] + 24LL * (unsigned int)v106 - 24 + 16);
            v105[5].m128i_i32[0] = v106 - 1;
            v105[4].m128i_i64[0] = v108;
            v105[3] = v107;
          }
          else
          {
            sub_B1F6B0(v105->m128i_i64[0], (__int64)v105[3].m128i_i64, v106, v102, a5, (_BYTE *)a6, v164);
          }
          v15 = *((_DWORD *)a2 + 8);
          v18 = *((_DWORD *)a2 + 113);
          v37 = (__int64)&a2[3][3 * v18];
          v38 = *(char ***)(v37 + 16);
          if ( v15 == 1 )
          {
            a2[53] = v38;
            v109 = *(unsigned int *)(v37 + 8);
            a2[55] = v38;
            a2[54] = (char **)((char *)v38 + v109);
            *((_DWORD *)a2 + 112) = *(_DWORD *)v37;
            v38 = *(char ***)(v37 + 16);
          }
LABEL_54:
          a2[53] = v38;
          v39 = *(unsigned int *)(v37 + 8);
          a2[55] = v38;
          a2[54] = (char **)((char *)v38 + v39);
          *((_DWORD *)a2 + 112) = *(_DWORD *)v37;
          goto LABEL_27;
        }
        v95 = *((unsigned int *)v47 + 20);
        a6 = *((unsigned int *)v47 + 12);
        v96 = (__int64)v47[8];
        a5 = (unsigned __int8 *)v47[7];
        if ( (_DWORD)v95 )
        {
          v97 = _mm_loadu_si128((const __m128i *)&v47[9][24 * (unsigned int)v95 - 24]);
          v98 = *(char **)&v47[9][24 * (unsigned int)v95 - 8];
          *((_DWORD *)v47 + 20) = v95 - 1;
          v47[8] = v98;
          *((__m128i *)v47 + 3) = v97;
        }
        else
        {
          v131 = (__int64)*v47;
          v177 = (unsigned __int8 *)v47[7];
          LODWORD(v176) = a6;
          sub_B1F6B0(v131, (__int64)(v47 + 6), v95, v48, a5, (_BYTE *)a6, v164);
          a6 = (unsigned int)v176;
          a5 = v177;
        }
        v99 = (const __m128i *)a2[1];
        v100 = v99 + 3;
        if ( v99[3].m128i_i32[1] == 2 )
        {
          v15 = *((_DWORD *)a2 + 8);
          goto LABEL_111;
        }
        v127 = v99[5].m128i_u32[0];
        v128 = v99[4].m128i_u64[1];
        v129 = v127 + 1;
        v130 = (__m128i *)(v128 + 24 * v127);
        if ( v129 > v99[5].m128i_u32[1] )
        {
          v150 = &v99[4].m128i_i8[8];
          v151 = &v99[5].m128i_i8[8];
          v177 = a5;
          LODWORD(v176) = a6;
          if ( v128 > (unsigned __int64)v100 || v130 <= v100 )
          {
            sub_22134E0(v150, v151, v129, 24);
            a5 = v177;
            a6 = (unsigned int)v176;
            v130 = (__m128i *)(v99[4].m128i_i64[1] + 24LL * v99[5].m128i_u32[0]);
          }
          else
          {
            v152 = &v100->m128i_i8[-v128];
            sub_22134E0(v150, v151, v129, 24);
            v153 = v99[4].m128i_i64[1];
            a6 = (unsigned int)v176;
            a5 = v177;
            v100 = (const __m128i *)&v152[v153];
            v130 = (__m128i *)(v153 + 24LL * v99[5].m128i_u32[0]);
          }
        }
        *v130 = _mm_loadu_si128(v100);
        v130[1].m128i_i64[0] = v100[1].m128i_i64[0];
        v99[3].m128i_i32[0] = a6;
        ++v99[5].m128i_i32[0];
        v99[3].m128i_i32[1] = 1;
        v99[3].m128i_i64[1] = (__int64)a5;
        v99[4].m128i_i64[0] = v96;
        *((_BYTE *)a2 + 16) = 1;
      }
      v18 = *((_DWORD *)a2 + 113);
      v15 = *((_DWORD *)a2 + 8);
LABEL_27:
      if ( v18 >= v15 )
        goto LABEL_60;
      v25 = a2[55];
    }
    v68 = (unsigned __int8 *)v25 + 1;
    a2[55] = (char **)v68;
    if ( v68 != (unsigned __int8 *)a2[54] )
      goto LABEL_60;
    v69 = v18 + 1;
    *((_DWORD *)a2 + 113) = v69;
    if ( v15 > (unsigned int)v69 )
    {
      v70 = (__int64)&a2[3][3 * v69];
      v71 = *(char ***)(v70 + 16);
LABEL_89:
      a2[53] = v71;
      v72 = *(unsigned int *)(v70 + 8);
      a2[55] = v71;
      a2[54] = (char **)((char *)v71 + v72);
      *((_DWORD *)a2 + 112) = *(_DWORD *)v70;
      goto LABEL_60;
    }
    if ( *((_BYTE *)a2 + 16) )
      goto LABEL_60;
    v110 = (const __m128i *)a2[1];
    v111 = v110[3].m128i_u32[1];
    if ( (_DWORD)v111 == 1 )
    {
      v140 = v110[5].m128i_u32[0];
      v141 = v110[3].m128i_i32[0];
      v142 = v110[4].m128i_i64[0];
      v176 = v110[3].m128i_i64[1];
      if ( (_DWORD)v140 )
      {
        v143 = _mm_loadu_si128((const __m128i *)(v110[4].m128i_i64[1] + 24LL * (unsigned int)v140 - 24));
        v144 = *(_QWORD *)(v110[4].m128i_i64[1] + 24LL * (unsigned int)v140 - 24 + 16);
        v110[5].m128i_i32[0] = v140 - 1;
        v110[4].m128i_i64[0] = v144;
        v110[3] = v143;
      }
      else
      {
        sub_B1F6B0(v110->m128i_i64[0], (__int64)v110[3].m128i_i64, v140, v111, a5, (_BYTE *)a6, v164);
      }
      v145 = a2[1];
      v112 = (const __m128i *)(v145 + 6);
      if ( *((_DWORD *)v145 + 13) == 2 )
      {
        v15 = *((_DWORD *)a2 + 8);
        goto LABEL_126;
      }
      v154 = *((unsigned int *)v145 + 20);
      a5 = (unsigned __int8 *)v145[9];
      v155 = v154 + 1;
      v156 = (__m128i *)&a5[24 * v154];
      if ( v155 > *((unsigned int *)v145 + 21) )
      {
        v160 = v145 + 9;
        v161 = v145 + 11;
        if ( a5 > (unsigned __int8 *)v112 || v156 <= v112 )
        {
          sub_22134E0(v160, v161, v155, 24);
          v156 = (__m128i *)&v145[9][24 * *((unsigned int *)v145 + 20)];
        }
        else
        {
          v162 = (char *)v112 - (char *)a5;
          sub_22134E0(v160, v161, v155, 24);
          v163 = v145[9];
          v112 = (const __m128i *)&v163[v162];
          v156 = (__m128i *)&v163[24 * *((unsigned int *)v145 + 20)];
        }
      }
      v157 = v176;
      *v156 = _mm_loadu_si128(v112);
      v156[1].m128i_i64[0] = v112[1].m128i_i64[0];
      *((_DWORD *)v145 + 12) = v141;
      ++*((_DWORD *)v145 + 20);
      *((_DWORD *)v145 + 13) = 1;
      v145[7] = (char *)v157;
      v145[8] = (char *)v142;
    }
    else if ( (_DWORD)v111 == 2 )
    {
      v112 = v110 + 3;
LABEL_126:
      v113 = v15;
      v114 = (unsigned __int64)a2[3];
      v115 = v15 + 1LL;
      v116 = (__m128i *)(v114 + 24 * v113);
      if ( v115 > *((unsigned int *)a2 + 9) )
      {
        if ( v114 > (unsigned __int64)v112 || v116 <= v112 )
        {
          sub_22134E0(v179, v180, v115, 24);
          v116 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
        }
        else
        {
          v158 = &v112->m128i_i8[-v114];
          sub_22134E0(v179, v180, v115, 24);
          v159 = a2[3];
          v112 = (const __m128i *)&v158[(_QWORD)v159];
          v116 = (__m128i *)&v159[3 * *((unsigned int *)a2 + 8)];
        }
      }
      *v116 = _mm_loadu_si128(v112);
      v116[1].m128i_i64[0] = v112[1].m128i_i64[0];
      v117 = (__m128i *)a2[1];
      ++*((_DWORD *)a2 + 8);
      v118 = v117[5].m128i_u32[0];
      if ( (_DWORD)v118 )
      {
        v119 = _mm_loadu_si128((const __m128i *)(v117[4].m128i_i64[1] + 24LL * (unsigned int)v118 - 24));
        v120 = *(_QWORD *)(v117[4].m128i_i64[1] + 24LL * (unsigned int)v118 - 24 + 16);
        v117[5].m128i_i32[0] = v118 - 1;
        v117[4].m128i_i64[0] = v120;
        v117[3] = v119;
      }
      else
      {
        sub_B1F6B0(v117->m128i_i64[0], (__int64)v117[3].m128i_i64, v118, v114, a5, (_BYTE *)a6, v164);
      }
      v70 = (__int64)&a2[3][3 * *((unsigned int *)a2 + 113)];
      v71 = *(char ***)(v70 + 16);
      if ( *((_DWORD *)a2 + 8) == 1 )
      {
        a2[53] = v71;
        v121 = *(unsigned int *)(v70 + 8);
        a2[55] = v71;
        a2[54] = (char **)((char *)v71 + v121);
        *((_DWORD *)a2 + 112) = *(_DWORD *)v70;
        v71 = *(char ***)(v70 + 16);
      }
      goto LABEL_89;
    }
LABEL_65:
    v44 = si128.m128i_i32[0];
    *((_BYTE *)a2 + 16) = 1;
    if ( !v44 )
      goto LABEL_61;
LABEL_66:
    v49 = (void **)*a2;
    v50 = v44 + 1;
    v51 = **a2;
    v49[10] = (char *)v49[10] + v50;
    if ( v49[1] >= &v51[v50] && v51 )
      *v49 = &v51[v50];
    else
      v51 = (char *)sub_962430((__int64)v49, v44 + 1, v44 + 1, 0, (__int64)a5, a6);
    v52 = si128.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      sub_22130D0(&ptr, v184, si128.m128i_i64[0] + 1, 1);
      v52 = si128.m128i_i64[0];
    }
    *((_BYTE *)ptr + v52) = 0;
    memcpy(v51, ptr, v44 + 1);
    if ( ptr != v184 )
      free(ptr);
    *(_QWORD *)(v17 + 8) = v51;
    *(_DWORD *)v17 = v167;
    *(_DWORD *)(v17 + 4) = v167 + v44 - 1;
    *(_QWORD *)(v17 + 16) = v44;
    if ( v171 == v165 )
      return v175;
    v15 = *((_DWORD *)a2 + 8);
    v17 += 24LL;
    v166 = *((_DWORD *)a2 + 113);
    if ( v166 >= v15 )
      return v175;
    ++v165;
  }
  v18 = v166;
  v19 = v170;
  while ( 1 )
  {
    do
    {
      if ( (byte_23ED5E0[2 * *v19] & 7) == 0 )
        goto LABEL_20;
      v20 = (unsigned __int8 *)a2[54];
      a2[55] = (char **)++v19;
    }
    while ( v19 != v20 );
    *((_DWORD *)a2 + 113) = ++v18;
    if ( v18 >= v15 )
      break;
    v21 = (__int64)&a2[3][3 * v18];
    v19 = *(unsigned __int8 **)(v21 + 16);
LABEL_16:
    a2[53] = (char **)v19;
    v22 = *(unsigned int *)(v21 + 8);
    a2[55] = (char **)v19;
    a2[54] = (char **)&v19[v22];
    *((_DWORD *)a2 + 112) = *(_DWORD *)v21;
LABEL_17:
    if ( v18 >= v15 )
    {
      v20 = v19;
      goto LABEL_59;
    }
  }
  if ( *((_BYTE *)a2 + 16) )
    goto LABEL_59;
  v40 = a2[1];
  v41 = *((unsigned int *)v40 + 13);
  if ( (_DWORD)v41 == 1 )
  {
    v78 = *((unsigned int *)v40 + 20);
    a6 = *((unsigned int *)v40 + 12);
    v79 = (__int64)v40[8];
    a5 = (unsigned __int8 *)v40[7];
    if ( (_DWORD)v78 )
    {
      v80 = _mm_loadu_si128((const __m128i *)&v40[9][24 * (unsigned int)v78 - 24]);
      v81 = *(char **)&v40[9][24 * (unsigned int)v78 - 8];
      *((_DWORD *)v40 + 20) = v78 - 1;
      v40[8] = v81;
      *((__m128i *)v40 + 3) = v80;
    }
    else
    {
      v126 = (__int64)*v40;
      LODWORD(v176) = *((_DWORD *)v40 + 12);
      v168 = a5;
      sub_B1F6B0(v126, (__int64)(v40 + 6), v78, v41, a5, (_BYTE *)a6, v164);
      a5 = v168;
      a6 = (unsigned int)v176;
    }
    v82 = (const __m128i *)a2[1];
    v83 = v82 + 3;
    if ( v82[3].m128i_i32[1] != 2 )
    {
      v122 = v82[5].m128i_u32[0];
      v123 = v82[4].m128i_u64[1];
      v124 = v122 + 1;
      v125 = (__m128i *)(v123 + 24 * v122);
      if ( v124 > v82[5].m128i_u32[1] )
      {
        v146 = &v82[4].m128i_i8[8];
        v147 = &v82[5].m128i_i8[8];
        LODWORD(v176) = a6;
        v169 = a5;
        if ( v123 > (unsigned __int64)v83 || v125 <= v83 )
        {
          sub_22134E0(v146, v147, v124, 24);
          a5 = v169;
          a6 = (unsigned int)v176;
          v125 = (__m128i *)(v82[4].m128i_i64[1] + 24LL * v82[5].m128i_u32[0]);
        }
        else
        {
          v148 = &v83->m128i_i8[-v123];
          sub_22134E0(v146, v147, v124, 24);
          v149 = v82[4].m128i_i64[1];
          a6 = (unsigned int)v176;
          a5 = v169;
          v83 = (const __m128i *)&v148[v149];
          v125 = (__m128i *)(v149 + 24LL * v82[5].m128i_u32[0]);
        }
      }
      *v125 = _mm_loadu_si128(v83);
      v125[1].m128i_i64[0] = v83[1].m128i_i64[0];
      v82[3].m128i_i32[0] = a6;
      ++v82[5].m128i_i32[0];
      v82[3].m128i_i32[1] = 1;
      v82[3].m128i_i64[1] = (__int64)a5;
      v82[4].m128i_i64[0] = v79;
      v18 = *((_DWORD *)a2 + 113);
      v15 = *((_DWORD *)a2 + 8);
      v19 = (unsigned __int8 *)a2[55];
      *((_BYTE *)a2 + 16) = 1;
      goto LABEL_17;
    }
    v15 = *((_DWORD *)a2 + 8);
    goto LABEL_98;
  }
  if ( (_DWORD)v41 == 2 )
  {
    v83 = (const __m128i *)(v40 + 6);
LABEL_98:
    v84 = v15;
    v85 = (unsigned __int64)a2[3];
    v86 = v15 + 1LL;
    v87 = (__m128i *)(v85 + 24 * v84);
    if ( v86 > *((unsigned int *)a2 + 9) )
    {
      if ( v85 > (unsigned __int64)v83 || v87 <= v83 )
      {
        sub_22134E0(v179, v180, v86, 24);
        v87 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
      }
      else
      {
        v136 = &v83->m128i_i8[-v85];
        sub_22134E0(v179, v180, v86, 24);
        v137 = a2[3];
        v83 = (const __m128i *)&v136[(_QWORD)v137];
        v87 = (__m128i *)&v137[3 * *((unsigned int *)a2 + 8)];
      }
    }
    *v87 = _mm_loadu_si128(v83);
    v87[1].m128i_i64[0] = v83[1].m128i_i64[0];
    v88 = (__m128i *)a2[1];
    ++*((_DWORD *)a2 + 8);
    v89 = v88[5].m128i_u32[0];
    if ( (_DWORD)v89 )
    {
      v90 = _mm_loadu_si128((const __m128i *)(v88[4].m128i_i64[1] + 24LL * (unsigned int)v89 - 24));
      v91 = *(_QWORD *)(v88[4].m128i_i64[1] + 24LL * (unsigned int)v89 - 24 + 16);
      v88[5].m128i_i32[0] = v89 - 1;
      v88[4].m128i_i64[0] = v91;
      v88[3] = v90;
    }
    else
    {
      sub_B1F6B0(v88->m128i_i64[0], (__int64)v88[3].m128i_i64, v89, v85, a5, (_BYTE *)a6, v164);
    }
    v15 = *((_DWORD *)a2 + 8);
    v18 = *((_DWORD *)a2 + 113);
    v21 = (__int64)&a2[3][3 * v18];
    v19 = *(unsigned __int8 **)(v21 + 16);
    if ( v15 == 1 )
    {
      a2[53] = (char **)v19;
      v92 = *(unsigned int *)(v21 + 8);
      a2[55] = (char **)v19;
      a2[54] = (char **)&v19[v92];
      *((_DWORD *)a2 + 112) = *(_DWORD *)v21;
      v19 = *(unsigned __int8 **)(v21 + 16);
    }
    goto LABEL_16;
  }
  *((_BYTE *)a2 + 16) = 1;
LABEL_59:
  v42 = (unsigned __int8 *)(v20 - (unsigned __int8 *)a2[53]);
  ptr = v184;
  v43 = *((_DWORD *)a2 + 112);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  v167 = (_DWORD)v42 + v43;
LABEL_60:
  v44 = si128.m128i_i32[0];
  if ( si128.m128i_i32[0] )
    goto LABEL_66;
LABEL_61:
  a2[55] = (char **)v170;
  v45 = v174;
  *(__m128 *)(a2 + 53) = _mm_loadh_ps((const double *)&v172);
  *((_DWORD *)a2 + 112) = v45;
  *((_DWORD *)a2 + 113) = v166;
LABEL_50:
  if ( ptr != v184 )
    free(ptr);
  return v175;
}

