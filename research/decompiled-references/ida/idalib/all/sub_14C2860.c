__int64 __fastcall sub_14C2860(
        __int64 a1,
        int *a2,
        char a3,
        int a4,
        int a5,
        __int64 *a6,
        __m128i a7,
        __m128 a8,
        unsigned int *a9)
{
  _BYTE *v9; // r15
  const __m128i *v10; // r14
  __int8 v12; // al
  char v13; // dl
  bool v14; // zf
  unsigned __int16 v18; // ax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  int v21; // edx
  char v22; // al
  char v23; // r12
  __int8 v24; // al
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rbp
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 result; // rax
  __int32 v40; // edi
  const char *v41; // rax
  __int64 *v42; // rcx
  int *m128i_i32; // rsi
  size_t v44; // rax
  unsigned int v45; // r9d
  int v46; // eax
  size_t v47; // rax
  __int8 v48; // bp
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r13
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // esi
  bool v59; // sf
  bool v60; // of
  __int64 v61; // rbp
  _BOOL4 v62; // ebx
  unsigned __int64 v63; // rax
  __int64 *v64; // rdi
  int v65; // ebp
  unsigned int v66; // ebx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rdx
  char v70; // r13
  __int64 v71; // r12
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rdi
  __int64 v82; // r12
  __int64 v83; // rax
  __int64 v84; // rbp
  int v85; // r13d
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rdi
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 *v94; // rsi
  unsigned __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // rdx
  __int16 v104; // ax
  __int8 v105; // r12
  __int64 v106; // rax
  char v107; // dl
  __int64 v108; // rax
  __int64 v109; // r13
  size_t v110; // rax
  __int64 v111; // rdi
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdi
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  __int8 v117; // bl
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rdi
  unsigned __int64 v121; // rax
  __int64 v122; // rax
  __int8 v123; // bl
  __int64 v124; // rax
  __int8 v125; // bl
  __int64 v126; // rax
  __int64 *v127; // rax
  __int64 *v128; // rax
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  __int64 v132; // [rsp+0h] [rbp-CC8h]
  unsigned __int16 v133; // [rsp+0h] [rbp-CC8h]
  __int64 v134; // [rsp+0h] [rbp-CC8h]
  __int64 v135; // [rsp+0h] [rbp-CC8h]
  __int64 v136; // [rsp+0h] [rbp-CC8h]
  __int64 v137; // [rsp+8h] [rbp-CC0h]
  __int64 v138; // [rsp+8h] [rbp-CC0h]
  int v139; // [rsp+8h] [rbp-CC0h]
  unsigned int v140; // [rsp+14h] [rbp-CB4h]
  __int32 v141; // [rsp+18h] [rbp-CB0h]
  unsigned int v142; // [rsp+18h] [rbp-CB0h]
  signed __int64 v143; // [rsp+20h] [rbp-CA8h]
  __int64 *v144; // [rsp+28h] [rbp-CA0h]
  unsigned int v145; // [rsp+28h] [rbp-CA0h]
  char *v146; // [rsp+38h] [rbp-C90h]
  char v147; // [rsp+43h] [rbp-C85h] BYREF
  unsigned __int64 v148; // [rsp+44h] [rbp-C84h] BYREF
  char v149; // [rsp+4Ch] [rbp-C7Ch]
  const __m128i *v150; // [rsp+50h] [rbp-C78h] BYREF
  __int8 v151; // [rsp+58h] [rbp-C70h]
  _BYTE *v152; // [rsp+60h] [rbp-C68h] BYREF
  char v153; // [rsp+68h] [rbp-C60h]
  __int64 v154; // [rsp+70h] [rbp-C58h]
  int v155; // [rsp+78h] [rbp-C50h]
  __int16 v156; // [rsp+7Ch] [rbp-C4Ch]
  __int64 (__fastcall *v157)(__int64); // [rsp+80h] [rbp-C48h]
  __int64 v158; // [rsp+88h] [rbp-C40h]
  __int64 v159; // [rsp+90h] [rbp-C38h]
  void *v160; // [rsp+A0h] [rbp-C28h] BYREF
  __int64 v161; // [rsp+A8h] [rbp-C20h]
  _BYTE v162[64]; // [rsp+B0h] [rbp-C18h] BYREF
  void *ptr; // [rsp+F0h] [rbp-BD8h] BYREF
  _BYTE v164[12]; // [rsp+F8h] [rbp-BD0h] BYREF
  char v165; // [rsp+104h] [rbp-BC4h]
  void *v166; // [rsp+108h] [rbp-BC0h] BYREF
  __int64 v167; // [rsp+110h] [rbp-BB8h]
  _BYTE v168[16]; // [rsp+118h] [rbp-BB0h] BYREF
  char v169; // [rsp+128h] [rbp-BA0h]
  void *v170; // [rsp+220h] [rbp-AA8h] BYREF
  __int64 v171; // [rsp+228h] [rbp-AA0h]
  const __m128i *v172; // [rsp+230h] [rbp-A98h] BYREF
  __int64 v173; // [rsp+238h] [rbp-A90h]
  __int64 (__fastcall *v174)(__int64); // [rsp+240h] [rbp-A88h]
  __int64 v175; // [rsp+248h] [rbp-A80h]
  __int64 v176; // [rsp+250h] [rbp-A78h]
  char v177; // [rsp+4F0h] [rbp-7D8h]

  v9 = (_BYTE *)(a1 + 1952);
  v10 = (const __m128i *)a1;
  v12 = *(_BYTE *)(a1 + 2040);
  v13 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 2040) = 0;
  v14 = *(_WORD *)(a1 + 32) == 22;
  v151 = v12;
  v150 = (const __m128i *)a1;
  v152 = (_BYTE *)(a1 + 1952);
  v153 = v13;
  *(_BYTE *)(a1 + 1952) = 1;
  v154 = a1;
  v155 = 1507350;
  v156 = 63;
  v157 = sub_146A990;
  v158 = 0;
  v159 = 0;
  if ( !v14 )
    goto LABEL_36;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( !(unsigned __int8)sub_1568800(&v152) )
      goto LABEL_4;
    v10 = v150;
    v9 = v152;
    v13 = v153;
LABEL_36:
    result = 1;
    goto LABEL_37;
  }
  LODWORD(v159) = sub_146A990(a1);
LABEL_4:
  v137 = a1 + 48;
  v140 = v159;
  sub_1703AF0(a1 + 48, *(unsigned int *)(a1 + 16));
  v18 = *(_WORD *)(a1 + 32);
  *a6 = 0;
  if ( v18 != 3 )
  {
    v19 = *(__int64 **)(a1 + 8);
    v20 = v19[7];
    if ( (*(_BYTE *)(v20 + 2) & 4) != 0 && (unsigned __int16)(v18 - 373) <= 3u )
    {
      if ( (*(_BYTE *)(v20 + 107) & 4) != 0 )
      {
        v21 = *a2;
        if ( *a2 > 1 )
        {
          if ( v21 != 2 )
          {
            v64 = *(__int64 **)(a1 + 8);
            v133 = v18;
            v65 = 0;
            v10[2].m128i_i32[2] = v10[1].m128i_i32[0];
            sub_14634E0(v64, v10[1].m128i_i32);
            v66 = v10[2].m128i_u32[2];
            if ( v133 != 373 )
            {
              v65 = 1;
              if ( v133 != 374 )
              {
                if ( v133 != 375
                  && (!v66 || (v67 = sub_1021680(*(_QWORD *)(v10->m128i_i64[1] + 88), v66)) == 0 || v67 == 3) )
                {
                  sub_1564820(&v170, v10, v66, 1542);
                  v110 = j__strlen("__bridge_retained");
                  v166 = v168;
                  *(_QWORD *)&v164[4] = 0;
                  v165 = 0;
                  v167 = 0;
                  v168[0] = 0;
                  v169 = 0;
                  LODWORD(ptr) = v66;
                  HIDWORD(ptr) = v66;
                  v164[0] = 1;
                  v160 = v162;
                  sub_14B5BE0(&v160, "__bridge_retained", (__int64)&aBridgeRetained[v110]);
                  sub_A0AAD0((__int64)&v166, &v160);
                  if ( v160 != v162 )
                    operator delete(v160);
                  if ( (_DWORD)ptr && HIDWORD(ptr) )
                    sub_14B8100((__int64 *)&v170, (unsigned __int64)&ptr);
                  if ( v166 != v168 )
                    operator delete(v166);
                  sub_AEA040((__int64)&v170);
                }
                v65 = 2;
              }
            }
            v68 = sub_1496480((__int64)v10, nullptr, 5, 3u, nullptr, 0, a7, a8);
            v70 = v69;
            v71 = v68;
            sub_14808E0((__int64)&v152, nullptr, v69, v72, v73, v74);
            v150[127].m128i_i8[8] = v151;
            *a9 = HIDWORD(v159);
            sub_1703EE0(v137, v10[1].m128i_u32[0], v71);
            v75 = sub_14BDA20((__int64)v10, 0, 0, 0, 0, nullptr, a7);
            if ( !v70 && v75 != 1 )
            {
              result = sub_19DDE10(
                         *(_QWORD *)(v10[6].m128i_i64[0] + 736),
                         *(_QWORD *)(v10[6].m128i_i64[0] + 608),
                         v140,
                         v65,
                         v66,
                         v71,
                         *a9,
                         v75 & 0xFFFFFFFFFFFFFFFELL);
              goto LABEL_61;
            }
            goto LABEL_76;
          }
          goto LABEL_14;
        }
        goto LABEL_13;
      }
      v40 = *(_DWORD *)(a1 + 16);
      v141 = v10[1].m128i_i32[0];
      if ( v18 == 373 )
      {
        v10[2].m128i_i32[2] = v40;
        sub_14634E0(v19, v10[1].m128i_i32);
      }
      else
      {
        v144 = v19;
        v41 = (const char *)sub_10CBF50(v18);
        v42 = v144;
        m128i_i32 = v10[1].m128i_i32;
        v143 = 0;
        v146 = (char *)v41;
        if ( v41 )
        {
          v44 = j__strlen(v41);
          m128i_i32 = v10[1].m128i_i32;
          v42 = v144;
          v143 = v44;
        }
        v10[2].m128i_i32[2] = v141;
        sub_14634E0(v42, m128i_i32);
        v45 = v10[2].m128i_u32[2];
        if ( !v45
          || (v142 = v10[2].m128i_u32[2],
              v46 = sub_1021680(*(_QWORD *)(v10->m128i_i64[1] + 88), v45),
              v45 = v142,
              v46 == 3)
          || !v46 )
        {
          v145 = v45;
          sub_1564820(&v170, v10, v45, 2059);
          sub_AEC220((unsigned __int8 **)&v170, v146, v143);
          v47 = j__strlen(&byte_22F0C30);
          v166 = v168;
          LODWORD(ptr) = v145;
          HIDWORD(ptr) = v145;
          v160 = v162;
          *(_QWORD *)&v164[4] = 0;
          v165 = 0;
          v167 = 0;
          v168[0] = 0;
          v169 = 0;
          v164[0] = 1;
          sub_14B5BE0(&v160, &byte_22F0C30, (__int64)(&byte_22F0C30 + v47));
          sub_A0AAD0((__int64)&v166, &v160);
          if ( v160 != v162 )
            operator delete(v160);
          if ( (_DWORD)ptr && HIDWORD(ptr) )
            sub_14B8100((__int64 *)&v170, (unsigned __int64)&ptr);
          if ( v166 != v168 )
            operator delete(v166);
          sub_AEA040((__int64)&v170);
        }
      }
    }
    v21 = *a2;
    if ( *a2 <= 1 )
    {
LABEL_13:
      if ( v21 <= 0 )
      {
LABEL_15:
        if ( a5 == 1 )
        {
          v49 = (__int64)&v170;
          v48 = v10[129].m128i_i8[0];
          v10[129].m128i_i8[0] = 0;
          v170 = &v172;
          v171 = 0xC00000000LL;
          if ( (unsigned __int8)sub_14BDBD0((__int64)v10, (__int64)&v170, a7) )
          {
            v55 = 1;
          }
          else
          {
            v102 = (unsigned int)v171;
            if ( *a2 > 0 && (_DWORD)v171 == 1 )
            {
              if ( (unsigned __int8)sub_14B68B0((__int64)v10, v10[2].m128i_u16[0]) )
              {
                v120 = v10->m128i_i64[1];
                v121 = *(_QWORD *)(v120 + 2944);
                v122 = v121 >= *(unsigned int *)(v120 + 2912)
                     ? sub_14180A0(v120, 1u)
                     : *(_QWORD *)(v120 + 2904) + 24 * v121;
                if ( *(_WORD *)(v122 + 16) == 27 )
                {
                  v127 = (__int64 *)v170;
                  *a2 = 1;
                  result = sub_14BFC30((__int64)v10, *v127, (__int64)&v152, a7);
                  if ( v170 != &v172 )
                  {
                    v136 = result;
                    free(v170);
                    result = v136;
                  }
                  goto LABEL_97;
                }
              }
              v102 = (unsigned int)v171;
            }
            v103 = v10[1].m128i_u32[0];
            v49 = v140;
            *a2 = 0;
            v55 = sub_18C2A90(v10[6].m128i_i64[0], v140, v103, v170, v102);
          }
          if ( v170 != &v172 )
            free(v170);
          goto LABEL_58;
        }
        if ( *(_DWORD *)(*(_QWORD *)(v10->m128i_i64[1] + 56) + 64LL) > 0x31u
          && v10[134].m128i_i8[10]
          && *a2 == 4
          && v10[2].m128i_i16[0] == 20
          && (unsigned __int8)sub_14B68F0(v10) )
        {
          v23 = 0;
          v160 = v162;
          v161 = 0x400000000LL;
          *(_QWORD *)v164 = 0x400000000LL;
          ptr = &v164[8];
          do
          {
            v24 = v10[122].m128i_i8[0];
            v10[122].m128i_i8[0] = 1;
            WORD2(v173) = 63;
            v170 = v9;
            LOBYTE(v171) = v24;
            v172 = v10;
            LODWORD(v173) = 1376276;
            v174 = sub_14789E0;
            v175 = 0;
            v176 = 0;
            sub_149FA40((__int64)&v170);
            v25 = nullptr;
            v28 = sub_14BFC10(v10, 0, a7);
            if ( v28 <= 1 )
            {
              do
              {
                v25 = (__int64 *)&v148;
                LODWORD(v148) = 1507349;
                v23 = sub_15680D0(v10, &v148, 2, 3);
              }
              while ( !v23 );
            }
            sub_14808E0((__int64)&v170, v25, v26, v27, v29, v30);
            v31 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFFELL);
            sub_14B7B40((__int64)&v160, v28 & 0xFFFFFFFFFFFFFFFELL);
            v34 = *(unsigned int *)&v164[4];
            v35 = v176;
            v36 = *(unsigned int *)v164 + 1LL;
            if ( v36 > *(unsigned int *)&v164[4] )
            {
              v31 = (__int64 *)&v164[8];
              sub_2237220(&ptr, &v164[8], v36, 8);
              *((_QWORD *)ptr + *(unsigned int *)v164) = v35;
            }
            else
            {
              *((_QWORD *)ptr + *(unsigned int *)v164) = v176;
            }
            v37 = (unsigned __int8)v171;
            ++*(_DWORD *)v164;
            v14 = v10[2].m128i_i16[0] == 23;
            *(_BYTE *)v170 = v171;
          }
          while ( !v14 );
          sub_14808E0((__int64)&v152, v31, v37, v34, v32, v33);
          *a9 = HIDWORD(v159);
          v38 = sub_14BDAD0((__int64)v10, 0, a7);
          if ( v23 == 1 || v38 == 1 )
            result = 1;
          else
            result = sub_1B11C10(
                       *(_QWORD *)(v10[6].m128i_i64[0] + 760),
                       v38 & 0xFFFFFFFFFFFFFFFELL,
                       v140,
                       *a9,
                       v160,
                       (unsigned int)v161,
                       ptr,
                       *(unsigned int *)v164);
          if ( ptr != &v164[8] )
          {
            v138 = result;
            free(ptr);
            result = v138;
          }
          if ( v160 != v162 )
          {
            v132 = result;
            free(v160);
            result = v132;
          }
          goto LABEL_61;
        }
        v48 = v10[129].m128i_i8[0];
        v10[129].m128i_i8[0] = 0;
        v49 = 2;
        v54 = sub_14BFC10(v10, 2, a7);
        v55 = v54;
        if ( *a2 > 0 )
        {
          v49 = v10[2].m128i_u16[0];
          if ( (unsigned __int8)sub_14B68B0((__int64)v10, v49) )
          {
            v90 = v10->m128i_i64[1];
            v91 = *(_QWORD *)(v90 + 2944);
            if ( v91 >= *(unsigned int *)(v90 + 2912) )
            {
              v49 = 1;
              v92 = sub_14180A0(v90, 1u);
            }
            else
            {
              v50 = 3 * v91;
              v92 = *(_QWORD *)(v90 + 2904) + 24 * v91;
            }
            if ( *(_WORD *)(v92 + 16) == 27 )
            {
              *a2 = 1;
              result = sub_14BFC30((__int64)v10, v54, (__int64)&v152, a7);
LABEL_97:
              v10[129].m128i_i8[0] = v48;
              goto LABEL_61;
            }
          }
        }
        *a2 = 0;
        if ( v54 != 1 )
        {
          if ( v10[2].m128i_i16[0] == 23 )
          {
            v49 = v140;
            v55 = sub_190C990(v10[6].m128i_i64[0], v140, v10[1].m128i_u32[0], v54 & 0xFFFFFFFFFFFFFFFELL);
          }
LABEL_58:
          v10[129].m128i_i8[0] = v48;
          goto LABEL_59;
        }
        v10[129].m128i_i8[0] = v48;
LABEL_99:
        LOWORD(v170) = 23;
        sub_15680D0(v10, &v170, 1, 1);
LABEL_76:
        result = 1;
        goto LABEL_61;
      }
LABEL_14:
      if ( v10[2].m128i_i16[0] == 27 )
      {
        v76 = v10->m128i_i64[1];
        v77 = *(_QWORD *)(v76 + 2944);
        v78 = v77 >= *(unsigned int *)(v76 + 2912) ? sub_14180A0(v76, 1u) : *(_QWORD *)(v76 + 2904) + 24 * v77;
        if ( (unsigned __int8)sub_14B68B0((__int64)v10, *(_WORD *)(v78 + 16)) )
        {
          *a2 = 1;
          result = sub_14BFC30((__int64)v10, 0, (__int64)&v152, a7);
          v10 = v150;
          v9 = v152;
          v13 = v153;
          goto LABEL_37;
        }
      }
      goto LABEL_15;
    }
    if ( v10[2].m128i_i16[0] == 24 )
    {
      sub_1564840(&v170, v10, &v10[1], (v140 >> 31) + 1993);
      sub_AEA040((__int64)&v170);
      sub_1564BC0(v10, v140, 22, 0);
      v79 = v10[6].m128i_i64[0];
      v80 = *(_QWORD *)(v79 + 608);
      if ( !*(_QWORD *)(v80 + 24) && !*(_QWORD *)(v80 + 56) )
      {
        sub_1564820(&v170, v10, v140, 1891);
        sub_AEA040((__int64)&v170);
        goto LABEL_99;
      }
      v81 = *(_QWORD *)(v79 + 544);
      while ( ((*(_BYTE *)(v81 + 8) + 70) & 0x7Fu) <= 4 )
      {
        v89 = *(_QWORD *)(sub_B8C1B0(v81) + 16);
        if ( (v89 & 4) != 0 )
          v81 = *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v81 = v89 & 0xFFFFFFFFFFFFFFF8LL;
      }
      v82 = v10[6].m128i_i64[0];
      v83 = *(_QWORD *)(v82 + 512);
      v84 = *(_QWORD *)(v82 + 544);
      *(_QWORD *)(v82 + 512) = 0;
      v134 = v83;
      v173 = *(_QWORD *)(v82 + 9944);
      LODWORD(v83) = *(_DWORD *)(v82 + 2632);
      v85 = *(_DWORD *)(v82 + 80);
      *(_QWORD *)(v82 + 544) = v81;
      v139 = v83;
      *(_DWORD *)(v82 + 80) = *(_DWORD *)(v82 + 40);
      *(_DWORD *)(v82 + 2632) = *(_DWORD *)(v82 + 3688);
      sub_18C81B0(v10[6].m128i_i64[0]);
      v49 = 1;
      v86 = sub_1533300(v10, 1);
      *a2 = 2;
      v55 = v86;
      if ( v86 == 1 )
      {
        sub_190F620(v10[6].m128i_i64[0]);
      }
      else
      {
        v87 = v10[6].m128i_i64[0];
        v49 = *(_QWORD *)(v87 + 608);
        v55 = sub_190F5E0(v87, v49, v140, v86 & 0xFFFFFFFFFFFFFFFELL, v10[1].m128i_u32[0]);
      }
      if ( v84 )
      {
        *(_QWORD *)(v82 + 544) = v84;
        *(_QWORD *)(v82 + 512) = v134;
        v88 = v173;
        *(_DWORD *)(v82 + 80) = v85;
        *(_QWORD *)(v82 + 9944) = v88;
        *(_DWORD *)(v82 + 2632) = v139;
      }
LABEL_59:
      if ( v55 != 1 )
      {
        sub_14808E0((__int64)&v152, (__int64 *)v49, v50, v51, v52, v53);
        *a9 = HIDWORD(v159);
        result = v55;
LABEL_61:
        v10 = v150;
        v9 = v152;
        v13 = v153;
        goto LABEL_37;
      }
      goto LABEL_99;
    }
    if ( v21 == 2 )
      goto LABEL_14;
    if ( (*(_BYTE *)(*(_QWORD *)(v10->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
    {
      v22 = sub_15612F0(v10, 0, &v147);
    }
    else
    {
      v147 = 0;
      v22 = sub_147F1B0((__int64)v10);
    }
    if ( !v22 )
    {
      v21 = *a2;
      goto LABEL_13;
    }
    if ( v147 == 1 && !a3 )
    {
      result = sub_14CA090(v10, a2, a6, &v152, &v150);
      *a9 = HIDWORD(v159);
      goto LABEL_61;
    }
    sub_147A4A0((__int64)&ptr, (__int64)&v10[31].m128i_i64[1]);
    sub_148B330((__int64)v10, (__int64)&ptr, 0, 3u, 0, a7, a8);
    v93 = sub_14B6240();
    sub_147A650((__int64)&v170, (__int64)&ptr, (__int64)v93, 5);
    v94 = (__int64 *)&v170;
    sub_147E3E0((__int64)v10, (__int64)&v170);
    if ( (v177 & 1) == 0
      && ((*(_DWORD *)v170 >> 12) & 0x7F) != 0x45
      && v10[2].m128i_i16[0] == 5
      && !v10[129].m128i_i8[0] )
    {
      v111 = v10->m128i_i64[1];
      if ( (*(_BYTE *)(*(_QWORD *)(v111 + 56) + 2LL) & 4) != 0 )
      {
        v112 = *(_QWORD *)(v111 + 2944);
        if ( v112 >= *(unsigned int *)(v111 + 2912) )
        {
          v94 = (_QWORD *)(&dword_0 + 1);
          v113 = sub_14180A0(v111, 1u);
        }
        else
        {
          v113 = *(_QWORD *)(v111 + 2904) + 24 * v112;
        }
        if ( *(_WORD *)(v113 + 16) == 62
          || ((v114 = v10->m128i_i64[1],
               v115 = *(_QWORD *)(v114 + 2944),
               v95 = *(unsigned int *)(v114 + 2912),
               v115 >= v95)
            ? (v94 = (_QWORD *)(&dword_0 + 1), v116 = sub_14180A0(v114, 1u))
            : (v116 = *(_QWORD *)(v114 + 2904) + 24 * v115),
              *(_WORD *)(v116 + 16) == 21) )
        {
          v117 = v10[129].m128i_i8[0];
          v118 = v10[6].m128i_i64[0];
          v10[129].m128i_i8[0] = 0;
          v119 = sub_1E85500(v118, &v170);
          v10[129].m128i_i8[0] = v117;
          v49 = 0;
          v55 = sub_14FDCA0(v10, 0, 0, v119, 0);
          sub_147A7A0((char *)&v170);
          sub_147A5F0((__int64)&ptr);
          goto LABEL_59;
        }
      }
    }
    sub_14808E0((__int64)&v152, v94, v95, v96, v97, v98);
    v150[127].m128i_i8[8] = v151;
    *a9 = HIDWORD(v159);
    if ( a4 == 1 )
    {
      v104 = v10[2].m128i_i16[0];
      if ( v104 == 24 )
      {
        *a2 = 3;
        v123 = v10[129].m128i_i8[0];
        v10[129].m128i_i8[0] = 0;
        v124 = sub_1E85500(v10[6].m128i_i64[0], &v170);
        v10[129].m128i_i8[0] = v123;
        v101 = sub_14BE5D0((__int64)v10, v124, v140, *a9, a7);
        goto LABEL_117;
      }
      if ( v104 == 22 && (*(_BYTE *)(*(_QWORD *)(v10->m128i_i64[1] + 56) + 47LL) & 0x20) != 0 )
      {
        v105 = v10[129].m128i_i8[0];
        v10[129].m128i_i8[0] = 0;
        v106 = sub_1E85500(v10[6].m128i_i64[0], &v170);
        v10[129].m128i_i8[0] = v105;
        if ( v107 )
          goto LABEL_126;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v106 & 0xFFFFFFFFFFFFFFF0LL]
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 57 <= 1 )
        {
          v108 = sub_14BDA20((__int64)v10, 0, 0, 1u, 1u, nullptr, a7);
          if ( v108 != 1 )
          {
            v109 = sub_1931040(
                     v10[6].m128i_i64[0],
                     *(_QWORD *)(v10[6].m128i_i64[0] + 608),
                     v140,
                     (unsigned int)&v170,
                     (_DWORD)a6,
                     *a9,
                     v108 & 0xFFFFFFFFFFFFFFFELL);
            if ( v109 != 1 )
            {
              v101 = sub_14BFE70((__int64)v10, v109, a7);
              goto LABEL_117;
            }
          }
LABEL_126:
          v101 = 1;
LABEL_117:
          v135 = v101;
          sub_147A7A0((char *)&v170);
          sub_147A5F0((__int64)&ptr);
          result = v135;
          goto LABEL_61;
        }
      }
    }
    if ( *a2 == 4 )
    {
      if ( (v177 & 1) == 0 && ((*(_DWORD *)v170 >> 12) & 0x7F) != 0x45 )
      {
        if ( a3 )
        {
          v125 = v10[129].m128i_i8[0];
          v10[129].m128i_i8[0] = 0;
          v126 = sub_1E85500(v10[6].m128i_i64[0], &v170);
          v10[129].m128i_i8[0] = v125;
          *a6 = v126;
          v101 = 0;
        }
        else
        {
          if ( v10[2].m128i_i16[0] != 5 || (*(_BYTE *)(*(_QWORD *)(v10->m128i_i64[1] + 56) + 2LL) & 4) == 0 )
            goto LABEL_115;
          v100 = sub_14B5A80(5) ? 0LL : v10[1].m128i_i64[1];
          if ( v10[128].m128i_i64[1] != v100 )
            goto LABEL_115;
          v128 = *(__int64 **)(v10[6].m128i_i64[0] + 608);
          if ( !v128 )
            goto LABEL_115;
          while ( (*((_BYTE *)v128 + 9) & 8) == 0 )
          {
            v128 = (__int64 *)*v128;
            if ( !v128 )
              goto LABEL_115;
          }
          v129 = *(_QWORD *)(v99 + 2944);
          v130 = v129 >= *(unsigned int *)(v99 + 2912) ? sub_14180A0(v99, 1u) : *(_QWORD *)(v99 + 2904) + 24 * v129;
          if ( *(_WORD *)(v130 + 16) != 26 )
          {
            sub_1564820(&v160, v10, v10[1].m128i_u32[0], 1701);
            v149 = 1;
            v148 = __PAIR64__(*a9, v140);
            sub_AEC610((__int64 *)&v160, (__int64 *)&v148);
            sub_AEA040((__int64)&v160);
            v101 = 1;
          }
          else
          {
LABEL_115:
            sub_1703EE0(v137, v10[1].m128i_u32[0], *a6);
            v101 = sub_14BDA20((__int64)v10, 0, 0, 1u, 0, nullptr, a7);
            if ( v101 != 1 )
              v101 = sub_1931040(
                       v10[6].m128i_i64[0],
                       *(_QWORD *)(v10[6].m128i_i64[0] + 608),
                       v140,
                       (unsigned int)&v170,
                       (_DWORD)a6,
                       *a9,
                       v101 & 0xFFFFFFFFFFFFFFFELL);
          }
        }
        goto LABEL_117;
      }
    }
    else
    {
      sub_1564840(&v160, v10, &v10[1], 1623);
      sub_AEA040((__int64)&v160);
    }
    goto LABEL_126;
  }
  v56 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v56 + 760) )
  {
    *(_BYTE *)(v56 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v56 + 48) + 6LL) = 1;
  }
  v57 = *(_QWORD *)(a1 + 96);
  v58 = *(_DWORD *)(a1 + 16);
  v60 = __OFSUB__(*a2, 2);
  v14 = *a2 == 2;
  v59 = *a2 - 2 < 0;
  *(_WORD *)(a1 + 32) = 1;
  v61 = *(_QWORD *)(v57 + 656);
  v62 = !(v59 ^ v60 | v14);
  v63 = sub_14B62D0(v137, v58);
  sub_172C2C0(v61, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v63, v62);
  result = 1;
  v10 = v150;
  v9 = v152;
  v13 = v153;
LABEL_37:
  *v9 = v13;
  v10[127].m128i_i8[8] = v151;
  return result;
}
