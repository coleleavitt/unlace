__int64 __fastcall sub_AF9670(__int64 a1, __int64 a2, __m128 a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  char **v5; // r12
  __int64 v6; // rdx
  char **v7; // r12
  __int64 v8; // rdx
  __int64 *v9; // r15
  __int64 *v10; // rsi
  unsigned int v11; // r13d
  __m128i *v15; // rax
  __m128i *v16; // rbx
  _DWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ebp
  __int64 v23; // r13
  unsigned int v24; // edi
  unsigned int v25; // edx
  size_t v26; // rsi
  unsigned int v27; // r14d
  unsigned int *v28; // rax
  char *v29; // rdi
  char *v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rcx
  unsigned int v33; // eax
  bool v34; // zf
  unsigned int v35; // ebp
  unsigned int v36; // edi
  __int64 v37; // r11
  __int32 v38; // r8d
  unsigned int v39; // r10d
  __int64 *v40; // r9
  const __m128i *v41; // r14
  __int64 v42; // rdi
  __m128i *v43; // rsi
  __m128i *i; // rax
  __int32 v45; // edx
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rax
  unsigned int v50; // r13d
  __int64 v51; // rcx
  __int64 v52; // r14
  __int64 v53; // rdx
  int v54; // r13d
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // rsi
  int v61; // ecx
  __int64 *v62; // rsi
  __m128 *v63; // rsi
  __int64 *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rdi
  int v67; // eax
  __m128 *v68; // rdi
  __int64 v69; // rax
  __int32 v70; // edx
  __int64 v71; // r13
  __int64 v72; // r13
  __int64 v73; // rsi
  __int64 v74; // r14
  unsigned int *v75; // rcx
  int v76; // edx
  unsigned int v77; // r11d
  __m128i *k; // rax
  __int32 *v79; // rdx
  __int32 v80; // ecx
  __int32 v81; // ecx
  _QWORD *v82; // rax
  unsigned int v83; // r11d
  _QWORD *v84; // rdx
  const __m128i *v85; // rcx
  __int64 *j; // rax
  __int64 v87; // rdx
  __m128 *v88; // rsi
  __m128 *v89; // rdx
  unsigned int v90; // edi
  unsigned int v91; // r13d
  unsigned int v92; // edi
  unsigned int v93; // r13d
  size_t v94; // rdi
  unsigned int *v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r13
  __int64 v98; // r13
  __int64 v99; // rsi
  __int64 v100; // r14
  unsigned int *v101; // rcx
  int v102; // edx
  unsigned int v103; // r8d
  size_t v104; // rsi
  unsigned int *v105; // rcx
  unsigned int v106; // r8d
  __int64 v107; // rsi
  _QWORD *v108; // rax
  __int64 *v109; // rcx
  _QWORD *v110; // rax
  _QWORD *v111; // [rsp+0h] [rbp-118h]
  __int64 v112; // [rsp+8h] [rbp-110h]
  int v113; // [rsp+10h] [rbp-108h]
  unsigned int v114; // [rsp+10h] [rbp-108h]
  unsigned int v115; // [rsp+10h] [rbp-108h]
  int v116; // [rsp+14h] [rbp-104h]
  __m128i v117; // [rsp+18h] [rbp-100h] BYREF
  __m128i *v118; // [rsp+28h] [rbp-F0h]
  __int64 *v119; // [rsp+30h] [rbp-E8h]
  __int64 *v120; // [rsp+38h] [rbp-E0h]
  __int64 *v121; // [rsp+40h] [rbp-D8h]
  int v122; // [rsp+48h] [rbp-D0h]
  unsigned int v123; // [rsp+4Ch] [rbp-CCh]
  __int64 v124; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v125[2]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v126[32]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 *v127; // [rsp+90h] [rbp-88h] BYREF
  char v128; // [rsp+98h] [rbp-80h]
  int v129; // [rsp+9Ch] [rbp-7Ch]
  __int64 v130; // [rsp+A0h] [rbp-78h] BYREF
  int v131; // [rsp+A8h] [rbp-70h]
  __int64 v132; // [rsp+B0h] [rbp-68h]
  int v133; // [rsp+B8h] [rbp-60h]
  __int64 v134; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v135[5]; // [rsp+C8h] [rbp-50h] BYREF

  v11 = 0;
  if ( *(_DWORD *)(a2 + 24) == 64 )
    return v11;
  v124 = 0;
  v15 = (__m128i *)sub_186B270(0x80u);
  v15->m128i_i64[0] = 0;
  v16 = v15;
  v17 = *(_DWORD **)(a2 + 208);
  v15[1].m128i_i64[0] = 0;
  v15[2].m128i_i64[0] = 0;
  v15[3].m128i_i64[0] = 0;
  v15[4].m128i_i64[0] = 0;
  v15[5].m128i_i64[0] = 0;
  v15[6].m128i_i64[0] = 0;
  v15[7].m128i_i64[0] = 0;
  v112 = *(_QWORD *)(a1 + 24);
  v111 = (_QWORD *)(a2 + 64);
  if ( v17 )
    *(v17 - 1) = 0;
  v18 = *(_QWORD *)(a2 + 216);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  if ( v124 )
    *(_DWORD *)(v124 - 4) = 0;
  v19 = *(_QWORD *)(a2 + 224);
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  v20 = *(_QWORD *)(a2 + 232);
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  v21 = *(_QWORD *)(a2 + 88);
  if ( !v21 )
  {
    v113 = 0;
    v22 = 0;
    if ( !v17 )
      goto LABEL_22;
    goto LABEL_66;
  }
  v22 = *(_DWORD *)(v21 - 4);
  v113 = v22;
  if ( !v17 )
  {
    if ( !v22 )
      goto LABEL_22;
    v69 = sub_186B270(0xAu);
    v17 = (_DWORD *)(v69 + 8);
    v24 = 2;
    *(_QWORD *)v69 = 2;
    LODWORD(v23) = 0;
    *(_QWORD *)(a2 + 208) = v69 + 8;
    if ( v22 > 2 )
      goto LABEL_17;
    *(_DWORD *)(v69 + 4) = v22;
    v29 = (char *)(v69 + 8);
    v30 = (char *)v17 + v22;
    goto LABEL_21;
  }
  v23 = (unsigned int)*(v17 - 1);
  if ( (unsigned int)v23 >= v22 )
  {
LABEL_66:
    *(v17 - 1) = v22;
    goto LABEL_22;
  }
  v24 = *(v17 - 2);
  if ( v24 < v22 )
  {
    do
    {
LABEL_17:
      v25 = (3 * v24 + 1) >> 1;
      v26 = v25 + 8;
      v27 = v25;
      if ( v24 + 8 >= (unsigned int)v26 || v24 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4((__int64 *)&v127, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v127);
        sub_233E40((__int64)&v127);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(v17 - 2, v26);
      v17 = v28 + 2;
      *v28 = v27;
      v24 = (3 * v24 + 1) >> 1;
      *(_QWORD *)(a2 + 208) = v28 + 2;
    }
    while ( v27 < v22 );
    v28[1] = v22;
    v29 = (char *)v17 + (unsigned int)v23;
    v30 = (char *)v17 + v22;
    if ( v22 == (_DWORD)v23 )
      goto LABEL_22;
    goto LABEL_21;
  }
  *(v17 - 1) = v22;
  v29 = (char *)v17 + v23;
  v30 = (char *)v17 + v22;
LABEL_21:
  memset(v29, 0, v30 - v29);
LABEL_22:
  sub_8C3430((_QWORD *)(a2 + 216), v22, 0xFFFFFFFF);
  sub_8C3430(&v124, v22, 0xFFFFFFFF);
  v31 = 0;
  *(_QWORD *)(a2 + 240) = 0;
  if ( v113 > 0 )
  {
    do
    {
      while ( *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4 * v31) != -1 )
      {
        if ( v113 == ++v31 )
          goto LABEL_27;
      }
      sub_AFCCC0(v111, (unsigned int)v31++, &v124);
    }
    while ( v113 != v31 );
  }
LABEL_27:
  v32 = *(_QWORD *)(a1 + 16);
  v11 = 0;
  v33 = 214013 * *(_DWORD *)(v32 + 7504) + 2531011;
  v34 = qword_1C7ED08 == *(_QWORD *)(v32 + 8984);
  *(_DWORD *)(v32 + 7504) = v33;
  if ( !v34 )
    goto LABEL_28;
  LODWORD(v118) = 0;
  v35 = 0;
  v122 = 0;
  v116 = HIWORD(v33) & 0x7FFF;
  v114 = 8;
  do
  {
    if ( *(_BYTE *)(v32 + 2416) )
      break;
    if ( !v124 )
      break;
    v36 = *(_DWORD *)(v124 - 4);
    if ( v35 >= v36 )
      break;
    v37 = (v35 + v116) % v36;
    v38 = *(_DWORD *)(v124 + 4 * v37);
    v39 = (v35 + v116) % v36;
    if ( v38 == -1 )
      goto LABEL_62;
    v40 = (__int64 *)(16LL * v114);
    v41 = (const __m128i *)((char *)v40 + (_QWORD)v16);
    v42 = 16LL * (v38 & (v114 - 1));
    v43 = &v16[(unsigned __int64)v42 / 0x10];
    if ( (__int64 *)v42 != v40 )
    {
      for ( i = &v16[(unsigned __int64)v42 / 0x10]; v41 != i; ++i )
      {
        v45 = i->m128i_i32[1];
        if ( v45 == 2 )
        {
          if ( v38 == i->m128i_i32[0] && v38 == i->m128i_i32[2] )
          {
LABEL_43:
            v46 = *(_QWORD *)(a1 + 32);
            v47 = i->m128i_u32[3];
            v117.m128i_i64[0] = *(_QWORD *)(v46 + 8 * v37);
            v48 = *(_QWORD *)(v117.m128i_i64[0] + 8);
            v117.m128i_i64[1] = *(_QWORD *)(v46 + 8 * v47);
            if ( *(_QWORD *)(v117.m128i_i64[1] + 8) != v48 )
            {
              v49 = *(_QWORD *)(a2 + 544);
              v50 = *(_DWORD *)(a2 + 192);
              if ( v49 )
                *(_DWORD *)(v49 - 4) = 0;
              LODWORD(v119) = v39;
              sub_AF0220(v111, v39, v47, v50, a2, 1);
              sub_AF0220(v111, v47, (unsigned int)v119, v50, a2, 1);
              if ( (unsigned int)sub_180B130(v111) > 0x13 )
              {
                if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
                {
                  sub_186A4C0(*(double *)a3.m128_u64);
                  v120 = *(__int64 **)(a1 + 16);
                  v71 = sub_180B150(v111, (unsigned int)v47);
                  sub_1606360(v125, *(_QWORD *)v117.m128i_i64[0], v112, 0, 0, 0);
                  v72 = sub_160E8B0(v71, v125);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v73 = *(_QWORD *)v117.m128i_i64[1];
                  v119 = (__int64 *)&v127;
                  sub_1606360(&v127, v73, v112, 0, 0, 0);
                  v74 = sub_160E8B0(v72, &v127);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v75 = *(unsigned int **)(a2 + 544);
                  if ( v75 )
                    v76 = *(v75 - 1);
                  else
                    v76 = 0;
                  sub_AA55A0((__int64)v120, v74, v76, v75);
                  std::operator<<<std::char_traits<char>>();
                  sub_18572D0(&v130);
                  sub_18572D0(v126);
                  sub_186A500(v126, "\n");
                }
                else
                {
                  v120 = *(__int64 **)(a1 + 16);
                  v97 = sub_180B150(v111, (unsigned int)v47);
                  sub_1606360(v125, *(_QWORD *)v117.m128i_i64[0], v112, 0, 0, 0);
                  v98 = sub_160E8B0(v97, v125);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v99 = *(_QWORD *)v117.m128i_i64[1];
                  v119 = (__int64 *)&v127;
                  sub_1606360(&v127, v99, v112, 0, 0, 0);
                  v100 = sub_160E8B0(v98, &v127);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v101 = *(unsigned int **)(a2 + 544);
                  if ( v101 )
                    v102 = *(v101 - 1);
                  else
                    v102 = 0;
                  sub_AA55A0((__int64)v120, v100, v102, v101);
                  std::operator<<<std::char_traits<char>>();
                  sub_18572D0(&v130);
                  sub_18572D0(v126);
                }
              }
              else
              {
                v119 = (__int64 *)&v127;
              }
              v51 = *(_QWORD *)(a2 + 544);
              v52 = *(_QWORD *)(a1 + 16);
              if ( v51 )
                v53 = *(unsigned int *)(v51 - 4);
              else
                v53 = 0;
              v54 = *(_DWORD *)(a1 + 8);
              sub_B72D60(v119, *(_QWORD *)(a1 + 16), v53, v51, 0, 0);
              v133 = v54;
              v134 = 0;
              v127 = (__int64 *)&off_1C579E8;
              v135[0] = v117;
              nullsub_687(v119, v52);
              v120 = &v134;
              v55 = sub_180C100(v52 + 8400, 72);
              v34 = v134 == 0;
              *(_BYTE *)(v55 + 8) = v128 & 3 | *(_BYTE *)(v55 + 8) & 0xFC;
              *(_DWORD *)(v55 + 12) = v129;
              *(_QWORD *)(v55 + 16) = v130;
              *(_DWORD *)(v55 + 24) = v131;
              v56 = v132;
              *(_QWORD *)v55 = qword_1C6E7C8;
              *(_QWORD *)(v55 + 32) = v56;
              LODWORD(v56) = v133;
              *(_QWORD *)(v55 + 48) = 0;
              *(_DWORD *)(v55 + 40) = v56;
              if ( v34 )
              {
                a3 = (__m128)_mm_loadu_si128(v135);
                *(__m128 *)(v55 + 56) = a3;
                *(_QWORD *)v55 = &off_1C579E8;
                v120 = &v134;
              }
              else
              {
                v121 = (__int64 *)v55;
                v120 = &v134;
                sub_AFCFB0(v55 + 48);
                v55 = (__int64)v121;
                a3 = (__m128)_mm_loadu_si128(v135);
                v57 = v121[6];
                *v121 = (__int64)&off_1C579E8;
                *(__m128 *)(v55 + 56) = a3;
                if ( v57 && *(_DWORD *)(v57 - 4) )
                {
                  v58 = *(_QWORD **)(v52 + 8600);
                  if ( v58 )
                  {
                    v59 = *((_DWORD *)v58 - 1);
                    if ( v59 == *((_DWORD *)v58 - 2) )
                    {
                      v103 = (3 * v59 + 1) >> 1;
                      v104 = 8 * v103 + 8;
                      if ( 8 * v59 + 8 >= (unsigned int)v104 || v59 >= v103 )
                      {
                        v5 = (char **)__cxa_allocate_exception(0x28u);
                        sub_140FB4(v125, "Overflow encountered when expanding vector", v6);
                        *v5 = (char *)off_1C63128;
                        sub_2333C0(v5 + 1, v125);
                        sub_233E40((__int64)v125);
                        __cxa_throw(
                          v5,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v123 = (3 * v59 + 1) >> 1;
                      v121 = (__int64 *)v55;
                      v105 = (unsigned int *)sub_186B300(v58 - 1, v104);
                      v106 = v123;
                      v58 = v105 + 2;
                      v55 = (__int64)v121;
                      v107 = v105[1];
                      *(_QWORD *)(v52 + 8600) = v105 + 2;
                      *v105 = v106;
                      LODWORD(v105) = v107;
                      v62 = &v58[v107];
                      v61 = (_DWORD)v105 + 1;
                    }
                    else
                    {
                      v60 = v59;
                      v61 = v59 + 1;
                      v62 = &v58[v60];
                    }
                  }
                  else
                  {
                    v121 = (__int64 *)v55;
                    v110 = (_QWORD *)sub_186B270(0x18u);
                    *v110 = 2;
                    v58 = v110 + 1;
                    v55 = (__int64)v121;
                    v61 = 1;
                    *(_QWORD *)(v52 + 8600) = v58;
                    v62 = v58;
                  }
                  *v62 = v55;
                  *((_DWORD *)v58 - 1) = v61;
                }
              }
              v121 = (__int64 *)v55;
              v127 = qword_1C6E7C8;
              sub_4EB210(v120);
              v32 = *(_QWORD *)(a1 + 16);
              if ( *(_QWORD *)(v117.m128i_i64[0] + 8) == *(_QWORD *)(v117.m128i_i64[1] + 8) )
              {
                v11 = 1;
              }
              else
              {
                v63 = *(__m128 **)(v32 + 8760);
                v64 = v121;
                if ( v63 )
                {
                  v65 = v63[-1].m128_u32[3];
                  if ( v65 == v63[-1].m128_i32[2] )
                  {
                    v91 = 3 * v65 + 1;
                    v92 = v91 & 0xFFFFFFFE;
                    v93 = v91 >> 1;
                    v94 = 8 * (v93 + v92) + 8;
                    if ( 24 * v65 + 8 >= (unsigned int)v94 || v65 >= v93 )
                    {
                      v7 = (char **)__cxa_allocate_exception(0x28u);
                      sub_140FB4(v119, "Overflow encountered when expanding vector", v8);
                      v9 = v119;
                      v10 = v119;
                      *v7 = (char *)off_1C63128;
                      sub_2333C0(v7 + 1, v10);
                      sub_233E40((__int64)v9);
                      __cxa_throw(
                        v7,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v120 = *(__int64 **)(a1 + 16);
                    v119 = v121;
                    v95 = (unsigned int *)sub_186B300(&v63[-1].m128_u16[4], v94);
                    v63 = (__m128 *)(v95 + 2);
                    v64 = v119;
                    v120[1095] = (__int64)(v95 + 2);
                    v96 = v95[1];
                    *v95 = v93;
                    v68 = (__m128 *)&v95[6 * v96 + 2];
                    v67 = v96 + 1;
                    v32 = *(_QWORD *)(a1 + 16);
                  }
                  else
                  {
                    v66 = v65;
                    v67 = v65 + 1;
                    v68 = (__m128 *)((char *)v63 + 24 * v66);
                  }
                }
                else
                {
                  v120 = *(__int64 **)(a1 + 16);
                  v119 = v121;
                  v108 = (_QWORD *)sub_186B270(0x38u);
                  v109 = v120;
                  v64 = v119;
                  *v108 = 2;
                  v63 = (__m128 *)(v108 + 1);
                  v67 = 1;
                  v109[1095] = (__int64)v63;
                  v68 = v63;
                  v32 = *(_QWORD *)(a1 + 16);
                }
                v11 = 1;
                v68[1].m128_u64[0] = (unsigned __int64)v64 | 3;
                a3 = _mm_loadh_ps((const double *)&v117.m128i_i64[1]);
                *v68 = a3;
                v63[-1].m128_i32[3] = v67;
              }
            }
            goto LABEL_62;
          }
        }
        else if ( !v45 )
        {
LABEL_83:
          v77 = 2 * v114;
          if ( 3 * v114 >= 4 * (v122 + (int)v118) )
            goto LABEL_84;
          goto LABEL_112;
        }
      }
    }
    if ( v16 != v43 )
    {
      i = v16;
      while ( 1 )
      {
        v70 = i->m128i_i32[1];
        if ( v70 == 2 )
        {
          if ( v38 == i->m128i_i32[0] && v38 == i->m128i_i32[2] )
            goto LABEL_43;
        }
        else if ( !v70 )
        {
          goto LABEL_83;
        }
        if ( v43 == ++i )
          goto LABEL_83;
      }
    }
    v77 = 2 * v114;
    if ( 3 * v114 < 4 * (v122 + (int)v118) )
    {
LABEL_112:
      LODWORD(v120) = v39;
      LODWORD(v119) = v38;
      LODWORD(v118) = v77;
      v117.m128i_i64[1] = 16LL * v77;
      v82 = (_QWORD *)sub_186B270(v117.m128i_u64[1]);
      v83 = (unsigned int)v118;
      v40 = (__int64 *)v117.m128i_i64[1];
      v117.m128i_i64[0] = (__int64)v82;
      v38 = (int)v119;
      v39 = (unsigned int)v120;
      if ( (_DWORD)v118 )
      {
        v84 = &v82[4 * (v114 & 0x7FFFFFFF)];
        do
        {
          *v82 = 0;
          v82 += 4;
          *(v82 - 2) = 0;
        }
        while ( v84 != v82 );
      }
      v85 = v16;
      v115 = v83 - 1;
      for ( j = (__int64 *)((char *)v40 + v117.m128i_i64[0]); v41 != v85; ++v85 )
      {
        if ( v85->m128i_i32[1] == 2 )
        {
          v87 = 16LL * (v85->m128i_i32[0] & v115);
          v88 = (__m128 *)(v87 + v117.m128i_i64[0]);
          if ( v40 == (__int64 *)v87 )
          {
LABEL_134:
            v89 = (__m128 *)v117.m128i_i64[0];
            if ( (__m128 *)v117.m128i_i64[0] == v88 )
            {
LABEL_143:
              v123 = v83;
              LODWORD(v121) = v39;
              v120 = (__int64 *)((char *)v40 + v117.m128i_i64[0]);
              v119 = v40;
              v118 = (__m128i *)v85;
              v117.m128i_i32[2] = v38;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            while ( v89->m128_i32[1] )
            {
              if ( v88 == ++v89 )
                goto LABEL_143;
            }
          }
          else
          {
            v89 = (__m128 *)(v87 + v117.m128i_i64[0]);
            while ( v89->m128_i32[1] )
            {
              if ( j == (__int64 *)++v89 )
                goto LABEL_134;
            }
          }
          a3 = (__m128)_mm_loadu_si128(v85);
          *v89 = a3;
        }
      }
      if ( v16 )
      {
        LODWORD(v121) = v83;
        LODWORD(v120) = v39;
        v119 = (__int64 *)((char *)v40 + v117.m128i_i64[0]);
        v118 = (__m128i *)v40;
        v117.m128i_i32[2] = v38;
        sub_186B220(v16);
        v83 = (unsigned int)v121;
        v39 = (unsigned int)v120;
        j = v119;
        v40 = (__int64 *)v118;
        v38 = v117.m128i_i32[2];
      }
      v90 = v115;
      v16 = (__m128i *)v117.m128i_i64[0];
      v114 = v83;
      v41 = (const __m128i *)j;
      LODWORD(v118) = 0;
      v42 = 16LL * (v38 & v90);
      v43 = (__m128i *)(v117.m128i_i64[0] + v42);
LABEL_84:
      if ( (__int64 *)v42 == v40 )
      {
        v79 = nullptr;
LABEL_100:
        if ( v43 != v16 )
        {
          for ( k = v16; k != v43; ++k )
          {
            v81 = k->m128i_i32[1];
            if ( v81 == 2 )
            {
              if ( v38 == k->m128i_i32[0] && v38 == k->m128i_i32[2] )
                goto LABEL_92;
            }
            else
            {
              if ( !v81 )
                goto LABEL_96;
              v79 = (__int32 *)k;
            }
          }
        }
LABEL_111:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
    }
    else if ( !v40 )
    {
      goto LABEL_111;
    }
    k = v43;
    v79 = nullptr;
    while ( 1 )
    {
      v80 = k->m128i_i32[1];
      if ( v80 != 2 )
        break;
      if ( v38 == k->m128i_i32[0] && v38 == k->m128i_i32[2] )
      {
LABEL_92:
        k->m128i_i32[2] = v38;
        k->m128i_i32[3] = v39;
        k->m128i_i32[1] = 2;
        goto LABEL_93;
      }
LABEL_88:
      if ( ++k == v41 )
        goto LABEL_100;
    }
    if ( v80 )
    {
      v79 = (__int32 *)k;
      goto LABEL_88;
    }
LABEL_96:
    if ( v79 )
      LODWORD(v118) = (_DWORD)v118 - 1;
    else
      v79 = (__int32 *)k;
    v79[2] = v38;
    v79[3] = v39;
    v79[1] = 2;
    *v79 = v38;
    ++v122;
LABEL_93:
    v32 = *(_QWORD *)(a1 + 16);
LABEL_62:
    ++v35;
  }
  while ( *(_QWORD *)(v32 + 8984) == qword_1C7ED08 );
  if ( v16 )
LABEL_28:
    sub_186B220(v16);
  if ( v124 )
    sub_186B220((void *)(v124 - 8));
  return v11;
}

