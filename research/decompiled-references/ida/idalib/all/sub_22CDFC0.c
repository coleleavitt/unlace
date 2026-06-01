char *__fastcall sub_22CDFC0(char *a1, __int64 a2, unsigned int a3, __m128d a4)
{
  char *v4; // rbp
  char *result; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r10
  __int64 v12; // r11
  char v13; // cl
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int8 v16; // r9
  unsigned __int64 *v17; // r10
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  int v30; // ecx
  unsigned __int64 v31; // rdx
  unsigned int v32; // esi
  bool v33; // cf
  bool v34; // zf
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r9
  int v37; // r10d
  int v38; // r13d
  unsigned __int64 v39; // rdx
  char v40; // cl
  int v41; // edi
  unsigned __int64 v42; // rdx
  int v43; // ecx
  int v44; // ecx
  unsigned __int8 v45; // r14
  int v46; // eax
  int v47; // edi
  int v48; // edx
  __int64 v49; // rax
  int v50; // ebx
  int v51; // r15d
  char *v52; // rcx
  unsigned int v53; // r15d
  _DWORD *v54; // r13
  _BYTE *v55; // r13
  char *v56; // r13
  int v57; // r15d
  __int64 v58; // rbx
  __int64 v59; // rdx
  char *v60; // rdi
  int v61; // eax
  unsigned int v62; // edx
  unsigned int v63; // r14d
  unsigned __int64 *v64; // r8
  unsigned int v65; // ecx
  __int64 v66; // rdi
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // r9
  unsigned __int64 v72; // rdi
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rdi
  unsigned int v77; // edx
  unsigned __int64 k; // rax
  unsigned __int64 v79; // r13
  unsigned __int64 v80; // rdi
  char v81; // bp
  unsigned __int8 v82; // r10
  char v83; // r8
  char v84; // al
  unsigned __int64 v85; // r15
  char v86; // di
  char v87; // r10
  int v88; // ecx
  int v89; // eax
  int v90; // edi
  int v91; // edx
  __int64 v92; // rdi
  __int64 v93; // rbx
  __int64 v94; // r12
  int v95; // eax
  char *v96; // r12
  int v97; // r10d
  char v98; // si
  int v99; // r8d
  char *v100; // rsi
  int v101; // eax
  __int64 v102; // rsi
  char *v103; // r8
  char *v104; // r12
  unsigned int v105; // edx
  unsigned __int64 j; // rax
  __int64 v107; // r9
  unsigned int v108; // r11d
  unsigned __int64 v109; // rdx
  unsigned int v110; // ecx
  unsigned int v111; // r10d
  unsigned int v112; // r8d
  __int64 v113; // r14
  unsigned int v114; // r10d
  unsigned int v115; // esi
  __int64 v116; // r14
  __int64 v117; // r14
  unsigned int v118; // edx
  unsigned int v119; // r10d
  __int64 v120; // rax
  unsigned int v121; // edx
  __int64 v122; // rdi
  char v123; // dl
  __int64 v124; // rcx
  unsigned __int64 v125; // rcx
  unsigned int v126; // edi
  unsigned __int64 v127; // rcx
  unsigned int v128; // edi
  __int64 v129; // r14
  unsigned __int64 v130; // rdx
  int v131; // esi
  _BYTE *v132; // rdi
  unsigned __int64 v133; // rcx
  unsigned int v134; // edi
  unsigned int v135; // edx
  int v136; // esi
  char v137; // cl
  int v138; // eax
  int v139; // edx
  unsigned int v140; // edx
  unsigned __int64 i; // rax
  unsigned __int64 v142; // [rsp+0h] [rbp-88h]
  int v143; // [rsp+0h] [rbp-88h]
  char *v144; // [rsp+0h] [rbp-88h]
  bool v145; // [rsp+8h] [rbp-80h]
  char v146; // [rsp+8h] [rbp-80h]
  int v147; // [rsp+8h] [rbp-80h]
  int v148; // [rsp+Ch] [rbp-7Ch]
  int v149; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v150; // [rsp+10h] [rbp-78h]
  char *v151; // [rsp+10h] [rbp-78h]
  unsigned int v152; // [rsp+20h] [rbp-68h]
  unsigned __int64 v153; // [rsp+20h] [rbp-68h]
  char v154; // [rsp+20h] [rbp-68h]
  char *v155; // [rsp+20h] [rbp-68h]
  __int64 v156; // [rsp+28h] [rbp-60h]
  __int64 v157; // [rsp+30h] [rbp-58h] BYREF
  char v158; // [rsp+40h] [rbp-48h]
  unsigned __int64 v159; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v159 = __readfsqword(0x28u);
  if ( a3 == 4 )
    return (char *)sub_22CD640(a1, a2, v157, 0, a4);
  if ( a3 > 3 )
    sub_22CFDA0(
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
      1114,
      "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
      "fmt == chars_format::fixed || fmt == chars_format::scientific || fmt == chars_format::general || fmt == chars_format{}");
  sub_22CC4D0((__int64)&v157, a1, a2, a3, 0, a4);
  if ( v158 )
    return (char *)v157;
  v8 = *(_QWORD *)&a4.m128d_f64[0] & 0xFFFFFFFFFFFFFLL;
  v9 = *(_QWORD *)&a4.m128d_f64[0] >> 52;
  v142 = *(_QWORD *)&a4.m128d_f64[0] >> 63;
  v10 = (*(_QWORD *)&a4.m128d_f64[0] >> 52) & 0x7FFLL;
  if ( (_DWORD)v10 == 2047 || (v145 = v8 == 0 && (_DWORD)v10 == 0) )
    abort();
  v11 = v8 | 0x10000000000000LL;
  if ( (unsigned int)(v10 - 1023) > 0x34 )
  {
    v156 = LOBYTE(a4.m128d_f64[0]) & 1;
    if ( !(_DWORD)v10 )
    {
      v12 = 1;
      v13 = 57;
      v14 = 5200;
      v148 = -325;
      v152 = 751;
      v15 = 4 * v8;
      v16 = 1;
LABEL_11:
      v17 = (unsigned __int64 *)((char *)&unk_2716B80 + v14);
      v18 = *(_QWORD *)((char *)&unk_2716B80 + v14 + 8);
      v19 = (((*v17 * (unsigned __int128)(v15 + 2)) >> 64) + v17[1] * (unsigned __int128)(v15 + 2)) >> 64;
      v20 = ((*(_OWORD *)v17 * (v15 + 2)) >> 64 >> v13) | (v19 << (64 - v13));
      v21 = v19 >> v13;
      if ( (v13 & 0x40) != 0 )
        v20 = v21;
      v22 = v20;
      v23 = (((*v17 * (unsigned __int128)(v15 - 1 - v12)) >> 64) + (v15 - 1 - v12) * (unsigned __int128)v18) >> 64;
      v24 = ((unsigned __int64)((__PAIR128__(v18, *v17) * (v15 - 1 - v12)) >> 64) >> v13) | (v23 << (64 - v13));
      v25 = v23 >> v13;
      if ( (v13 & 0x40) != 0 )
        v24 = v25;
      v26 = v24;
      v27 = (((*v17 * (unsigned __int128)v15) >> 64) + v15 * (unsigned __int128)v18) >> 64;
      v28 = ((unsigned __int64)((__PAIR128__(v18, *v17) * v15) >> 64) >> v13) | (v27 << (64 - v13));
      v29 = v27 >> v13;
      if ( (v13 & 0x40) != 0 )
        v28 = v29;
      if ( v152 > 1 )
      {
        if ( v152 <= 0x3E )
        {
          if ( !v15 )
            __assert_fail(
              "value != 0",
              "../../../../../libstdc++-v3/src/nonshared17/../c++17/ryu/d2s_intrinsics.h",
              0xCDu,
              "bool {anonymous}::ryu::multipleOfPowerOf2(uint64_t, uint32_t)");
          if ( (v15 & ~(-1LL << v152)) == 0 )
          {
            v79 = v22 / 0xA;
            v80 = v26 / 0xA;
            if ( v26 / 0xA >= v22 / 0xA )
              goto LABEL_268;
            goto LABEL_191;
          }
        }
        goto LABEL_19;
      }
      if ( v156 )
      {
        v79 = (v22 - 1) / 0xA;
        v80 = v26 / 0xA;
        if ( v26 / 0xA >= v79 )
        {
LABEL_268:
          if ( v28 != v26 )
          {
            v82 = 0;
            v30 = 0;
LABEL_235:
            v28 += v82 > 4u;
            goto LABEL_25;
          }
          ++v28;
          v30 = 0;
LABEL_25:
          v38 = v30 + v148;
          v39 = v142 << 32;
          if ( v28 > 0x16345785D89FFFFLL )
            sub_22CC4A0(v142 << 32, v28, v39);
          goto LABEL_32;
        }
        goto LABEL_191;
      }
      v79 = v22 / 0xA;
      v80 = v26 / 0xA;
      if ( v26 / 0xA < v22 / 0xA )
      {
        v145 = v16;
LABEL_191:
        v16 = 1;
        goto LABEL_100;
      }
      if ( !v16 )
        goto LABEL_268;
      goto LABEL_354;
    }
    v15 = 4 * v11;
    v16 = v8 != 0 || (v9 & 0x7FE) == 0;
    v61 = v10 - 1077;
    if ( v61 >= 0 )
    {
      v62 = ((unsigned int)(78913 * v61) >> 18) - (v61 > 3);
      v148 = v62;
      v63 = v62;
      if ( v62 != -1 )
      {
        v64 = (unsigned __int64 *)((char *)&unk_2717FE0 + 16 * v62);
        v153 = v15 + 2;
        v150 = v64[1];
        v65 = ((1217359 * v62) >> 19) + v62 - v61 + 61;
        v66 = (v150 * (unsigned __int128)(v15 + 2)) >> 64;
        v67 = v16;
        v33 = __CFADD__((*v64 * (unsigned __int128)(v15 + 2)) >> 64, v150 * (v15 + 2));
        v68 = v15 - 1;
        v69 = ((*(_OWORD *)v64 * (v15 + 2)) >> 64 >> v65) | ((v33 + v66) << (64 - (unsigned __int8)v65));
        v70 = ((unsigned __int64)v33 + v66) >> v65;
        if ( (v65 & 0x40) != 0 )
          v69 = v70;
        v71 = v68 - v16;
        v22 = v69;
        v72 = (((*v64 * (unsigned __int128)v71) >> 64) + (v68 - v67) * (unsigned __int128)v150) >> 64;
        v73 = ((unsigned __int64)(((*v64 * (unsigned __int128)v71) >> 64) + (v68 - v67) * v150) >> v65)
            | (v72 << (64 - (unsigned __int8)v65));
        v74 = v72 >> v65;
        if ( (v65 & 0x40) != 0 )
          v73 = v74;
        v26 = v73;
        v75 = (((*v64 * (unsigned __int128)v15) >> 64) + v15 * (unsigned __int128)v150) >> 64;
        v28 = ((unsigned __int64)((__PAIR128__(v150, *v64) * v15) >> 64) >> v65) | (v75 << (64 - (unsigned __int8)v65));
        v76 = v75 >> v65;
        if ( (v65 & 0x40) != 0 )
          v28 = v76;
        if ( v63 > 0x15 )
          goto LABEL_19;
        if ( 5 * (unsigned int)(v15 / 5) == (_DWORD)v15 )
        {
          v140 = 0;
          for ( i = 0x3333333333333334LL * v11; i <= 0x3333333333333333LL; ++v140 )
            i *= 0xCCCCCCCCCCCCCCCDLL;
          if ( v140 < v63 )
            goto LABEL_19;
          v79 = v22 / 0xA;
          v80 = v26 / 0xA;
          if ( v26 / 0xA >= v22 / 0xA )
            goto LABEL_268;
          LOBYTE(v8) = v11;
          v16 = 1;
        }
        else
        {
          if ( (LOBYTE(a4.m128d_f64[0]) & 1) != 0 )
          {
            v105 = 0;
            for ( j = 0xCCCCCCCCCCCCCCCDLL * v153; j <= 0x3333333333333333LL; ++v105 )
              j *= 0xCCCCCCCCCCCCCCCDLL;
            v22 = (v105 < v63) + v22 - 1;
            goto LABEL_19;
          }
          v77 = 0;
          for ( k = 0xCCCCCCCCCCCCCCCDLL * v71; k <= 0x3333333333333333LL; ++v77 )
            k *= 0xCCCCCCCCCCCCCCCDLL;
          if ( v77 < v63 )
          {
LABEL_19:
            v30 = 0;
            if ( v26 / 0x64 < v22 / 0x64 )
            {
              v26 /= 0x64u;
              v22 /= 0x64u;
              v30 = 2;
              v31 = v28 / 0x64;
              v32 = v28 % 0x64;
              v33 = v32 < 0x31;
              v34 = v32 == 49;
              v28 = v31;
              v145 = !v33 && !v34;
            }
            v35 = v22 / 0xA;
            v36 = v26 / 0xA;
            if ( v26 / 0xA < v22 / 0xA )
            {
              do
              {
                v37 = v28;
                v26 = v36;
                ++v30;
                v28 /= 0xAu;
                v35 /= 0xAu;
                v36 /= 0xAu;
              }
              while ( v36 < v35 );
              v145 = (unsigned int)(v37 - 10 * v28) > 4;
            }
            v28 += v145 | (unsigned __int8)(v28 == v26);
            goto LABEL_25;
          }
          LOBYTE(v8) = v11;
          v16 = 0;
          v79 = v22 / 0xA;
          v80 = v26 / 0xA;
          if ( v26 / 0xA >= v22 / 0xA )
          {
LABEL_354:
            v85 = v80;
            if ( 10 * (_DWORD)v80 != (_DWORD)v26 )
            {
              v146 = 1;
              v80 = v26;
              v30 = 0;
              v82 = 0;
              goto LABEL_234;
            }
            v30 = 0;
            v82 = 0;
            do
            {
LABEL_105:
              v86 = v28;
              v28 /= 0xAu;
              v34 = v82 == 0;
              v87 = v86;
              v80 = v85;
              ++v30;
              v16 &= v34;
              v82 = v87 - 10 * v28;
              v85 /= 0xAu;
            }
            while ( 10 * (_DWORD)v85 == (_DWORD)v80 );
            v146 = 1;
LABEL_107:
            if ( v82 == 5 && v16 )
            {
              if ( (v28 & 1) == 0 )
              {
                if ( v28 == v80 )
                  v28 += v8 & 1 | (unsigned __int8)v146 ^ 1u;
                goto LABEL_25;
              }
LABEL_280:
              ++v28;
              goto LABEL_25;
            }
LABEL_234:
            if ( v80 != v28 || v146 == 1 && (v8 & 1) == 0 )
              goto LABEL_235;
            goto LABEL_280;
          }
          v145 = 1;
        }
LABEL_100:
        v151 = v4;
        v30 = 0;
        v81 = v145;
        v82 = 0;
        v154 = v8;
        while ( 1 )
        {
          v83 = v28;
          v28 /= 0xAu;
          v34 = 10 * (_DWORD)v80 == (_DWORD)v26;
          LODWORD(v26) = v80;
          v81 &= v34;
          ++v30;
          v16 &= v82 == 0;
          v82 = v83 - 10 * v28;
          v79 /= 0xAu;
          if ( v80 / 0xA >= v79 )
            break;
          v80 /= 0xAu;
        }
        v84 = v81;
        v146 = v81;
        LOBYTE(v8) = v154;
        v85 = v80 / 0xA;
        v4 = v151;
        if ( !v84 || 10 * (unsigned int)(v80 / 0xA) != (_DWORD)v80 )
          goto LABEL_107;
        goto LABEL_105;
      }
      goto LABEL_389;
    }
LABEL_271:
    v135 = ((unsigned int)(-732923 * v61) >> 20) - (v61 != -1);
    v136 = v61 + v135;
    v152 = v135;
    v137 = v135;
    v138 = -v61 - v135;
    v148 = v136;
    v139 = v138;
    if ( v138 >= 0 )
    {
      v12 = v16;
      v14 = 16LL * v138;
      v13 = v137 - ((unsigned int)(1217359 * v139) >> 19) + 60;
      goto LABEL_11;
    }
LABEL_389:
    __assert_fail(
      "e >= 0",
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/ryu/common.h",
      0x39u,
      "int32_t {anonymous}::ryu::pow5bits(int32_t)");
  }
  v40 = 51 - (*(_QWORD *)&a4.m128d_f64[0] >> 52);
  if ( (v11 & ~(-1LL << v40)) != 0 )
  {
    v61 = v10 - 1077;
    v156 = LOBYTE(a4.m128d_f64[0]) & 1;
    v15 = 4 * v11;
    v16 = v8 != 0 || (v9 & 0x7FE) == 0;
    goto LABEL_271;
  }
  v41 = 1;
  v28 = v11 >> v40;
  v42 = (v11 >> v40) / 0xA;
  if ( 10 * (_DWORD)v42 != (unsigned int)(v11 >> v40) )
  {
    v38 = 0;
    v39 = v142 << 32;
    if ( v28 <= 0x38D7EA4C67FFFLL )
      goto LABEL_34;
    v44 = 16;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
LABEL_156:
      v47 = 16;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
LABEL_178:
    v46 += 16;
    goto LABEL_125;
  }
  do
  {
    v28 = v42;
    v43 = v41++;
    v42 /= 0xAu;
  }
  while ( 10 * (_DWORD)v42 == (_DWORD)v28 );
  v38 = v43;
  v39 = v142 << 32;
LABEL_32:
  if ( v28 > 0x2386F26FC0FFFFLL )
  {
    v44 = v38 + 17;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 17;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 20) > 9 )
    {
      v46 = BYTE4(v39) + 17;
      goto LABEL_125;
    }
    v47 = 17;
    v57 = v38 + BYTE4(v39) + 17;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0x38D7EA4C67FFFLL )
  {
    v44 = v38 + 16;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
      goto LABEL_156;
    if ( (unsigned int)(v38 + 19) <= 9 )
    {
      v47 = 16;
      v57 = v38 + BYTE4(v39) + 16;
      if ( v38 < 0 )
        goto LABEL_52;
      goto LABEL_114;
    }
    goto LABEL_178;
  }
LABEL_34:
  if ( v28 > 0x5AF3107A3FFFLL )
  {
    v44 = v38 + 15;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 15;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 18) > 9 )
    {
      v46 = BYTE4(v39) + 15;
      goto LABEL_125;
    }
    v47 = 15;
    v57 = v38 + BYTE4(v39) + 15;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0x9184E729FFFLL )
  {
    v44 = v38 + 14;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 14;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 17) > 9 )
    {
      v46 = BYTE4(v39) + 14;
      goto LABEL_125;
    }
    v47 = 14;
    v57 = v38 + BYTE4(v39) + 14;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0xE8D4A50FFFLL )
  {
    v44 = v38 + 13;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 13;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 16) > 9 )
    {
      v46 = BYTE4(v39) + 13;
      goto LABEL_125;
    }
    v47 = 13;
    v57 = v38 + BYTE4(v39) + 13;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0x174876E7FFLL )
  {
    v44 = v38 + 12;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 12;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 15) > 9 )
    {
      v46 = BYTE4(v39) + 12;
      goto LABEL_125;
    }
    v47 = 12;
    v57 = v38 + BYTE4(v39) + 12;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0x2540BE3FFLL )
  {
    v44 = v38 + 11;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 11;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 14) > 9 )
    {
      v46 = BYTE4(v39) + 11;
      goto LABEL_125;
    }
    v47 = 11;
    v57 = v38 + BYTE4(v39) + 11;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0x3B9AC9FF )
  {
    v44 = v38 + 10;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 10;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 13) > 9 )
    {
      v46 = BYTE4(v39) + 10;
      goto LABEL_125;
    }
    v47 = 10;
    v57 = v38 + BYTE4(v39) + 10;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0x5F5E0FF )
  {
    v44 = v38 + 9;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 9;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 12) > 9 )
    {
      v46 = BYTE4(v39) + 9;
      goto LABEL_125;
    }
    v47 = 9;
    v57 = v38 + BYTE4(v39) + 9;
    if ( v38 < 0 )
      goto LABEL_52;
    goto LABEL_114;
  }
  if ( v28 > 0x98967F )
  {
    v44 = v38 + 8;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 8;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 11) > 9 )
    {
      v46 = BYTE4(v39) + 8;
      goto LABEL_125;
    }
    v47 = 8;
    if ( v38 < 0 )
      goto LABEL_52;
    v57 = v38 + BYTE4(v39) + 8;
    goto LABEL_114;
  }
  if ( v28 > 0xF423F )
  {
    v44 = v38 + 7;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 == 3 )
    {
      if ( (unsigned int)v38 < 0xFFFFFFF6 )
      {
        v46 = BYTE4(v39) + 7;
        goto LABEL_125;
      }
      v47 = 7;
      goto LABEL_52;
    }
    v47 = 7;
    if ( a3 )
    {
LABEL_119:
      if ( a3 != 1 )
      {
        if ( v38 < 0 )
          goto LABEL_52;
        v57 = v47 + v46 + v38;
        goto LABEL_114;
      }
LABEL_124:
      v46 += v47;
      goto LABEL_125;
    }
LABEL_71:
    if ( -3 - v47 <= v38 && v38 <= 5 )
    {
      if ( v38 >= 0 )
      {
        v57 = v47 + v46 + v38;
        v58 = v57;
        if ( a2 - (__int64)v4 < v57 )
          return (char *)a2;
LABEL_75:
        _BitScanReverse64((unsigned __int64 *)&v59, v28);
        goto LABEL_76;
      }
      goto LABEL_52;
    }
    goto LABEL_124;
  }
  if ( v28 > 0x1869F )
  {
    v44 = v38 + 6;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 6;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)v38 < 0xFFFFFFF7 && v38 != 0 )
    {
      v46 = BYTE4(v39) + 6;
      goto LABEL_125;
    }
    v47 = 6;
    if ( v38 < 0 )
      goto LABEL_52;
    v57 = v38 + BYTE4(v39) + 6;
    goto LABEL_114;
  }
  if ( v28 > 0x270F )
  {
    v44 = v38 + 5;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 5;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 8) > 9 )
    {
      v46 = BYTE4(v39) + 5;
      goto LABEL_125;
    }
    v47 = 5;
    if ( v38 < 0 )
      goto LABEL_52;
    v57 = v38 + BYTE4(v39) + 5;
    goto LABEL_114;
  }
  if ( v28 > 0x3E7 )
  {
    v44 = v38 + 4;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 4;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 7) > 9 )
    {
      v46 = BYTE4(v39) + 4;
      goto LABEL_125;
    }
    v47 = 4;
    if ( v38 < 0 )
      goto LABEL_52;
    v57 = v38 + BYTE4(v39) + 4;
    goto LABEL_114;
  }
  if ( v28 > 0x63 )
  {
    v44 = v38 + 3;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 3;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 6) > 9 )
    {
      v46 = BYTE4(v39) + 3;
      goto LABEL_125;
    }
    v47 = 3;
    if ( v38 < 0 )
      goto LABEL_52;
    v57 = v38 + BYTE4(v39) + 3;
    goto LABEL_114;
  }
  if ( v28 > 9 )
  {
    v44 = v38 + 2;
    v45 = BYTE4(v39);
    v46 = BYTE4(v39);
    if ( a3 != 3 )
    {
      v47 = 2;
      if ( a3 )
        goto LABEL_119;
      goto LABEL_71;
    }
    if ( (unsigned int)(v38 + 5) > 9 )
    {
      v46 = BYTE4(v39) + 2;
      goto LABEL_125;
    }
    v47 = 2;
    if ( v38 < 0 )
      goto LABEL_52;
    v57 = v38 + BYTE4(v39) + 2;
LABEL_114:
    v58 = v57;
    if ( a2 - (__int64)v4 < v57 )
      return (char *)a2;
    LODWORD(v59) = -1;
    if ( !v28 )
    {
LABEL_76:
      if ( (int)(v59 + (10 * v38 + 2) / 3u) > 49 )
      {
        if ( (unsigned int)sub_22CC840(0, v4, a4.m128d_f64[0]) != v57 )
          sub_22CFDA0(
            "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
            1251,
            "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
            "output_length == expected_output_length");
        return &v4[v58];
      }
      if ( v45 )
        *v4++ = 45;
      if ( v4 != (char *)a2 )
      {
        if ( !v28 )
        {
          *v4 = 48;
          v60 = v4 + 1;
          goto LABEL_82;
        }
        if ( v28 <= 9 )
        {
          v134 = 1;
        }
        else
        {
          v133 = v28;
          v134 = 1;
          while ( 1 )
          {
            if ( v133 <= 0x63 )
            {
              ++v134;
              goto LABEL_258;
            }
            if ( v133 <= 0x3E7 )
              break;
            if ( v133 <= 0x270F )
            {
              v134 += 3;
              goto LABEL_258;
            }
            v134 += 4;
            if ( v133 <= 0x1869F )
              goto LABEL_258;
            v133 /= 0x2710u;
          }
          v134 += 2;
        }
LABEL_258:
        if ( a2 - (__int64)v4 >= v134 )
        {
          sub_22CDE20(v4, v134, v28);
          v60 = &v4[v134];
LABEL_82:
          result = (char *)memset(v60, 48, v38) + v38;
          if ( (_DWORD)result - (_DWORD)v4 + v45 != v57 )
            sub_22CFDA0(
              "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
              1226,
              "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
              "output_length == expected_output_length");
          return result;
        }
      }
      sub_22CFDA0(
        "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
        1222,
        "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
        "result.ec == errc{}");
    }
    goto LABEL_75;
  }
  v44 = v38 + 1;
  v45 = BYTE4(v39);
  v46 = BYTE4(v39);
  if ( a3 == 3 )
  {
    if ( (unsigned int)(v38 + 4) <= 9 )
    {
LABEL_51:
      v47 = 1;
      if ( v38 < 0 )
        goto LABEL_52;
      v57 = v38 + BYTE4(v39) + 1;
      if ( v28 == 1 )
      {
        if ( v38 > 319 )
          sub_22CFDA0(
            "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
            657,
            "bool {anonymous}::is_rounded_up_pow10_p(typename floating_type_traits<T>::shortest_scientific_t) [with T = d"
            "ouble; typename floating_type_traits<T>::shortest_scientific_t = ryu::floating_decimal_64]",
            "fd.exponent/64 < (int)std::size(pow10_adjustment_tab)");
LABEL_165:
        v102 = a2 - (_QWORD)v4;
        if ( (qword_26FD140[v38 >> 6] & (0x8000000000000000LL >> v38)) != 0 )
        {
          v58 = --v57;
          if ( v57 <= v102 )
            goto LABEL_167;
        }
        else
        {
          v58 = v57;
          if ( v102 >= v57 )
          {
LABEL_167:
            v28 = 1;
            goto LABEL_75;
          }
        }
        return (char *)a2;
      }
      goto LABEL_114;
    }
LABEL_125:
    v88 = v44 - 1;
    v89 = v46 + 1;
    v90 = 6;
    v91 = -v88;
    if ( v88 > 0 )
      v91 = v88;
    if ( v91 <= 999 )
      v90 = (v91 > 99) + 4;
    v92 = (unsigned int)(v90 + v89);
    if ( a2 - (__int64)v4 < v92 )
      return (char *)a2;
    if ( v45 )
    {
      *v4 = 45;
      v93 = 1;
      v94 = 2;
      v143 = 1;
      v155 = v4 + 1;
      v95 = 2;
    }
    else
    {
      v155 = v4;
      v94 = 1;
      v95 = 1;
      v93 = 0;
      v143 = 0;
    }
    if ( v28 > 0x2386F26FC0FFFFLL )
    {
      v147 = 17;
      v107 = 17;
      v108 = 17;
    }
    else if ( v28 > 0x38D7EA4C67FFFLL )
    {
      v147 = 16;
      v107 = 16;
      v108 = 16;
    }
    else if ( v28 > 0x5AF3107A3FFFLL )
    {
      v147 = 15;
      v107 = 15;
      v108 = 15;
    }
    else if ( v28 > 0x9184E729FFFLL )
    {
      v147 = 14;
      v107 = 14;
      v108 = 14;
    }
    else if ( v28 > 0xE8D4A50FFFLL )
    {
      v147 = 13;
      v107 = 13;
      v108 = 13;
    }
    else if ( v28 > 0x174876E7FFLL )
    {
      v147 = 12;
      v107 = 12;
      v108 = 12;
    }
    else if ( v28 > 0x2540BE3FFLL )
    {
      v147 = 11;
      v107 = 11;
      v108 = 11;
    }
    else
    {
      if ( v28 <= 0x3B9AC9FF )
      {
        if ( v28 > 0x5F5E0FF )
        {
          v110 = v28;
          v147 = 9;
          v115 = 0;
          v116 = 9;
          v108 = 9;
        }
        else if ( v28 > 0x98967F )
        {
          v110 = v28;
          v147 = 8;
          v115 = 0;
          v116 = 8;
          v108 = 8;
        }
        else
        {
          if ( v28 <= 0xF423F )
          {
            if ( v28 <= 0x1869F )
            {
              if ( v28 <= 0x270F )
              {
                if ( v28 > 0x3E7 )
                {
                  v110 = v28;
                  v108 = 4;
                  v115 = 0;
                  v147 = 4;
                }
                else
                {
                  if ( v28 <= 0x63 )
                  {
                    if ( v28 <= 9 )
                    {
                      v147 = 1;
                      *v155 = v28 + 48;
LABEL_149:
                      v96 = &v4[v94];
                      v97 = v95 + 2;
                      v98 = 43;
                      v99 = v38 + v147 - 1;
                      if ( v99 < 0 )
                      {
                        v98 = 45;
                        v99 = 1 - (v38 + v147);
                      }
                      *v96 = 101;
                      v4[v95 + 1] = v98;
                      v100 = &v4[v97];
                      if ( v99 <= 99 )
                      {
                        v101 = v95 + 4;
                        *(_WORD *)v100 = word_2719540[v99];
                      }
                      else
                      {
                        v101 = v95 + 5;
                        *(_WORD *)v100 = *(_WORD *)((char *)word_2719540 + (int)(2 * (v99 / 0xAu)));
                        v4[v97 + 2] = v99 % 0xAu + 48;
                      }
                      if ( (_DWORD)v92 != v101 )
                        sub_22CFDA0(
                          "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
                          1171,
                          "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
                          "output_length == expected_output_length");
                      return &v4[(int)v92];
                    }
                    v110 = v28;
                    v108 = 2;
                    v115 = 0;
                    v147 = 2;
                    goto LABEL_211;
                  }
                  v110 = v28;
                  v108 = 3;
                  v115 = 0;
                  v147 = 3;
                }
LABEL_214:
                v123 = v110 / 0x64 + 48;
                *(_WORD *)&v4[v93 + v108 - 1 - v115] = word_2719540[v110 % 0x64];
                if ( v110 <= 0x3E7 )
                  goto LABEL_212;
                v115 += 2;
                v110 /= 0x64u;
                goto LABEL_211;
              }
              v110 = v28;
              v147 = 5;
              v115 = 0;
              v116 = 5;
              v108 = 5;
              goto LABEL_207;
            }
            v110 = v28;
            v108 = 6;
            v115 = 0;
            v147 = 6;
            goto LABEL_206;
          }
          v110 = v28;
          v147 = 7;
          v115 = 0;
          v116 = 7;
          v108 = 7;
        }
LABEL_207:
        v149 = v92;
        v117 = v93 + v116;
        do
        {
          v118 = v110;
          v119 = v110;
          v110 /= 0x2710u;
          v120 = v115;
          v115 += 4;
          v121 = v118 - 10000 * v110;
          v122 = v117 - v120;
          *(_WORD *)&v4[v122 - 1] = word_2719540[v121 % 0x64];
          *(_WORD *)&v4[v122 - 3] = word_2719540[v121 / 0x64];
        }
        while ( v119 > 0x5F5E0FF );
        LODWORD(v92) = v149;
        if ( v119 > 0xF423F )
          goto LABEL_214;
        v123 = v110 + 48;
        if ( v119 <= 0x1869F )
        {
LABEL_212:
          *v155 = v123;
          v4[v94] = 46;
          v94 = v143 + v108 + 1;
          v95 = v143 + v108 + 1;
          goto LABEL_149;
        }
        goto LABEL_211;
      }
      if ( !HIDWORD(v28) )
      {
        v110 = v28;
        v147 = 10;
        v115 = 0;
        v116 = 10;
        v108 = 10;
        goto LABEL_207;
      }
      v147 = 10;
      v107 = 10;
      v108 = 10;
    }
    v109 = v28 / 0x5F5E100;
    v110 = v28 / 0x5F5E100;
    v111 = v28 % 0x5F5E100;
    v112 = v111 % 0x2710;
    v113 = v107 + v93;
    v114 = v111 / 0x2710 % 0x2710;
    *(_WORD *)&v4[v113 - 1] = word_2719540[v112 % 0x64];
    *(_WORD *)&v4[v113 - 3] = word_2719540[v112 / 0x64];
    *(_WORD *)&v4[v113 - 5] = word_2719540[v114 % 0x64];
    *(_WORD *)&v4[v113 - 7] = word_2719540[v114 / 0x64];
    v33 = v28 > 0xE8D4A50FFFLL;
    v115 = 8;
    if ( !v33 )
    {
      if ( (unsigned int)v109 > 0x63 )
        goto LABEL_214;
LABEL_211:
      v124 = v110;
      v4[v108 + v143 - v115] = *((_BYTE *)word_2719540 + (unsigned int)(v124 * 2 + 1));
      v123 = word_2719540[v124];
      goto LABEL_212;
    }
LABEL_206:
    v116 = v108;
    goto LABEL_207;
  }
  if ( a3 )
  {
    if ( a3 != 1 )
      goto LABEL_51;
    goto LABEL_125;
  }
  if ( v38 < -3 || v38 > 4 )
    goto LABEL_125;
  v47 = 1;
  if ( v38 >= 0 )
  {
    v57 = v38 + BYTE4(v39) + 1;
    if ( v28 == 1 )
      goto LABEL_165;
    goto LABEL_114;
  }
LABEL_52:
  v48 = 1;
  if ( v44 > 0 )
    v48 = v44;
  v49 = (unsigned int)(v46 - v38 + v48 + 1);
  v50 = v49;
  if ( a2 - (__int64)v4 < v49 )
    return (char *)a2;
  v51 = -v38;
  if ( -v38 < v47 )
  {
    v103 = v4;
    if ( v45 )
    {
      *v4 = 45;
      v103 = v4 + 1;
    }
    if ( v103 != (char *)a2 )
    {
      if ( !v28 )
      {
        *v103 = 48;
        v104 = v103 + 1;
        goto LABEL_184;
      }
      if ( v28 <= 9 )
      {
        v126 = 1;
      }
      else
      {
        v125 = v28;
        v126 = 1;
        while ( 1 )
        {
          if ( v125 <= 0x63 )
          {
            ++v126;
            goto LABEL_231;
          }
          if ( v125 <= 0x3E7 )
            break;
          if ( v125 <= 0x270F )
          {
            v126 += 3;
            goto LABEL_231;
          }
          v126 += 4;
          if ( v125 <= 0x1869F )
            goto LABEL_231;
          v125 /= 0x2710u;
        }
        v126 += 2;
      }
LABEL_231:
      if ( a2 - (__int64)v103 >= v126 )
      {
        v144 = v103;
        sub_22CDE20(v103, v126, v28);
        v104 = &v144[v126];
LABEL_184:
        memmove(&v104[v38 + 1], &v104[v38], v51);
        result = v104 + 1;
        v104[v38] = 46;
        if ( v50 != (_DWORD)v104 + 1 - (_DWORD)v4 )
          sub_22CFDA0(
            "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
            1298,
            "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
            "output_length == expected_output_length");
        return result;
      }
    }
    sub_22CFDA0(
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
      1292,
      "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
      "result.ec == errc{}");
  }
  v52 = v4;
  if ( v45 )
  {
    *v4 = 45;
    v52 = v4 + 1;
  }
  v53 = v51 - v47;
  v54 = v52 + 2;
  *(_WORD *)v52 = 11824;
  if ( v53 >= 8 )
  {
    *(_QWORD *)(v52 + 2) = 0x3030303030303030LL;
    *(_QWORD *)((char *)v54 + v53 - 8) = 0x3030303030303030LL;
    memset(
      (void *)((unsigned __int64)(v52 + 10) & 0xFFFFFFFFFFFFFFF8LL),
      0x30u,
      8LL * (((_DWORD)v54 - (((_DWORD)v52 + 10) & 0xFFFFFFF8) + v53) >> 3));
  }
  else if ( (v53 & 4) != 0 )
  {
    *v54 = 808464432;
    *(_DWORD *)((char *)v54 + v53 - 4) = 808464432;
  }
  else if ( v53 )
  {
    v52[2] = 48;
    if ( (v53 & 2) != 0 )
      *(_WORD *)&v52[v53] = 12336;
  }
  v55 = (char *)v54 + (int)v53;
  if ( (_BYTE *)a2 == v55 )
    goto LABEL_67;
  if ( !v28 )
  {
    *v55 = 48;
    v56 = v55 + 1;
    goto LABEL_66;
  }
  if ( v28 <= 9 )
  {
    v128 = 1;
  }
  else
  {
    v127 = v28;
    v128 = 1;
    while ( 1 )
    {
      if ( v127 <= 0x63 )
      {
        ++v128;
        goto LABEL_244;
      }
      if ( v127 <= 0x3E7 )
        break;
      if ( v127 <= 0x270F )
      {
        v128 += 3;
        goto LABEL_244;
      }
      v128 += 4;
      if ( v127 <= 0x1869F )
        goto LABEL_244;
      v127 /= 0x2710u;
    }
    v128 += 2;
  }
LABEL_244:
  v129 = v128;
  if ( a2 - (__int64)v55 < v128 )
LABEL_67:
    sub_22CFDA0(
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
      1281,
      "std::to_chars_result std::__floating_to_chars_shortest(char*, char*, T, chars_format) [with T = double]",
      "output_length == expected_output_length && result.ec == errc{}");
  v130 = v28;
  v131 = v128;
  v132 = v55;
  v56 = &v55[v129];
  sub_22CDE20(v132, v131, v130);
LABEL_66:
  result = v56;
  if ( v50 != (_DWORD)v56 - (_DWORD)v4 )
    goto LABEL_67;
  return result;
}
