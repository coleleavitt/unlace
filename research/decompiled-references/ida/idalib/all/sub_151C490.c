__int64 __fastcall sub_151C490(
        __m128i *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned __int8 a4,
        unsigned int a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  __int8 v11; // al
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int32 v14; // eax
  unsigned int v15; // r12d
  __m128i *v16; // rbx
  int *m128i_i32; // rsi
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rax
  __int32 v22; // eax
  unsigned int v23; // r12d
  __int64 *v24; // rdi
  int v25; // r14d
  unsigned __int64 v26; // rdx
  __m128i *v27; // rcx
  const __m128i *v28; // rax
  __int16 v29; // ax
  __int64 *v30; // rdi
  __int16 v31; // di
  unsigned __int64 v32; // r12
  unsigned int v33; // r14d
  __int64 v34; // r13
  unsigned __int64 v35; // rbp
  __int64 v36; // r14
  __int16 v37; // ax
  __int64 v38; // rsi
  __int64 v39; // rdi
  _BYTE *v40; // rax
  signed __int64 v41; // rdx
  __int64 v42; // rbx
  unsigned __int32 v43; // ecx
  unsigned __int16 v44; // di
  __int64 v45; // rdx
  __int64 *v47; // rdi
  const __m128i *v48; // r12
  unsigned __int64 v49; // rdx
  __m128i *v50; // rax
  __int16 v51; // ax
  __int64 *v52; // rdi
  __int64 *v53; // rdi
  __int64 *v54; // rdi
  __int32 v55; // eax
  __int64 *v56; // rdi
  int *v57; // rsi
  __int64 *v58; // rdi
  __int32 v59; // eax
  __int16 v60; // di
  __int64 v61; // r14
  unsigned __int64 v62; // r13
  unsigned int v63; // ebx
  unsigned __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int16 v69; // ax
  int v70; // edx
  __int64 *v71; // rdi
  __int32 v72; // eax
  __int16 v73; // di
  _BYTE *v74; // rax
  signed __int64 v75; // rdx
  void *v76; // rdi
  __int16 v77; // ax
  unsigned int v78; // r12d
  unsigned int v79; // r14d
  char v80; // al
  __int64 v81; // r14
  __int64 *v82; // rdi
  __int32 v83; // eax
  __int64 *v84; // rdi
  __int64 v85; // rax
  unsigned __int32 v86; // eax
  __int16 v87; // cx
  bool v88; // bl
  __int64 *v89; // rdi
  __int16 v90; // ax
  __int32 v91; // eax
  __int64 *v92; // rdi
  __int64 *v93; // rdi
  __int64 v94; // rbp
  __int32 v95; // edx
  __int64 *v96; // rdi
  int *v97; // rsi
  __int64 *v98; // rdi
  __int64 *v99; // rdi
  unsigned int v100; // eax
  unsigned __int64 v101; // r14
  unsigned __int64 v102; // r12
  __int64 v103; // rbx
  unsigned int v104; // eax
  unsigned __int64 v105; // r13
  __int64 v106; // rax
  __int64 v107; // r12
  __int64 v108; // rax
  int v109; // edx
  signed __int64 v110; // r12
  __int64 *v111; // rdi
  __int64 *v112; // rdi
  int v113; // edi
  char *v114; // rsi
  __int64 *v115; // r12
  __int64 *v116; // r13
  __int64 *v117; // r14
  unsigned int v118; // ecx
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 *v122; // rax
  __int64 v123; // rdx
  signed __int64 v124; // r12
  __int32 v125; // eax
  __int64 *v126; // rdi
  __int64 *v127; // rdi
  int v128; // eax
  __int64 v129; // rax
  __m128i *v130; // rcx
  __m128i *v131; // rdx
  __int64 v132; // rdi
  const void *v133; // rsi
  __int32 v134; // eax
  __int64 *v135; // rdi
  _BYTE *v136; // rax
  signed __int64 v137; // rdx
  __int32 v138; // eax
  __int64 *v139; // rdi
  int *v140; // rsi
  __int64 v141; // rax
  __int64 v142; // rdx
  _BYTE *v143; // rdi
  char *v144; // r13
  char *v145; // r12
  char *v146; // rdi
  __int16 v147; // [rsp+Ch] [rbp-3ECh]
  __int16 v148; // [rsp+Eh] [rbp-3EAh]
  unsigned int v149; // [rsp+10h] [rbp-3E8h]
  int *v150; // [rsp+10h] [rbp-3E8h]
  unsigned int v151; // [rsp+18h] [rbp-3E0h]
  unsigned __int32 v152; // [rsp+18h] [rbp-3E0h]
  unsigned __int32 v154; // [rsp+28h] [rbp-3D0h]
  __int16 v155; // [rsp+30h] [rbp-3C8h]
  __int8 v156; // [rsp+33h] [rbp-3C5h]
  __int128 v159; // [rsp+50h] [rbp-3A8h] BYREF
  void *v160[2]; // [rsp+60h] [rbp-398h] BYREF
  __int64 v161; // [rsp+70h] [rbp-388h] BYREF
  _BYTE v162[16]; // [rsp+78h] [rbp-380h] BYREF
  __int8 *v163; // [rsp+88h] [rbp-370h] BYREF
  void *v164; // [rsp+90h] [rbp-368h]
  __int64 v165; // [rsp+98h] [rbp-360h]
  _BYTE v166[16]; // [rsp+A0h] [rbp-358h] BYREF
  void *ptr; // [rsp+B0h] [rbp-348h] BYREF
  __m128i v168; // [rsp+B8h] [rbp-340h] BYREF
  __m128i v169; // [rsp+C8h] [rbp-330h]
  __int64 v170; // [rsp+D8h] [rbp-320h]
  __m128i v171; // [rsp+E0h] [rbp-318h]
  int v172; // [rsp+F0h] [rbp-308h]
  __int64 v173; // [rsp+F8h] [rbp-300h]
  __int16 v174; // [rsp+100h] [rbp-2F8h]
  __int16 v175; // [rsp+102h] [rbp-2F6h]
  __int16 v176; // [rsp+104h] [rbp-2F4h]
  char v177; // [rsp+106h] [rbp-2F2h]
  void *v178; // [rsp+120h] [rbp-2D8h] BYREF
  __int64 v179; // [rsp+128h] [rbp-2D0h]
  __int64 v180; // [rsp+130h] [rbp-2C8h] BYREF
  __int64 v181; // [rsp+138h] [rbp-2C0h]
  __int64 v182; // [rsp+140h] [rbp-2B8h]
  void *v183; // [rsp+148h] [rbp-2B0h]
  __int64 v184; // [rsp+150h] [rbp-2A8h]
  _DWORD v185[4]; // [rsp+158h] [rbp-2A0h] BYREF
  __int8 *v186; // [rsp+168h] [rbp-290h] BYREF
  void *v187; // [rsp+170h] [rbp-288h]
  __int64 v188; // [rsp+178h] [rbp-280h]
  _QWORD v189[4]; // [rsp+180h] [rbp-278h] BYREF
  void *v190; // [rsp+1A0h] [rbp-258h]
  __int64 v191; // [rsp+1A8h] [rbp-250h]
  __int64 v192; // [rsp+1B0h] [rbp-248h]
  __int64 v193; // [rsp+1B8h] [rbp-240h]
  __int64 v194; // [rsp+1C0h] [rbp-238h]
  __int64 v195; // [rsp+1C8h] [rbp-230h]
  __int64 v196; // [rsp+1D0h] [rbp-228h]
  __int64 v197; // [rsp+1D8h] [rbp-220h]
  __int64 v198; // [rsp+1E0h] [rbp-218h]
  __int64 v199; // [rsp+1E8h] [rbp-210h]
  __int64 v200; // [rsp+1F0h] [rbp-208h]
  __int64 v201; // [rsp+1F8h] [rbp-200h]
  __int64 v202; // [rsp+200h] [rbp-1F8h]
  __int64 v203; // [rsp+208h] [rbp-1F0h]
  __int64 v204; // [rsp+210h] [rbp-1E8h]
  __int64 v205; // [rsp+218h] [rbp-1E0h]
  __int64 v206; // [rsp+220h] [rbp-1D8h]
  __int64 v207; // [rsp+228h] [rbp-1D0h]
  __int64 v208; // [rsp+230h] [rbp-1C8h]
  __int16 v209; // [rsp+238h] [rbp-1C0h]
  __int64 v210; // [rsp+240h] [rbp-1B8h]
  __int64 v211; // [rsp+248h] [rbp-1B0h]
  __int64 v212; // [rsp+250h] [rbp-1A8h] BYREF
  void *v213; // [rsp+258h] [rbp-1A0h]
  __int64 v214; // [rsp+260h] [rbp-198h]
  _BYTE v215[320]; // [rsp+268h] [rbp-190h] BYREF
  __int64 v216; // [rsp+3A8h] [rbp-50h]
  char v217; // [rsp+3B0h] [rbp-48h]

  v11 = a1[134].m128i_i8[10];
  a1[134].m128i_i8[10] = 1;
  v156 = v11;
  v155 = a1[5].m128i_i16[4];
  v148 = a1[5].m128i_i16[5];
  v147 = a1[5].m128i_i16[6];
  v12 = a1[6].m128i_i64[0];
  v13 = (__int64 *)a1->m128i_i64[1];
  v151 = *(_DWORD *)(*(_QWORD *)(v12 + 232) + 64LL);
  if ( !a4 )
  {
    v14 = a1[1].m128i_i32[1];
    v15 = a1[1].m128i_u32[0];
    v16 = a1 + 1;
    m128i_i32 = a1[1].m128i_i32;
    if ( !v14 )
      v14 = a1[1].m128i_i32[0];
    a1[2].m128i_i32[2] = v14;
    sub_14634E0(v13, m128i_i32);
    v149 = v15;
    v19 = sub_1506700(a1);
    goto LABEL_5;
  }
  v20 = a1[5].m128i_i64[0];
  v16 = a1 + 1;
  a7 = _mm_loadu_si128(a1 + 1);
  ptr = a1;
  v170 = v20;
  LODWORD(v20) = a1[2].m128i_i32[0];
  v168 = _mm_loadu_si128(a1 + 3);
  v172 = v20;
  v21 = a1[169].m128i_u32[2];
  v169 = _mm_loadu_si128(a1 + 4);
  v173 = v21;
  v171 = a7;
  v174 = v155;
  v175 = v148;
  v176 = v147;
  sub_1418D30((__int64)v13, 0);
  v22 = a1[1].m128i_i32[1];
  v23 = a1[1].m128i_u32[0];
  m128i_i32 = a1[1].m128i_i32;
  v24 = (__int64 *)a1->m128i_i64[1];
  v177 = 1;
  if ( !v22 )
    v22 = v23;
  a1[2].m128i_i32[2] = v22;
  sub_14634E0(v24, m128i_i32);
  v149 = v23;
  v19 = sub_1506700(a1);
  if ( v19 - 12 > 1 )
  {
    sub_14C5EA0((__int64 *)&ptr);
LABEL_5:
    switch ( v19 )
    {
      case 0u:
        v30 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v30, v16->m128i_i32);
        v178 = &v180;
        v179 = 0x400000000LL;
        ptr = sub_1503FC0;
        v184 = (__int64)a1;
        v185[0] = 0;
        v168.m128i_i64[0] = (__int64)&v178;
        if ( (unsigned __int8)sub_1508730(a1, 0, (__int64)&ptr, 1, *(double *)a7.m128i_i64, a8) )
          goto LABEL_124;
        v31 = a1[2].m128i_i16[0];
        v160[0] = &v161;
        v160[1] = (void *)0x100000000LL;
        if ( v31 == 449 )
          goto LABEL_201;
        v159 = 0;
        while ( 1 )
        {
          if ( sub_10CCDE0(v31) )
          {
            v32 = 1;
            v33 = 106;
            v34 = 0x40000000000LL;
          }
          else
          {
            sub_13D35F0(
              (__int64)&ptr,
              (__int64)v16,
              *(_QWORD *)(a1->m128i_i64[1] + 88),
              *(_QWORD *)(a1->m128i_i64[1] + 56),
              nullptr);
            v33 = sub_20EF010(ptr, v168.m128i_i64[0]);
            if ( ptr != &v168.m128i_u64[1] )
              operator delete(ptr);
            v34 = 1LL << v33;
            v32 = (unsigned __int64)v33 >> 6;
          }
          sub_1AF3B20(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v33);
          v35 = (unsigned __int64)v160[v32 - 2];
          v36 = sub_1511350((__int64)a1, 0, v33, (v34 & v35) == 0, (__m128i)0LL, a8);
          LODWORD(ptr) = 327746;
          WORD2(ptr) = 449;
          sub_15680D0(a1, &ptr, 3, 2);
          v160[v32 - 2] = (void *)(v35 | v34);
          if ( v36 )
            sub_1506430((__int64)v160, v36);
          v37 = a1[2].m128i_i16[0];
          if ( v37 == 449 )
            break;
          if ( v37 == 66 )
          {
            v127 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v127, v16->m128i_i32);
          }
          sub_1AF3B30(*(_QWORD *)(a1[6].m128i_i64[0] + 760));
          v31 = a1[2].m128i_i16[0];
          if ( v31 == 449 )
            goto LABEL_201;
        }
        sub_1AF3B30(*(_QWORD *)(a1[6].m128i_i64[0] + 760));
        if ( a1[2].m128i_i16[0] != 449 )
          sub_1504CE0((__int64)a1, 0);
LABEL_201:
        v134 = a1[1].m128i_i32[1];
        v135 = (__int64 *)a1->m128i_i64[1];
        if ( !v134 )
          v134 = a1[1].m128i_i32[0];
        a1[2].m128i_i32[2] = v134;
        sub_14634E0(v135, v16->m128i_i32);
        v42 = sub_1B1E970(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v149, (_DWORD)v178, v179, v160[0], v160[1], 0);
        if ( v160[0] != &v161 )
          free(v160[0]);
        v52 = (__int64 *)v178;
        if ( v178 != &v180 )
          goto LABEL_134;
        goto LABEL_37;
      case 2u:
        sub_1564840(&v178, a1, v16, 1822);
        sub_1503AF0((unsigned __int8 **)&v178, 1);
        v38 = v151;
        v39 = 2;
        goto LABEL_32;
      case 3u:
      case 6u:
        v99 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v99, v16->m128i_i32);
        sub_1516830((__int64)a1, v19, a1[2].m128i_u32[2]);
        goto LABEL_34;
      case 7u:
      case 0xFu:
        v86 = sub_1504200((__int64)a1);
        v87 = a1[2].m128i_i16[0];
        ptr = nullptr;
        v168.m128i_i64[0] = 0;
        v169.m128i_i32[1] = v19;
        v168.m128i_i32[2] = 0;
        v88 = v87 == 449;
        v169.m128i_i32[0] = 2;
        LOBYTE(v170) = 0;
        v171.m128i_i32[0] = v86;
        if ( v19 == 15 && v87 == 449 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x33u )
          {
            sub_1564820(&v178, a1, v86, 2171);
            sub_AEA040((__int64)&v178);
          }
          goto LABEL_104;
        }
        if ( v87 == 449
          || (sub_15092F0(a1, (__int64)&ptr, a7, a8), v19 == 7)
          || v88
          || !v168.m128i_i32[0] && (_BYTE)v170 )
        {
LABEL_104:
          v42 = 0;
          sub_1504200((__int64)a1);
          sub_1B05230(*(_QWORD *)(a1[6].m128i_i64[0] + 760), &ptr);
          goto LABEL_105;
        }
        sub_1504200((__int64)a1);
        sub_1B51A80(*(_QWORD *)(a1[6].m128i_i64[0] + 760), &ptr);
        v178 = &v180;
        v179 = 0x400000000LL;
        if ( v168.m128i_i32[0] )
          sub_15071F0((__m128 *)v160, ptr, (_QWORD *)ptr + 2 * v168.m128i_u32[2], (__int64)&ptr, 0);
        else
          sub_15071F0(
            (__m128 *)v160,
            (_QWORD *)ptr + 2 * v168.m128i_u32[2],
            (_QWORD *)ptr + 2 * v168.m128i_u32[2],
            (__int64)&ptr,
            1);
        v115 = (__int64 *)v160[0];
        v116 = (__int64 *)v160[1];
        sub_15071F0(
          (__m128 *)v160,
          (_QWORD *)ptr + 2 * v168.m128i_u32[2],
          (_QWORD *)ptr + 2 * v168.m128i_u32[2],
          (__int64)&ptr,
          1);
        v117 = (__int64 *)v160[0];
        v118 = v179;
        if ( v160[0] != v115 )
        {
          do
          {
            v119 = v118;
            v120 = *v115;
            if ( (unsigned __int64)v118 + 1 > HIDWORD(v179) )
            {
              sub_2237220(&v178, &v180, v118 + 1LL, 8);
              v119 = (unsigned int)v179;
            }
            *((_QWORD *)v178 + v119) = v120;
            v118 = v179 + 1;
            LODWORD(v179) = v179 + 1;
            if ( v115 + 2 != v116 )
            {
              v121 = v115[2];
              if ( v121 != -4096 && v121 != -8192 )
              {
                v115 += 2;
                continue;
              }
              v122 = v115 + 4;
              while ( 1 )
              {
                v115 = v122;
                if ( v122 == v116 )
                  break;
                v123 = *v122;
                v122 += 2;
                if ( v123 != -8192 && v123 != -4096 )
                  goto LABEL_173;
              }
            }
            v115 = v116;
LABEL_173:
            ;
          }
          while ( v115 != v117 );
        }
        v42 = sub_17B2ED0(a1[6].m128i_i64[0], v178);
        if ( v178 != &v180 )
          free(v178);
LABEL_105:
        operator delete(ptr, 16LL * v168.m128i_u32[2], 8);
        goto LABEL_37;
      case 8u:
        v89 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v89, v16->m128i_i32);
        if ( !(unsigned __int8)sub_151BF50(a1, v149) )
        {
          v90 = a1[2].m128i_i16[0];
          if ( v90 != 1 && (unsigned __int16)(v90 - 456) > 2u && v90 != 460 )
          {
            v91 = a1[1].m128i_i32[1];
            v92 = (__int64 *)a1->m128i_i64[1];
            if ( !v91 )
              v91 = a1[1].m128i_i32[0];
            a1[2].m128i_i32[2] = v91;
            sub_14634E0(v92, v16->m128i_i32);
          }
        }
        goto LABEL_36;
      case 0xCu:
        v93 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v93, v16->m128i_i32);
        v94 = sub_1513940((__int64)a1, *a2, a7, a8);
        if ( v94 )
          goto LABEL_114;
        goto LABEL_34;
      case 0xDu:
        v98 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v98, v16->m128i_i32);
        v94 = sub_1507660((__int64)a1, *a2, a7, a8);
        if ( !v94 )
          goto LABEL_34;
        if ( a1[2].m128i_i16[0] != 449 )
          sub_1504CE0((__int64)a1, 0xDu);
LABEL_114:
        v95 = a1[1].m128i_i32[1];
        v96 = (__int64 *)a1->m128i_i64[1];
        v97 = (int *)v16;
        v42 = v94;
        if ( !v95 )
          v95 = a1[1].m128i_i32[0];
        a1[2].m128i_i32[2] = v95;
        sub_14634E0(v96, v97);
        goto LABEL_37;
      case 0xEu:
      case 0x10u:
        ptr = &v168.m128i_u64[1];
        v168.m128i_i64[0] = 0x400000000LL;
        sub_141B840((__int64)&ptr, v16);
        v47 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v47, v16->m128i_i32);
        while ( a1[2].m128i_i16[0] != 449 )
        {
          v48 = v16;
          v49 = v168.m128i_u32[0] + 1LL;
          v50 = (__m128i *)((char *)ptr + 24 * v168.m128i_u32[0]);
          if ( v49 > v168.m128i_u32[1] )
          {
            if ( ptr > v16 || v50 <= v16 )
            {
              v48 = v16;
              sub_2237220(&ptr, &v168.m128i_u64[1], v49, 24);
              v50 = (__m128i *)((char *)ptr + 24 * v168.m128i_u32[0]);
            }
            else
            {
              v124 = (char *)v16 - (_BYTE *)ptr;
              sub_2237220(&ptr, &v168.m128i_u64[1], v49, 24);
              v48 = (const __m128i *)((char *)ptr + v124);
              v50 = (__m128i *)((char *)ptr + 24 * v168.m128i_u32[0]);
            }
          }
          *v50 = _mm_loadu_si128(v48);
          v50[1].m128i_i64[0] = v48[1].m128i_i64[0];
          ++v168.m128i_i32[0];
          sub_1504200((__int64)a1);
        }
        sub_141B840((__int64)&ptr, v16);
        sub_1504200((__int64)a1);
        v51 = a1[2].m128i_i16[0];
        if ( (unsigned __int16)(v51 - 447) > 1u )
        {
          if ( v51 == 25 || v51 == 1 || (unsigned __int16)(v51 - 456) <= 2u || v51 == 460 )
            goto LABEL_207;
          if ( *a2 == 3 )
          {
            v160[0] = nullptr;
            v160[1] = v162;
            v161 = 0x200000000LL;
            v163 = &a1[31].m128i_i8[8];
            v164 = v166;
            v165 = 0x200000000LL;
            if ( (unsigned __int16)(v51 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
              sub_14AB020((__int64)a1, a3, a7, a8);
            v186 = &a1[31].m128i_i8[8];
            v178 = (void *)((unsigned __int64)v178 & 0xFFFFFFC000000000LL);
            v187 = v189;
            v183 = v185;
            v180 = 0;
            v184 = 0x200000000LL;
            v188 = 0x200000000LL;
            v181 = 0;
            v182 = 0;
            v189[2] = 0;
            v189[3] = 0;
            v190 = nullptr;
            v191 = 0;
            v192 = 0;
            v193 = 0;
            v194 = 0;
            v195 = 0;
            v196 = 0;
            v197 = 0;
            v198 = 0;
            v199 = 0;
            v200 = 0;
            v201 = 0;
            v202 = 0;
            v203 = 0;
            v204 = 0;
            v205 = 0;
            v206 = 0;
            v207 = 0;
            v208 = 0;
            v209 &= 0xF000u;
            v141 = a1[6].m128i_i64[0];
            v213 = v215;
            v216 = 0;
            v210 = 0;
            v211 = v141;
            v212 = 0;
            v142 = *(_QWORD *)(v141 + 512);
            v214 = 0x400000000LL;
            *(_QWORD *)(v141 + 512) = &v212;
            v216 = v142;
            v217 = 0;
            v42 = sub_156E800(a1, a3, v160, &v178);
            if ( !v217 )
            {
              sub_1818070(v211, v216, 0);
              v217 = 1;
            }
            v143 = v213;
            v144 = (char *)v213;
            v145 = (char *)v213 + 80 * (unsigned int)v214;
            if ( v213 != v145 )
            {
              do
              {
                v146 = v144;
                v144 += 80;
                sub_15B6850(v146);
              }
              while ( v145 != v144 );
              v143 = v213;
            }
            if ( v143 != v215 )
              free(v143);
            if ( HIDWORD(v191) )
              free(v190);
            sub_15DCED0(v186, &v186);
            if ( v187 != v189 )
              free(v187);
            if ( v183 != v185 )
              free(v183);
            sub_15DCED0(v163, &v163);
            if ( v164 != v166 )
              free(v164);
            if ( v160[1] != v162 )
              free(v160[1]);
          }
          else
          {
            v42 = sub_14B1D90((__int64)a1, a2, (__int64)a3, a5, a6, a7, a8);
          }
        }
        else
        {
          v42 = sub_151C490(a1, a2, a3, a4, a5, a6);
        }
        if ( v42 )
        {
          if ( v19 == 14 )
            v42 = sub_150FCB0(a1, v42, (__int64)&ptr, v149, a7);
          else
            sub_151B040(a1, v42, (__int64)&ptr, v149, a7);
LABEL_54:
          v52 = (__int64 *)ptr;
          if ( ptr == &v168.m128i_u64[1] )
            goto LABEL_37;
LABEL_134:
          free(v52);
          goto LABEL_37;
        }
LABEL_207:
        sub_1564820(&v178, a1, v149, 1778);
        sub_1503AF0((unsigned __int8 **)&v178, v19 != 14);
        v42 = 0;
        sub_AEA040((__int64)&v178);
        goto LABEL_54;
      case 0x1Au:
        v53 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v53, v16->m128i_i32);
        sub_1505F80((__int64)a1, a1[2].m128i_u32[2]);
        goto LABEL_34;
      case 0x1Bu:
        if ( *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 760) + 24LL) )
        {
          v42 = 0;
          sub_1AF5EA0(&v178);
          sub_1506220((__int64)a1, HIDWORD(v181), 27, v184);
          operator delete(v178, 16LL * (unsigned int)v180, 8);
          goto LABEL_37;
        }
        sub_1564840(&v178, a1, v16, 1822);
        sub_1503AF0((unsigned __int8 **)&v178, 1);
        v38 = v151;
        v39 = 27;
LABEL_32:
        v40 = (_BYTE *)sub_20EAB70(v39, v38);
        sub_AEC220((unsigned __int8 **)&v178, v40, v41);
        sub_AEA040((__int64)&v178);
        goto LABEL_34;
      case 0x1Cu:
        v54 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v54, v16->m128i_i32);
        if ( *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 760) + 264LL) )
        {
          sub_1AF3AE0();
        }
        else
        {
          sub_1564820(&v178, a1, v149, 1602);
          sub_AEA040((__int64)&v178);
        }
        v55 = a1[1].m128i_i32[1];
        v56 = (__int64 *)a1->m128i_i64[1];
        v57 = (int *)v16;
        if ( !v55 )
          v55 = a1[1].m128i_i32[0];
        v42 = 0;
        a1[2].m128i_i32[2] = v55;
        sub_14634E0(v56, v57);
        goto LABEL_37;
      case 0x23u:
        v58 = (__int64 *)a1->m128i_i64[1];
        ptr = &v168.m128i_u64[1];
        v168.m128i_i64[0] = 0x100000000LL;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v58, v16->m128i_i32);
        v59 = a1[2].m128i_i32[2];
        v60 = a1[2].m128i_i16[0];
        *(_OWORD *)v160 = 0;
        v152 = v59;
        if ( v60 == 449 )
          goto LABEL_143;
        v150 = (int *)v16;
        while ( 1 )
        {
          if ( sub_10CCDE0(v60) )
          {
            v61 = 0x40000000000LL;
            v62 = 1;
            v63 = 106;
          }
          else
          {
            sub_13D35F0(
              (__int64)&v178,
              (__int64)v150,
              *(_QWORD *)(a1->m128i_i64[1] + 88),
              *(_QWORD *)(a1->m128i_i64[1] + 56),
              nullptr);
            *(_QWORD *)&v159 = sub_20EF010(v178, v179);
            v63 = v159;
            DWORD2(v159) = v70;
            if ( v178 != &v180 )
              operator delete(v178);
            v62 = (unsigned __int64)(unsigned int)v159 >> 6;
            v61 = 1LL << v159;
          }
          sub_1AF3B20(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v63);
          v64 = (unsigned __int64)v160[v62];
          v65 = sub_1511350((__int64)a1, 0x23u, v63, (v61 & v64) == 0, (__m128i)0LL, a8);
          WORD2(v178) = 449;
          v66 = v65;
          LODWORD(v178) = 327746;
          sub_15680D0(a1, &v178, 3, 2);
          v160[v62] = (void *)(v61 | v64);
          if ( v66 )
          {
            v67 = v168.m128i_u32[0];
            v68 = v168.m128i_u32[0] + 1LL;
            if ( v68 > v168.m128i_u32[1] )
            {
              sub_2237220(&ptr, &v168.m128i_u64[1], v68, 8);
              v67 = v168.m128i_u32[0];
            }
            *((_QWORD *)ptr + v67) = v66;
            ++v168.m128i_i32[0];
          }
          v69 = a1[2].m128i_i16[0];
          if ( v69 == 449 )
            break;
          if ( v69 == 66 )
          {
            v111 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v111, v150);
          }
          sub_1AF3B30(*(_QWORD *)(a1[6].m128i_i64[0] + 760));
          v60 = a1[2].m128i_i16[0];
          if ( v60 == 449 )
            goto LABEL_143;
        }
        sub_1AF3B30(*(_QWORD *)(a1[6].m128i_i64[0] + 760));
LABEL_143:
        sub_1B07DD0(*(_QWORD *)(a1[6].m128i_i64[0] + 760), ptr, v168.m128i_u32[0], v152, 0, 0);
        v76 = ptr;
        if ( ptr == &v168.m128i_u64[1] )
          goto LABEL_34;
        goto LABEL_81;
      case 0x3Du:
        v71 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v71, v16->m128i_i32);
        v72 = a1[2].m128i_i32[2];
        ptr = &v168.m128i_u64[1];
        v154 = v72;
        v168.m128i_i64[0] = 0x500000000LL;
        sub_1504FB0((__int64 *)&v159, 117, 0);
        v73 = a1[2].m128i_i16[0];
        if ( v73 != 449 )
        {
          while ( 1 )
          {
            v78 = 106;
            v79 = 106;
            if ( !sub_10CCDE0(v73) )
            {
              sub_13D35F0(
                (__int64)&v178,
                (__int64)v16,
                *(_QWORD *)(a1->m128i_i64[1] + 88),
                *(_QWORD *)(a1->m128i_i64[1] + 56),
                nullptr);
              v160[0] = (void *)sub_20EF010(v178, v179);
              v79 = (unsigned int)v160[0];
              LODWORD(v160[1]) = v109;
              if ( v178 != &v180 )
                operator delete(v178);
              v78 = v79;
            }
            sub_1AF3B20(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v79);
            v80 = sub_1505190((unsigned __int64 *)&v159, v78);
            v81 = sub_1511350((__int64)a1, 0x3Du, v79, v80 ^ 1u, a7, a8);
            LODWORD(v178) = 327746;
            WORD2(v178) = 449;
            sub_15680D0(a1, &v178, 3, 2);
            if ( (v159 & 1) != 0 )
              *(_QWORD *)&v159 = 2
                               * (((unsigned __int64)v159 >> 58 << 57)
                                | ~(-1LL << ((unsigned __int64)v159 >> 58))
                                & (~(-1LL << ((unsigned __int64)v159 >> 58)) & ((unsigned __int64)v159 >> 1)
                                 | (1LL << v78)))
                               + 1;
            else
              *(_QWORD *)(*(_QWORD *)v159 + 8LL * (v78 >> 6)) |= 1LL << v78;
            if ( v81 )
              sub_1506430((__int64)&ptr, v81);
            v77 = a1[2].m128i_i16[0];
            if ( v77 == 449 )
              break;
            if ( v77 == 66 )
            {
              v112 = (__int64 *)a1->m128i_i64[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v112, v16->m128i_i32);
            }
            sub_1AF3B30(*(_QWORD *)(a1[6].m128i_i64[0] + 760));
            v73 = a1[2].m128i_i16[0];
            if ( v73 == 449 )
              goto LABEL_181;
          }
          sub_1AF3B30(*(_QWORD *)(a1[6].m128i_i64[0] + 760));
LABEL_181:
          if ( v168.m128i_i32[0] )
          {
            v125 = a1[1].m128i_i32[1];
            v126 = (__int64 *)a1->m128i_i64[1];
            if ( !v125 )
              v125 = a1[1].m128i_i32[0];
            a1[2].m128i_i32[2] = v125;
            sub_14634E0(v126, v16->m128i_i32);
            v42 = sub_1B2F4A0(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v154, ptr, v168.m128i_u32[0]);
          }
          else
          {
            sub_1564840(&v178, a1, v16, 1795);
            v136 = (_BYTE *)sub_20EAB70(61, v151);
            sub_AEC220((unsigned __int8 **)&v178, v136, v137);
            sub_AEA040((__int64)&v178);
            v138 = a1[1].m128i_i32[1];
            v139 = (__int64 *)a1->m128i_i64[1];
            v140 = (int *)v16;
            if ( !v138 )
              v138 = a1[1].m128i_i32[0];
            v42 = 0;
            a1[2].m128i_i32[2] = v138;
            sub_14634E0(v139, v140);
          }
          sub_1505150((void ***)&v159);
          goto LABEL_54;
        }
        sub_1564840(&v178, a1, v16, 1795);
        v74 = (_BYTE *)sub_20EAB70(61, v151);
        sub_AEC220((unsigned __int8 **)&v178, v74, v75);
        sub_AEA040((__int64)&v178);
        sub_1505150((void ***)&v159);
        v76 = ptr;
        if ( ptr == &v168.m128i_u64[1] )
          goto LABEL_34;
LABEL_81:
        free(v76);
LABEL_34:
        while ( a1[2].m128i_i16[0] != 449 )
          sub_1504200((__int64)a1);
        sub_1504200((__int64)a1);
LABEL_36:
        v42 = 0;
        goto LABEL_37;
      case 0x65u:
        v82 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v82, v16->m128i_i32);
        v178 = &v180;
        v179 = 0x400000000LL;
        v184 = (__int64)a1;
        v185[0] = 101;
        ptr = sub_1503FC0;
        v168.m128i_i64[0] = (__int64)&v178;
        if ( (unsigned __int8)sub_1508730(a1, 0x65u, (__int64)&ptr, 1, *(double *)a7.m128i_i64, a8) )
        {
LABEL_124:
          v76 = v178;
          if ( v178 != &v180 )
            goto LABEL_81;
          goto LABEL_34;
        }
        if ( a1[2].m128i_i16[0] != 449 )
          sub_1504CE0((__int64)a1, 0x65u);
        v83 = a1[1].m128i_i32[1];
        v84 = (__int64 *)a1->m128i_i64[1];
        if ( !v83 )
          v83 = a1[1].m128i_i32[0];
        a1[2].m128i_i32[2] = v83;
        sub_14634E0(v84, v16->m128i_i32);
        v85 = sub_1B45630(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v149, v178, (unsigned int)v179);
        v52 = (__int64 *)v178;
        v42 = v85;
        if ( v178 != &v180 )
          goto LABEL_134;
        goto LABEL_37;
      case 0x67u:
        sub_1564840(&v178, a1, v16, 1825);
        sub_AEA040((__int64)&v178);
        goto LABEL_34;
      default:
        v100 = sub_20ED490(v19, m128i_i32, v18);
        if ( v100 > 5 || ((1LL << v100) & 0x3A) == 0 )
          goto LABEL_34;
        sub_1564840(&v178, a1, v16, 1822);
        sub_1503AF0((unsigned __int8 **)&v178, 1);
        v38 = v151;
        v39 = v19;
        goto LABEL_32;
    }
  }
  v25 = 1;
  sub_147B460((__int64)&ptr);
  v178 = &v180;
  v179 = 0x400000000LL;
  sub_141B840((__int64)&v178, a1 + 1);
  while ( a1[2].m128i_i16[0] != 1 )
  {
    sub_1504200((__int64)a1);
    v29 = a1[2].m128i_i16[0];
    if ( (unsigned __int16)(v29 - 447) <= 1u )
      ++v25;
    else
      v25 -= v29 == 449;
    v26 = (unsigned int)v179 + 1LL;
    v27 = (__m128i *)((char *)v178 + 24 * (unsigned int)v179);
    v28 = a1 + 1;
    if ( v26 > HIDWORD(v179) )
    {
      if ( v178 > v16 || v27 <= v16 )
      {
        sub_2237220(&v178, &v180, v26, 24);
        v27 = (__m128i *)((char *)v178 + 24 * (unsigned int)v179);
        v28 = a1 + 1;
      }
      else
      {
        v110 = (char *)v16 - (_BYTE *)v178;
        sub_2237220(&v178, &v180, v26, 24);
        v28 = (const __m128i *)((char *)v178 + v110);
        v27 = (__m128i *)((char *)v178 + 24 * (unsigned int)v179);
      }
    }
    *v27 = _mm_loadu_si128(v28);
    v27[1].m128i_i64[0] = v28[1].m128i_i64[0];
    LODWORD(v179) = v179 + 1;
    if ( !v25 )
    {
      sub_1504200((__int64)a1);
      break;
    }
  }
  v101 = 0;
  v102 = 0;
  v103 = operator new(0x88u);
  v104 = *a2;
  v105 = (unsigned int)v179;
  *(_QWORD *)(v103 + 8) = a1;
  *(_DWORD *)(v103 + 16) = v104;
  *(_QWORD *)v103 = &off_2BB33A0;
  *(_QWORD *)(v103 + 24) = v103 + 40;
  *(_QWORD *)(v103 + 32) = 0x400000000LL;
  if ( v105 <= 4 )
    goto LABEL_128;
  sub_2237220(v103 + 24, v103 + 40, v105, 24);
  v101 = *(unsigned int *)(v103 + 32);
  v128 = v101;
  if ( HIDWORD(v179) < (unsigned int)v101 )
  {
    sub_2237220(&v178, &v180, *(unsigned int *)(v103 + 32), 24);
    v101 = *(unsigned int *)(v103 + 32);
    v128 = *(_DWORD *)(v103 + 32);
  }
  v105 = (unsigned int)v179;
  v102 = v101;
  if ( (unsigned int)v179 <= v101 )
    v102 = (unsigned int)v179;
  if ( v102 )
  {
    v129 = 0;
    do
    {
      v130 = (__m128i *)(v129 + *(_QWORD *)(v103 + 24));
      v131 = (__m128i *)((char *)v178 + v129);
      v129 += 24;
      *(__m128i *)v160 = _mm_loadu_si128(v130);
      v161 = v130[1].m128i_i64[0];
      *v130 = _mm_loadu_si128(v131);
      v130[1].m128i_i32[0] = v131[1].m128i_i32[0];
      *v131 = _mm_load_si128((const __m128i *)v160);
      v131[1].m128i_i32[0] = v161;
    }
    while ( 24 * v102 != v129 );
    v101 = *(unsigned int *)(v103 + 32);
    v105 = (unsigned int)v179;
    v128 = *(_DWORD *)(v103 + 32);
  }
  if ( v101 <= v105 )
  {
LABEL_128:
    if ( v101 < v105 )
    {
      v113 = v101;
      v114 = (char *)v178 + 24 * v102;
      if ( v114 != (char *)v178 + 24 * v105 )
      {
        memcpy((void *)(*(_QWORD *)(v103 + 24) + 24 * v101), v114, 24 * v105 - 24 * v102);
        v113 = *(_DWORD *)(v103 + 32);
      }
      LODWORD(v179) = v102;
      *(_DWORD *)(v103 + 32) = v105 - v101 + v113;
    }
  }
  else
  {
    v132 = *(_QWORD *)(v103 + 24);
    v133 = (const void *)(v132 + 24 * v102);
    if ( v133 != (const void *)(24 * v101 + v132) )
    {
      memcpy((char *)v178 + 24 * v105, v133, 24 * v101 - 24 * v102);
      v128 = v101 + v179 - v105;
    }
    LODWORD(v179) = v128;
    *(_DWORD *)(v103 + 32) = v102;
  }
  v106 = a1[120].m128i_i64[0];
  if ( a1[120].m128i_i64[1] == v106 )
    v106 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
  v107 = *(_QWORD *)(v106 - 8);
  v108 = *(unsigned int *)(v107 + 24);
  if ( v108 + 1 > (unsigned __int64)*(unsigned int *)(v107 + 28) )
  {
    sub_2237220(v107 + 16, v107 + 32, v108 + 1, 8);
    v108 = *(unsigned int *)(v107 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(v107 + 16) + 8 * v108) = v103;
  v52 = (__int64 *)v178;
  v42 = 0;
  ++*(_DWORD *)(v107 + 24);
  if ( v52 != &v180 )
    goto LABEL_134;
LABEL_37:
  v43 = a1[174].m128i_u32[2];
  if ( v43 )
  {
    v44 = a1[5].m128i_u16[4];
    v45 = a1[174].m128i_i64[0] + 24LL * v43 - 24;
    do
    {
      if ( v44 == *(_WORD *)(v45 + 14) )
      {
        if ( *(_DWORD *)(v45 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
          goto LABEL_40;
      }
      else if ( v44 > *(_WORD *)(v45 + 14) )
      {
        goto LABEL_40;
      }
      if ( a1[5].m128i_i16[5] <= *(_WORD *)(v45 + 16) && a1[5].m128i_i16[6] <= *(_WORD *)(v45 + 18) )
        break;
LABEL_40:
      --v43;
      v45 -= 24;
      a1[174].m128i_i32[2] = v43;
    }
    while ( v43 );
  }
  a1[5].m128i_i16[4] = v155;
  a1[5].m128i_i16[5] = v148;
  a1[5].m128i_i16[6] = v147;
  a1[134].m128i_i8[10] = v156;
  return v42;
}
