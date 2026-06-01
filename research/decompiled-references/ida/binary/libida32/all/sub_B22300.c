__int64 __fastcall sub_B22300(
        __int64 a1,
        __int64 a2,
        char ***a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __m128i *a6)
{
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  _BYTE *v12; // r14
  char **v13; // rax
  unsigned int v14; // eax
  char **v15; // rdi
  char **v16; // rcx
  __int64 v17; // rsi
  char **v18; // rdi
  char v19; // bp
  char **v20; // rax
  char **v21; // rsi
  char **v22; // rdx
  __int64 v23; // rcx
  char **v24; // rdi
  __int64 v25; // r8
  char *v26; // r13
  size_t v27; // r15
  unsigned __int32 v28; // ebp
  __int64 v29; // rax
  unsigned int v30; // r10d
  char **v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  const __m128i *v34; // rax
  char **v35; // rax
  const __m128i *v36; // r13
  const __m128i *v37; // r13
  __int32 v38; // eax
  char **v39; // rax
  _BYTE *v40; // rdi
  __int64 v41; // rdx
  __int32 v42; // r11d
  unsigned __int64 v43; // r10
  __m128i v44; // xmm0
  __int64 v45; // rcx
  const __m128i *v46; // r13
  unsigned __int64 v47; // rdx
  __m128i *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __m128i v51; // xmm0
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int32 v55; // r10d
  __m128i v56; // xmm0
  __int64 v57; // rcx
  const __m128i *v58; // rax
  const __m128i *v59; // r14
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __m128i *v63; // rax
  __m128i *v64; // rax
  __int64 v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rdi
  char **v71; // rdi
  char **v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned __int64 v79; // r11
  unsigned __int64 v80; // rdx
  char ***v81; // rdi
  char ***v82; // rsi
  __int8 *v83; // r13
  char **v84; // rdx
  char ***v85; // rsi
  __int8 *v86; // r14
  char **v87; // rax
  unsigned __int32 v88; // eax
  __m128i v89; // xmm0
  __int64 v90; // rdx
  const __m128i *v91; // r15
  const __m128i *v92; // r13
  __int64 v93; // rax
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  __m128i *v96; // rax
  __m128i *v97; // rax
  __int64 v98; // rdx
  __m128i v99; // xmm0
  __int64 v100; // rcx
  __int64 v101; // rcx
  unsigned __int64 v102; // rsi
  __int64 v103; // rcx
  __int8 *v104; // rdi
  __int8 *v105; // rsi
  __int8 *v106; // r14
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rdx
  __m128i *v111; // rdx
  __int32 v112; // eax
  __m128i *v113; // rax
  char ***v114; // rdi
  char ***v115; // rsi
  __int8 *v116; // r13
  char **v117; // rdx
  unsigned __int64 v118; // rcx
  __int8 *v119; // rdi
  __int8 *v120; // rsi
  __int8 *v121; // r13
  __int64 v122; // [rsp+0h] [rbp-108h]
  __int32 v124; // [rsp+10h] [rbp-F8h]
  __int32 v125; // [rsp+10h] [rbp-F8h]
  unsigned int v126; // [rsp+18h] [rbp-F0h]
  __int64 v127; // [rsp+18h] [rbp-F0h]
  __int64 v128; // [rsp+18h] [rbp-F0h]
  __int64 v129; // [rsp+20h] [rbp-E8h] BYREF
  char **v130; // [rsp+28h] [rbp-E0h]
  int v131; // [rsp+34h] [rbp-D4h]
  unsigned __int64 v132; // [rsp+38h] [rbp-D0h]
  const __m128i *v133; // [rsp+40h] [rbp-C8h]
  __m128i *v134; // [rsp+48h] [rbp-C0h]
  __int64 v135; // [rsp+50h] [rbp-B8h]
  __m128i *v136; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v137; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v138; // [rsp+68h] [rbp-A0h]
  _DWORD v139[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int32 v140; // [rsp+78h] [rbp-90h]
  unsigned int v141; // [rsp+7Ch] [rbp-8Ch]
  char *v142; // [rsp+80h] [rbp-88h]
  void *src; // [rsp+90h] [rbp-78h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h]
  _BYTE v145[96]; // [rsp+A8h] [rbp-60h] BYREF

  v8 = *((_DWORD *)a3 + 113);
  v9 = *((unsigned int *)a3 + 8);
  v139[0] = 0;
  if ( v8 >= (unsigned int)v9 )
    goto LABEL_2;
  v12 = a3[55];
  v13 = a3[54];
  v130 = (char **)v12;
  v129 = (__int64)v13;
  v131 = *((_DWORD *)a3 + 112);
  v14 = v8;
  while ( (byte_23ED5E0[2 * (unsigned __int8)*v12] & 7) != 0 )
  {
    a4 = (unsigned __int64)(v12 + 1);
    a3[55] = (char **)(v12 + 1);
    v12 = (_BYTE *)a4;
    if ( (char **)a4 != a3[54] )
      continue;
    *((_DWORD *)a3 + 113) = ++v14;
    if ( v14 >= (unsigned int)v9 )
    {
      if ( *((_BYTE *)a3 + 16) )
        goto LABEL_41;
      v34 = (const __m128i *)a3[1];
      a4 = v34[3].m128i_u32[1];
      if ( (_DWORD)a4 == 1 )
      {
        v54 = v34[5].m128i_u32[0];
        v55 = v34[3].m128i_i32[0];
        a5 = v34[4].m128i_u64[0];
        a6 = (__m128i *)v34[3].m128i_i64[1];
        if ( (_DWORD)v54 )
        {
          v56 = _mm_loadu_si128((const __m128i *)(v34[4].m128i_i64[1] + 24LL * (unsigned int)v54 - 24));
          v57 = *(_QWORD *)(v34[4].m128i_i64[1] + 24LL * (unsigned int)v54 - 24 + 16);
          v34[5].m128i_i32[0] = v54 - 1;
          v34[4].m128i_i64[0] = v57;
          v34[3] = v56;
        }
        else
        {
          v70 = v34->m128i_i64[0];
          v133 = (const __m128i *)v34[3].m128i_i64[1];
          v132 = a5;
          v124 = v55;
          sub_B1F6B0(v70, (__int64)v34[3].m128i_i64, v54, a4, (unsigned __int8 *)a5, a6, v122);
          v55 = v124;
          a5 = v132;
          a6 = (__m128i *)v133;
        }
        v58 = (const __m128i *)a3[1];
        v59 = v58 + 3;
        if ( v58[3].m128i_i32[1] != 2 )
        {
          v78 = v58[5].m128i_u32[0];
          v79 = v58[4].m128i_u64[1];
          v80 = v78 + 1;
          a4 = v79 + 24 * v78;
          if ( v80 > v58[5].m128i_u32[1] )
          {
            v104 = &v58[4].m128i_i8[8];
            v105 = &v58[5].m128i_i8[8];
            v134 = a6;
            v133 = v58;
            v132 = a5;
            v125 = v55;
            if ( v79 > (unsigned __int64)v59 || a4 <= (unsigned __int64)v59 )
            {
              sub_22134E0(v104, v105, v80, 24);
              v58 = v133;
              v55 = v125;
              a5 = v132;
              a6 = v134;
              a4 = v133[4].m128i_i64[1] + 24LL * v133[5].m128i_u32[0];
            }
            else
            {
              v106 = &v59->m128i_i8[-v79];
              sub_22134E0(v104, v105, v80, 24);
              v58 = v133;
              a6 = v134;
              a5 = v132;
              v55 = v125;
              v107 = v133[4].m128i_i64[1];
              v59 = (const __m128i *)&v106[v107];
              a4 = 24LL * v133[5].m128i_u32[0] + v107;
            }
          }
          *(__m128i *)a4 = _mm_loadu_si128(v59);
          *(_QWORD *)(a4 + 16) = v59[1].m128i_i64[0];
          v58[3].m128i_i32[0] = v55;
          ++v58[5].m128i_i32[0];
          v58[3].m128i_i32[1] = 1;
          v58[3].m128i_i64[1] = (__int64)a6;
          v58[4].m128i_i64[0] = a5;
          v14 = *((_DWORD *)a3 + 113);
          *((_BYTE *)a3 + 16) = 1;
          v9 = *((unsigned int *)a3 + 8);
          goto LABEL_13;
        }
        LODWORD(v9) = *((_DWORD *)a3 + 8);
      }
      else
      {
        if ( (_DWORD)a4 != 2 )
        {
          *((_BYTE *)a3 + 16) = 1;
          goto LABEL_41;
        }
        v59 = v34 + 3;
      }
      v60 = (unsigned int)v9;
      v61 = (unsigned __int64)a3[3];
      v62 = (unsigned int)v9 + 1LL;
      v63 = (__m128i *)(v61 + 24 * v60);
      if ( v62 > *((unsigned int *)a3 + 9) )
      {
        v85 = a3 + 5;
        if ( v61 > (unsigned __int64)v59 || v63 <= v59 )
        {
          sub_22134E0(a3 + 3, v85, v62, 24);
          v63 = (__m128i *)&a3[3][3 * *((unsigned int *)a3 + 8)];
        }
        else
        {
          v86 = &v59->m128i_i8[-v61];
          sub_22134E0(a3 + 3, v85, v62, 24);
          v87 = a3[3];
          v59 = (const __m128i *)&v86[(_QWORD)v87];
          v63 = (__m128i *)&v87[3 * *((unsigned int *)a3 + 8)];
        }
      }
      *v63 = _mm_loadu_si128(v59);
      v63[1].m128i_i64[0] = v59[1].m128i_i64[0];
      v64 = (__m128i *)a3[1];
      ++*((_DWORD *)a3 + 8);
      v65 = v64[5].m128i_u32[0];
      if ( (_DWORD)v65 )
      {
        v66 = _mm_loadu_si128((const __m128i *)(v64[4].m128i_i64[1] + 24LL * (unsigned int)v65 - 24));
        v67 = *(_QWORD *)(v64[4].m128i_i64[1] + 24LL * (unsigned int)v65 - 24 + 16);
        v64[5].m128i_i32[0] = v65 - 1;
        v64[4].m128i_i64[0] = v67;
        v64[3] = v66;
      }
      else
      {
        sub_B1F6B0(v64->m128i_i64[0], (__int64)v64[3].m128i_i64, v65, v61, (unsigned __int8 *)a5, a6, v122);
      }
      v9 = *((unsigned int *)a3 + 8);
      v14 = *((_DWORD *)a3 + 113);
      v15 = &a3[3][3 * v14];
      v16 = (char **)v15[2];
      if ( (_DWORD)v9 == 1 )
      {
        a3[53] = v16;
        v68 = *((unsigned int *)v15 + 2);
        a3[55] = v16;
        a3[54] = (char **)((char *)v16 + v68);
        *((_DWORD *)a3 + 112) = *(_DWORD *)v15;
        v16 = (char **)v15[2];
      }
    }
    else
    {
      v15 = &a3[3][3 * v14];
      v16 = (char **)v15[2];
    }
    a3[53] = v16;
    v17 = *((unsigned int *)v15 + 2);
    a3[55] = v16;
    a3[54] = (char **)((char *)v16 + v17);
    a4 = *(unsigned int *)v15;
    *((_DWORD *)a3 + 112) = a4;
LABEL_13:
    if ( v14 >= (unsigned int)v9 )
      goto LABEL_41;
    v12 = a3[55];
  }
  a4 = (unsigned __int64)v145;
  src = v145;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  if ( *v12 != 91 )
  {
LABEL_41:
    v35 = v130;
    *((_DWORD *)a3 + 113) = v8;
    a3[55] = v35;
    LODWORD(v35) = v131;
    *(__m128 *)(a3 + 53) = _mm_loadh_ps((const double *)&v129);
    *((_DWORD *)a3 + 112) = (_DWORD)v35;
    goto LABEL_2;
  }
  v18 = a3[53];
  a4 = (unsigned __int64)(v12 + 1);
  v145[0] = 91;
  si128.m128i_i64[0] = 1;
  v132 = (unsigned __int64)v18;
  LODWORD(v18) = *((_DWORD *)a3 + 112);
  a3[55] = (char **)(v12 + 1);
  LODWORD(v133) = (_DWORD)v18;
  if ( v12 + 1 == (_BYTE *)a3[54] )
  {
    *((_DWORD *)a3 + 113) = ++v14;
    if ( v14 < (unsigned int)v9 )
    {
      v71 = &a3[3][3 * v14];
      v72 = (char **)v71[2];
LABEL_75:
      a3[53] = v72;
      v73 = *((unsigned int *)v71 + 2);
      a3[55] = v72;
      a3[54] = (char **)((char *)v72 + v73);
      a4 = *(unsigned int *)v71;
      *((_DWORD *)a3 + 112) = a4;
      goto LABEL_17;
    }
    if ( *((_BYTE *)a3 + 16) )
      goto LABEL_41;
    v37 = (const __m128i *)a3[1];
    v38 = v37[3].m128i_i32[1];
    if ( v38 != 1 )
    {
      if ( v38 != 2 )
      {
        *((_BYTE *)a3 + 16) = 1;
        goto LABEL_50;
      }
      v92 = v37 + 3;
      goto LABEL_96;
    }
    LODWORD(v134) = v37[3].m128i_i32[0];
    v135 = v37[4].m128i_i64[0];
    v136 = (__m128i *)v37[3].m128i_i64[1];
    v88 = v37[5].m128i_u32[0];
    if ( v88 )
    {
      v89 = _mm_loadu_si128((const __m128i *)(v37[4].m128i_i64[1] + 24LL * v88 - 24));
      v90 = *(_QWORD *)(v37[4].m128i_i64[1] + 24LL * v88 - 24 + 16);
      v37[5].m128i_i32[0] = v88 - 1;
      v37[4].m128i_i64[0] = v90;
      v37[3] = v89;
    }
    else
    {
      sub_B1F6B0(v37->m128i_i64[0], (__int64)v37[3].m128i_i64, v9, a4, (unsigned __int8 *)a5, a6, v122);
    }
    v91 = (const __m128i *)a3[1];
    v92 = v91 + 3;
    if ( v91[3].m128i_i32[1] == 2 )
    {
      LODWORD(v9) = *((_DWORD *)a3 + 8);
LABEL_96:
      v93 = (unsigned int)v9;
      v94 = (unsigned __int64)a3[3];
      v95 = (unsigned int)v9 + 1LL;
      v96 = (__m128i *)(v94 + 24 * v93);
      if ( v95 > *((unsigned int *)a3 + 9) )
      {
        v114 = a3 + 3;
        v115 = a3 + 5;
        if ( v94 > (unsigned __int64)v92 || v96 <= v92 )
        {
          sub_22134E0(v114, v115, v95, 24);
          v96 = (__m128i *)&a3[3][3 * *((unsigned int *)a3 + 8)];
        }
        else
        {
          v116 = &v92->m128i_i8[-v94];
          sub_22134E0(v114, v115, v95, 24);
          v117 = a3[3];
          v92 = (const __m128i *)&v116[(_QWORD)v117];
          v96 = (__m128i *)&v117[3 * *((unsigned int *)a3 + 8)];
        }
      }
      *v96 = _mm_loadu_si128(v92);
      v96[1].m128i_i64[0] = v92[1].m128i_i64[0];
      v97 = (__m128i *)a3[1];
      ++*((_DWORD *)a3 + 8);
      v98 = v97[5].m128i_u32[0];
      if ( (_DWORD)v98 )
      {
        v99 = _mm_loadu_si128((const __m128i *)(v97[4].m128i_i64[1] + 24LL * (unsigned int)v98 - 24));
        v100 = *(_QWORD *)(v97[4].m128i_i64[1] + 24LL * (unsigned int)v98 - 24 + 16);
        v97[5].m128i_i32[0] = v98 - 1;
        v97[4].m128i_i64[0] = v100;
        v97[3] = v99;
      }
      else
      {
        sub_B1F6B0(v97->m128i_i64[0], (__int64)v97[3].m128i_i64, v98, v94, (unsigned __int8 *)a5, a6, v122);
      }
      v9 = *((unsigned int *)a3 + 8);
      v14 = *((_DWORD *)a3 + 113);
      v71 = &a3[3][3 * v14];
      v72 = (char **)v71[2];
      if ( (_DWORD)v9 == 1 )
      {
        a3[53] = v72;
        v101 = *((unsigned int *)v71 + 2);
        a3[55] = v72;
        a3[54] = (char **)((char *)v72 + v101);
        *((_DWORD *)a3 + 112) = *(_DWORD *)v71;
        v72 = (char **)v71[2];
      }
      goto LABEL_75;
    }
    v108 = v91[5].m128i_u32[0];
    a4 = v91[5].m128i_u32[1];
    v109 = v108 + 1;
    if ( v108 + 1 > a4 )
    {
      v118 = v91[4].m128i_u64[1];
      v119 = &v91[4].m128i_i8[8];
      v120 = &v91[5].m128i_i8[8];
      if ( v118 <= (unsigned __int64)v92 && (unsigned __int64)v92 < v118 + 24 * v108 )
      {
        v121 = &v92->m128i_i8[-v118];
        sub_22134E0(v119, v120, v109, 24);
        v110 = v91[4].m128i_i64[1];
        v108 = v91[5].m128i_u32[0];
        v92 = (const __m128i *)&v121[v110];
        goto LABEL_113;
      }
      sub_22134E0(v119, v120, v109, 24);
      v108 = v91[5].m128i_u32[0];
    }
    v110 = v91[4].m128i_i64[1];
LABEL_113:
    v111 = (__m128i *)(24 * v108 + v110);
    *v111 = _mm_loadu_si128(v92);
    v111[1].m128i_i64[0] = v92[1].m128i_i64[0];
    v112 = (int)v134;
    ++v91[5].m128i_i32[0];
    v91[3].m128i_i32[0] = v112;
    v113 = v136;
    v91[3].m128i_i32[1] = 1;
    v91[3].m128i_i64[1] = (__int64)v113;
    v91[4].m128i_i64[0] = v135;
    v14 = *((_DWORD *)a3 + 113);
    *((_BYTE *)a3 + 16) = 1;
    v9 = *((unsigned int *)a3 + 8);
  }
LABEL_17:
  if ( (unsigned int)v9 > v14 )
  {
    LODWORD(v134) = v8;
    while ( 1 )
    {
      a4 = si128.m128i_i64[0];
      v19 = *(_BYTE *)a3[55];
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        sub_22130D0(&src, v145, si128.m128i_i64[0] + 1, 1);
        a4 = si128.m128i_i64[0];
      }
      *((_BYTE *)src + a4) = v19;
      v20 = a3[55];
      ++si128.m128i_i64[0];
      v9 = (__int64)v20 + 1;
      a3[55] = (char **)((char *)v20 + 1);
      if ( (char **)((char *)v20 + 1) != a3[54] )
        goto LABEL_19;
      a4 = *((unsigned int *)a3 + 8);
      v9 = (unsigned int)(*((_DWORD *)a3 + 113) + 1);
      *((_DWORD *)a3 + 113) = v9;
      if ( (unsigned int)v9 >= (unsigned int)a4 )
      {
        if ( *((_BYTE *)a3 + 16) )
          goto LABEL_19;
        v36 = (const __m128i *)a3[1];
        v9 = v36[3].m128i_u32[1];
        if ( (_DWORD)v9 == 1 )
        {
          v41 = v36[5].m128i_u32[0];
          v42 = v36[3].m128i_i32[0];
          a6 = (__m128i *)v36[4].m128i_i64[0];
          v43 = v36[3].m128i_u64[1];
          if ( (_DWORD)v41 )
          {
            v44 = _mm_loadu_si128((const __m128i *)(v36[4].m128i_i64[1] + 24LL * (unsigned int)v41 - 24));
            v45 = *(_QWORD *)(v36[4].m128i_i64[1] + 24LL * (unsigned int)v41 - 24 + 16);
            v36[5].m128i_i32[0] = v41 - 1;
            v36[4].m128i_i64[0] = v45;
            v36[3] = v44;
          }
          else
          {
            v69 = v36->m128i_i64[0];
            v137 = v36[3].m128i_u64[1];
            v136 = a6;
            LODWORD(v135) = v42;
            sub_B1F6B0(v69, (__int64)v36[3].m128i_i64, v41, a4, (unsigned __int8 *)a5, a6, v122);
            v42 = v135;
            a6 = v136;
            v43 = v137;
          }
          a5 = (unsigned __int64)a3[1];
          v46 = (const __m128i *)(a5 + 48);
          if ( *(_DWORD *)(a5 + 52) != 2 )
          {
            v75 = *(unsigned int *)(a5 + 80);
            v76 = *(_QWORD *)(a5 + 72);
            v77 = v75 + 1;
            a4 = v76 + 24 * v75;
            if ( v77 > *(unsigned int *)(a5 + 84) )
            {
              v102 = a5 + 88;
              v138 = v43;
              v137 = a5;
              v136 = a6;
              LODWORD(v135) = v42;
              if ( v76 > (unsigned __int64)v46 || a4 <= (unsigned __int64)v46 )
              {
                sub_22134E0(a5 + 72, v102, v77, 24);
                a5 = v137;
                v43 = v138;
                a6 = v136;
                v42 = v135;
                a4 = *(_QWORD *)(v137 + 72) + 24LL * *(unsigned int *)(v137 + 80);
              }
              else
              {
                sub_22134E0(a5 + 72, v102, v77, 24);
                a5 = v137;
                v42 = v135;
                a6 = v136;
                v43 = v138;
                v103 = *(_QWORD *)(v137 + 72);
                v46 = (const __m128i *)((char *)v46 + v103 - v76);
                a4 = 24LL * *(unsigned int *)(v137 + 80) + v103;
              }
            }
            *(__m128i *)a4 = _mm_loadu_si128(v46);
            v9 = v46[1].m128i_i64[0];
            *(_QWORD *)(a4 + 16) = v9;
            *(_DWORD *)(a5 + 48) = v42;
            ++*(_DWORD *)(a5 + 80);
            *(_DWORD *)(a5 + 52) = 1;
            *(_QWORD *)(a5 + 56) = v43;
            *(_QWORD *)(a5 + 64) = a6;
            *((_BYTE *)a3 + 16) = 1;
LABEL_19:
            if ( v19 == 93 )
              goto LABEL_27;
            goto LABEL_20;
          }
          a4 = *((unsigned int *)a3 + 8);
        }
        else
        {
          if ( (_DWORD)v9 != 2 )
          {
            *((_BYTE *)a3 + 16) = 1;
            goto LABEL_19;
          }
          v46 = v36 + 3;
        }
        a5 = (unsigned __int64)a3[3];
        v47 = a4 + 1;
        v48 = (__m128i *)(a5 + 24 * a4);
        if ( v47 > *((unsigned int *)a3 + 9) )
        {
          v81 = a3 + 3;
          v82 = a3 + 5;
          if ( a5 > (unsigned __int64)v46 || v48 <= v46 )
          {
            sub_22134E0(v81, v82, v47, 24);
            v48 = (__m128i *)&a3[3][3 * *((unsigned int *)a3 + 8)];
          }
          else
          {
            v83 = &v46->m128i_i8[-a5];
            sub_22134E0(v81, v82, v47, 24);
            v84 = a3[3];
            v46 = (const __m128i *)&v83[(_QWORD)v84];
            v48 = (__m128i *)&v84[3 * *((unsigned int *)a3 + 8)];
          }
        }
        *v48 = _mm_loadu_si128(v46);
        v48[1].m128i_i64[0] = v46[1].m128i_i64[0];
        v49 = (__int64)a3[1];
        ++*((_DWORD *)a3 + 8);
        v50 = *(unsigned int *)(v49 + 80);
        if ( (_DWORD)v50 )
        {
          v51 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v49 + 72) + 24LL * (unsigned int)v50 - 24));
          v52 = *(_QWORD *)(*(_QWORD *)(v49 + 72) + 24LL * (unsigned int)v50 - 24 + 16);
          *(_DWORD *)(v49 + 80) = v50 - 1;
          *(_QWORD *)(v49 + 64) = v52;
          *(__m128i *)(v49 + 48) = v51;
        }
        else
        {
          sub_B1F6B0(*(_QWORD *)v49, v49 + 48, v49, v50, (unsigned __int8 *)a5, a6, v122);
        }
        v21 = &a3[3][3 * *((unsigned int *)a3 + 113)];
        v22 = (char **)v21[2];
        if ( *((_DWORD *)a3 + 8) == 1 )
        {
          a3[53] = v22;
          v53 = *((unsigned int *)v21 + 2);
          a3[55] = v22;
          a3[54] = (char **)((char *)v22 + v53);
          *((_DWORD *)a3 + 112) = *(_DWORD *)v21;
          v22 = (char **)v21[2];
        }
      }
      else
      {
        v21 = &a3[3][3 * v9];
        v22 = (char **)v21[2];
      }
      a3[53] = v22;
      v23 = *((unsigned int *)v21 + 2);
      a3[55] = v22;
      a4 = (unsigned __int64)v22 + v23;
      a3[54] = (char **)a4;
      v9 = *(unsigned int *)v21;
      *((_DWORD *)a3 + 112) = v9;
      if ( v19 == 93 )
      {
LABEL_27:
        v24 = *a3;
        v25 = si128.m128i_i64[0];
        v26 = **a3;
        v27 = (unsigned int)(si128.m128i_i32[0] + 1);
        v28 = si128.m128i_i32[0];
        v24[10] += v27;
        if ( v24[1] >= &v26[v27] && v26 )
        {
          *v24 = &v26[v27];
        }
        else
        {
          v127 = v25;
          v74 = sub_962430((__int64)v24, v27, v27, 0, v25, (__int64)a6);
          v25 = v127;
          v26 = (char *)v74;
        }
        v29 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          v128 = v25;
          sub_22130D0(&src, v145, si128.m128i_i64[0] + 1, 1);
          v29 = si128.m128i_i64[0];
          v25 = v128;
        }
        v129 = v25;
        v126 = (_DWORD)v12 - v132 + (_DWORD)v133;
        *((_BYTE *)src + v29) = 0;
        memcpy(v26, src, v27);
        v30 = v126;
        v31 = a3[55];
        v139[1] = 2;
        v142 = v26;
        v139[0] = v126;
        v32 = (_DWORD)v31 - (_DWORD)v12;
        v141 = (_DWORD)v31 - (_DWORD)v12;
        v140 = v129;
        if ( src != v145 )
        {
          free(src);
          v28 = v140;
          v32 = v141;
          v26 = v142;
          v30 = v139[0];
        }
        v33 = v32 + v30 - 1;
        if ( v32 <= 1 )
          v33 = v30;
        sub_B37D90(*(_QWORD *)(a1 + 8), a2, v30, v33, v26, v28);
        goto LABEL_2;
      }
LABEL_20:
      if ( *((_DWORD *)a3 + 113) >= *((_DWORD *)a3 + 8) )
      {
        v8 = (unsigned int)v134;
        break;
      }
    }
  }
LABEL_50:
  v39 = v130;
  *((_DWORD *)a3 + 113) = v8;
  v40 = src;
  a3[55] = v39;
  LODWORD(v39) = v131;
  *(__m128 *)(a3 + 53) = _mm_loadh_ps((const double *)&v129);
  *((_DWORD *)a3 + 112) = (_DWORD)v39;
  if ( v40 != v145 )
    free(v40);
LABEL_2:
  result = sub_B219C0(a3, (__int64)v139, v9, a4, a5);
  if ( (_BYTE)result )
  {
    v11 = v141 + v139[0] - 1;
    if ( v141 <= 1 )
      v11 = v139[0];
    return sub_B30A30(*(_QWORD *)(a1 + 8), a2, v139[0], v11, v142, v140);
  }
  return result;
}

