__int64 __fastcall sub_78120(__int64 a1, __m128i *a2, __int64 a3, char a4)
{
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __m128i *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 (__fastcall *v17)(__m128i *, int); // r12
  __int64 (__fastcall *v18)(__int64); // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  signed int *v22; // r13
  int *v23; // r15
  __int64 (__fastcall *v24)(__int64); // rax
  int v25; // eax
  unsigned __int64 v26; // rcx
  signed int v27; // edx
  signed int v28; // esi
  _DWORD *v29; // rcx
  _DWORD *v30; // rdi
  _DWORD *v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  __int64 (__fastcall *v36)(__int64); // rax
  int v37; // eax
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 (__fastcall *v44)(__int64); // rax
  int v45; // r10d
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 (__fastcall *v48)(__int64); // rax
  unsigned __int64 v49; // r15
  int v50; // r13d
  int v51; // eax
  __int64 v52; // rax
  _QWORD *v53; // r12
  int v54; // r13d
  __int64 v55; // rdx
  _QWORD *v56; // rcx
  __int64 v57; // rsi
  int v58; // r13d
  __int64 v59; // rax
  signed int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rdi
  unsigned int *v63; // rdx
  unsigned int v64; // r8d
  unsigned int v65; // r9d
  __int64 v66; // r12
  __int64 v67; // r13
  __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // r12
  int v71; // eax
  int v72; // edx
  _DWORD *v73; // rax
  _DWORD *v74; // rcx
  unsigned int v75; // r13d
  int v76; // eax
  __int64 (__fastcall *v77)(__int64, int); // rax
  int v78; // eax
  __int64 (__fastcall *v79)(__int64, int, int); // rax
  unsigned int v80; // r12d
  bool v81; // r11
  __int64 (__fastcall *v82)(__int64); // rax
  int v83; // eax
  __int64 v84; // rbx
  __int64 v85; // r14
  __int64 v86; // rbx
  __int64 v87; // r14
  unsigned __int64 *v88; // rax
  unsigned __int64 v89; // rbx
  unsigned __int64 *v90; // rax
  __m128i v91; // xmm0
  _QWORD *v93; // rax
  __int64 v94; // rcx
  unsigned __int64 v95; // rsi
  char v96; // al
  __int64 v97; // rax
  unsigned __int64 v98; // r12
  __int32 v99; // r13d
  char v100; // al
  unsigned __int64 v101; // rsi
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rcx
  __int64 *v104; // r14
  __int64 v105; // rdx
  __int64 *v106; // rdi
  __int64 *v107; // rdi
  unsigned __int64 *v108; // rax
  __m128i v109; // xmm0
  unsigned __int64 v110; // r12
  __int64 *v111; // rax
  __int64 v112; // rdx
  __int64 *v113; // r14
  __int64 *v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rbx
  __int64 *v117; // rdi
  __int64 *v118; // rdi
  __int64 v119; // rax
  __int64 *v120; // rax
  unsigned __int64 v121; // rsi
  __int64 *v122; // rdi
  __int64 *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  unsigned __int64 v127; // [rsp+18h] [rbp-198h]
  int i; // [rsp+20h] [rbp-190h]
  char v129; // [rsp+26h] [rbp-18Ah]
  unsigned __int8 v130; // [rsp+27h] [rbp-189h]
  bool v131; // [rsp+28h] [rbp-188h]
  int v132; // [rsp+30h] [rbp-180h]
  int v133; // [rsp+34h] [rbp-17Ch]
  __int64 v134; // [rsp+38h] [rbp-178h]
  __int64 v135; // [rsp+58h] [rbp-158h]
  unsigned __int64 *v136; // [rsp+60h] [rbp-150h]
  unsigned __int64 v137; // [rsp+68h] [rbp-148h]
  int j; // [rsp+68h] [rbp-148h]
  int v139; // [rsp+68h] [rbp-148h]
  __m128i v140; // [rsp+70h] [rbp-140h] BYREF
  __int64 v141; // [rsp+80h] [rbp-130h] BYREF
  __int128 v142; // [rsp+88h] [rbp-128h]
  __int64 v143; // [rsp+A0h] [rbp-110h]
  __int128 v144; // [rsp+A8h] [rbp-108h]
  __int64 (__fastcall **v145)(); // [rsp+C0h] [rbp-F0h] BYREF
  unsigned __int64 *v146; // [rsp+C8h] [rbp-E8h]
  __int64 v147; // [rsp+D0h] [rbp-E0h]
  __m128i *v148; // [rsp+E0h] [rbp-D0h] BYREF
  __int128 v149; // [rsp+E8h] [rbp-C8h]
  __int64 v150; // [rsp+100h] [rbp-B0h] BYREF
  __int128 v151; // [rsp+108h] [rbp-A8h]
  __int64 v152; // [rsp+118h] [rbp-98h]
  __int128 v153; // [rsp+120h] [rbp-90h]
  __int64 v154; // [rsp+130h] [rbp-80h] BYREF
  __int128 v155; // [rsp+138h] [rbp-78h]
  __int64 v156; // [rsp+148h] [rbp-68h]
  __int128 v157; // [rsp+150h] [rbp-60h]
  __int64 v158; // [rsp+160h] [rbp-50h]
  __int128 v159; // [rsp+168h] [rbp-48h]
  unsigned __int64 v160; // [rsp+178h] [rbp-38h]

  v6 = a2[17].m128i_i64[1];
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v160 = __readfsqword(0x28u);
  v8 = *(_QWORD *)a3;
  *(_QWORD *)a3 = v6;
  v9 = a2[18].m128i_i64[0];
  v141 = 0;
  *(_QWORD *)(a3 + 8) = v9;
  v10 = a2[18].m128i_i64[1];
  v143 = 0;
  *(_QWORD *)(a3 + 16) = v10;
  a2[18] = v7;
  a2[17].m128i_i64[1] = v8;
  v145 = off_4DB470;
  v142 = 0;
  v144 = 0;
  v146 = 0;
  v11 = *(_QWORD *)(a1 + 152);
  v147 = 0;
  v154 = 0;
  v156 = 0;
  v158 = 0;
  v150 = 0;
  v152 = 0;
  v155 = 0;
  v157 = 0;
  v159 = 0;
  v151 = 0;
  v153 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    qfree();
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  *(_BYTE *)(a1 + 32) = 1;
  v140 = 0u;
  if ( (unsigned __int8)sub_775E0((_QWORD *)a1, &v140, a2) )
  {
    if ( (a4 & 2) == 0 )
    {
      v12 = &v140;
      sub_77AE0(a1, &v140, a2);
      v135 = v140.m128i_i64[1];
      v136 = (unsigned __int64 *)v140.m128i_i64[0];
      goto LABEL_6;
    }
    v148 = 0;
    v149 = 0;
    v52 = a2[14].m128i_i64[0];
    if ( v52 )
    {
      if ( a2[14].m128i_i64[1] )
      {
        v53 = *(_QWORD **)(v52 + 8);
        if ( v53 != (_QWORD *)v52 )
        {
          v54 = *((_DWORD *)v53 + 7);
LABEL_68:
          v148 = (__m128i *)qvector_reserve();
          v55 = v149;
          v57 = (__int64)v148;
          while ( 1 )
          {
            *(_DWORD *)(v57 + 4 * v55) = v54;
            v55 = v149 + 1;
            *(_QWORD *)&v149 = v149 + 1;
            if ( (*v53 & 2) == 0 )
            {
              v56 = (_QWORD *)v53[2];
              if ( (*(_BYTE *)v56 & 2) != 0 )
              {
                v93 = (_QWORD *)(*v53 & 0xFFFFFFFFFFFFFFFCLL);
                v94 = *v93;
                if ( (*v93 & 2) == 0 )
                {
                  while ( (_QWORD *)v93[2] == v53 )
                  {
                    v53 = v93;
                    v95 = v94 & 0xFFFFFFFFFFFFFFFCLL;
                    v94 = *(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v94 & 2) != 0 )
                    {
                      v53 = (_QWORD *)v95;
                      v57 = (__int64)v148;
                      if ( (_QWORD *)a2[14].m128i_i64[0] != v53 )
                        goto LABEL_67;
                      goto LABEL_176;
                    }
                    v93 = (_QWORD *)v95;
                  }
                }
                v53 = v93;
              }
              else
              {
                do
                {
                  v53 = v56;
                  v56 = (_QWORD *)v56[1];
                }
                while ( (*(_BYTE *)v56 & 2) == 0 );
              }
            }
            v57 = (__int64)v148;
            if ( (_QWORD *)a2[14].m128i_i64[0] == v53 )
              break;
LABEL_67:
            v54 = *((_DWORD *)v53 + 7);
            if ( *((_QWORD *)&v149 + 1) < (unsigned __int64)(v55 + 1) )
              goto LABEL_68;
          }
LABEL_176:
          if ( v57 )
          {
            *(_QWORD *)&v149 = 0;
            qfree();
          }
        }
      }
    }
    v96 = sub_77AE0(a1, &v140, a2);
    __SET_PAIR__(v135, (unsigned __int64)v12, *(_OWORD *)&v140);
    v136 = (unsigned __int64 *)v140.m128i_i64[0];
    if ( !v96 )
      goto LABEL_6;
  }
  else
  {
    v100 = sub_77AE0(a1, &v140, a2);
    v14 = v140.m128i_i64[1];
    __SET_PAIR__(v135, (unsigned __int64)v12, *(_OWORD *)&v140);
    v136 = (unsigned __int64 *)v140.m128i_i64[0];
    if ( (a4 & 2) == 0 || !v100 )
      goto LABEL_6;
  }
  v97 = a2[15].m128i_i64[0];
  v148 = 0;
  v149 = 0;
  if ( !v97 )
    goto LABEL_6;
  if ( !a2[15].m128i_i64[1] )
    goto LABEL_6;
  v98 = *(_QWORD *)(v97 + 8);
  if ( v98 == v97 )
    goto LABEL_6;
  v99 = *(_DWORD *)(v98 + 24);
LABEL_188:
  v148 = (__m128i *)qvector_reserve();
  v13 = v149;
  v12 = v148;
  while ( 1 )
  {
    v12->m128i_i32[v13] = v99;
    v13 = v149 + 1;
    *(_QWORD *)&v149 = v149 + 1;
    if ( (*(_QWORD *)v98 & 2) != 0 )
      goto LABEL_186;
    v14 = *(_QWORD *)(v98 + 16);
    if ( (*(_BYTE *)v14 & 2) == 0 )
    {
      do
      {
        v98 = v14;
        v14 = *(_QWORD *)(v14 + 8);
      }
      while ( (*(_BYTE *)v14 & 2) == 0 );
LABEL_186:
      v12 = v148;
      if ( v98 == a2[15].m128i_i64[0] )
        break;
      goto LABEL_187;
    }
    v120 = (__int64 *)(*(_QWORD *)v98 & 0xFFFFFFFFFFFFFFFCLL);
    v14 = *v120;
    if ( (*v120 & 2) == 0 )
    {
      while ( v120[2] == v98 )
      {
        v98 = (unsigned __int64)v120;
        v121 = v14 & 0xFFFFFFFFFFFFFFFCLL;
        v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v14 & 2) != 0 )
        {
          v98 = v121;
          goto LABEL_186;
        }
        v120 = (__int64 *)v121;
      }
    }
    v12 = v148;
    v98 = (unsigned __int64)v120;
    if ( v120 == (__int64 *)a2[15].m128i_i64[0] )
      break;
LABEL_187:
    v14 = *((_QWORD *)&v149 + 1);
    v99 = *(_DWORD *)(v98 + 24);
    if ( *((_QWORD *)&v149 + 1) < (unsigned __int64)(v13 + 1) )
      goto LABEL_188;
  }
  if ( v12 )
  {
    *(_QWORD *)&v149 = 0;
    qfree();
  }
LABEL_6:
  sub_6EF50((__int64 *)a1, (__int64)v12, v13, v14, v15, v16);
  v133 = *(_DWORD *)(a1 + 160) + 1;
  v17 = *(unsigned __int64 (__fastcall **)(__m128i *, int))(a2->m128i_i64[0] + 168);
  v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v18 == sub_64750 )
    v19 = *(unsigned int *)(a1 + 144);
  else
    v19 = (unsigned int)v18(a1);
  if ( (char *)v17 == (char *)sub_6B9A0 )
  {
    sub_66AC0((__int64)a2, v19);
    v20 = a2[19].m128i_u64[1];
    v19 = (int)v19;
    LODWORD(v148) = 0;
    v21 = v19;
    if ( (int)v19 < v20 )
    {
      a2[19].m128i_i64[1] = (int)v19;
      goto LABEL_11;
    }
    if ( v20 < (int)v19 )
    {
      v101 = a2[19].m128i_u64[0];
      v102 = a2[20].m128i_u64[0];
      if ( (unsigned __int64)&v148 >= v101 && (unsigned __int64)&v148 < v101 + 4 * v102 )
      {
        v103 = v21;
        if ( v102 < v21 )
        {
          v125 = qvector_reserve();
          a2[19].m128i_i64[0] = v125;
          v101 = v125;
          v103 = v21;
          v20 = a2[19].m128i_u64[1];
          if ( v20 >= v21 )
            goto LABEL_200;
        }
        while ( 1 )
        {
          *(_DWORD *)(v101 + 4 * v20++) = 0;
          if ( v103 == v20 )
            break;
          v101 = a2[19].m128i_u64[0];
        }
LABEL_199:
        v21 = v103;
        goto LABEL_200;
      }
      v103 = v21;
      if ( v102 >= v21
        || (v124 = qvector_reserve(),
            a2[19].m128i_i64[0] = v124,
            v101 = v124,
            v103 = v21,
            v20 = a2[19].m128i_u64[1],
            v20 < v21) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v101 + 4 * v20++) = 0;
          if ( v103 == v20 )
            break;
          v101 = a2[19].m128i_u64[0];
        }
        goto LABEL_199;
      }
LABEL_200:
      a2[19].m128i_i64[1] = v21;
    }
  }
  else
  {
    v17(a2, v19);
  }
LABEL_11:
  v22 = (signed int *)a2[12].m128i_i64[1];
  v23 = &v22[2 * a2[13].m128i_i64[0]];
  if ( v23 != v22 )
  {
    while ( 2 )
    {
      v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
      if ( v24 == sub_64750 )
        v25 = *(_DWORD *)(a1 + 144);
      else
        v25 = v24(a1);
      v26 = *v22;
      v27 = v22[1];
      v28 = *v22;
      if ( v26 < v25 && v27 < (unsigned __int64)v25 )
      {
        *(_DWORD *)(a2[17].m128i_i64[1] + 4 * v26) &= 0xFFFFFFE7;
        v29 = *(_DWORD **)(a1 + 152);
        v28 = *v22;
        v30 = &v29[*(_QWORD *)(a1 + 160)];
        if ( v29 == v30 )
        {
          v27 = v22[1];
          goto LABEL_25;
        }
        v31 = *(_DWORD **)(a1 + 152);
        while ( v28 != *v31 )
        {
          if ( v30 == ++v31 )
            goto LABEL_21;
        }
        if ( v30 != v31 )
        {
          sub_6C720((__int64)"failed to force goto for (%d,%d)\n", v28, v22[1]);
          goto LABEL_32;
        }
LABEL_21:
        v27 = v22[1];
        while ( v27 != *v29 )
        {
          if ( v30 == ++v29 )
            goto LABEL_25;
        }
        if ( v30 == v29 )
        {
LABEL_25:
          v32 = *(_QWORD *)(a1 + 48) + 24LL * v28;
          v33 = *(_DWORD **)v32;
          v34 = *(_QWORD *)v32 + 4LL * *(_QWORD *)(v32 + 8);
          if ( v33 != (_DWORD *)v34 )
          {
            while ( *v33 != v27 )
            {
              if ( (_DWORD *)v34 == ++v33 )
                goto LABEL_79;
            }
            if ( (_DWORD *)v34 != v33 )
            {
              v140.m128i_i64[0] = (__int64)v136;
              v140.m128i_i64[1] = v135;
              v35 = sub_74590((__int64 *)a1, &v140, a2, (__int64)&v141, v28, v27, 1);
              if ( v35 )
              {
                sub_72700(a1, a2, v35, &v141, &v145, 0, &v140);
                v135 = v140.m128i_i64[1];
                v136 = (unsigned __int64 *)v140.m128i_i64[0];
              }
              else
              {
                sub_6C720((__int64)"failed to force goto for (%d,%d)\n", *v22, v22[1]);
              }
LABEL_32:
              v22 += 2;
              if ( v23 == v22 )
                goto LABEL_33;
              continue;
            }
          }
        }
      }
      break;
    }
LABEL_79:
    sub_6C720((__int64)"failed to force goto for (%d,%d)\n", v28, v27);
    goto LABEL_32;
  }
LABEL_33:
  v148 = 0;
  v149 = 0;
LABEL_34:
  while ( 2 )
  {
    v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
    if ( v36 == sub_64750 )
      v37 = *(_DWORD *)(a1 + 144);
    else
      v37 = v36(a1);
    if ( v133 < v37 )
    {
      v38 = v155;
      v39 = 0;
      if ( (_QWORD)v155 )
      {
        do
        {
          v40 = v39 + 1;
          qfree();
          v39 = v40;
        }
        while ( v38 != v40 );
      }
      v41 = v157;
      *(_QWORD *)&v155 = 0;
      v42 = 0;
      if ( (_QWORD)v157 )
      {
        do
        {
          v43 = v42 + 1;
          qfree();
          v42 = v43;
        }
        while ( v41 != v43 );
      }
      *(_QWORD *)&v157 = 0;
      *(_QWORD *)&v159 = 0;
      *(_QWORD *)&v144 = 0;
      sub_6D600(a1, &v150, (__int64)&v145);
      v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
      if ( v44 == sub_64750 )
        v132 = *(_DWORD *)(a1 + 144);
      else
        v132 = v44(a1);
      if ( v132 > 0 )
      {
        v137 = 0;
        while ( 1 )
        {
          v48 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
          if ( v48 == sub_64750 )
          {
            if ( v133 >= *(_DWORD *)(a1 + 144) )
              goto LABEL_70;
          }
          else if ( v133 >= (int)v48(a1) )
          {
LABEL_70:
            LODWORD(v49) = v137;
            goto LABEL_71;
          }
          LODWORD(v49) = v137 + 1;
          if ( v137 >= (unsigned __int64)v151 )
            goto LABEL_71;
          v50 = *(_DWORD *)(v150 + 4 * v137);
          if ( v50 == -1 )
            goto LABEL_71;
          if ( (unsigned __int64)(unsigned int)v50 >= *(_QWORD *)(a1 + 104)
            || (v51 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * v50), v51 < 0)
            || v50 == v51 )
          {
            v140.m128i_i64[0] = (__int64)v136;
            v140.m128i_i64[1] = v135;
            v45 = sub_74EA0(
                    (__int64 *)a1,
                    &v140,
                    v50,
                    (unsigned __int64 *)&v148,
                    a2,
                    &v141,
                    (void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))&v145,
                    &v154,
                    1);
            if ( v45 || (_QWORD)v149 )
              goto LABEL_75;
            v46 = v144;
            v47 = v143;
            if ( *((_QWORD *)&v144 + 1) < (unsigned __int64)(v144 + 1) )
            {
              v143 = qvector_reserve();
              v47 = v143;
              v46 = v144;
            }
            *(_DWORD *)(v47 + 4 * v46) = v50;
            *(_QWORD *)&v144 = v144 + 1;
          }
          if ( ++v137 == v132 )
            goto LABEL_71;
        }
      }
      LODWORD(v49) = 0;
LABEL_71:
      if ( (_QWORD)v144 )
      {
        v58 = 0;
        v59 = 0;
        while ( 1 )
        {
          v60 = *(_DWORD *)(v143 + 4 * v59);
          v140.m128i_i64[0] = (__int64)v136;
          v140.m128i_i64[1] = v135;
          v45 = sub_76C00((__int64 *)a1, &v140, v60, a2, &v141, &v145, &v154);
          if ( v45 )
            break;
          v59 = ++v58;
          if ( v58 >= (unsigned __int64)v144 )
            goto LABEL_107;
        }
LABEL_75:
        if ( !v45 )
          goto LABEL_103;
LABEL_76:
        v140.m128i_i64[0] = (__int64)v136;
        v140.m128i_i64[1] = v135;
        sub_72700(a1, a2, v45, &v141, &v145, (__int64 *)&v148, &v140);
        v135 = v140.m128i_i64[1];
        v136 = (unsigned __int64 *)v140.m128i_i64[0];
        v61 = v149;
        v62 = v149;
        if ( (_QWORD)v149 )
          goto LABEL_77;
        if ( (a4 & 1) == 0 )
          continue;
        v66 = v155;
        v67 = 0;
        if ( (_QWORD)v155 )
        {
          v134 = v149;
          do
          {
            ++v67;
            qfree();
          }
          while ( v66 != v67 );
          v62 = v134;
        }
        v68 = v157;
        *(_QWORD *)&v155 = 0;
        v69 = v62;
        if ( (_QWORD)v157 )
        {
          do
          {
            v70 = v69 + 1;
            qfree();
            v69 = v70;
          }
          while ( v68 != v70 );
        }
        *(_QWORD *)&v157 = 0;
        *(_QWORD *)&v159 = 0;
        if ( v132 <= (int)v49 )
          continue;
        v49 = (int)v49;
        while ( 1 )
        {
          if ( v49 >= (unsigned __int64)v151 )
            goto LABEL_34;
          v72 = *(_DWORD *)(v150 + 4 * v49);
          if ( v72 == -1 )
            goto LABEL_34;
          if ( (unsigned __int64)(unsigned int)v72 >= *(_QWORD *)(a1 + 104)
            || (v71 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * v72), v71 < 0)
            || v72 == v71 )
          {
            v73 = (_DWORD *)a2[16].m128i_i64[0];
            v74 = &v73[a2[16].m128i_i64[1]];
            if ( v73 == v74 )
              goto LABEL_100;
            while ( v72 != *v73 )
            {
              if ( v74 == ++v73 )
                goto LABEL_100;
            }
            if ( v74 == v73 )
            {
LABEL_100:
              v140.m128i_i64[0] = (__int64)v136;
              v140.m128i_i64[1] = v135;
              v45 = sub_74EA0(
                      (__int64 *)a1,
                      &v140,
                      v72,
                      (unsigned __int64 *)&v148,
                      a2,
                      &v141,
                      (void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))&v145,
                      &v154,
                      0);
              if ( v45 || (_QWORD)v149 )
              {
                LODWORD(v49) = v49 + 1;
                if ( !v45 )
                {
LABEL_103:
                  v61 = v149;
                  if ( !(_QWORD)v149 )
                  {
                    if ( !under_debugger )
                      sub_37EA20(51805);
                    goto LABEL_265;
                  }
LABEL_77:
                  v63 = (unsigned int *)v148 + 2 * v61 - 2;
                  v64 = *v63;
                  v65 = v63[1];
                  *(_QWORD *)&v149 = v61 - 1;
                  v140.m128i_i64[0] = (__int64)v136;
                  v140.m128i_i64[1] = v135;
                  v45 = sub_74590((__int64 *)a1, &v140, a2, (__int64)&v141, v64, v65, 0);
                  if ( !v45 )
                  {
                    *(_QWORD *)&v149 = 0;
                    goto LABEL_34;
                  }
                }
                goto LABEL_76;
              }
            }
          }
          if ( v132 <= (int)++v49 )
            goto LABEL_34;
        }
      }
LABEL_107:
      if ( v132 > 0 )
      {
        for ( i = 0; ; i = 1 )
        {
          v129 = 0;
          v127 = 0;
          v130 = i ^ 1;
          do
          {
            if ( v127 < (unsigned __int64)v151 )
            {
              v75 = *(_DWORD *)(v150 + 4 * v127);
              if ( v75 != -1 )
              {
                for ( j = 0; ; ++j )
                {
                  v77 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
                  if ( v77 == sub_647B0 )
                  {
                    v78 = 0;
                    if ( *(_QWORD *)(a1 + 80) )
                      v78 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL * (int)v75 + 8);
                    if ( j >= v78 )
                      break;
                  }
                  else if ( j >= (int)v77(a1, v75) )
                  {
                    break;
                  }
                  v79 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 120LL);
                  if ( v79 == sub_647F0 )
                    v80 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * (int)v75) + 4LL * j);
                  else
                    v80 = v79(a1, v75, j);
                  v81 = sub_6FD50(a1, (__int64)a2, v80);
                  v131 = v81;
                  if ( (v81 & v130) != 0 )
                  {
                    v129 = v81 & v130;
                  }
                  else
                  {
                    v140.m128i_i64[0] = (__int64)v136;
                    v140.m128i_i64[1] = v135;
                    v76 = sub_74590((__int64 *)a1, &v140, a2, (__int64)&v141, v80, v75, i);
                    v45 = v76;
                    if ( v76 )
                    {
                      if ( v131 )
                      {
                        v139 = v76;
                        sub_6C720((__int64)"### removed eh34 edge %d->%d\n", v80, v75);
                        v45 = v139;
                      }
                      LODWORD(v49) = v127;
                      goto LABEL_75;
                    }
                  }
                }
              }
            }
            ++v127;
          }
          while ( v132 != v127 );
          if ( !v129 || i == 1 )
            break;
        }
      }
    }
    break;
  }
  nullsub_279(a2);
  v82 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v82 == sub_64750 )
    v83 = *(_DWORD *)(a1 + 144);
  else
    v83 = v82(a1);
  if ( v133 != v83 )
  {
    if ( !under_debugger )
      sub_37EA20(50365);
LABEL_265:
    BUG();
  }
  if ( v148 )
  {
    *(_QWORD *)&v149 = 0;
    qfree();
  }
  if ( !v136 )
    goto LABEL_135;
  if ( !v135 )
    goto LABEL_134;
  v110 = *v136;
  v111 = (__int64 *)(*v136 & 0xFFFFFFFFFFFFFFFCLL);
  v112 = *v111;
  v113 = v111;
  if ( (*v111 & 2) != 0 )
    goto LABEL_134;
  v114 = (__int64 *)v111[1];
  v115 = *v114;
  if ( (*v114 & 2) == 0 )
  {
    v122 = (__int64 *)v114[1];
    if ( (*(_BYTE *)v122 & 2) != 0 )
    {
      v123 = (__int64 *)v114[2];
      if ( (*(_BYTE *)v123 & 2) != 0 )
      {
LABEL_257:
        *v114 = v115 | 2;
LABEL_249:
        if ( v114 )
          qfree();
        v116 = v113[2];
        if ( (*(_BYTE *)v116 & 2) != 0 )
        {
LABEL_221:
          v112 = *v113;
          if ( (*v113 & 2) == 0 )
            goto LABEL_253;
          goto LABEL_222;
        }
LABEL_215:
        v117 = *(__int64 **)(v116 + 8);
        if ( (*(_BYTE *)v117 & 2) != 0 )
        {
          v118 = *(__int64 **)(v116 + 16);
          if ( (*(_BYTE *)v118 & 2) != 0 )
          {
            v119 = *(_QWORD *)v116;
LABEL_260:
            *(_QWORD *)v116 = v119 | 2;
LABEL_219:
            if ( v116 )
              qfree();
            goto LABEL_221;
          }
        }
        else
        {
          sub_6B120(v117);
          v118 = *(__int64 **)(v116 + 16);
          if ( (*(_BYTE *)v118 & 2) != 0 )
            goto LABEL_218;
        }
        sub_6B120(v118);
LABEL_218:
        v119 = *(_QWORD *)v116;
        if ( (*(_QWORD *)v116 & 2) != 0 )
          goto LABEL_219;
        goto LABEL_260;
      }
    }
    else
    {
      sub_6B120(v122);
      v123 = (__int64 *)v114[2];
      if ( (*(_BYTE *)v123 & 2) != 0 )
        goto LABEL_248;
    }
    sub_6B120(v123);
LABEL_248:
    v115 = *v114;
    if ( (*v114 & 2) != 0 )
      goto LABEL_249;
    goto LABEL_257;
  }
  v116 = v113[2];
  if ( (*(_BYTE *)v116 & 2) == 0 )
    goto LABEL_215;
LABEL_253:
  *v113 = v112 | 2;
LABEL_222:
  if ( v110 > 3 )
    qfree();
LABEL_134:
  qfree();
LABEL_135:
  if ( v152 )
  {
    *(_QWORD *)&v153 = 0;
    qfree();
  }
  if ( v150 )
  {
    *(_QWORD *)&v151 = 0;
    qfree();
  }
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree();
  }
  if ( v156 )
  {
    if ( (_QWORD)v157 )
    {
      v84 = 0;
      v85 = v157;
      do
      {
        ++v84;
        qfree();
      }
      while ( v85 != v84 );
    }
    *(_QWORD *)&v157 = 0;
    qfree();
  }
  if ( v154 )
  {
    if ( (_QWORD)v155 )
    {
      v86 = 0;
      v87 = v155;
      do
      {
        ++v86;
        qfree();
      }
      while ( v87 != v86 );
    }
    *(_QWORD *)&v155 = 0;
    qfree();
  }
  v145 = off_4DB470;
  v88 = v146;
  if ( !v146 )
    goto LABEL_156;
  v89 = *v146;
  if ( v147 )
  {
    v104 = (__int64 *)(v89 & 0xFFFFFFFFFFFFFFFCLL);
    v105 = *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v105 & 2) != 0 )
    {
LABEL_211:
      *v88 = v89 & 3 | (unsigned __int64)v88 & 0xFFFFFFFFFFFFFFFCLL;
      v108 = v146;
      v109 = (__m128i)(unsigned __int64)v146;
      *v146 &= ~1uLL;
      *(__m128i *)(v108 + 1) = _mm_unpacklo_epi64(v109, v109);
      *v146 |= 2u;
      v147 = 0;
      goto LABEL_154;
    }
    v106 = (__int64 *)v104[1];
    if ( (*(_BYTE *)v106 & 2) != 0 )
    {
      v107 = (__int64 *)v104[2];
      if ( (*(_BYTE *)v107 & 2) != 0 )
        goto LABEL_244;
    }
    else
    {
      sub_6B610(v106);
      v107 = (__int64 *)v104[2];
      if ( (*(_BYTE *)v107 & 2) != 0 )
        goto LABEL_207;
    }
    sub_6B610(v107);
LABEL_207:
    v105 = *v104;
    if ( (*v104 & 2) != 0 )
    {
LABEL_208:
      if ( v89 > 3 )
        qfree();
      v88 = v146;
      v89 = *v146;
      goto LABEL_211;
    }
LABEL_244:
    *v104 = v105 | 2;
    goto LABEL_208;
  }
  *v146 = *v146 & 3 | (unsigned __int64)v146 & 0xFFFFFFFFFFFFFFFCLL;
  v90 = v146;
  v91 = (__m128i)(unsigned __int64)v146;
  *v146 &= ~1uLL;
  *(__m128i *)(v90 + 1) = _mm_unpacklo_epi64(v91, v91);
  *v146 |= 2u;
LABEL_154:
  if ( v146 )
    qfree();
LABEL_156:
  if ( v143 )
  {
    *(_QWORD *)&v144 = 0;
    qfree();
  }
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree();
  }
  return 1;
}
