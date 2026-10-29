__int64 *__fastcall sub_8B5FC0(__int64 a1)
{
  _QWORD *v1; // r9
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // r15d
  unsigned int *v5; // r12
  unsigned int *v6; // r13
  __int64 v7; // rdx
  _DWORD *v8; // r14
  unsigned int v9; // r10d
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int *v13; // rax
  __int32 *v14; // rbp
  __int32 *v15; // r11
  __int64 v16; // r8
  _DWORD *v17; // rcx
  __int64 i; // rax
  int v19; // ebx
  int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rax
  int *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // r10
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // edi
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rdx
  char **v34; // rbp
  __int64 v35; // rdx
  unsigned int v36; // ebx
  size_t v37; // rsi
  unsigned int *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  unsigned int v42; // ecx
  unsigned int *v43; // rdi
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rbp
  _QWORD *j; // rbx
  __int64 v48; // rdx
  _QWORD *k; // r9
  __int64 v50; // rbp
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdx
  int v54; // r14d
  __int64 v55; // r13
  __int64 v56; // rsi
  __int64 v57; // rbp
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // r12
  int v61; // eax
  unsigned int v62; // ebp
  _QWORD *v63; // rax
  _QWORD *v64; // r14
  _QWORD *v65; // r13
  __int64 v66; // rbp
  __int64 v67; // r15
  _QWORD *v68; // rax
  unsigned int v69; // edx
  __int64 v70; // rcx
  int v71; // edx
  __int64 *v72; // rcx
  __int64 v73; // rbp
  __int64 *result; // rax
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rbp
  __int64 v80; // r12
  __int64 v81; // rdi
  bool v82; // zf
  unsigned int v83; // ebp
  void *v84; // r14
  unsigned int v85; // eax
  __int64 v86; // rax
  _QWORD *v87; // r9
  __int8 v88; // cl
  char v89; // dl
  char v90; // cl
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rbp
  __int64 v95; // rdx
  unsigned int v96; // eax
  unsigned int v97; // ebx
  unsigned int v98; // r11d
  unsigned int v99; // r10d
  unsigned int v100; // ecx
  unsigned int v101; // ebp
  unsigned int v102; // ecx
  unsigned int *v103; // rdx
  __int64 v104; // rcx
  unsigned int *v105; // r8
  unsigned int *v106; // rdx
  unsigned int v107; // ecx
  _QWORD *v108; // rax
  char **v109; // r12
  __int64 v110; // rdx
  char **exception; // rbp
  __int64 v112; // rdx
  unsigned int v113; // [rsp+8h] [rbp-100h]
  unsigned int v114; // [rsp+8h] [rbp-100h]
  _QWORD *v115; // [rsp+8h] [rbp-100h]
  _QWORD *v116; // [rsp+8h] [rbp-100h]
  unsigned int v117; // [rsp+8h] [rbp-100h]
  _QWORD *v118; // [rsp+8h] [rbp-100h]
  _QWORD *v119; // [rsp+8h] [rbp-100h]
  _QWORD *v120; // [rsp+8h] [rbp-100h]
  __int64 v121; // [rsp+10h] [rbp-F8h]
  int v122; // [rsp+10h] [rbp-F8h]
  __int64 v123; // [rsp+10h] [rbp-F8h]
  int v124; // [rsp+18h] [rbp-F0h]
  __int32 *v125; // [rsp+20h] [rbp-E8h]
  int v126; // [rsp+20h] [rbp-E8h]
  _QWORD *v127; // [rsp+20h] [rbp-E8h]
  int v128; // [rsp+20h] [rbp-E8h]
  int v129; // [rsp+20h] [rbp-E8h]
  __int64 v130; // [rsp+28h] [rbp-E0h]
  _QWORD *v131; // [rsp+28h] [rbp-E0h]
  _QWORD *v132; // [rsp+28h] [rbp-E0h]
  _QWORD *v133; // [rsp+28h] [rbp-E0h]
  unsigned int v134; // [rsp+3Ch] [rbp-CCh]
  _DWORD *v135; // [rsp+40h] [rbp-C8h]
  _QWORD *v136; // [rsp+48h] [rbp-C0h]
  __int64 v137; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v138; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int *v139; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v140; // [rsp+70h] [rbp-98h] BYREF
  __m128i v141; // [rsp+90h] [rbp-78h] BYREF
  __int64 v142; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v143; // [rsp+A8h] [rbp-60h]
  __int64 v144; // [rsp+B0h] [rbp-58h]
  int v145; // [rsp+B8h] [rbp-50h]
  __int64 v146[9]; // [rsp+C0h] [rbp-48h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 752);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(unsigned int *)(a1 + 316);
  v4 = 0;
  v5 = nullptr;
  v6 = nullptr;
  v7 = *(_QWORD *)(a1 + 224);
  ++dword_1C7EC30;
  v8 = nullptr;
  v124 = v3;
  v9 = v3;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * *(unsigned int *)(v7 + 24 * v3));
  do
  {
    if ( !v6 || (v11 = *(v6 - 1), (_DWORD)v11 == *(v6 - 2)) )
    {
      v127 = v1;
      v122 = v10;
      v114 = v9;
      v138 = v6;
      sub_313C10(&v138);
      v6 = v138;
      v1 = v127;
      v10 = v122;
      v9 = v114;
      v11 = *(v138 - 1);
    }
    v6[v11] = v9;
    v12 = v1[28];
    ++*(v6 - 1);
    v13 = (unsigned int *)(v12 + 24LL * v9);
    v4 += v13[2];
    v113 = *v13;
    v121 = *v13;
    v14 = *(__int32 **)(v1[29] + 8 * v121);
    if ( v14 )
    {
      v15 = &v14[*(v14 - 1)];
      if ( v14 != v15 )
      {
        while ( 1 )
        {
          v141.m128i_i32[0] = *v14;
          v16 = v12 + 24LL * v141.m128i_u32[0];
          if ( v141.m128i_i32[0] != v9 && *(_BYTE *)(v16 + 20) && v5 )
          {
            v17 = v8;
            for ( i = 0; *(v5 - 1) != i; ++i )
            {
              if ( *(_DWORD *)(v16 + 4) == v5[i] )
              {
                v19 = *v17 + *(_DWORD *)(v16 + 8) - v4;
                if ( v19 >= 0 )
                {
                  v20 = v10 + v19;
                  if ( v20 < 0 )
                  {
                    v21 = i + 1;
                    *(v5 - 1) = v21;
                    if ( v8 )
                      *(v8 - 1) = v21;
                    if ( v6 )
                      *(v6 - 1) = v21;
                    v136 = v1;
                    v135 = v17;
                    v134 = v9;
                    v130 = v16;
                    v125 = v15;
                    v138 = v6;
                    sub_893BD0(&v138, (unsigned int *)&v141);
                    ++v14;
                    v10 = v20;
                    v15 = v125;
                    v9 = v134;
                    v1 = v136;
                    v6 = v138;
                    v4 = *v135 + *(_DWORD *)(v130 + 8);
                    if ( v125 != v14 )
                      goto LABEL_10;
                    goto LABEL_25;
                  }
                }
              }
              ++v17;
            }
          }
          if ( v15 == ++v14 )
            break;
LABEL_10:
          v12 = v1[28];
        }
      }
    }
LABEL_25:
    if ( v8 )
    {
      v22 = (unsigned int)*(v8 - 1);
      if ( (_DWORD)v22 == *(v8 - 2) )
      {
        v36 = (unsigned int)(3 * v22 + 1) >> 1;
        v37 = 4 * v36 + 8;
        if ( 4 * (int)v22 + 8 >= (unsigned int)v37 || (unsigned int)v22 >= v36 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v141.m128i_i64, "Overflow encountered when expanding vector", v112);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v141);
          sub_233E40((__int64)&v141);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v132 = v1;
        v128 = v10;
        v38 = (unsigned int *)sub_186B300(v8 - 2, v37);
        v8 = v38 + 2;
        v10 = v128;
        v1 = v132;
        *v38 = v36;
        v23 = (int *)&v38[v38[1] + 2];
      }
      else
      {
        v23 = &v8[v22];
      }
    }
    else
    {
      v133 = v1;
      v129 = v10;
      v39 = (_QWORD *)sub_186B270(0x10u);
      v8 = v39 + 1;
      *v39 = 2;
      v10 = v129;
      v1 = v133;
      v23 = (int *)(v39 + 1);
    }
    *v23 = v4;
    ++*(v8 - 1);
    if ( !v5 || (v24 = *(v5 - 1), (_DWORD)v24 == *(v5 - 2)) )
    {
      v131 = v1;
      v126 = v10;
      v139 = v5;
      sub_313C10(&v139);
      v5 = v139;
      v10 = v126;
      v1 = v131;
      v24 = *(v139 - 1);
    }
    v5[v24] = v113;
    v25 = v1[34];
    ++*(v5 - 1);
    v9 = *(_DWORD *)(v25 + 4 * v121);
  }
  while ( v124 != v9 );
  if ( !v6 )
    goto LABEL_38;
  v26 = *(v6 - 1);
  if ( !v26 )
    goto LABEL_38;
  v27 = v26;
  v28 = v1[28];
  v29 = 0;
  v30 = 0;
  v31 = v26 - 1;
  do
  {
    v32 = v28 + 24LL * v6[v29];
    v33 = (unsigned int)(v29 - 1);
    if ( !v29 )
      v33 = v31;
    if ( *(_DWORD *)(v32 + 4) != *(_DWORD *)(v28 + 24LL * v6[v33]) )
      goto LABEL_38;
    ++v29;
    v30 += *(_DWORD *)(v32 + 8);
  }
  while ( v29 != v27 );
  if ( v30 >= 0 )
  {
LABEL_38:
    v34 = (char **)__cxa_allocate_exception(0x28u);
    sub_12D192(v141.m128i_i64, "edges are not inconsistent", v35);
    *v34 = (char *)off_1C63128;
    sub_2333C0(v34 + 1, &v141);
    sub_233E40((__int64)&v141);
    __cxa_throw(v34, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v40 = v1[46];
  v41 = 0;
  v42 = 0;
  do
  {
    v43 = (unsigned int *)(v40 + 4LL * v6[v41]);
    v44 = *v43 + 1;
    *v43 = v44;
    if ( v42 < v44 )
      v42 = v44;
    v45 = *(v6 - 1);
    ++v41;
  }
  while ( (unsigned int)v41 < v45 );
  if ( v45 > 5 && v42 > 0x14 )
  {
    v94 = v45;
    v95 = 0;
    v96 = 0;
    v97 = 0;
    v98 = -1;
    v99 = -1;
    do
    {
      v100 = *(_DWORD *)(v40 + 4LL * v6[v95]);
      if ( v99 < v100 )
      {
        if ( v100 < v98 )
        {
          v96 = v95;
          v98 = *(_DWORD *)(v40 + 4LL * v6[v95]);
        }
      }
      else
      {
        v96 = v97;
        v98 = v99;
        v97 = v95;
        v99 = *(_DWORD *)(v40 + 4LL * v6[v95]);
      }
      ++v95;
    }
    while ( v94 != v95 );
    v105 = &v6[v96];
    v106 = &v6[v97];
    v107 = v97 + 1 - v96;
    if ( v96 >= v97 )
    {
      v107 = v96 + 1 - v97;
      v106 = &v6[v96];
      v105 = &v6[v97];
    }
    v120 = v1;
    sub_8B5700(v1[95], *(_DWORD *)(v28 + 24LL * *v105 + 4), *(unsigned int *)(v28 + 24LL * *v106), v107, v105);
    v1 = v120;
    v45 = *(v6 - 1);
  }
  v46 = 0;
  for ( j = v1 + 94; (unsigned int)v46 < v45; ++v46 )
  {
    v48 = v1[28] + 24LL * v6[v46];
    if ( *(_DWORD *)(v48 + 16) != -2 )
    {
      v115 = v1;
      sub_893780(j, (unsigned int *)(v48 + 16));
      v45 = *(v6 - 1);
      v1 = v115;
    }
  }
  v116 = v1;
  sub_186B220(v5 - 2);
  sub_186B220(v6 - 2);
  sub_186B220(v8 - 2);
  sub_8A06F0((__int64)v116);
  k = v116;
  v50 = *(unsigned int *)(v116[3] + 712LL);
  if ( !(_DWORD)v50 )
  {
    v51 = v116[94];
    v52 = 0;
    v123 = v116[2];
    if ( !v51 )
      goto LABEL_101;
    goto LABEL_58;
  }
  sub_180C5A0(&v140, "farkas");
  v141.m128i_i8[8] = 2;
  v137 = 0;
  v141.m128i_i64[0] = v140.m128i_i64[0];
  sub_8B4B00(&v137);
  v52 = v137;
  v82 = v141.m128i_i8[8] == 0;
  *(__m128i *)(v137 + 16LL * *(unsigned int *)(v137 - 4)) = _mm_load_si128(&v141);
  v141.m128i_i32[0] = 0;
  if ( !v82 )
    v141.m128i_i8[8] = 0;
  ++*(_DWORD *)(v52 - 4);
  v83 = 0;
  sub_15D0DF0(&v141);
  for ( k = v116; ; k = v118 )
  {
    v51 = k[94];
    v85 = v51 ? *(_DWORD *)(v51 - 4) : 0;
    if ( v85 < v83 )
      break;
    v119 = k;
    v141 = (__m128i)1uLL;
    v142 = 1;
    v143 = 0;
    sub_182CBA0(qword_1C7F2C0, &v142);
    BYTE4(v142) &= ~1u;
    LODWORD(v142) = 1;
    v86 = sub_186B270(0x20u);
    v87 = v119;
    v140.m128i_i8[8] = 4;
    v88 = v141.m128i_i8[4];
    v140.m128i_i64[0] = v86;
    *(_DWORD *)v86 = v141.m128i_i32[0];
    v89 = v88 & 3 | *(_BYTE *)(v86 + 4) & 0xFC;
    v90 = BYTE4(v142);
    *(_BYTE *)(v86 + 4) = v89;
    v91 = v141.m128i_i64[1];
    v141.m128i_i64[1] = 0;
    *(_QWORD *)(v86 + 8) = v91;
    *(_DWORD *)(v86 + 16) = v142;
    *(_BYTE *)(v86 + 20) = v90 & 3 | *(_BYTE *)(v86 + 20) & 0xFC;
    v92 = v143;
    v143 = 0;
    *(_QWORD *)(v86 + 24) = v92;
    v93 = *(unsigned int *)(v52 - 4);
    if ( (_DWORD)v93 != *(_DWORD *)(v52 - 8) )
    {
      *(__m128i *)(v52 + 16 * v93) = _mm_load_si128(&v140);
LABEL_92:
      v140.m128i_i32[0] = 0;
      v140.m128i_i8[8] = 0;
      goto LABEL_93;
    }
    v137 = v52;
    sub_8B4B00(&v137);
    v52 = v137;
    v87 = v119;
    v82 = v140.m128i_i8[8] == 0;
    *(__m128i *)(v137 + 16LL * *(unsigned int *)(v137 - 4)) = _mm_load_si128(&v140);
    if ( !v82 )
      goto LABEL_92;
    v140.m128i_i32[0] = 0;
LABEL_93:
    ++*(_DWORD *)(v52 - 4);
    ++v83;
    v118 = v87;
    sub_15D0DF0(&v140);
    v84 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v141);
    sub_182CBA0(v84, &v142);
  }
  v50 = *(unsigned int *)(v52 - 4);
  v123 = k[2];
  if ( v51 )
  {
LABEL_58:
    v53 = *(unsigned int *)(v51 - 4);
    goto LABEL_59;
  }
LABEL_101:
  v53 = 0;
LABEL_59:
  v54 = *((_DWORD *)k + 2);
  sub_B72D60(&v141, v123, v53, v51, 0, 0);
  v145 = v54;
  v141.m128i_i64[0] = (__int64)qword_1C6E7C8;
  v146[0] = 0;
  if ( (_DWORD)v50 )
  {
    v55 = v52;
    v56 = v52;
    v57 = v52 + 16 * v50;
LABEL_61:
    sub_8B4B00(v146);
    v58 = v146[0];
    v59 = *(unsigned int *)(v146[0] - 4);
    while ( 1 )
    {
      sub_15D0E50(16 * v59 + v58, v56);
      v58 = v146[0];
      v55 += 16;
      v59 = (unsigned int)(*(_DWORD *)(v146[0] - 4) + 1);
      *(_DWORD *)(v146[0] - 4) = v59;
      if ( v55 == v57 )
        break;
      v56 = v55;
      if ( *(_DWORD *)(v58 - 8) == (_DWORD)v59 )
        goto LABEL_61;
    }
  }
  v141.m128i_i64[0] = (__int64)&off_1C57990;
  sub_B73430(&v141, v123);
  v60 = sub_180C100(v123 + 8400, 56);
  *(_BYTE *)(v60 + 8) = v141.m128i_i8[8] & 3 | *(_BYTE *)(v60 + 8) & 0xFC;
  *(_DWORD *)(v60 + 12) = v141.m128i_i32[3];
  *(_QWORD *)(v60 + 16) = v142;
  *(_DWORD *)(v60 + 24) = v143;
  *(_QWORD *)(v60 + 32) = v144;
  *(_QWORD *)v60 = qword_1C6E7C8;
  v61 = v145;
  *(_QWORD *)(v60 + 48) = 0;
  *(_DWORD *)(v60 + 40) = v61;
  if ( v146[0] )
  {
    v62 = *(_DWORD *)(v146[0] - 4);
    v117 = *(_DWORD *)(v146[0] - 8);
    v63 = (_QWORD *)sub_186B270(16LL * v117 + 8);
    v64 = v63 + 1;
    v65 = v63 + 1;
    *v63 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v117), _mm_cvtsi32_si128(v62)).m128i_u64[0];
    *(_QWORD *)(v60 + 48) = v63 + 1;
    v66 = v146[0];
    if ( !v146[0] || (v67 = v146[0] + 16LL * *(unsigned int *)(v146[0] - 4), v146[0] == v67) )
    {
      *(_QWORD *)v60 = &off_1C57990;
LABEL_70:
      if ( *((_DWORD *)v65 - 1) )
      {
        v68 = *(_QWORD **)(v123 + 8600);
        if ( v68 )
        {
          v69 = *((_DWORD *)v68 - 1);
          if ( v69 == *((_DWORD *)v68 - 2) )
          {
            v101 = (3 * v69 + 1) >> 1;
            v102 = 8 * v101 + 8;
            if ( 8 * v69 + 8 >= v102 || v69 >= v101 )
            {
              v109 = (char **)__cxa_allocate_exception(0x28u);
              sub_12D192(v140.m128i_i64, "Overflow encountered when expanding vector", v110);
              *v109 = (char *)off_1C63128;
              sub_2333C0(v109 + 1, &v140);
              sub_233E40((__int64)&v140);
              __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v103 = (unsigned int *)sub_186B300(v68 - 1, v102);
            v68 = v103 + 2;
            v104 = v103[1];
            *(_QWORD *)(v123 + 8600) = v103 + 2;
            *v103 = v101;
            LODWORD(v103) = v104;
            v72 = &v68[v104];
            v71 = (_DWORD)v103 + 1;
          }
          else
          {
            v70 = v69;
            v71 = v69 + 1;
            v72 = &v68[v70];
          }
        }
        else
        {
          v108 = (_QWORD *)sub_186B270(0x18u);
          *v108 = 2;
          v68 = v108 + 1;
          v72 = v68;
          *(_QWORD *)(v123 + 8600) = v68;
          v71 = 1;
        }
        *v72 = v60;
        *((_DWORD *)v68 - 1) = v71;
      }
    }
    else
    {
      do
      {
        sub_15D0E50(v64, v66);
        v66 += 16;
        v64 += 2;
      }
      while ( v66 != v67 );
      v65 = *(_QWORD **)(v60 + 48);
      *(_QWORD *)v60 = &off_1C57990;
      if ( v65 )
        goto LABEL_70;
    }
  }
  else
  {
    *(_QWORD *)v60 = &off_1C57990;
  }
  v140.m128i_i64[0] = v60 | 3;
  sub_8E8670(v123, &v140, 4294967294LL);
  v73 = v146[0];
  result = qword_1C6E7C8;
  v141.m128i_i64[0] = (__int64)qword_1C6E7C8;
  if ( v146[0] )
  {
    v75 = *(unsigned int *)(v146[0] - 4);
    if ( (_DWORD)v75 )
    {
      v76 = v146[0] + 16 * v75;
      do
      {
        v77 = v73;
        v73 += 16;
        sub_15D0DF0(v77);
      }
      while ( v73 != v76 );
      v73 = v146[0];
    }
    result = (__int64 *)sub_186B220((void *)(v73 - 8));
  }
  if ( v52 )
  {
    v78 = *(unsigned int *)(v52 - 4);
    if ( (_DWORD)v78 )
    {
      v79 = v52;
      v80 = v52 + 16 * v78;
      do
      {
        v81 = v79;
        v79 += 16;
        sub_15D0DF0(v81);
      }
      while ( v79 != v80 );
    }
    return (__int64 *)sub_186B220((void *)(v52 - 8));
  }
  return result;
}

