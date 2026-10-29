__int64 __fastcall sub_15615B0(const __m128i *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r13
  unsigned __int8 v6; // bp
  int v8; // eax
  unsigned int v9; // r14d
  __m128i v10; // xmm3
  __int64 v11; // rdi
  __int16 v12; // ax
  __int32 v13; // eax
  unsigned __int64 v14; // rax
  __int16 v15; // r14
  int v16; // eax
  unsigned __int8 v17; // bl
  int v18; // eax
  __int64 *v19; // rdi
  __int16 v20; // dx
  __m128i v21; // xmm0
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __int32 v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // rdi
  char *v28; // rax
  int v30; // eax
  __m128i v31; // xmm6
  __m128i v32; // xmm7
  __int64 v33; // rdi
  __int32 v34; // eax
  __int16 v35; // r14
  unsigned __int64 v36; // rax
  __int16 v37; // ax
  char v38; // bl
  __int64 v39; // rax
  __m128i v40; // xmm6
  __m128i v41; // xmm7
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  char *v44; // rdi
  char *v45; // rax
  __int32 v46; // eax
  unsigned __int64 v47; // r12
  __int16 v48; // ax
  char v49; // bl
  __m128i v50; // xmm6
  __m128i v51; // xmm3
  __m128i v52; // xmm4
  __int32 v53; // eax
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  char *v56; // rdi
  char *v57; // rax
  unsigned __int8 v58; // r12
  __m128i v59; // xmm7
  __m128i v60; // xmm6
  __int32 v61; // eax
  __m128i v62; // xmm7
  unsigned __int64 v63; // rax
  __int16 v64; // ax
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __m128i v67; // xmm2
  __int32 v68; // eax
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  char *v71; // rdi
  char *v72; // rax
  __m128i v73; // xmm5
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  __int32 v76; // eax
  unsigned __int64 v77; // rax
  __int16 v78; // ax
  __m128i v79; // xmm5
  __m128i v80; // xmm2
  __m128i v81; // xmm6
  __int32 v82; // eax
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  char *v85; // rdi
  char *v86; // rax
  int v87; // ebx
  __int64 *v88; // rdi
  int v89; // r12d
  __int64 *v90; // rdi
  __m128i v91; // xmm2
  __m128i v92; // xmm6
  __m128i v93; // xmm7
  __int32 v94; // eax
  unsigned __int64 v95; // rax
  __int64 v96; // rdx
  char *v97; // rdi
  char *v98; // rax
  __m128i *v99; // rbx
  int *v100; // rsi
  int v101; // ebx
  __int64 *v102; // rdi
  __int32 v103; // eax
  __m128i v104; // xmm0
  __m128i v105; // xmm1
  __m128i v106; // xmm3
  __int32 v107; // eax
  unsigned __int64 v108; // rax
  __int64 v109; // rdx
  char *v110; // rdi
  char *v111; // rax
  int v112; // ebx
  __int64 *v113; // rdi
  __m128i v114; // xmm4
  __m128i v115; // xmm5
  __int32 v116; // eax
  __m128i v117; // xmm4
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  char *v120; // rdi
  char *v121; // rax
  __m128i v122; // xmm7
  __m128i v123; // xmm0
  __m128i v124; // xmm1
  __int32 v125; // eax
  unsigned __int64 v126; // rax
  __int64 v127; // rdx
  char *v128; // rdi
  char *v129; // rax
  unsigned __int64 v130; // [rsp+8h] [rbp-140h]
  unsigned __int64 v131; // [rsp+8h] [rbp-140h]
  unsigned __int32 v132; // [rsp+10h] [rbp-138h]
  __int16 v133; // [rsp+10h] [rbp-138h]
  __int16 v134; // [rsp+16h] [rbp-132h]
  __int16 v135; // [rsp+16h] [rbp-132h]
  int v136; // [rsp+18h] [rbp-130h]
  __int16 v137; // [rsp+18h] [rbp-130h]
  unsigned __int64 v138; // [rsp+18h] [rbp-130h]
  unsigned __int64 v139; // [rsp+18h] [rbp-130h]
  const __m128i *v140; // [rsp+20h] [rbp-128h]
  __int32 v141; // [rsp+28h] [rbp-120h]
  __int32 v142; // [rsp+28h] [rbp-120h]
  char v143; // [rsp+2Ch] [rbp-11Ch]
  __int16 v144; // [rsp+2Ch] [rbp-11Ch]
  __int16 v145; // [rsp+2Ch] [rbp-11Ch]
  __int16 v146; // [rsp+2Ch] [rbp-11Ch]
  __int16 v147; // [rsp+30h] [rbp-118h]
  __int16 v148; // [rsp+30h] [rbp-118h]
  __int16 v149; // [rsp+30h] [rbp-118h]
  __int16 v150; // [rsp+38h] [rbp-110h]
  __int16 v151; // [rsp+38h] [rbp-110h]
  __int32 v152; // [rsp+3Ch] [rbp-10Ch]
  __int32 v153; // [rsp+3Ch] [rbp-10Ch]
  __int64 v154; // [rsp+48h] [rbp-100h] BYREF
  __int64 v155; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v156; // [rsp+58h] [rbp-F0h] BYREF
  __m128i v157; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v158; // [rsp+78h] [rbp-D0h]
  __m128i v159; // [rsp+80h] [rbp-C8h] BYREF
  __int32 v160; // [rsp+90h] [rbp-B8h]
  __int16 v161; // [rsp+B0h] [rbp-98h] BYREF
  __m128i v162; // [rsp+B8h] [rbp-90h] BYREF
  __m128i v163; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v164; // [rsp+D8h] [rbp-70h]
  __m128i v165; // [rsp+E0h] [rbp-68h] BYREF
  __int32 v166; // [rsp+F0h] [rbp-58h]

  v4 = a2;
  v6 = a3;
  if ( !a2 )
  {
    v30 = sub_155DB90((__int64)a1, 0, 1u, nullptr);
    if ( v30 != 1 )
    {
      v9 = 4;
      if ( v30 == 3 )
        return v9;
      if ( v30 )
        goto LABEL_6;
      if ( !a3 )
        return 1;
LABEL_35:
      v31 = _mm_loadu_si128(a1 + 3);
      v32 = _mm_loadu_si128(a1 + 4);
      v33 = a1->m128i_i64[1];
      v164 = a1[5].m128i_i64[0];
      v34 = a1[2].m128i_i32[0];
      v162 = v31;
      v35 = a1[5].m128i_i16[5];
      v166 = v34;
      v36 = a1[169].m128i_u32[2];
      v163 = v32;
      v142 = v36;
      v131 = v36;
      LOWORD(v36) = a1[5].m128i_i16[4];
      v165 = _mm_loadu_si128(a1 + 1);
      v133 = v36;
      v135 = a1[5].m128i_i16[6];
      sub_1418D30(v33, 0);
      if ( a3 )
      {
        v87 = 0;
        while ( 1 )
        {
          v155 = 0x3E003D003F0017LL;
          sub_15680D0(a1, &v155, 4, 2);
          v37 = a1[2].m128i_i16[0];
          if ( v37 == 61 )
          {
            ++v87;
          }
          else
          {
            if ( v37 != 62 )
              goto LABEL_37;
            if ( !v87 )
            {
              sub_1417BC0(a1->m128i_i64[1]);
              v91 = _mm_loadu_si128(&v162);
              v92 = _mm_loadu_si128(&v163);
              v93 = _mm_load_si128(&v165);
              a1[5].m128i_i64[0] = v164;
              v94 = v166;
              a1[3] = v91;
              a1[2].m128i_i32[0] = v94;
              v95 = a1[169].m128i_u32[2];
              a1[4] = v92;
              a1[1] = v93;
              if ( v131 != v95 )
              {
                if ( v131 >= v95 )
                {
                  if ( v131 > a1[169].m128i_u32[3] )
                  {
                    sub_2237220(&a1[169], &a1[170], v131, 8);
                    v95 = a1[169].m128i_u32[2];
                  }
                  v96 = a1[169].m128i_i64[0];
                  v97 = (char *)(v96 + 8 * v95);
                  v98 = (char *)(v96 + 8 * v131);
                  if ( v97 != v98 )
                    memset(v97, 0, 8 * ((unsigned __int64)(v98 - 8 - v97) >> 3) + 8);
                }
                a1[169].m128i_i32[2] = v142;
              }
              a1[5].m128i_i16[5] = v35;
              v9 = 3;
              a1[5].m128i_i16[4] = v133;
              a1[5].m128i_i16[6] = v135;
              return v9;
            }
            --v87;
          }
          v88 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v88, a1[1].m128i_i32);
        }
      }
      LODWORD(v155) = (_DWORD)&algn_3F0012[5];
      sub_15680D0(a1, &v155, 2, 2);
      v37 = a1[2].m128i_i16[0];
LABEL_37:
      if ( v37 == 23 )
      {
        v38 = 1;
      }
      else
      {
        v38 = 0;
        if ( v37 == 63 )
          goto LABEL_39;
      }
      v4 = 0;
LABEL_39:
      sub_1417BC0(a1->m128i_i64[1]);
      v39 = v164;
      v40 = _mm_load_si128(&v165);
      a1[3] = _mm_loadu_si128(&v162);
      v41 = _mm_loadu_si128(&v163);
      a1[5].m128i_i64[0] = v39;
      LODWORD(v39) = v166;
      a1[4] = v41;
      a1[2].m128i_i32[0] = v39;
      v42 = a1[169].m128i_u32[2];
      a1[1] = v40;
      if ( v131 != v42 )
      {
        if ( v131 >= v42 )
        {
          if ( v131 > a1[169].m128i_u32[3] )
          {
            sub_2237220(&a1[169], &a1[170], v131, 8);
            v42 = a1[169].m128i_u32[2];
          }
          v43 = a1[169].m128i_i64[0];
          v44 = (char *)(v43 + 8 * v42);
          v45 = (char *)(v43 + 8 * v131);
          if ( v44 != v45 )
            memset(v44, 0, 8 * ((unsigned __int64)(v45 - 8 - v44) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v142;
      }
      a1[5].m128i_i16[5] = v35;
      a1[5].m128i_i16[4] = v133;
      a1[5].m128i_i16[6] = v135;
      if ( !v38 )
      {
        v9 = 4;
        if ( !v4 )
          return v9;
        return 2;
      }
      return 1;
    }
    return 0;
  }
  if ( a1[2].m128i_i16[0] == 153 )
    return 2;
  v8 = sub_155DB90((__int64)a1, 0, 1u, nullptr);
  if ( v8 == 1 )
    return 0;
  v9 = 4;
  if ( v8 == 3 )
    return v9;
  if ( !v8 )
    goto LABEL_35;
LABEL_6:
  v10 = _mm_loadu_si128(a1 + 3);
  v11 = a1->m128i_i64[1];
  v136 = a2;
  v140 = a1 + 169;
  v12 = a1[5].m128i_i16[6];
  v156 = v10;
  v134 = v12;
  v13 = a1[5].m128i_i32[2];
  v157 = _mm_loadu_si128(a1 + 4);
  v141 = v13;
  v14 = a1[169].m128i_u32[2];
  v159 = _mm_loadu_si128(a1 + 1);
  v132 = v14;
  v130 = v14;
  v158 = a1[5].m128i_i64[0];
  v160 = a1[2].m128i_i32[0];
  sub_1418D30(v11, 0);
  v15 = a1[2].m128i_i16[0];
  v16 = sub_155CFC0((__int64)a1);
  switch ( v16 )
  {
    case 1:
LABEL_51:
      v19 = (__int64 *)a1->m128i_i64[1];
      v9 = 0;
      goto LABEL_20;
    case 3:
      v19 = (__int64 *)a1->m128i_i64[1];
      v9 = 4;
      goto LABEL_20;
    case 0:
      v19 = (__int64 *)a1->m128i_i64[1];
      v9 = a3 + a2 + 1;
      if ( !(a3 + a2) )
        goto LABEL_20;
      v164 = a1[5].m128i_i64[0];
      v46 = a1[2].m128i_i32[0];
      v47 = a1[169].m128i_u32[2];
      v162 = _mm_loadu_si128(a1 + 3);
      v166 = v46;
      LOWORD(v46) = a1[5].m128i_i16[4];
      v163 = _mm_loadu_si128(a1 + 4);
      v137 = v46;
      LOWORD(v46) = a1[5].m128i_i16[5];
      v165 = _mm_loadu_si128(a1 + 1);
      v144 = v46;
      v147 = a1[5].m128i_i16[6];
      sub_1418D30((__int64)v19, 0);
      if ( a3 )
      {
        v101 = 0;
        while ( 1 )
        {
          v154 = 0x3E003D003F0017LL;
          sub_15680D0(a1, &v154, 4, 2);
          v48 = a1[2].m128i_i16[0];
          if ( v48 == 61 )
          {
            ++v101;
          }
          else
          {
            if ( v48 != 62 )
              goto LABEL_55;
            if ( !v101 )
            {
              sub_1417BC0(a1->m128i_i64[1]);
              v114 = _mm_loadu_si128(&v162);
              v115 = _mm_load_si128(&v165);
              a1[5].m128i_i64[0] = v164;
              v116 = v166;
              a1[3] = v114;
              v117 = _mm_loadu_si128(&v163);
              a1[2].m128i_i32[0] = v116;
              v118 = a1[169].m128i_u32[2];
              a1[4] = v117;
              a1[1] = v115;
              if ( v47 != v118 )
              {
                if ( v47 >= v118 )
                {
                  if ( v47 > a1[169].m128i_u32[3] )
                  {
                    sub_2237220(v140, &a1[170], v47, 8);
                    v118 = a1[169].m128i_u32[2];
                  }
                  v119 = a1[169].m128i_i64[0];
                  v120 = (char *)(v119 + 8 * v118);
                  v121 = (char *)(v119 + 8 * v47);
                  if ( v120 != v121 )
                    memset(v120, 0, 8 * ((unsigned __int64)(v121 - 8 - v120) >> 3) + 8);
                }
                a1[169].m128i_i32[2] = v47;
              }
              v19 = (__int64 *)a1->m128i_i64[1];
              v9 = 3;
              a1[5].m128i_i16[4] = v137;
              a1[5].m128i_i16[5] = v144;
              a1[5].m128i_i16[6] = v147;
              goto LABEL_20;
            }
            --v101;
          }
          v102 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v102, a1[1].m128i_i32);
        }
      }
      LODWORD(v154) = (_DWORD)&algn_3F0012[5];
      sub_15680D0(a1, &v154, 2, 2);
      v48 = a1[2].m128i_i16[0];
LABEL_55:
      if ( v48 == 23 )
      {
        v49 = 1;
      }
      else
      {
        v49 = 0;
        if ( v48 == 63 )
          goto LABEL_58;
      }
      v4 = 0;
LABEL_58:
      sub_1417BC0(a1->m128i_i64[1]);
      v50 = _mm_loadu_si128(&v162);
      v51 = _mm_loadu_si128(&v163);
      v52 = _mm_load_si128(&v165);
      a1[5].m128i_i64[0] = v164;
      v53 = v166;
      a1[3] = v50;
      a1[2].m128i_i32[0] = v53;
      v54 = a1[169].m128i_u32[2];
      a1[4] = v51;
      a1[1] = v52;
      if ( v47 != v54 )
      {
        if ( v47 >= v54 )
        {
          if ( v47 > a1[169].m128i_u32[3] )
          {
            sub_2237220(v140, &a1[170], v47, 8);
            v54 = a1[169].m128i_u32[2];
          }
          v55 = a1[169].m128i_i64[0];
          v56 = (char *)(v55 + 8 * v54);
          v57 = (char *)(v55 + 8 * v47);
          if ( v56 != v57 )
            memset(v56, 0, 8 * ((unsigned __int64)(v57 - 8 - v56) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v47;
      }
      v19 = (__int64 *)a1->m128i_i64[1];
      a1[5].m128i_i16[4] = v137;
      a1[5].m128i_i16[5] = v144;
      a1[5].m128i_i16[6] = v147;
      if ( !v49 )
      {
        v9 = v4 == 0 ? 4 : 2;
        goto LABEL_20;
      }
      goto LABEL_177;
  }
  v17 = 1;
  v143 = v15 == 76;
  while ( 1 )
  {
    v18 = sub_1560060((__int64)a1, 0, 1u, 0, v143);
    switch ( v18 )
    {
      case 1:
        goto LABEL_51;
      case 3:
        v19 = (__int64 *)a1->m128i_i64[1];
        v6 = 0;
        v4 = 0;
        v58 = 0;
LABEL_69:
        if ( !v58 )
        {
          v9 = 2;
          if ( !v4 )
            v9 = 4 - (v6 != 0);
          goto LABEL_20;
        }
LABEL_177:
        v9 = 1;
        goto LABEL_20;
      case 0:
        v19 = (__int64 *)a1->m128i_i64[1];
        v58 = v17;
        if ( v17 + v136 + v6 > 1 )
        {
          v73 = _mm_loadu_si128(a1 + 3);
          v74 = _mm_loadu_si128(a1 + 4);
          v75 = _mm_loadu_si128(a1 + 1);
          v164 = a1[5].m128i_i64[0];
          v76 = a1[2].m128i_i32[0];
          v162 = v73;
          v166 = v76;
          v77 = a1[169].m128i_u32[2];
          v163 = v74;
          v153 = v77;
          v139 = v77;
          LOWORD(v77) = a1[5].m128i_i16[4];
          v165 = v75;
          v146 = v77;
          v149 = a1[5].m128i_i16[5];
          v151 = a1[5].m128i_i16[6];
          sub_1418D30((__int64)v19, 0);
          if ( v6 )
          {
            v112 = 0;
            while ( 1 )
            {
              v154 = 0x3E003D003F0017LL;
              sub_15680D0(a1, &v154, 4, 2);
              v78 = a1[2].m128i_i16[0];
              if ( v78 == 61 )
              {
                ++v112;
              }
              else
              {
                if ( v78 != 62 )
                  goto LABEL_99;
                if ( !v112 )
                {
                  sub_1417BC0(a1->m128i_i64[1]);
                  v122 = _mm_loadu_si128(&v162);
                  v123 = _mm_loadu_si128(&v163);
                  v124 = _mm_load_si128(&v165);
                  a1[5].m128i_i64[0] = v164;
                  v125 = v166;
                  a1[3] = v122;
                  a1[2].m128i_i32[0] = v125;
                  v126 = a1[169].m128i_u32[2];
                  a1[4] = v123;
                  a1[1] = v124;
                  if ( v139 != v126 )
                  {
                    if ( v139 >= v126 )
                    {
                      if ( v139 > a1[169].m128i_u32[3] )
                      {
                        sub_2237220(v140, &a1[170], v139, 8);
                        v126 = a1[169].m128i_u32[2];
                      }
                      v127 = a1[169].m128i_i64[0];
                      v128 = (char *)(v127 + 8 * v126);
                      v129 = (char *)(v127 + 8 * v139);
                      if ( v128 != v129 )
                        memset(v128, 0, 8 * ((unsigned __int64)(v129 - 8 - v128) >> 3) + 8);
                    }
                    a1[169].m128i_i32[2] = v153;
                  }
                  v4 = 0;
                  v58 = 0;
                  v19 = (__int64 *)a1->m128i_i64[1];
                  a1[5].m128i_i16[4] = v146;
                  a1[5].m128i_i16[5] = v149;
                  a1[5].m128i_i16[6] = v151;
                  goto LABEL_69;
                }
                --v112;
              }
              v113 = (__int64 *)a1->m128i_i64[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v113, a1[1].m128i_i32);
            }
          }
          LODWORD(v154) = (_DWORD)&algn_3F0012[5];
          sub_15680D0(a1, &v154, 2, 2);
          v78 = a1[2].m128i_i16[0];
LABEL_99:
          if ( v78 == 23 || (v58 = 0, v78 != 63) )
            v4 = 0;
          sub_1417BC0(a1->m128i_i64[1]);
          v79 = _mm_loadu_si128(&v162);
          v80 = _mm_loadu_si128(&v163);
          v81 = _mm_load_si128(&v165);
          a1[5].m128i_i64[0] = v164;
          v82 = v166;
          a1[3] = v79;
          a1[2].m128i_i32[0] = v82;
          v83 = a1[169].m128i_u32[2];
          a1[4] = v80;
          a1[1] = v81;
          if ( v139 != v83 )
          {
            if ( v139 >= v83 )
            {
              if ( v139 > a1[169].m128i_u32[3] )
              {
                sub_2237220(v140, &a1[170], v139, 8);
                v83 = a1[169].m128i_u32[2];
              }
              v84 = a1[169].m128i_i64[0];
              v85 = (char *)(v84 + 8 * v83);
              v86 = (char *)(v84 + 8 * v139);
              if ( v85 != v86 )
                memset(v85, 0, 8 * ((unsigned __int64)(v86 - 8 - v85) >> 3) + 8);
            }
            a1[169].m128i_i32[2] = v153;
          }
          v6 = 0;
          v19 = (__int64 *)a1->m128i_i64[1];
          a1[5].m128i_i16[4] = v146;
          a1[5].m128i_i16[5] = v149;
          a1[5].m128i_i16[6] = v151;
        }
        goto LABEL_69;
    }
    v19 = (__int64 *)a1->m128i_i64[1];
    if ( v6 + v4 + v17 + 1 == 1 )
      goto LABEL_95;
    v20 = a1[2].m128i_i16[0];
    if ( v20 == 64 || v20 == 126 || v20 == 189 || (*(_BYTE *)(v19[7] + 1) & 0x10) != 0 && v20 == 24 )
      break;
    if ( v20 == 62 && v6 )
    {
      v9 = 3;
      goto LABEL_20;
    }
    v9 = v4 + 1;
    if ( !(v4 + v6) || v4 != 1 )
      goto LABEL_95;
    if ( v20 == 22 )
    {
      v103 = a1[1].m128i_i32[0];
      ++a1[5].m128i_i16[4];
      v99 = (__m128i *)&a1[1];
      a1[2].m128i_i32[2] = v103;
      sub_14634E0(v19, a1[1].m128i_i32);
      v161 = 23;
      sub_15680D0(a1, &v161, 1, 1);
      v20 = a1[2].m128i_i16[0];
      v19 = (__int64 *)a1->m128i_i64[1];
      if ( v20 != 66 )
      {
LABEL_93:
        if ( v20 == 63 && a2 )
          goto LABEL_20;
LABEL_95:
        v9 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v20 != 66 )
        goto LABEL_93;
      v99 = (__m128i *)&a1[1];
    }
    v100 = (int *)v99;
    v6 = 0;
    v17 = 0;
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v19, v100);
  }
  if ( v6 + v17 + v4 <= 1 )
    goto LABEL_17;
  v59 = _mm_loadu_si128(a1 + 3);
  v60 = _mm_loadu_si128(a1 + 4);
  v164 = a1[5].m128i_i64[0];
  v61 = a1[2].m128i_i32[0];
  v162 = v59;
  v62 = _mm_loadu_si128(a1 + 1);
  v166 = v61;
  v63 = a1[169].m128i_u32[2];
  v163 = v60;
  v152 = v63;
  v138 = v63;
  LOWORD(v63) = a1[5].m128i_i16[4];
  v165 = v62;
  v145 = v63;
  v148 = a1[5].m128i_i16[5];
  v150 = a1[5].m128i_i16[6];
  sub_1418D30((__int64)v19, 0);
  if ( !v6 )
  {
    LODWORD(v154) = (_DWORD)&algn_3F0012[5];
    sub_15680D0(a1, &v154, 2, 2);
    v64 = a1[2].m128i_i16[0];
LABEL_74:
    if ( v64 == 23 || (v17 = 0, v6 = 0, v64 != 63) )
      v4 = 0;
    sub_1417BC0(a1->m128i_i64[1]);
    v65 = _mm_loadu_si128(&v162);
    v66 = _mm_loadu_si128(&v163);
    v67 = _mm_load_si128(&v165);
    a1[5].m128i_i64[0] = v164;
    v68 = v166;
    a1[3] = v65;
    a1[2].m128i_i32[0] = v68;
    v69 = a1[169].m128i_u32[2];
    a1[4] = v66;
    a1[1] = v67;
    if ( v138 != v69 )
    {
      if ( v138 >= v69 )
      {
        if ( v138 > a1[169].m128i_u32[3] )
        {
          sub_2237220(v140, &a1[170], v138, 8);
          v69 = a1[169].m128i_u32[2];
        }
        v70 = a1[169].m128i_i64[0];
        v71 = (char *)(v70 + 8 * v69);
        v72 = (char *)(v70 + 8 * v138);
        if ( v71 != v72 )
          memset(v71, 0, 8 * ((unsigned __int64)(v72 - 8 - v71) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v152;
    }
    v19 = (__int64 *)a1->m128i_i64[1];
    a1[5].m128i_i16[4] = v145;
    a1[5].m128i_i16[5] = v148;
    a1[5].m128i_i16[6] = v150;
LABEL_17:
    v9 = 1;
    if ( !v17 )
    {
      v9 = 2;
      if ( !v4 )
        goto LABEL_19;
    }
    goto LABEL_20;
  }
  v89 = 0;
  while ( 2 )
  {
    v154 = 0x3E003D003F0017LL;
    sub_15680D0(a1, &v154, 4, 2);
    v64 = a1[2].m128i_i16[0];
    if ( v64 == 61 )
    {
      ++v89;
      goto LABEL_121;
    }
    if ( v64 != 62 )
    {
      v6 = 0;
      goto LABEL_74;
    }
    if ( v89 )
    {
      --v89;
LABEL_121:
      v90 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v90, a1[1].m128i_i32);
      continue;
    }
    break;
  }
  sub_1417BC0(a1->m128i_i64[1]);
  v104 = _mm_loadu_si128(&v162);
  v105 = _mm_loadu_si128(&v163);
  v106 = _mm_load_si128(&v165);
  a1[5].m128i_i64[0] = v164;
  v107 = v166;
  a1[3] = v104;
  a1[2].m128i_i32[0] = v107;
  v108 = a1[169].m128i_u32[2];
  a1[4] = v105;
  a1[1] = v106;
  if ( v138 != v108 )
  {
    if ( v138 >= v108 )
    {
      if ( v138 > a1[169].m128i_u32[3] )
      {
        sub_2237220(v140, &a1[170], v138, 8);
        v108 = a1[169].m128i_u32[2];
      }
      v109 = a1[169].m128i_i64[0];
      v110 = (char *)(v109 + 8 * v108);
      v111 = (char *)(v109 + 8 * v138);
      if ( v110 != v111 )
        memset(v110, 0, 8 * ((unsigned __int64)(v111 - 8 - v110) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v152;
  }
  v19 = (__int64 *)a1->m128i_i64[1];
  a1[5].m128i_i16[4] = v145;
  a1[5].m128i_i16[5] = v148;
  a1[5].m128i_i16[6] = v150;
LABEL_19:
  v9 = (v6 == 0) + 3;
LABEL_20:
  sub_1417BC0((__int64)v19);
  v21 = _mm_loadu_si128(&v156);
  v22 = _mm_load_si128(&v159);
  v23 = _mm_loadu_si128(&v157);
  a1[5].m128i_i64[0] = v158;
  v24 = v160;
  a1[3] = v21;
  a1[2].m128i_i32[0] = v24;
  v25 = a1[169].m128i_u32[2];
  a1[4] = v23;
  a1[1] = v22;
  if ( v25 != v130 )
  {
    if ( v25 <= v130 )
    {
      if ( a1[169].m128i_i32[3] < v132 )
      {
        sub_2237220(v140, &a1[170], v130, 8);
        v25 = a1[169].m128i_u32[2];
      }
      v26 = a1[169].m128i_i64[0];
      v27 = (char *)(v26 + 8 * v25);
      v28 = (char *)(v26 + 8 * v130);
      if ( v27 != v28 )
        memset(v27, 0, 8 * ((unsigned __int64)(v28 - 8 - v27) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v132;
  }
  a1[5].m128i_i32[2] = v141;
  a1[5].m128i_i16[6] = v134;
  return v9;
}
