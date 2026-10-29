__int64 __fastcall sub_1A34700(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  __int64 v10; // r15
  int v11; // eax
  char v12; // r8
  __int64 v13; // rax
  __int64 **v14; // rax
  __m128i *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // r13d
  int v29; // esi
  int *v30; // r13
  int *v31; // r14
  int v32; // r13d
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 v45; // rax
  __int32 v47; // eax
  __m128i v48; // xmm2
  unsigned __int8 v49; // dl
  int v50; // eax
  unsigned int v51; // edx
  __int64 *v52; // rsi
  unsigned int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  __int32 v59; // eax
  unsigned int v60; // esi
  __int64 v61; // r8
  __int64 v62; // rcx
  int v63; // edi
  __int64 v64; // rax
  _QWORD *v65; // rsi
  __int64 v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // r8
  __int64 v69; // rcx
  bool v70; // zf
  __int64 v71; // rax
  char v72; // cl
  __int64 v73; // r13
  unsigned __int8 v74; // al
  int v75; // r13d
  int v76; // eax
  _QWORD *v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // eax
  unsigned int v82; // edx
  __int64 *v83; // rsi
  unsigned int v84; // ecx
  unsigned int v85; // eax
  unsigned int v86; // edx
  void *v87; // rdi
  __int32 v88; // r12d
  unsigned int v89; // eax
  unsigned int v90; // edx
  void *v91; // rdi
  __int64 v92; // rax
  unsigned __int64 v93; // rdi
  int v94; // eax
  unsigned __int64 v95; // rax
  __int64 *v96; // r13
  __int64 *v97; // rsi
  __int64 v98; // rdx
  __int8 v99; // dl
  __int64 v100; // rax
  __int64 v101; // rsi
  char v102; // al
  char v103; // si
  __int64 v104; // rdx
  unsigned int v105; // ecx
  const __m128i *v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // r12
  unsigned __int64 v109; // rdx
  __m128i *v110; // rax
  int v111; // r13d
  _QWORD *v112; // rax
  __int64 *v113; // rbp
  int i; // eax
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // r12
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // r8
  unsigned int v124; // eax
  unsigned int v125; // edx
  int v126; // esi
  __int64 v127; // rdx
  int v128; // esi
  int *v129; // rax
  __int64 v130; // rdx
  unsigned __int64 v131; // r12
  _QWORD *v132; // rax
  _QWORD *v133; // rdx
  __int64 v134; // rsi
  _QWORD *v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  _QWORD *v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // r12
  __int64 v148; // rax
  _QWORD *v149; // rax
  unsigned __int64 v150; // rdi
  unsigned int v151; // ecx
  unsigned int v152; // edx
  char v153; // al
  unsigned __int64 v154; // rdi
  unsigned __int8 v155; // cl
  int v156; // esi
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // r9
  __int64 v161; // r8
  __int64 v162; // rdx
  _QWORD *v163; // rax
  __int64 v164; // rdx
  int v165; // r11d
  __int64 v166; // r13
  int v167; // edi
  __int64 v168; // rax
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // rdx
  _QWORD *v173; // rax
  _QWORD *v174; // rax
  __int64 v175; // rsi
  __int64 v176; // rdi
  __int64 v177; // rsi
  __int64 v178; // rax
  __int64 v179; // [rsp-10h] [rbp-258h]
  __int64 v180; // [rsp-8h] [rbp-250h]
  int *v181; // [rsp+8h] [rbp-240h]
  __int64 *v182; // [rsp+18h] [rbp-230h]
  unsigned __int64 v183; // [rsp+20h] [rbp-228h]
  __int64 v184; // [rsp+20h] [rbp-228h]
  __int64 v185; // [rsp+20h] [rbp-228h]
  __int64 v186; // [rsp+20h] [rbp-228h]
  __int32 v187; // [rsp+20h] [rbp-228h]
  __int64 v188; // [rsp+20h] [rbp-228h]
  __int64 v190; // [rsp+30h] [rbp-218h]
  char v191; // [rsp+53h] [rbp-1F5h]
  int v192; // [rsp+54h] [rbp-1F4h]
  __int64 v193; // [rsp+60h] [rbp-1E8h]
  unsigned int v194; // [rsp+60h] [rbp-1E8h]
  unsigned int v195; // [rsp+60h] [rbp-1E8h]
  __int64 v196; // [rsp+68h] [rbp-1E0h]
  unsigned int v197; // [rsp+68h] [rbp-1E0h]
  unsigned int v198; // [rsp+68h] [rbp-1E0h]
  __int64 v199; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v200; // [rsp+78h] [rbp-1D0h]
  unsigned int v201; // [rsp+80h] [rbp-1C8h]
  __m128i v202; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v203; // [rsp+A0h] [rbp-1A8h] BYREF
  _QWORD *v204[2]; // [rsp+B0h] [rbp-198h] BYREF
  __int128 v205; // [rsp+C0h] [rbp-188h]
  __m128i v206[2]; // [rsp+D0h] [rbp-178h] BYREF
  __int128 v207; // [rsp+F0h] [rbp-158h] BYREF
  char v208; // [rsp+108h] [rbp-140h]
  __m128 v209; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v210; // [rsp+170h] [rbp-D8h]
  char v211; // [rsp+178h] [rbp-D0h] BYREF
  unsigned __int8 *v212[7]; // [rsp+180h] [rbp-C8h] BYREF
  void *v213[2]; // [rsp+1B8h] [rbp-90h]
  __int64 v214; // [rsp+1C8h] [rbp-80h]
  _QWORD *v215; // [rsp+1D0h] [rbp-78h]
  __m128i v216; // [rsp+1D8h] [rbp-70h]
  __int64 v217; // [rsp+1E8h] [rbp-60h]
  __int64 v218; // [rsp+1F0h] [rbp-58h]
  __int64 v219; // [rsp+1F8h] [rbp-50h]
  __int64 v220; // [rsp+200h] [rbp-48h]

  v10 = sub_15F2610(a1, 0, a3, a4, a5, a6);
  v11 = *((_DWORD *)a2 + 3);
  if ( v11 == 1 )
  {
    *(_DWORD *)(v10 + 1280) = 1;
  }
  else if ( v11 == 2 )
  {
    *(_DWORD *)(v10 + 1280) = 2;
  }
  v12 = 1;
  *(_DWORD *)(v10 + 1624) = *((_DWORD *)a2 + 2);
  v13 = *a2;
  *(_BYTE *)(v10 + 1600) = 0;
  *(_QWORD *)(v10 + 1616) = v13;
  v14 = *(__int64 ***)(a1 + 608);
  if ( !v14[8] )
  {
    v113 = *v14;
    v12 = 0;
    if ( *v14 )
    {
      for ( i = *((_DWORD *)v113 + 2); (i & 0x80u) == 0; i = *((_DWORD *)v113 + 2) )
      {
        v115 = v113[45];
        if ( !v115 )
          break;
        if ( (*(_BYTE *)(v115 + 8) & 0x7F) != 2 )
          break;
        v113 = (__int64 *)*v113;
      }
      if ( (i & 0x200) == 0
        || (*((_BYTE *)v113 + 100) ? (v130 = *((unsigned int *)v113 + 23)) : (v130 = *((unsigned int *)v113 + 22)),
            v131 = sub_1A2F450(v113 + 10, (_QWORD *)(v113[10] + 8 * v130)),
            v132 = (_QWORD *)sub_1A2F450(v113 + 10, (_QWORD *)v113[10]),
            v132 == (_QWORD *)v131) )
      {
LABEL_156:
        v12 = 0;
        goto LABEL_5;
      }
      v134 = *v132;
      if ( (*(_BYTE *)(*v132 + 28LL) & 0x7F) == 0x2B )
        goto LABEL_188;
      while ( 1 )
      {
        if ( v132 + 1 != v133 )
        {
          if ( v132[1] < 0xFFFFFFFFFFFFFFFELL )
          {
            ++v132;
            goto LABEL_186;
          }
          v135 = v132 + 2;
          while ( 1 )
          {
            v132 = v135;
            if ( v135 == v133 )
              break;
            ++v135;
            if ( *v132 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_186;
          }
        }
        v132 = v133;
LABEL_186:
        if ( (_QWORD *)v131 == v132 )
          goto LABEL_156;
        v134 = *v132;
        if ( (*(_BYTE *)(*v132 + 28LL) & 0x7F) == 0x2B )
        {
LABEL_188:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v134 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 50 )
          {
            v12 = 1;
            break;
          }
        }
      }
    }
  }
LABEL_5:
  v15 = *(__m128i **)(a1 + 544);
  v16 = sub_B9BAE0(*(_QWORD **)(a1 + 248), (__int64)v15, 0, *(_DWORD *)a2, v12, 0, *((_DWORD *)a2 + 3));
  sub_B94AD0(v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v10 + 1584) = v16;
  v21 = sub_1A2D760(a1, *a2, v16);
  *(_QWORD *)(v10 + 1592) = v21;
  v22 = v21;
  sub_B90130(v21, *(_QWORD *)(a1 + 544), v23, v24, v25, v26);
  v27 = v22 + 72;
  if ( !v22 )
    v27 = 0;
  v190 = v27;
  sub_17A2E00(a1, *(_QWORD *)(a1 + 608), v27);
  v28 = *((_DWORD *)a2 + 3);
  v199 = 0;
  v200 = 0;
  v201 = 0;
  if ( v28 )
    v29 = *((_DWORD *)a2 + 2);
  else
    v29 = *(_DWORD *)a2;
  v30 = (int *)a2[2];
  v191 = 0;
  v181 = &v30[12 * *((unsigned int *)a2 + 6)];
  if ( v181 != v30 )
  {
    v182 = a2;
    v31 = (int *)a2[2];
    v32 = v29;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v33 = *v31;
          if ( (unsigned int)*v31 <= 1 )
            break;
          v34 = *((_QWORD *)v31 + 3);
          if ( v34 == 1 )
            goto LABEL_27;
          if ( v34 )
          {
            sub_168B9F0(
              (__int64)&v209,
              (__int64 *)(a1 + 8),
              v31[1],
              (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0 ? 5584 : 6727,
              0);
            sub_15F7200(&v209);
            v35 = *((_QWORD *)v31 + 4);
            v36 = v35 & 0xFFFFFFFFFFFFFFF0LL;
            if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            {
              v37 = (_DWORD *)(*((_QWORD *)v31 + 3) & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v37 & 0x4000) == 0 )
                goto LABEL_17;
              v38 = *(_QWORD *)v36;
              if ( *(_BYTE *)(*(_QWORD *)v36 + 16LL) == 38 )
                goto LABEL_17;
              v98 = *(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v98 + 16) == 38 )
              {
                if ( sub_F63050(v38, a1 + 8, v98, v36) )
                {
LABEL_129:
                  v35 = *((_QWORD *)v31 + 4);
                  v37 = (_DWORD *)(*((_QWORD *)v31 + 3) & 0xFFFFFFFFFFFFFFFELL);
LABEL_17:
                  v39 = (unsigned int)(v31[5] - 1);
                  if ( (unsigned int)v39 <= 2 )
                    v192 = dword_2647760[v39];
                  v40 = sub_1A2D600(a1, v31[1], v35, v31[4], *((_QWORD *)v31 + 1), v192, (__int64)v37, v190);
                  v42 = v179;
                  v43 = v180;
                  v44 = v40;
                  if ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 40 <= 6 )
                    sub_17DE630(a1, a3, v40, v41, v179, v180);
                  sub_17B7670(a1, v44, a3, 0, v42, v43);
                  goto LABEL_22;
                }
                v37 = (_DWORD *)(*((_QWORD *)v31 + 3) & 0xFFFFFFFFFFFFFFFELL);
              }
              sub_1E534E0(a1, v37, 11);
              goto LABEL_129;
            }
LABEL_27:
            v32 = v31[1];
            v31 += 12;
            if ( v181 == v31 )
              goto LABEL_28;
          }
          else
          {
            if ( v33 == 3 )
            {
              if ( *((_DWORD *)v182 + 3) == 2 )
              {
                v82 = v31[1];
                v83 = (__int64 *)(a1 + 8);
                v84 = 4932;
                goto LABEL_85;
              }
            }
            else if ( v33 == 2 && *((_DWORD *)v182 + 3) == 1 )
            {
              v82 = v31[1];
              v83 = (__int64 *)(a1 + 8);
              v84 = 3519;
LABEL_85:
              sub_168B9F0((__int64)&v209, v83, v82, v84, 0);
              v85 = sub_15F0EF0(a1, v32, 0, a7, a8);
              v86 = v31[1];
              *(__int64 *)((char *)&v206[0].m128i_i64[1] + 4) = 0;
              v206[1].m128i_i8[4] = 0;
              v206[1].m128i_i64[1] = (__int64)&v207 + 8;
              *(_QWORD *)&v207 = 0;
              BYTE8(v207) = 0;
              v208 = 0;
              v206[0].m128i_i64[0] = __PAIR64__(v86, v85);
              v206[0].m128i_i8[8] = 1;
              sub_1589170((__int64)&v209, v206);
              v87 = (void *)v206[1].m128i_i64[1];
              if ( (__int128 *)v206[1].m128i_i64[1] == (__int128 *)((char *)&v207 + 8) )
                goto LABEL_37;
LABEL_92:
              operator delete(v87);
              goto LABEL_37;
            }
            v47 = v31[1];
            v202.m128i_i64[0] = *((_QWORD *)v31 + 1);
            v202.m128i_i32[2] = v47;
            sub_B85890(&v203, v202.m128i_i64[0]);
            a7 = 0;
            v209.m128_u64[1] = (unsigned __int64)&v211;
            v48 = _mm_load_si128(&v202);
            v210 = 0x800000000LL;
            *(_OWORD *)v213 = 0;
            v217 = v203;
            v216 = v48;
            v220 = 0x101010000LL;
            v209.m128_u64[0] = 0;
            v214 = 0;
            v215 = (_QWORD *)a1;
            v218 = 0;
            v219 = 0;
            sub_1A395A0(&v209);
            sub_1A49A10(a1, &v209, *(_QWORD *)(a1 + 608), 0, 0);
            if ( v209.m128_i32[0] == 5 )
            {
              if ( BYTE3(v220) )
              {
LABEL_147:
                if ( BYTE4(v220) )
LABEL_148:
                  sub_1A445B0(v215, &v209);
LABEL_99:
                v91 = v213[0];
                if ( !v213[0] )
                  goto LABEL_101;
LABEL_100:
                sub_1A39780(v91);
                goto LABEL_101;
              }
LABEL_105:
              if ( !BYTE4(v220) )
                goto LABEL_99;
              if ( v209.m128_i32[0] == 5 )
                goto LABEL_148;
              v91 = v213[0];
              if ( v213[0] )
                goto LABEL_100;
LABEL_101:
              if ( (char *)v209.m128_u64[1] == &v211 )
                goto LABEL_27;
              free((void *)v209.m128_u64[1]);
              v31 += 12;
              v32 = *(v31 - 11);
              if ( v181 == v31 )
                goto LABEL_28;
            }
            else
            {
              a7 = 0;
              if ( (_DWORD)v210 )
              {
                if ( v209.m128_i32[0] != 2 )
                  goto LABEL_138;
LABEL_45:
                v44 = *(_QWORD *)v209.m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
                v49 = *(_BYTE *)(v44 + 28) & 0x7F;
                v50 = v49;
                if ( (unsigned int)v49 - 53 > 1 && ((v49 + 52) & 0x7Fu) > 1 )
                {
                  if ( v49 == 52 )
                    goto LABEL_48;
                  if ( (unsigned int)v49 - 49 <= 2 )
                  {
LABEL_94:
                    sub_168B9F0((__int64)v206, (__int64 *)(a1 + 8), v31[1], 0xD4Eu, 0);
                    sub_169D880((__int64)v206, (__int64 *)v31 + 1);
                    sub_15F7200(v206);
                    goto LABEL_95;
                  }
                }
                else
                {
                  v44 = sub_B72ED0(*(_QWORD *)v209.m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL);
                  LOBYTE(v50) = *(_BYTE *)(v44 + 28) & 0x7F;
                  if ( (_BYTE)v50 == 52 )
                    goto LABEL_48;
                  v50 = (unsigned __int8)v50;
                  if ( (unsigned int)(unsigned __int8)v50 - 49 <= 2 )
                    goto LABEL_94;
                }
                if ( (unsigned int)(v50 - 40) <= 6 )
                {
LABEL_48:
                  if ( !(unsigned __int8)sub_18F5260(a1, v44, v31 + 1, 1u, 0, 0, (__m128i)0LL, a8, 0, 0, 0) )
                    goto LABEL_49;
LABEL_95:
                  if ( BYTE3(v220) )
                  {
                    if ( v209.m128_i32[0] == 5 )
                      goto LABEL_147;
                    if ( !v213[1] || (*(_BYTE *)(v215[29] + 46LL) & 0x20) == 0 )
                      goto LABEL_99;
                    sub_1663B80(v215, (__int64)&v209);
                  }
                  goto LABEL_105;
                }
                goto LABEL_138;
              }
              a8 = 0.0;
              memset(v206, 0, sizeof(v206));
              v101 = *(_QWORD *)(a1 + 608);
              v204[1] = (_QWORD *)0x101010101LL;
              v207 = 0;
              v205 = 0;
              v204[0] = off_2BC7210;
              if ( (unsigned __int8)sub_18DE2E0(
                                      a1,
                                      v101,
                                      (unsigned int *)v206,
                                      (__int64)&v209,
                                      (__int64)v204,
                                      0,
                                      0,
                                      0,
                                      0) )
              {
                if ( v206[1].m128i_i32[3] )
                  free((void *)v206[1].m128i_i64[0]);
                goto LABEL_95;
              }
              if ( v206[1].m128i_i32[3] )
                free((void *)v206[1].m128i_i64[0]);
              if ( v209.m128_i32[0] == 2 )
                goto LABEL_45;
LABEL_138:
              v44 = 0;
LABEL_49:
              if ( !BYTE3(v220) )
                goto LABEL_50;
              if ( v209.m128_i32[0] == 5 )
              {
                if ( !BYTE4(v220) )
                  goto LABEL_52;
LABEL_201:
                sub_1A445B0(v215, &v209);
                goto LABEL_52;
              }
              if ( v213[1] && (*(_BYTE *)(v215[29] + 46LL) & 0x20) != 0 )
              {
                sub_1663B80(v215, (__int64)&v209);
LABEL_50:
                if ( BYTE4(v220) && v209.m128_i32[0] == 5 )
                  goto LABEL_201;
              }
LABEL_52:
              if ( v213[0] )
                sub_1A39780(v213[0]);
              if ( (char *)v209.m128_u64[1] != &v211 )
                free((void *)v209.m128_u64[1]);
              if ( !v44 )
              {
                v51 = v31[1];
                v52 = (__int64 *)(a1 + 8);
                v53 = 3408;
LABEL_58:
                sub_168B9F0((__int64)&v209, v52, v51, v53, 0);
                sub_169D880((__int64)&v209, (__int64 *)v31 + 1);
                goto LABEL_37;
              }
LABEL_22:
              v45 = *((_QWORD *)v31 + 1);
              v206[0].m128i_i64[1] = v44;
              v206[0].m128i_i64[0] = v45;
              if ( !(unsigned __int8)sub_1A2F8D0(&v199, v206[0].m128i_i64, v204) )
              {
                v65 = v204[0];
                v66 = (unsigned int)(v200 + 1);
                v67 = v201;
                v209.m128_u64[0] = (unsigned __int64)v204[0];
                v68 = (unsigned int)(4 * v66);
                v69 = 2 * v201;
                if ( (unsigned int)v68 >= 3 * v201 )
                {
                  v156 = 2 * v201;
                }
                else
                {
                  v69 = v201 - HIDWORD(v200) - (unsigned int)v66;
                  if ( (unsigned int)v69 > v201 >> 3 )
                  {
LABEL_68:
                    v70 = *v65 == -4096;
                    LODWORD(v200) = v66;
                    if ( !v70 )
                      --HIDWORD(v200);
                    *(__m128i *)v65 = _mm_load_si128(v206);
                    v204[0] = v65;
                    sub_1A311D0(&v209, v65, (_QWORD *)(v199 + 16LL * v67), (__int64)&v199, 1);
                    goto LABEL_71;
                  }
                  v156 = v201;
                }
                sub_1A344F0((__int64)&v199, v156, v66, v69, v68, (__int64)&v199);
                sub_1A2F8D0(&v199, v206[0].m128i_i64, &v209);
                v67 = v201;
                LODWORD(v66) = v200 + 1;
                v65 = (_QWORD *)v209.m128_u64[0];
                goto LABEL_68;
              }
              sub_1A311D0(&v209, v204[0], (_QWORD *)(v199 + 16LL * v201), (__int64)&v199, 1);
              v183 = v209.m128_u64[0];
              if ( v31[5] || (unsigned __int8)sub_B79970(v44) )
              {
                if ( sub_B72A20(v44, *(_QWORD *)(a1 + 232)) )
                {
                  sub_183B540(a1, v31[1]);
                  if ( *(char *)(v44 + 28) < 0 )
                    goto LABEL_27;
                  goto LABEL_72;
                }
                v51 = v31[1];
                v52 = (__int64 *)(a1 + 8);
                v53 = 3409;
                goto LABEL_58;
              }
              sub_168B9F0((__int64)&v209, (__int64 *)(a1 + 8), v31[1], 0xD51u, 0);
              v193 = sub_169D880((__int64)&v209, (__int64 *)v31 + 1);
              v123 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v183 + 8) + 16LL))(*(_QWORD *)(v183 + 8));
              if ( *(_BYTE *)(v193 + 120) )
              {
                v206[0].m128i_i32[0] = v123;
                v206[0].m128i_i32[1] = v123;
                v206[0].m128i_i8[8] = 1;
                sub_AEC610((__int64 *)(v193 + 32), v206[0].m128i_i64);
              }
              else if ( *(_BYTE *)(v193 + 132) )
              {
                v185 = v123;
                v158 = sub_168B9E0((_QWORD *)v193);
                v161 = v185;
                v162 = v158;
                v163 = *(_QWORD **)(v193 + 16);
                if ( v163 )
                {
                  v196 = v185;
                  v186 = v162;
                  v163 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v163 + 32LL))(v163);
                  v161 = v196;
                  v162 = v186;
                }
                v187 = v161;
                v204[0] = v163;
                v164 = *sub_1587BC0(v162, (__int64 *)v204, v162, v159, v161, v160)
                     + 32LL * *(unsigned int *)(v193 + 128);
                v206[0].m128i_i32[0] = v187;
                v206[0].m128i_i32[1] = v187;
                v206[0].m128i_i8[8] = 1;
                sub_AEC610((__int64 *)(v164 + 8), v206[0].m128i_i64);
              }
              v124 = sub_15F0EF0(a1, v32, 0, a7, a8);
              v125 = v31[1];
              *(__int64 *)((char *)&v206[0].m128i_i64[1] + 4) = 0;
              v206[1].m128i_i8[4] = 0;
              v206[1].m128i_i64[1] = (__int64)&v207 + 8;
              *(_QWORD *)&v207 = 0;
              BYTE8(v207) = 0;
              v208 = 0;
              v206[0].m128i_i64[0] = __PAIR64__(v125, v124);
              v206[0].m128i_i8[8] = 1;
              sub_1589170(v193, v206);
              if ( (__int128 *)v206[1].m128i_i64[1] != (__int128 *)((char *)&v207 + 8) )
                operator delete((void *)v206[1].m128i_i64[1]);
              sub_15F7200(&v209);
              sub_B88650(v44, 1);
LABEL_71:
              if ( *(char *)(v44 + 28) < 0 )
                goto LABEL_27;
LABEL_72:
              v71 = sub_B9ACA0(v44);
              v72 = *(_BYTE *)(v71 + 96);
              v73 = v71;
              v74 = v72 & 7;
              if ( (v72 & 7) != 0 )
              {
                if ( v74 != 5 )
                  goto LABEL_74;
                v153 = *(_BYTE *)(v73 + 28) & 0x7F;
                if ( v153 == 40 || v153 == 46 )
                {
                  v154 = *(_QWORD *)(v73 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v73 + 16) & 4) != 0 )
                    v154 = *(_QWORD *)(v154 + 8);
                  if ( v154 )
                  {
                    v155 = *(_BYTE *)(sub_B8EAA0(v154) + 8) & 0x7F;
                    if ( v155 > 0x12u )
                    {
                      if ( ((v155 + 94) & 0x7Fu) > 5 )
                        goto LABEL_215;
                    }
                    else if ( ((1LL << v155) & 0x40182) == 0 )
                    {
LABEL_215:
                      if ( (*(_BYTE *)(v73 + 28) & 0x7F) != 0x2B )
                        goto LABEL_121;
                    }
                    v74 = *(_BYTE *)(v73 + 96) & 7;
LABEL_74:
                    if ( v74 > 3u )
                      goto LABEL_75;
                    goto LABEL_121;
                  }
                }
                if ( v153 != 43 )
                  goto LABEL_121;
LABEL_75:
                v75 = 0;
                if ( v31[4] )
                {
                  if ( sub_B799A0(v44) )
                  {
                    v75 = v31[4];
                  }
                  else
                  {
                    sub_168B9F0((__int64)&v209, (__int64 *)(a1 + 8), v31[4], 0x12ACu, 0);
                    v150 = *((_QWORD *)v31 + 3);
                    if ( v150 > 1 )
                    {
                      v157 = sub_EEC8C0(v150 & 0xFFFFFFFFFFFFFFFELL, a1 + 8, *(double *)a7.m128i_i64);
                      v151 = v157;
                      v152 = HIDWORD(v157);
                    }
                    else
                    {
                      v151 = v31[1];
                      v152 = v151;
                    }
                    if ( v216.m128i_i8[0] )
                    {
                      v206[0].m128i_i64[0] = __PAIR64__(v152, v151);
                      v206[0].m128i_i8[8] = 1;
                      sub_AEC610((__int64 *)v212, v206[0].m128i_i64);
                    }
                    else if ( v216.m128i_i8[12] )
                    {
                      v197 = v152;
                      v194 = v151;
                      v168 = sub_168B9E0(&v209);
                      v171 = v194;
                      v172 = v197;
                      v188 = v168;
                      v173 = (_QWORD *)v210;
                      if ( v210 )
                      {
                        v173 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v210 + 32LL))(
                                           v210,
                                           *(_QWORD *)v210,
                                           v197,
                                           v194);
                        v172 = v197;
                        v171 = v194;
                      }
                      v198 = v172;
                      v195 = v171;
                      v204[0] = v173;
                      v174 = sub_1587BC0(v188, (__int64 *)v204, v172, v171, v169, v170);
                      v175 = *v174 + 32LL * v216.m128i_u32[2];
                      v206[0].m128i_i64[0] = __PAIR64__(v198, v195);
                      v206[0].m128i_i8[8] = 1;
                      sub_AEC610((__int64 *)(v175 + 8), v206[0].m128i_i64);
                    }
                    sub_15F7200(&v209);
                  }
                  v76 = *v31;
                  if ( *((_QWORD *)v31 + 3) <= 1u )
                    goto LABEL_79;
                }
                else
                {
                  v102 = sub_B799A0(v44);
                  v103 = v191;
                  if ( v102 )
                    v103 = v102;
                  v76 = *v31;
                  v191 = v103;
                  if ( *((_QWORD *)v31 + 3) <= 1u )
                  {
LABEL_79:
                    sub_1905D90(a1, v44, v31[1], (v76 == 3) + 1, v75);
                    goto LABEL_80;
                  }
                }
                v104 = *(_QWORD *)(v44 + 48);
                v105 = *(_DWORD *)(v44 + 24);
                v209.m128_u64[0] = v44;
                v210 = v104;
                v209.m128_u64[1] = v105;
                v106 = (const __m128i *)&v209;
                v211 = (v76 == 3) | v211 & 0x80;
                v107 = *(unsigned int *)(v10 + 1328);
                v204[0] = (_QWORD *)v44;
                v108 = *(_QWORD *)(v10 + 1320);
                v109 = v107 + 1;
                v110 = (__m128i *)(v108 + 32 * v107);
                if ( v109 > *(unsigned int *)(v10 + 1332) )
                {
                  v176 = v10 + 1320;
                  v177 = v10 + 1336;
                  if ( v108 > (unsigned __int64)&v209 || v110 <= (__m128i *)&v209 )
                  {
                    sub_2237220(v176, v177, v109, 32);
                    v106 = (const __m128i *)&v209;
                    v110 = (__m128i *)(*(_QWORD *)(v10 + 1320) + 32LL * *(unsigned int *)(v10 + 1328));
                  }
                  else
                  {
                    sub_2237220(v176, v177, v109, 32);
                    v178 = *(_QWORD *)(v10 + 1320);
                    v106 = (const __m128i *)((char *)&v209 + v178 - v108);
                    v110 = (__m128i *)(32LL * *(unsigned int *)(v10 + 1328) + v178);
                  }
                }
                *v110 = _mm_loadu_si128(v106);
                v110[1] = _mm_loadu_si128(v106 + 1);
                v111 = *(_DWORD *)(v10 + 1328) + 1;
                *(_DWORD *)(v10 + 1328) = v111;
                v70 = (unsigned __int8)sub_EC1110((__int64 *)(v10 + 1288), (__int64 *)v204, v206) == 0;
                v112 = (_QWORD *)v206[0].m128i_i64[0];
                if ( !v70 )
                {
                  *(_DWORD *)(v206[0].m128i_i64[0] + 8) = v111;
                  goto LABEL_80;
                }
                v126 = *(_DWORD *)(v10 + 1296);
                v78 = *(unsigned int *)(v10 + 1304);
                v209.m128_u64[0] = v206[0].m128i_i64[0];
                v127 = (unsigned int)(v126 + 1);
                v128 = 2 * v78;
                v79 = (unsigned int)(4 * v127);
                if ( (unsigned int)v79 >= 3 * (int)v78 )
                  goto LABEL_245;
                if ( (int)v78 - *(_DWORD *)(v10 + 1300) - (int)v127 <= (unsigned int)v78 >> 3 )
                {
                  v128 = v78;
LABEL_245:
                  sub_EC2030((__int64 *)(v10 + 1288), v128, v127, v78, v79, v80);
                  sub_EC1110((__int64 *)(v10 + 1288), (__int64 *)v204, &v209);
                  LODWORD(v127) = *(_DWORD *)(v10 + 1296) + 1;
                  v112 = (_QWORD *)v209.m128_u64[0];
                }
                v70 = *v112 == -4096;
                *(_DWORD *)(v10 + 1296) = v127;
                if ( !v70 )
                  --*(_DWORD *)(v10 + 1300);
                v77 = v204[0];
                v129 = (int *)(v112 + 1);
                *v129 = 0;
                *((_QWORD *)v129 - 1) = v77;
                *v129 = v111;
LABEL_80:
                v81 = *(_DWORD *)(v10 + 1328);
                if ( !v81 )
                  goto LABEL_27;
                v31 += 12;
                v209.m128_i32[0] = v81 - 1;
                *(_QWORD *)sub_1A319D0(v10 + 1800, (int *)&v209, (__int64)v77, v78, v79, v80) = *((_QWORD *)v31 - 1);
                v32 = *(v31 - 11);
                if ( v181 == v31 )
                  goto LABEL_28;
              }
              else
              {
                v92 = *(_QWORD *)&byte_8[*(_QWORD *)(v73 + 48) & 0xFFFFFFFFFFFFFFF0LL];
                if ( (v92 & 8) == 0
                  || (*(_DWORD *)((char *)&qword_18 + (v92 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v92 & 7)) >> 9 != 3 )
                {
                  if ( ((*(_BYTE *)(v73 + 28) + 85) & 0x7D) != 0 )
                  {
                    v93 = *(_QWORD *)(v73 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (*(_QWORD *)(v73 + 16) & 4) != 0 )
                      v93 = *(_QWORD *)(v93 + 8);
                    v94 = *(_BYTE *)(sub_B8EAA0(v93) + 8) & 0x7F;
                    if ( !v94 || v94 == 24 )
                      goto LABEL_121;
                    if ( (*(_BYTE *)(v73 + 28) & 0x7F) != 0x2B )
                    {
                      v95 = *(_QWORD *)(v73 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (*(_QWORD *)(v73 + 16) & 4) != 0 )
                        v95 = *(_QWORD *)v95;
                      if ( ((*(_BYTE *)(v95 + 8) + 70) & 0x7Fu) <= 3 )
                        goto LABEL_121;
                    }
                    v72 = *(_BYTE *)(v73 + 96);
                  }
                  if ( (v72 & 0x18) == 0 )
                    goto LABEL_75;
                }
LABEL_121:
                v96 = (__int64 *)(v31 + 2);
                sub_168B9F0((__int64)&v209, (__int64 *)(a1 + 8), v31[1], 0xD52u, 0);
                v97 = (__int64 *)(v31 + 2);
                v31 += 12;
                sub_169D880((__int64)&v209, v97);
                sub_15F7200(&v209);
                sub_168B9F0((__int64)&v209, (__int64 *)(a1 + 8), *(_DWORD *)(v44 + 24), 0x188Bu, 0);
                sub_169D880((__int64)&v209, v96);
                sub_15F7200(&v209);
                v32 = *(v31 - 11);
                if ( v181 == v31 )
                  goto LABEL_28;
              }
            }
          }
        }
        if ( v33 == 1 )
        {
          sub_168B9F0(
            (__int64)&v209,
            (__int64 *)(a1 + 8),
            v31[1],
            (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0 ? 5671 : 6731,
            0);
          sub_15F7200(&v209);
        }
        if ( *(_DWORD *)(v10 + 1312) )
          break;
        if ( *((_DWORD *)v182 + 3) == 1 && *v31 != 1 )
        {
          sub_168B9F0(
            (__int64)&v209,
            (__int64 *)(a1 + 8),
            v31[1],
            ((*(char *)(*(_QWORD *)(a1 + 232) + 1LL) >> 31) & 0x4AB) + 5544,
            0);
          sub_15F7200(&v209);
        }
        if ( (sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          sub_168B9F0((__int64)&v209, (__int64 *)(a1 + 8), v31[1], 0x1433u, 0);
          if ( v216.m128i_i8[0] )
          {
            sub_AE9DF0(v212, 1, 2u);
          }
          else if ( v216.m128i_i8[12] )
          {
            v120 = sub_168B9E0(&v209);
            v121 = v210;
            if ( v210 )
              v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v210 + 32LL))(v210);
            v206[0].m128i_i64[0] = v121;
            v122 = sub_1587BC0(v120, v206[0].m128i_i64, v116, v117, v118, v119);
            sub_AE9DF0((unsigned __int8 **)(*v122 + 32LL * v216.m128i_u32[2] + 8), 1, 2u);
          }
          goto LABEL_37;
        }
        sub_19B4460(a1, (const __m128i *)(unsigned int)v31[1], 1, 1u, nullptr, *v31 == 1);
        v58 = *(_DWORD *)(v10 + 1328);
        if ( !v58 )
          goto LABEL_27;
        v59 = v58 - 1;
        v206[0].m128i_i32[0] = v59;
        v60 = *(_DWORD *)(v10 + 1816);
        if ( !v60 )
        {
          v209.m128_u64[0] = 0;
          goto LABEL_236;
        }
        v57 = v60 - 1;
        v61 = *(_QWORD *)(v10 + 1800);
        LODWORD(v62) = v57 & (37 * v59);
        v54 = v61 + 12LL * (unsigned int)v62;
        v63 = *(_DWORD *)v54;
        if ( v59 != *(_DWORD *)v54 )
        {
          v165 = 1;
          v166 = 0;
          if ( v63 != -1 )
          {
            while ( 1 )
            {
              if ( !v166 && v63 == -2 )
                v166 = v54;
              v62 = (unsigned int)v57 & ((_DWORD)v62 + v165);
              v54 = v61 + 12 * v62;
              v63 = *(_DWORD *)v54;
              if ( v59 == *(_DWORD *)v54 )
                goto LABEL_62;
              if ( v63 == -1 )
              {
                if ( v166 )
                  v54 = v166;
                break;
              }
              ++v165;
            }
          }
          v167 = *(_DWORD *)(v10 + 1808);
          v209.m128_u64[0] = v54;
          v55 = (unsigned int)(v167 + 1);
          v56 = (unsigned int)(4 * v55);
          if ( (unsigned int)v56 >= 3 * v60 )
          {
LABEL_236:
            v60 *= 2;
          }
          else
          {
            v56 = v60 >> 3;
            if ( v60 - *(_DWORD *)(v10 + 1812) - (unsigned int)v55 > (unsigned int)v56 )
            {
LABEL_232:
              *(_DWORD *)(v10 + 1808) = v55;
              if ( *(_DWORD *)v54 != -1 )
                --*(_DWORD *)(v10 + 1812);
              *(_DWORD *)v54 = v59;
              *(_QWORD *)(v54 + 4) = 0;
              goto LABEL_62;
            }
          }
          sub_1A317E0((__int64 *)(v10 + 1800), v60, v54, v55, v56, v57);
          sub_1A2F5A0((__int64 *)(v10 + 1800), v206[0].m128i_i32, &v209);
          v59 = v206[0].m128i_i32[0];
          v54 = v209.m128_u64[0];
          LODWORD(v55) = *(_DWORD *)(v10 + 1808) + 1;
          goto LABEL_232;
        }
LABEL_62:
        v64 = *((_QWORD *)v31 + 5);
        v31 += 12;
        *(_QWORD *)(v54 + 4) = v64;
        v32 = *(v31 - 11);
        if ( v181 == v31 )
          goto LABEL_28;
      }
      sub_168B9F0((__int64)&v209, (__int64 *)(a1 + 8), v31[1], 0xD51u, 0);
      if ( v216.m128i_i8[0] )
      {
        sub_AE9DF0(v212, (__int64)"'this'", 1u);
        v99 = v216.m128i_i8[0];
      }
      else
      {
        if ( !v216.m128i_i8[12] )
        {
          v88 = *(_DWORD *)(*(_QWORD *)(v10 + 1320) + 32LL * (unsigned int)(*(_DWORD *)(v10 + 1312) - 1) + 8);
          goto LABEL_90;
        }
        v147 = sub_168B9E0(&v209);
        v148 = v210;
        if ( v210 )
          v148 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v210 + 32LL))(v210);
        v206[0].m128i_i64[0] = v148;
        v149 = sub_1587BC0(v147, v206[0].m128i_i64, v143, v144, v145, v146);
        sub_AE9DF0((unsigned __int8 **)(*v149 + 32LL * v216.m128i_u32[2] + 8), (__int64)"'this'", 1u);
        v99 = v216.m128i_i8[0];
      }
      v100 = *(_QWORD *)(v10 + 1320) + 32LL * (unsigned int)(*(_DWORD *)(v10 + 1312) - 1);
      v88 = *(_DWORD *)(v100 + 8);
      if ( v99 )
      {
        v206[0].m128i_i32[0] = *(_DWORD *)(v100 + 8);
        v206[0].m128i_i32[1] = v88;
        v206[0].m128i_i8[8] = 1;
        sub_AEC610((__int64 *)v212, v206[0].m128i_i64);
        goto LABEL_91;
      }
LABEL_90:
      if ( v216.m128i_i8[12] )
      {
        v137 = sub_168B9E0(&v209);
        v140 = (_QWORD *)v210;
        if ( v210 )
        {
          v184 = v137;
          v140 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v210 + 32LL))(v210);
          v137 = v184;
        }
        v204[0] = v140;
        v141 = sub_1587BC0(v137, (__int64 *)v204, v136, v137, v138, v139);
        v142 = *v141 + 32LL * v216.m128i_u32[2];
        v206[0].m128i_i32[0] = v88;
        v206[0].m128i_i32[1] = v88;
        v206[0].m128i_i8[8] = 1;
        sub_AEC610((__int64 *)(v142 + 8), v206[0].m128i_i64);
      }
LABEL_91:
      v89 = sub_15F0EF0(a1, v32, 0, a7, a8);
      v90 = v31[1];
      *(__int64 *)((char *)&v206[0].m128i_i64[1] + 4) = 0;
      v206[1].m128i_i8[4] = 0;
      v206[1].m128i_i64[1] = (__int64)&v207 + 8;
      *(_QWORD *)&v207 = 0;
      BYTE8(v207) = 0;
      v208 = 0;
      v206[0].m128i_i64[0] = __PAIR64__(v90, v89);
      v206[0].m128i_i8[8] = 1;
      sub_1589170((__int64)&v209, v206);
      v87 = (void *)v206[1].m128i_i64[1];
      if ( (__int128 *)v206[1].m128i_i64[1] != (__int128 *)((char *)&v207 + 8) )
        goto LABEL_92;
LABEL_37:
      v31 += 12;
      sub_15F7200(&v209);
      v32 = *(v31 - 11);
    }
    while ( v181 != v31 );
  }
LABEL_28:
  *(_DWORD *)(v10 + 1628) = *(_DWORD *)(v10 + 1328);
  *(_BYTE *)(v10 + 1465) |= v191;
  sub_17A2E10(a1);
  return operator delete(v199, 16LL * v201, 8);
}
