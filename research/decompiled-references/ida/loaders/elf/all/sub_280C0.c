__int64 __fastcall sub_280C0(__m128 *a1, _QWORD *a2, int a3, __m128 a4, __m128 si128, __m128 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // r10
  char *v21; // rdx
  unsigned int v22; // eax
  char v23; // r9
  int v24; // eax
  char v25; // r11
  __int64 v26; // rax
  char v27; // r11
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int8 v33; // al
  __int64 v34; // r12
  int v35; // edx
  unsigned int v36; // eax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  bool v39; // zf
  __m128i *v40; // r8
  size_t v41; // rax
  size_t v42; // rdi
  size_t v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // eax
  __int64 v47; // rax
  int v49; // ecx
  unsigned __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rax
  int v53; // ecx
  unsigned __int64 v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // edx
  char *v60; // rdx
  unsigned int v61; // eax
  char v62; // cl
  int v63; // edx
  __int64 v64; // rax
  unsigned int *v65; // rcx
  unsigned int *v66; // rdx
  __int64 i; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 *v73; // rdx
  __int64 v74; // rax
  unsigned int v75; // eax
  __int64 v76; // r10
  int v77; // eax
  char *v78; // rcx
  unsigned int v79; // eax
  char v80; // si
  __int32 v81; // eax
  __int64 v82; // rax
  unsigned __int64 v83; // rsi
  __int64 v84; // rsi
  size_t v85; // r12
  unsigned int v86; // r12d
  __int64 v87; // rax
  unsigned int *v88; // r8
  __int64 v89; // rcx
  unsigned __int64 v90; // rsi
  __int64 v91; // rax
  int v92; // ecx
  unsigned __int64 v93; // rdx
  unsigned int *v94; // rax
  __int64 v95; // rsi
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rdi
  __int64 v100; // rdx
  __int64 v101; // r8
  char *v102; // rcx
  unsigned __int64 v103; // rax
  char *v104; // rsi
  char v105; // dl
  unsigned __int64 v106; // rsi
  int v107; // r12d
  __int64 v108; // rdx
  __int64 v109; // r8
  unsigned int v110; // edi
  char *v111; // rcx
  unsigned int v112; // eax
  char *v113; // rsi
  char v114; // dl
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rsi
  char *v119; // rdx
  unsigned int v120; // eax
  char v121; // r8
  const __m128i *v122; // r12
  __int64 v123; // rax
  __int64 v124; // rbp
  unsigned int *v125; // rbx
  __int64 v126; // rdx
  __m128i v127; // xmm0
  __int64 v128; // rax
  unsigned int *v129; // r9
  __int64 v130; // rax
  __int64 v131; // r14
  unsigned __int64 v132; // rbx
  char v133; // r13
  char *v134; // r12
  unsigned int *v135; // rbp
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  unsigned __int64 v138; // rdx
  _DWORD *v139; // rax
  unsigned __int64 v140; // rcx
  char *v141; // rax
  char *v142; // r11
  unsigned int v143; // eax
  unsigned int v144; // eax
  unsigned int v145; // esi
  __int64 v146; // rdi
  void *v147; // rax
  __int64 v149; // [rsp+10h] [rbp-68h]
  __int64 v150; // [rsp+10h] [rbp-68h]
  __int64 v151; // [rsp+10h] [rbp-68h]
  __m128i *v152; // [rsp+18h] [rbp-60h]
  _QWORD *v153; // [rsp+18h] [rbp-60h]
  const __m128i *v154; // [rsp+18h] [rbp-60h]
  __m128i *v155; // [rsp+18h] [rbp-60h]
  __int64 v156; // [rsp+18h] [rbp-60h]
  __m128i *dest; // [rsp+20h] [rbp-58h]
  __m128i *desta; // [rsp+20h] [rbp-58h]
  unsigned int destb; // [rsp+20h] [rbp-58h]
  _QWORD *v160; // [rsp+28h] [rbp-50h]
  unsigned __int64 v161[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = (__int64)a1;
  v161[1] = __readfsqword(0x28u);
  v8 = a1[2].m128_u32[3];
  if ( (_DWORD)v8 )
  {
    v8 = a1->m128_u32[0];
    if ( (_DWORD)v8 == 10 )
      goto LABEL_82;
  }
  else
  {
    a4.m128_u64[0] = 0;
    v65 = (unsigned int *)&a1[5];
    a1[3].m128_i8[0] = 0;
    v66 = (unsigned int *)&a1[8];
    a1->m128_u64[0] = 0;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_6BF90);
    a1[2].m128_u64[0] = 0;
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[8] = 0;
    a1[9] = 0;
    a1[10] = 0;
    v86 = a1[2].m128_u32[3];
    a3 = 1;
    a1[11] = si128;
    if ( !v86 )
    {
LABEL_88:
      a4.m128_u64[0] = 0;
      *(_BYTE *)(v7 + 48) = 0;
      v8 = 0;
      *(_QWORD *)v7 = 0;
      *(_QWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 80) = 0;
      *((_OWORD *)v65 + 1) = 0;
      *((_OWORD *)v65 + 2) = 0;
      *(_OWORD *)(v7 + 128) = 0;
      *((_OWORD *)v66 + 1) = 0;
      *((_OWORD *)v66 + 2) = 0;
      *(__m128 *)(v7 + 176) = si128;
    }
  }
  v9 = a2[1];
  v10 = a2[4];
  *(_QWORD *)(v7 + 16) = v9;
  while ( 2 )
  {
    switch ( v8 )
    {
      case 0LL:
        if ( !(unsigned __int8)sub_25AE0(v7, a2) )
          goto LABEL_53;
        v39 = *(_DWORD *)(v7 + 192) == 1484404733;
        *(_DWORD *)v7 = 1;
        if ( !v39 || *(_WORD *)(v7 + 196) != 90 )
        {
          v16 = 5;
          goto LABEL_102;
        }
        v106 = *(unsigned __int8 *)(v7 + 199);
        if ( *(_DWORD *)(v7 + 200) != ~(dword_8BE20[(unsigned __int8)(~LOBYTE(dword_8BE20[(unsigned __int8)~*(_BYTE *)(v7 + 198)])
                                                                    ^ *(_BYTE *)(v7 + 199))]
                                      ^ ((dword_8BE20[(unsigned __int8)~*(_BYTE *)(v7 + 198)] ^ 0xFFFFFFu) >> 8)) )
          goto LABEL_136;
        if ( *(_BYTE *)(v7 + 198) || (unsigned __int8)v106 > 0xFu )
          goto LABEL_159;
        *(_DWORD *)(v7 + 40) = v106;
        if ( (unsigned __int8)v106 > 0xAu || (v57 = -1044, _bittest64(&v57, v106)) )
        {
          v16 = 2;
          goto LABEL_102;
        }
LABEL_67:
        v58 = a2[1];
        if ( v58 == a2[2] )
          goto LABEL_53;
        v59 = *(unsigned __int8 *)(*a2 + v58);
        if ( !(_BYTE)v59 )
        {
          a2[1] = v58 + 1;
          *(_QWORD *)(v7 + 16) = v58;
          v8 = 6;
          *(_DWORD *)v7 = 6;
          continue;
        }
        v17 = (unsigned int)(4 * v59 + 4);
        *(_DWORD *)v7 = 2;
        *(_DWORD *)(v7 + 72) = v17;
        *(_QWORD *)(v7 + 184) = v17;
        *(_QWORD *)(v7 + 176) = 0;
LABEL_13:
        if ( !(unsigned __int8)sub_25AE0(v7, a2) )
          goto LABEL_53;
        v18 = *(_QWORD *)(v7 + 184);
        v19 = v7 + 192;
        v20 = v18 - 4;
        *(_QWORD *)(v7 + 184) = v18 - 4;
        if ( v18 == 4 )
        {
          v24 = 0;
        }
        else
        {
          v21 = (char *)(v7 + 192);
          v22 = -1;
          do
          {
            v23 = *v21++;
            v22 = dword_8BE20[(unsigned __int8)(v22 ^ v23)] ^ (v22 >> 8);
          }
          while ( v21 != (char *)(v7 + v18 + 188) );
          v24 = ~v22;
        }
        if ( *(_DWORD *)(v19 + v18 - 4) != v24 )
          goto LABEL_136;
        v25 = *(_BYTE *)(v7 + 193);
        *(_QWORD *)(v7 + 176) = 2;
        if ( (v25 & 0x3E) != 0 )
          goto LABEL_159;
        if ( (v25 & 0x40) != 0 )
        {
          if ( (unsigned int)sub_24F00(v7, v19, (unsigned __int64 *)(v7 + 176), v18 - 4) != 1 )
            goto LABEL_136;
          *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 8);
          v26 = -1;
          if ( v25 >= 0 )
            goto LABEL_22;
        }
        else
        {
          *(_QWORD *)(v7 + 56) = -1;
          v26 = -1;
          if ( v25 >= 0 )
            goto LABEL_22;
        }
        if ( (unsigned int)sub_24F00(v7, v19, (unsigned __int64 *)(v7 + 176), v20) != 1 )
          goto LABEL_136;
        v26 = *(_QWORD *)(v7 + 8);
LABEL_22:
        v27 = v25 & 1;
        *(_QWORD *)(v7 + 64) = v26;
        v28 = *(_QWORD *)(v7 + 176);
        *(_BYTE *)(v7 + 1232) = v27;
        if ( v27 )
        {
          if ( v20 - v28 <= 1 )
            goto LABEL_159;
          *(_QWORD *)(v7 + 176) = v28 + 1;
          v29 = *(unsigned __int8 *)(v7 + v28 + 192);
          if ( (unsigned int)(v29 - 4) > 7 )
            goto LABEL_159;
          v30 = *(_QWORD *)(v7 + 1224);
          *(_DWORD *)v30 = v29;
          *(_DWORD *)(v30 + 4) = 0;
          *(_QWORD *)(v30 + 12) = 0;
          *(_OWORD *)(v30 + 48) = 0;
          v31 = *(_QWORD *)(v7 + 176);
          v28 = v31 + 1;
          *(_QWORD *)(v7 + 176) = v31 + 1;
          if ( *(_BYTE *)(v7 + v31 + 192) )
            goto LABEL_159;
          v20 = *(_QWORD *)(v7 + 184);
        }
        if ( v20 - v28 <= 1 )
          goto LABEL_136;
        *(_QWORD *)(v7 + 176) = v28 + 1;
        if ( *(_BYTE *)(v7 + v28 + 192) != 33 )
          goto LABEL_159;
        v32 = v28 + 2;
        *(_QWORD *)(v7 + 176) = v28 + 2;
        if ( *(_BYTE *)(v7 + v28 + 193) != 1 )
          goto LABEL_159;
        if ( v32 == v20 )
          goto LABEL_136;
        *(_QWORD *)(v7 + 176) = v28 + 3;
        v33 = *(_BYTE *)(v7 + v32 + 192);
        if ( v33 > 0x27u )
        {
LABEL_159:
          v16 = 6;
          if ( *(_DWORD *)(v7 + 44) )
            goto LABEL_137;
          goto LABEL_56;
        }
        v34 = *(_QWORD *)(v7 + 1216);
        v35 = *(_DWORD *)(v34 + 100);
        v36 = ((v33 & 1) + 2) << ((v33 >> 1) + 11);
        *(_DWORD *)(v34 + 88) = v36;
        if ( v35 )
        {
          if ( *(_DWORD *)(v34 + 92) < v36 )
          {
            v16 = 4;
LABEL_102:
            if ( *(_DWORD *)(v7 + 44) )
              goto LABEL_137;
            goto LABEL_56;
          }
          *(_QWORD *)(v34 + 80) = v36;
          if ( v35 == 2 && *(_DWORD *)(v34 + 96) < v36 )
          {
            *(_DWORD *)(v34 + 96) = v36;
            free(*(void **)(v34 + 40));
            v147 = malloc(*(unsigned int *)(v34 + 88));
            *(_QWORD *)(v34 + 40) = v147;
            if ( !v147 )
            {
              *(_DWORD *)(v34 + 96) = 0;
              v16 = 3;
              if ( *(_DWORD *)(v7 + 44) )
                goto LABEL_137;
              goto LABEL_56;
            }
          }
        }
        *(_DWORD *)(v34 + 104) = 0;
        *(_BYTE *)(v34 + 120) = 1;
        *(_DWORD *)(v34 + 28428) = 0;
        v37 = *(_QWORD *)(v7 + 184);
        v38 = *(_QWORD *)(v7 + 176);
        while ( v38 < v37 )
        {
          *(_QWORD *)(v7 + 176) = ++v38;
          if ( *(_BYTE *)(v7 + v38 + 191) )
            goto LABEL_159;
        }
        a4.m128_u64[0] = 0;
        v39 = *(_DWORD *)(v7 + 40) == 10;
        *(_QWORD *)(v7 + 176) = 0;
        *(_OWORD *)(v7 + 80) = 0;
        if ( v39 )
        {
          v127 = _mm_load_si128((const __m128i *)&xmmword_6BFA0);
          *(_QWORD *)(v7 + 1336) = 0;
          *(__m128i *)(v7 + 1304) = v127;
          a4 = (__m128)_mm_load_si128((const __m128i *)&xmmword_6BFB0);
          *(__m128 *)(v7 + 1320) = a4;
        }
        *(_DWORD *)v7 = 3;
LABEL_39:
        v39 = *(_BYTE *)(v7 + 1232) == 0;
        *(_QWORD *)(v7 + 16) = a2[1];
        *(_QWORD *)(v7 + 24) = a2[4];
        v149 = *(_QWORD *)(v7 + 1216);
        if ( v39 )
        {
          v16 = sub_27580(v149, a2);
          goto LABEL_147;
        }
        v40 = *(__m128i **)(v7 + 1224);
        if ( v40[3].m128i_i64[0] )
        {
          v154 = *(const __m128i **)(v7 + 1224);
          sub_25B60(v154, a2, *(double *)a4.m128_u64, *(double *)si128.m128_u64, a6);
          v40 = (__m128i *)v154;
          if ( v154[3].m128i_i64[0] )
            goto LABEL_127;
          if ( v154->m128i_i32[1] == 1 )
            goto LABEL_197;
        }
        v41 = a2[5];
        v42 = a2[4];
        v43 = v40[3].m128i_u64[1];
        if ( v43 >= v41 - v42 && v43 )
          goto LABEL_43;
        v161[0] = a2[4];
        v152 = v40;
        dest = v40 + 4;
        memcpy((void *)(a2[3] + v42), &v40[4], v43);
        a2[4] += v152[3].m128i_i64[1];
        v81 = sub_27580(v149, a2);
        v152->m128i_i32[1] = v81;
        if ( v81 != 1 )
        {
          v16 = 7;
          if ( v81 )
            goto LABEL_147;
          if ( v152->m128i_i8[8] )
            goto LABEL_127;
        }
        sub_25240(v152, a2[3], v161, a2[4]);
        if ( v152->m128i_i32[1] == 1 )
        {
LABEL_197:
          v16 = 1;
        }
        else
        {
          v82 = a2[4];
          v83 = v161[0];
          v152[3].m128i_i64[1] = v82 - v161[0];
          v84 = a2[4] + v83 - v82;
          a2[4] = v84;
          v85 = v152[3].m128i_u64[1];
          memcpy(dest, (const void *)(a2[3] + v84), v85);
          v42 = a2[4];
          v41 = a2[5];
          v40 = v152;
          if ( v42 + v85 < v41 )
            goto LABEL_127;
LABEL_43:
          if ( v42 >= v41 )
            goto LABEL_44;
          desta = v40 + 4;
          v40[1].m128i_i64[1] = a2[3];
          v155 = v40;
          v40[2].m128i_i64[0] = a2[4];
          v40[2].m128i_i64[1] = a2[5];
          a2[3] = v40 + 4;
          v128 = v40[3].m128i_i64[1];
          a2[5] = 16;
          a2[4] = v128;
          v40->m128i_i32[1] = sub_27580(v149, a2);
          v155[3].m128i_i64[1] = a2[4];
          a2[3] = v155[1].m128i_i64[1];
          a2[4] = v155[2].m128i_i64[0];
          a2[5] = v155[2].m128i_i64[1];
          v16 = v155->m128i_u32[1];
          if ( v16 <= 1 )
          {
            sub_25240(v155, (__int64)desta, (unsigned __int64 *)&v155[3], v155[3].m128i_i64[1]);
            if ( v155->m128i_i32[1] == 1 )
              v155[3].m128i_i64[0] = v155[3].m128i_i64[1];
            sub_25B60(v155, a2, *(double *)a4.m128_u64, *(double *)si128.m128_u64, a6);
            v40 = v155;
            if ( !v155[3].m128i_i64[0] )
            {
LABEL_44:
              v16 = v40->m128i_u32[1];
              goto LABEL_147;
            }
LABEL_127:
            v16 = 0;
          }
        }
LABEL_147:
        v95 = *(_QWORD *)(v7 + 24);
        v96 = *(_QWORD *)(v7 + 80) + a2[1] - *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 80) = v96;
        v97 = *(_QWORD *)(v7 + 88) + a2[4] - v95;
        *(_QWORD *)(v7 + 88) = v97;
        if ( *(_QWORD *)(v7 + 56) < v96 || *(_QWORD *)(v7 + 64) < v97 )
          goto LABEL_136;
        v98 = *(_DWORD *)(v7 + 40);
        switch ( v98 )
        {
          case 1:
            v108 = a2[3];
            v109 = a2[4];
            v110 = *(_QWORD *)(v7 + 32);
            v111 = (char *)(v108 + v95);
            v112 = ~*(_DWORD *)(v7 + 32);
            if ( v109 != v95 )
            {
              v113 = (char *)(v108 + v109);
              do
              {
                v114 = *v111++;
                v112 = dword_8BE20[(unsigned __int8)(v112 ^ v114)] ^ (v112 >> 8);
              }
              while ( v111 != v113 );
              v110 = ~v112;
            }
            *(_QWORD *)(v7 + 32) = v110;
            break;
          case 4:
            v99 = *(_QWORD *)(v7 + 32);
            v100 = a2[3];
            v101 = a2[4];
            v102 = (char *)(v100 + v95);
            v103 = ~v99;
            if ( v101 != v95 )
            {
              v104 = (char *)(v100 + v101);
              do
              {
                v105 = *v102++;
                v103 = qword_8B620[(unsigned __int8)(v103 ^ v105)] ^ (v103 >> 8);
              }
              while ( v102 != v104 );
              v99 = ~v103;
            }
            *(_QWORD *)(v7 + 32) = v99;
            break;
          case 10:
            v129 = (unsigned int *)(v7 + 1240);
            if ( a2[4] != v95 )
            {
              v130 = *(_QWORD *)(v7 + 1336);
              v151 = v9;
              v156 = v10;
              v131 = v7;
              v132 = a2[4] - v95;
              destb = v16;
              v133 = v130;
              v134 = (char *)(v95 + a2[3]);
              v160 = a2;
              v135 = v129;
              do
              {
                v137 = v133 & 0x3F;
                v138 = 64 - v137;
                if ( 64 - v137 > v132 )
                  v138 = v132;
                v139 = (unsigned int *)((char *)v135 + v137);
                if ( (unsigned int)v138 < 8 )
                {
                  if ( (v138 & 4) != 0 )
                  {
                    *v139 = *(_DWORD *)v134;
                    *(_DWORD *)((char *)v139 + (unsigned int)v138 - 4) = *(_DWORD *)&v134[(unsigned int)v138 - 4];
                  }
                  else if ( (_DWORD)v138 )
                  {
                    *(_BYTE *)v139 = *v134;
                    if ( (v138 & 2) != 0 )
                      *(_WORD *)((char *)v139 + (unsigned int)v138 - 2) = *(_WORD *)&v134[(unsigned int)v138 - 2];
                  }
                }
                else
                {
                  *(_QWORD *)v139 = *(_QWORD *)v134;
                  *(_QWORD *)((char *)v139 + (unsigned int)v138 - 8) = *(_QWORD *)&v134[(unsigned int)v138 - 8];
                  v140 = (unsigned __int64)(v139 + 2) & 0xFFFFFFFFFFFFFFF8LL;
                  v141 = (char *)v139 - v140;
                  v142 = (char *)(v134 - v141);
                  v143 = (v138 + (_DWORD)v141) & 0xFFFFFFF8;
                  if ( v143 >= 8 )
                  {
                    v144 = v143 & 0xFFFFFFF8;
                    v145 = 0;
                    do
                    {
                      v146 = v145;
                      v145 += 8;
                      *(_QWORD *)(v140 + v146) = *(_QWORD *)&v142[v146];
                    }
                    while ( v145 < v144 );
                  }
                }
                v134 += v138;
                v132 -= v138;
                v136 = *(_QWORD *)(v131 + 1336) + v138;
                *(_QWORD *)(v131 + 1336) = v136;
                v133 = v136;
                if ( (v136 & 0x3F) == 0 )
                  sub_25BE0((const __m128i *)(v131 + 1304), v135);
              }
              while ( v132 );
              v7 = v131;
              v9 = v151;
              v16 = destb;
              v10 = v156;
              a2 = v160;
            }
            break;
        }
        if ( v16 != 1 )
        {
          if ( !*(_DWORD *)(v7 + 44) )
          {
            if ( v16 )
              goto LABEL_56;
LABEL_54:
            v15 = a2[2];
LABEL_55:
            v16 = 8;
            if ( a2[1] == v15 )
              goto LABEL_129;
            goto LABEL_56;
          }
LABEL_228:
          if ( v16 )
            goto LABEL_137;
          goto LABEL_9;
        }
        v87 = *(_QWORD *)(v7 + 56);
        if ( v87 != -1 && v87 != *(_QWORD *)(v7 + 80) )
          goto LABEL_136;
        v115 = *(_QWORD *)(v7 + 64);
        v116 = *(_QWORD *)(v7 + 88);
        if ( v115 != -1 && v115 != v116 )
          goto LABEL_136;
        v117 = *(_QWORD *)(v7 + 104);
        v69 = *(_QWORD *)(v7 + 80);
        v118 = *(unsigned int *)(v7 + 72);
        *(_QWORD *)(v7 + 112) += v116;
        v119 = (char *)(v7 + 104);
        *(_QWORD *)(v7 + 104) = byte_6E230[*(unsigned int *)(v7 + 40)] + v118 + v69 + v117;
        v120 = ~*(_DWORD *)(v7 + 120);
        do
        {
          v121 = *v119++;
          v120 = dword_8BE20[(unsigned __int8)(v120 ^ v121)] ^ (v120 >> 8);
        }
        while ( v119 != (char *)(v7 + 128) );
        ++*(_QWORD *)(v7 + 96);
        *(_DWORD *)(v7 + 120) = ~v120;
        *(_DWORD *)v7 = 4;
LABEL_105:
        if ( (v69 & 3) != 0 )
        {
          while ( 1 )
          {
            v72 = a2[1];
            if ( v72 == a2[2] )
              break;
            v70 = *a2;
            a2[1] = v72 + 1;
            if ( *(_BYTE *)(v70 + v72) )
              goto LABEL_136;
            v71 = *(_QWORD *)(v7 + 80) + 1LL;
            *(_QWORD *)(v7 + 80) = v71;
            if ( (v71 & 3) == 0 )
              goto LABEL_45;
          }
LABEL_53:
          if ( !*(_DWORD *)(v7 + 44) )
            goto LABEL_54;
LABEL_9:
          if ( v9 == a2[1] && v10 == a2[4] )
          {
            v107 = *(unsigned __int8 *)(v7 + 48);
            *(_BYTE *)(v7 + 48) = 1;
            return (unsigned int)(8 * v107);
          }
          *(_BYTE *)(v7 + 48) = 0;
          return 0;
        }
LABEL_45:
        *(_DWORD *)v7 = 5;
LABEL_46:
        v44 = *(unsigned int *)(v7 + 40);
        switch ( (_DWORD)v44 )
        {
          case 1:
            do
            {
              v52 = a2[1];
              if ( v52 == a2[2] )
                goto LABEL_53;
              v49 = *(_DWORD *)(v7 + 4);
              v50 = *(_QWORD *)(v7 + 32);
              a2[1] = v52 + 1;
              if ( *(_BYTE *)(*a2 + v52) != (unsigned __int8)(v50 >> v49) )
                goto LABEL_136;
              v51 = *(_DWORD *)(v7 + 4) + 8;
              *(_DWORD *)(v7 + 4) = v51;
            }
            while ( v51 <= 0x1F );
LABEL_204:
            *(_QWORD *)(v7 + 32) = 0;
            v8 = 1;
            *(_DWORD *)(v7 + 4) = 0;
            break;
          case 4:
            while ( 1 )
            {
              v56 = a2[1];
              if ( v56 == a2[2] )
                goto LABEL_53;
              v53 = *(_DWORD *)(v7 + 4);
              v54 = *(_QWORD *)(v7 + 32);
              a2[1] = v56 + 1;
              if ( *(_BYTE *)(*a2 + v56) != (unsigned __int8)(v54 >> v53) )
                goto LABEL_136;
              v55 = *(_DWORD *)(v7 + 4) + 8;
              *(_DWORD *)(v7 + 4) = v55;
              if ( v55 > 0x3F )
                goto LABEL_204;
            }
          case 0xA:
            *(_QWORD *)(v7 + 184) = 32;
            if ( !(unsigned __int8)sub_25AE0(v7, a2) )
              goto LABEL_53;
            v89 = *(_QWORD *)(v7 + 1336);
            v88 = (unsigned int *)(v7 + 1240);
            v122 = (const __m128i *)(v7 + 1304);
            *(_BYTE *)(v7 + (v89 & 0x3F) + 1240) = 0x80;
            v123 = (v89 & 0x3F) + 1;
            if ( (v89 & 0x3F) != 0x37 )
            {
              v153 = a2;
              v124 = v7;
              v125 = (unsigned int *)(v7 + 1240);
              v150 = v89;
              while ( 1 )
              {
                if ( v123 == 64 )
                {
                  sub_25BE0(v122, v125);
                  v126 = 2;
                  *(_WORD *)(v124 + 1240) = 0;
                }
                else
                {
                  *(_BYTE *)(v124 + v123 + 1240) = 0;
                  v126 = v123 + 1;
                  if ( v123 == 55 )
                  {
                    v88 = v125;
                    v89 = v150;
                    v7 = v124;
                    a2 = v153;
                    break;
                  }
                }
                v123 = v126;
              }
            }
            v90 = 8 * v89;
            v91 = v7 + 1296;
            v92 = 56;
            *(_QWORD *)(v7 + 1336) = v90;
            do
            {
              ++v91;
              v93 = v90 >> v92;
              v92 -= 8;
              *(_BYTE *)(v91 - 1) = v93;
            }
            while ( v92 != -8 );
            sub_25BE0(v122, v88);
            v94 = (unsigned int *)(v7 + 192);
            while ( _byteswap_ulong(*v94) == v94[278] )
            {
              if ( (unsigned int *)(v7 + 224) == ++v94 )
                goto LABEL_144;
            }
LABEL_136:
            v16 = 7;
            if ( *(_DWORD *)(v7 + 44) )
            {
LABEL_137:
              *(_BYTE *)(v7 + 48) = 0;
              return v16;
            }
LABEL_129:
            v16 = 7;
LABEL_56:
            a2[1] = v9;
            a2[4] = v10;
            return v16;
          default:
            if ( *(_DWORD *)(v7 + 4) < (unsigned int)byte_6E230[v44] )
            {
              do
              {
                v47 = a2[1];
                if ( v47 == a2[2] )
                  goto LABEL_53;
                a2[1] = v47 + 1;
                v45 = byte_6E230[*(unsigned int *)(v7 + 40)];
                v46 = *(_DWORD *)(v7 + 4) + 1;
                *(_DWORD *)(v7 + 4) = v46;
              }
              while ( v46 < v45 );
            }
LABEL_144:
            *(_DWORD *)(v7 + 4) = 0;
            v8 = 1;
            break;
        }
        *(_DWORD *)v7 = 1;
        continue;
      case 1LL:
        goto LABEL_67;
      case 2LL:
        goto LABEL_13;
      case 3LL:
        goto LABEL_39;
      case 4LL:
        v69 = *(_QWORD *)(v7 + 80);
        goto LABEL_105;
      case 5LL:
        goto LABEL_46;
      case 6LL:
        v73 = a2 + 1;
        break;
      case 7LL:
        goto LABEL_90;
      case 8LL:
        goto LABEL_7;
      case 9LL:
        goto LABEL_71;
      default:
        while ( 1 )
          ;
    }
    break;
  }
  do
  {
    v75 = sub_24F00(v7, *a2, v73, a2[2]);
    if ( v75 != 1 )
    {
      v16 = v75;
      sub_27F60((_QWORD *)v7, a2);
      if ( !*(_DWORD *)(v7 + 44) )
      {
        if ( v16 )
          goto LABEL_129;
        goto LABEL_54;
      }
      goto LABEL_228;
    }
    v77 = *(_DWORD *)(v7 + 128);
    switch ( v77 )
    {
      case 1:
        *(_DWORD *)(v7 + 128) = 2;
        *(_QWORD *)(v7 + 152) += *(_QWORD *)(v7 + 8);
        break;
      case 2:
        *(_QWORD *)(v7 + 160) += *(_QWORD *)(v7 + 8);
        v78 = (char *)(v7 + 152);
        v79 = ~*(_DWORD *)(v7 + 168);
        do
        {
          v80 = *v78++;
          v79 = *(_DWORD *)(v76 + 4LL * (unsigned __int8)(v79 ^ v80)) ^ (v79 >> 8);
        }
        while ( v78 != (char *)(v7 + 176) );
        *(_DWORD *)(v7 + 168) = ~v79;
        v74 = *(_QWORD *)(v7 + 144) - 1LL;
        *(_QWORD *)(v7 + 144) = v74;
LABEL_114:
        *(_DWORD *)(v7 + 128) = 1;
        continue;
      case 0:
        v74 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)(v7 + 144) = v74;
        if ( v74 != *(_QWORD *)(v7 + 96) )
          goto LABEL_96;
        goto LABEL_114;
    }
    v74 = *(_QWORD *)(v7 + 144);
  }
  while ( v74 );
  *(_DWORD *)v7 = 7;
LABEL_90:
  for ( i = a2[1]; (((_DWORD)i + *(_DWORD *)(v7 + 136) - *(_DWORD *)(v7 + 16)) & 3) != 0; ++i )
  {
    if ( a2[2] == i )
    {
      sub_27F60((_QWORD *)v7, a2);
      goto LABEL_53;
    }
    v68 = *a2;
    a2[1] = i + 1;
    if ( *(_BYTE *)(v68 + i) )
      goto LABEL_136;
  }
  sub_27F60((_QWORD *)v7, a2);
  if ( *(_OWORD *)(v7 + 152) - *(_OWORD *)(v7 + 104) != 0 || *(_QWORD *)(v7 + 120) != *(_QWORD *)(v7 + 168) )
    goto LABEL_96;
  *(_DWORD *)v7 = 8;
  do
  {
LABEL_7:
    v14 = a2[1];
    v15 = a2[2];
    if ( v14 == v15 )
    {
      if ( *(_DWORD *)(v7 + 44) )
        goto LABEL_9;
      goto LABEL_55;
    }
    v11 = *(_DWORD *)(v7 + 4);
    v12 = *(_QWORD *)(v7 + 32);
    a2[1] = v14 + 1;
    if ( *(_BYTE *)(*a2 + v14) != (unsigned __int8)(v12 >> v11) )
      goto LABEL_136;
    v13 = *(_DWORD *)(v7 + 4) + 8;
    *(_DWORD *)(v7 + 4) = v13;
  }
  while ( v13 <= 0x1F );
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 184) = 12;
  *(_QWORD *)v7 = 9;
LABEL_71:
  if ( !(unsigned __int8)sub_25AE0(v7, a2) )
    goto LABEL_53;
  if ( *(_WORD *)(v7 + 202) != 23129 )
  {
LABEL_96:
    if ( !*(_DWORD *)(v7 + 44) )
      goto LABEL_129;
    goto LABEL_97;
  }
  v60 = (char *)(v7 + 196);
  v61 = -1;
  do
  {
    v62 = *v60++;
    v61 = dword_8BE20[(unsigned __int8)(v61 ^ v62)] ^ (v61 >> 8);
  }
  while ( (char *)(v7 + 202) != v60 );
  v63 = *(_DWORD *)(v7 + 44);
  if ( *(_DWORD *)(v7 + 192) != ~v61
    || *(_QWORD *)(v7 + 136) >> 2 != *(_DWORD *)(v7 + 196)
    || *(_BYTE *)(v7 + 200)
    || *(unsigned __int8 *)(v7 + 201) != *(_DWORD *)(v7 + 40) )
  {
    if ( !v63 )
      goto LABEL_129;
LABEL_97:
    *(_BYTE *)(v7 + 48) = 0;
    return 7;
  }
  if ( v63 )
    *(_BYTE *)(v7 + 48) = 0;
  *(_DWORD *)v7 = 10;
LABEL_82:
  v64 = a2[1];
  if ( a2[2] != v64 )
  {
    while ( !*(_BYTE *)(*a2 + v64) )
    {
      a2[1] = v64 + 1;
      *(_DWORD *)(v7 + 4) = ((unsigned __int8)*(_DWORD *)(v7 + 4) + 1) & 3;
      v64 = a2[1];
      if ( v64 == a2[2] )
        goto LABEL_156;
    }
    if ( *(_DWORD *)(v7 + 4) )
      return 7;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_6BF90);
    v65 = (unsigned int *)(v7 + 80);
    v66 = (unsigned int *)(v7 + 128);
    goto LABEL_88;
  }
LABEL_156:
  if ( !a3 )
    return 0;
  v16 = 1;
  if ( *(_DWORD *)(v7 + 4) )
    return 7;
  return v16;
}

