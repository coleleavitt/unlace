__int64 __fastcall sub_1DD54A0(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        char a9)
{
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // ebx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // r9
  __int64 *v18; // rbx
  __int64 v19; // rcx
  __m128i *v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // rcx
  bool v23; // zf
  __int64 *m128i_i64; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  _QWORD *v30; // rax
  bool v31; // si
  __m128i ***v32; // rcx
  __m128i ***v33; // rax
  __m128i *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rsi
  __int64 v38; // rax
  __int64 *v39; // rax
  int v40; // edx
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rbx
  _QWORD *v44; // rdx
  unsigned __int8 v45; // al
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r14
  unsigned __int8 v51; // al
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  char *v62; // r12
  __int64 v63; // rdi
  __int64 v64; // rbx
  unsigned __int64 v65; // rbx
  char v66; // al
  unsigned __int8 v67; // al
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // r15
  _QWORD *v75; // r13
  _QWORD *v76; // rbx
  int v77; // eax
  __int64 v78; // rbp
  __int64 v79; // r14
  void **v80; // r12
  __int64 v81; // rax
  char *v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 *v85; // rdx
  __int64 v86; // rdi
  void (*v87)(); // rax
  __int64 *v88; // rbx
  __m128i ***v89; // rdi
  unsigned __int64 v90; // r12
  __int64 v91; // rbx
  void **v92; // r13
  char *v93; // r12
  char *v94; // rbx
  unsigned __int64 *v95; // r13
  char *v96; // r12
  char *v97; // rbx
  unsigned __int64 *v98; // r13
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned int v101; // ecx
  __int64 v102; // rdx
  __m128i *v103; // r15
  __int64 v104; // [rsp+8h] [rbp-360h]
  __m128i *v105; // [rsp+10h] [rbp-358h] BYREF
  unsigned __int64 v106; // [rsp+18h] [rbp-350h] BYREF
  char *v107; // [rsp+20h] [rbp-348h]
  __int64 v108; // [rsp+28h] [rbp-340h]
  unsigned __int8 v109; // [rsp+37h] [rbp-331h]
  __int32 v110; // [rsp+38h] [rbp-330h]
  int v111; // [rsp+3Ch] [rbp-32Ch]
  char *v112; // [rsp+40h] [rbp-328h]
  __m128i ***v113; // [rsp+48h] [rbp-320h]
  __int64 v114; // [rsp+50h] [rbp-318h]
  unsigned __int64 *v115; // [rsp+58h] [rbp-310h]
  char *v116; // [rsp+60h] [rbp-308h]
  __int64 *v117; // [rsp+68h] [rbp-300h]
  __int64 v118; // [rsp+70h] [rbp-2F8h]
  void **v119; // [rsp+78h] [rbp-2F0h]
  _QWORD *v120; // [rsp+80h] [rbp-2E8h]
  void **v121; // [rsp+88h] [rbp-2E0h]
  __int64 v122; // [rsp+90h] [rbp-2D8h]
  int v123; // [rsp+98h] [rbp-2D0h]
  int v124; // [rsp+9Ch] [rbp-2CCh]
  unsigned __int64 v125; // [rsp+A0h] [rbp-2C8h]
  __m128i *v126; // [rsp+A8h] [rbp-2C0h] BYREF
  char v127[8]; // [rsp+B0h] [rbp-2B8h] BYREF
  unsigned __int8 v128; // [rsp+B8h] [rbp-2B0h]
  __int64 v129; // [rsp+D8h] [rbp-290h]
  void *v130; // [rsp+F0h] [rbp-278h] BYREF
  __int64 v131; // [rsp+F8h] [rbp-270h]
  char v132; // [rsp+100h] [rbp-268h] BYREF
  __int64 v133; // [rsp+120h] [rbp-248h] BYREF
  void *ptr; // [rsp+128h] [rbp-240h]
  __int64 v135; // [rsp+130h] [rbp-238h]
  _BYTE v136[24]; // [rsp+138h] [rbp-230h] BYREF
  _QWORD v137[2]; // [rsp+150h] [rbp-218h] BYREF
  __m128 v138; // [rsp+160h] [rbp-208h]
  int v139; // [rsp+170h] [rbp-1F8h]
  const char *v140; // [rsp+178h] [rbp-1F0h]
  void *v141; // [rsp+180h] [rbp-1E8h] BYREF
  __int64 v142; // [rsp+188h] [rbp-1E0h]
  char v143; // [rsp+190h] [rbp-1D8h] BYREF
  unsigned __int64 v144; // [rsp+1B0h] [rbp-1B8h] BYREF
  void *v145[2]; // [rsp+1B8h] [rbp-1B0h] BYREF
  char v146; // [rsp+1C8h] [rbp-1A0h] BYREF
  void *v147[2]; // [rsp+1E8h] [rbp-180h] BYREF
  char v148; // [rsp+1F8h] [rbp-170h] BYREF
  unsigned __int64 v149; // [rsp+220h] [rbp-148h] BYREF
  unsigned __int64 v150; // [rsp+228h] [rbp-140h]
  int v151; // [rsp+230h] [rbp-138h]
  __m128i v152; // [rsp+238h] [rbp-130h]
  __int128 v153; // [rsp+248h] [rbp-120h]
  char v154; // [rsp+258h] [rbp-110h]
  void *v155; // [rsp+260h] [rbp-108h]
  __int64 v156; // [rsp+268h] [rbp-100h]
  __int64 v157; // [rsp+270h] [rbp-F8h] BYREF
  void *v158; // [rsp+280h] [rbp-E8h]
  __int64 v159; // [rsp+288h] [rbp-E0h]
  __int64 v160; // [rsp+290h] [rbp-D8h] BYREF
  __m128i **v161; // [rsp+2A0h] [rbp-C8h] BYREF
  __int64 v162; // [rsp+2A8h] [rbp-C0h]
  __int64 v163; // [rsp+2B0h] [rbp-B8h]
  unsigned int v164; // [rsp+2B8h] [rbp-B0h]
  void *v165; // [rsp+2F0h] [rbp-78h]
  __int64 v166; // [rsp+2F8h] [rbp-70h]
  __m128i *v167; // [rsp+308h] [rbp-60h]
  char v168; // [rsp+310h] [rbp-58h]
  bool v169; // [rsp+311h] [rbp-57h]
  char v170; // [rsp+312h] [rbp-56h]
  __int64 v171; // [rsp+318h] [rbp-50h]

  v10 = a1;
  v11 = *(_QWORD *)(a4 + 128);
  v110 = a2;
  v126 = (__m128i *)a3;
  v106 = a5;
  v111 = a6;
  v104 = v11;
  if ( v11
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a4 + 104) + 96LL), *(_QWORD *)(a4 + 104), (__int64)a3, a4, a5, a6),
        (v104 = *(_QWORD *)(a4 + 128)) != 0) )
  {
    v104 = *(_QWORD *)(v104 + 88);
  }
  v12 = sub_B971E0((__int64)v126);
  v13 = v111;
  v109 = sub_1CCCE10(a1, v110, (__int64)v126, v12 != 0, a4, v104, v111, a9, nullptr);
  if ( !v109 )
  {
    v162 = a1;
    v161 = &v126;
    v113 = &v161;
    v114 = sub_224B4C0("InstantiateClass", 16, sub_1DBE370, &v161);
    v15 = sub_B97210((__int64)v126);
    if ( v15 )
    {
      v16 = *(_QWORD *)v15;
      *(_DWORD *)(v15 + 8) = v110;
      *(_QWORD *)v15 = v16 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(v13 - 1));
      v17 = (__int64 *)v126;
    }
    else
    {
      v17 = (__int64 *)v126;
      if ( (v126[1].m128i_i8[12] & 0x7Fu) - 60 <= 1 )
      {
        v105 = v126;
        sub_B972B0((__int64)v126, v111);
        v105[11].m128i_i32[0] = v110;
        v17 = (__int64 *)v126;
      }
    }
    v116 = v127;
    sub_1DC3470((__int64)v127, a1, 0, v110, 0, (__int64)v17, 0, 0, 0, 0);
    v109 = v128;
    if ( v128 )
      goto LABEL_108;
    v18 = (__int64 *)v126;
    v105 = *(__m128i **)(a1 + 248);
    v120 = v137;
    sub_2233820(v137);
    v19 = *(_QWORD *)(a1 + 544);
    v105 = (__m128i *)v18;
    v139 = 0;
    v137[0] = &off_2B4A628;
    v140 = "instantiating class definition";
    v20 = v126;
    v21 = _mm_loadh_ps((const double *)&v105);
    v118 = v19;
    v22 = *(_QWORD *)(a1 + 512);
    v23 = v126 == nullptr;
    m128i_i64 = v126[4].m128i_i64;
    *(_QWORD *)(a1 + 512) = 0;
    if ( !v23 )
      v20 = (__m128i *)m128i_i64;
    v122 = v22;
    v25 = *(_DWORD *)(a1 + 80);
    v26 = *(_QWORD *)(a1 + 9944);
    v138 = v21;
    *(_QWORD *)(a1 + 544) = v20;
    v27 = *(_DWORD *)(a1 + 40);
    v123 = v25;
    v28 = *(_DWORD *)(a1 + 2632);
    *(_DWORD *)(a1 + 80) = v27;
    v29 = *(_DWORD *)(a1 + 3688);
    *(_QWORD *)(a1 + 9944) = 0;
    *(_DWORD *)(a1 + 2632) = v29;
    v129 = v26;
    v124 = v28;
    sub_18C74E0(a1, 6, 0, 4);
    v30 = sub_B8C200((__int64)v126, 0);
    v161 = (__m128i **)a1;
    v162 = 1;
    v31 = v30 != nullptr;
    v32 = v113 + 10;
    v33 = v113 + 2;
    do
    {
      *v33 = (__m128i **)-4096LL;
      v33 += 2;
    }
    while ( v32 != v33 );
    v169 = v31;
    v147[0] = &v148;
    v168 = 0;
    v165 = v113 + 12;
    v166 = 0x100000000LL;
    v34 = *(__m128i **)(a1 + 11280);
    *(_QWORD *)(a1 + 11280) = v113;
    v167 = v34;
    v145[0] = &v146;
    v145[1] = (void *)0x200000000LL;
    v147[1] = (void *)0x200000000LL;
    v170 = 0;
    v171 = 0;
    v144 = a1;
    v117 = (__int64 *)&v144;
    sub_1DBB030((__int64 *)v145, (__int64 *)(a1 + 4320));
    sub_1DBB1E0((__int64 *)v147, (__int64 *)(v144 + 4368));
    sub_1E40A90(a1, v106, v104, v126, 0, 0);
    sub_B809C0((__int64)v126);
    v37 = (__int64 *)v126;
    v38 = v126->m128i_i64[1];
    if ( (v38 & 6) != 0 )
      v126->m128i_i64[1] = v38 & 0xFFFFFFFFFFFFFFF8LL | 1;
    LOBYTE(v105) = *(_BYTE *)(v104 + 73);
    *((_BYTE *)v37 + 73) = (unsigned __int8)v105 & 0xE0 | *((_BYTE *)v37 + 73) & 0x1F;
    if ( (unsigned __int8)sub_1DD4BA0(a1, (__int64)v37, v104, v106, v35, v36, v21, a8) )
      sub_B88650((__int64)v126, 1);
    v39 = (__int64 *)v126;
    v149 = a1;
    v119 = &v141;
    v142 = 0x400000000LL;
    if ( v126 )
      v39 = v126[4].m128i_i64;
    v40 = *(_DWORD *)(a1 + 12632);
    v150 = a1;
    v115 = &v149;
    v105 = (__m128i *)v39;
    v155 = &v157;
    v156 = 0x100000000LL;
    v41 = (__m128i)_mm_loadh_ps((const double *)&v106);
    v159 = 0x100000000LL;
    v131 = 0x100000000LL;
    v42 = *(_QWORD *)(a1 + 11280);
    v151 = v40;
    *((_QWORD *)&v153 + 1) = v42;
    v158 = &v160;
    v141 = &v143;
    v152 = v41;
    v154 = 0;
    v121 = &v130;
    v130 = &v132;
    *(_QWORD *)&v153 = &v130;
    v125 = v104 + 64;
    v43 = sub_B8E970(v104 + 64);
    if ( v43 )
    {
      while ( 1 )
      {
        v44 = (_QWORD *)(*(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
          v44 = (_QWORD *)*v44;
        if ( (_QWORD *)(v104 + 64) != v44 )
          goto LABEL_20;
        v45 = *(_BYTE *)(v43 + 28) & 0x7F;
        if ( v45 == 8 )
          goto LABEL_20;
        if ( (unsigned int)v45 - 59 <= 2 )
        {
          v46 = *(_QWORD *)(v43 + 128);
          if ( v46 )
          {
            if ( (*(_BYTE *)(v46 + 10) & 0x20) != 0 )
              goto LABEL_20;
          }
        }
        if ( *(char *)(v43 + 28) < 0 )
          goto LABEL_35;
        v47 = sub_1DBB390((__int64)&v149, v43);
        v50 = v47;
        if ( !v47 )
          goto LABEL_20;
        v51 = *(_BYTE *)(v47 + 28) & 0x7F;
        v52 = (unsigned int)v51 - 49;
        if ( (unsigned int)v52 > 2 )
        {
          if ( v51 == 62 )
          {
            if ( v111 == 1 )
            {
              v99 = *(_QWORD *)(v50 + 72);
              if ( (v99 & 0x8000000000LL) == 0 && (v99 & 0x10000) != 0 )
              {
                v100 = *(_QWORD *)(v50 + 144);
                v101 = v110;
                *(_QWORD *)v100 &= 0xFFFFFFFFFFFFFFF9LL;
                *(_DWORD *)(v100 + 8) = v101;
              }
            }
          }
          else if ( v51 == 9 )
          {
            if ( (*(_BYTE *)(v50 + 40) & 2) != 0 )
            {
              sub_B88650((__int64)v126, 1);
              break;
            }
          }
          else
          {
            v102 = (unsigned int)v51 - 35;
            if ( (unsigned int)v102 <= 3 && (*(_BYTE *)(v50 + 84) & 3) != 0 && (*(_WORD *)(v50 + 30) & 0x180) == 0 )
            {
              if ( (*(_BYTE *)(v50 + 82) & 4) != 0
                || (v103 = v126,
                    sub_7052B0((__int64 *)(v126[6].m128i_i64[1] + 96), v126[6].m128i_i64[1], v102, v52, v48, v49),
                    *(_DWORD *)(v103[8].m128i_i64[0] + 16)) )
              {
                v109 = 1;
              }
            }
          }
        }
        else
        {
          v53 = (unsigned int)v142;
          v54 = (unsigned int)v142 + 1LL;
          if ( v54 > HIDWORD(v142) )
          {
            sub_2237220(v119, v119 + 2, v54, 8);
            v53 = (unsigned int)v142;
          }
          *((_QWORD *)v141 + v53) = v50;
          LODWORD(v142) = v142 + 1;
        }
        if ( *(char *)(v50 + 28) >= 0 )
        {
LABEL_20:
          v43 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v43 )
            break;
        }
        else
        {
LABEL_35:
          sub_B88650((__int64)v126, 1);
          v43 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v43 )
            break;
        }
      }
    }
    v133 = 0;
    v135 = 0x200000000LL;
    ptr = v136;
    v105 = (__m128i *)&v133;
    sub_17CC930(
      a1,
      nullptr,
      v126[1].m128i_u32[2],
      v126,
      (void **)v141,
      (unsigned int)v142,
      v41,
      *(double *)a8.m128_u64,
      0,
      0,
      (__int64)&v133);
    if ( ptr != v136 )
      free(ptr);
    sub_1891290((__int64 *)a1, 0, v126->m128i_i64, v55, v56, v57, v41, a8);
    if ( !*(_DWORD *)(a1 + 15680) )
      sub_1885D40(a1, 0, v58, v59, v60, v61, *(double *)v41.m128i_i64, a8);
    v62 = (char *)v130;
    v112 = (char *)v130 + 24 * (unsigned int)v131;
    if ( v130 != v112 )
    {
      do
      {
        *(_QWORD *)(v10 + 11280) = *((_QWORD *)v62 + 1);
        v63 = *((_QWORD *)v62 + 2);
        v64 = *(_QWORD *)(v63 + 16);
        if ( (v64 & 4) != 0 )
          v65 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v65 = v64 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v65 )
        {
          v66 = *(_BYTE *)(v65 + 8);
          v65 -= 64LL;
          if ( (v66 & 0x7Fu) - 59 >= 3 )
            v65 = 0;
        }
        v67 = sub_B72F20(v63);
        sub_19A2CD0((__int64)v105, v10, v65, 0, v67, v68);
        v69 = sub_1E08400(*(_QWORD *)v62, *(_QWORD *)(v10 + 248), v10, v106);
        if ( v69 )
          sub_B8CC60(*((_QWORD *)v62 + 2), v69, v70, v71, v72, v73);
        v74 = *((_QWORD **)v62 + 1);
        v75 = *((_QWORD **)&v153 + 1);
        if ( v74 && v74 != *((_QWORD **)&v153 + 1) )
        {
          v107 = v62;
          v108 = v10;
          while ( 1 )
          {
            v76 = (_QWORD *)v74[13];
            if ( !*((_BYTE *)v74 + 112) )
            {
              v77 = *((_DWORD *)v74 + 22);
              if ( v77 )
              {
                v78 = 0;
                v79 = 8LL * (unsigned int)(v77 - 1) + 8;
                do
                {
                  v80 = *(void ***)(v74[10] + v78);
                  if ( v80 )
                  {
                    if ( *v80 != v80 + 2 )
                      free(*v80);
                    operator delete(v80, 0x30u);
                  }
                  v78 += 8;
                }
                while ( v79 != v78 );
                v81 = v74[13];
              }
              else
              {
                v81 = v74[13];
              }
              *(_QWORD *)(*v74 + 11280LL) = v81;
              *((_BYTE *)v74 + 112) = 1;
            }
            v82 = (char *)v74[10];
            if ( v82 != (char *)(v74 + 12) )
              free(v82);
            if ( (v74[1] & 1) == 0 )
              operator delete(v74[2], 16LL * *((unsigned int *)v74 + 6), 8);
            operator delete(v74, 0x90u);
            if ( !v76 || v75 == v76 )
              break;
            v74 = v76;
          }
          v62 = v107;
          v10 = v108;
        }
        v62 += 24;
        sub_19A2DA0(v105->m128i_i64);
      }
      while ( v62 != v112 );
    }
    LODWORD(v131) = 0;
    v153 = 0;
    sub_183DE60(v10, v126);
    v85 = (__int64 *)v126;
    if ( v111 == 1 )
    {
      v85 = (__int64 *)v126;
      v126[1].m128i_i32[2] = *(_DWORD *)(v104 + 24);
      *((_DWORD *)v85 + 14) = *(_DWORD *)(v104 + 56);
      v85[14] = *(_QWORD *)(v104 + 112);
    }
    if ( *((char *)v85 + 28) >= 0 )
    {
      if ( (unsigned __int8)sub_B8E180(v125) )
        sub_1E04EF0(v10, v125, v106);
      v93 = (char *)v155;
      v94 = (char *)v155 + 16 * (unsigned int)v156;
      if ( v94 != v155 )
      {
        v95 = v115;
        while ( sub_1E49670(v95, *(_QWORD *)v93, *((_QWORD *)v93 + 1)) )
        {
          v93 += 16;
          if ( v93 == v94 )
            goto LABEL_119;
        }
        sub_B88650((__int64)v126, 1);
      }
LABEL_119:
      v96 = (char *)v158;
      v97 = (char *)v158 + 16 * (unsigned int)v159;
      if ( v97 != v158 )
      {
        v98 = v115;
        while ( sub_1E48F80(v98, *(_QWORD *)v96, *((_QWORD *)v96 + 1)) )
        {
          v96 += 16;
          if ( v96 == v97 )
            goto LABEL_124;
        }
        sub_B88650((__int64)v126, 1);
      }
LABEL_124:
      v85 = (__int64 *)v126;
      if ( !v118 )
        goto LABEL_75;
    }
    else if ( !v118 )
    {
LABEL_79:
      v86 = *(_QWORD *)(v10 + 256);
      v87 = *(void (**)())(*(_QWORD *)v86 + 56LL);
      if ( v87 != nullsub_150 )
      {
        ((void (__fastcall *)(__int64, __int64 *))v87)(v86, v85);
        v85 = (__int64 *)v126;
      }
      v109 = *((_BYTE *)v85 + 28) >> 7;
      if ( v130 != v121 + 2 )
        free(v130);
      if ( v141 != v119 + 2 )
        free(v141);
      if ( v158 != v115 + 14 )
        free(v158);
      if ( v155 != v115 + 10 )
        free(v155);
      v88 = v117;
      *(_DWORD *)(v150 + 12632) = v151;
      sub_1DBB030(v88 + 1, (__int64 *)(v144 + 4320));
      sub_1DBB1E0(v88 + 7, (__int64 *)(v144 + 4368));
      if ( v147[0] != v88 + 9 )
        free(v147[0]);
      if ( v145[0] != v117 + 3 )
        free(v145[0]);
      v89 = (__m128i ***)v165;
      if ( !v168 )
      {
        if ( (_DWORD)v166 )
        {
          v90 = 0;
          v91 = 8LL * (unsigned int)(v166 - 1) + 8;
          do
          {
            v92 = (void **)v89[v90 / 8];
            if ( v92 )
            {
              if ( *v92 != v92 + 2 )
                free(*v92);
              operator delete(v92, 0x30u);
              v89 = (__m128i ***)v165;
            }
            v90 += 8LL;
          }
          while ( v91 != v90 );
        }
        v161[1410] = v167;
        v168 = 1;
      }
      if ( v89 != v113 + 12 )
        free(v89);
      if ( (v162 & 1) == 0 )
        operator delete(v163, 16LL * v164, 8);
      sub_190D5E0(v10, (__m128)0LL);
      v137[0] = &off_2B4A628;
      sub_22338A0(v120);
      if ( !v128 )
        sub_1DBAC30(v116);
LABEL_108:
      if ( v114 )
        sub_224D6D0(v114);
      return v109;
    }
    *(_QWORD *)(v10 + 544) = v118;
    *(_QWORD *)(v10 + 512) = v122;
    *(_QWORD *)(v10 + 9944) = v129;
    *(_DWORD *)(v10 + 80) = v123;
    *(_DWORD *)(v10 + 2632) = v124;
LABEL_75:
    if ( *((char *)v85 + 28) >= 0 )
    {
      if ( v111 == 4 )
      {
        sub_1884910(v10, v110, v85, 1, v83, v84);
        v85 = (__int64 *)v126;
      }
      else if ( v109 )
      {
        sub_1845690(v10, v110, (__int64)v85, 1, v83, v84);
        v85 = (__int64 *)v126;
      }
    }
    goto LABEL_79;
  }
  return v109;
}
