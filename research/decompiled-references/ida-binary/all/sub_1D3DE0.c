unsigned __int64 __fastcall sub_1D3DE0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int *v11; // r12
  int v12; // eax
  int v13; // ebp
  unsigned int v14; // r13d
  const char *v15; // rax
  char *v16; // r14
  char *v17; // rbp
  char *v18; // r13
  char *v19; // r15
  char *v20; // r12
  const char *v21; // rsi
  const char *v22; // rdi
  int v23; // eax
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // rdx
  const char *v28; // r9
  const char *v29; // rsi
  __int64 v30; // rdx
  const char *v31; // rsi
  const char *v32; // r15
  char *v33; // r14
  char *v34; // r9
  char *v35; // rdx
  char *v36; // rsi
  const char *v37; // rsi
  char *v38; // r8
  const char *v39; // rax
  char *v40; // rbp
  char *v41; // r14
  char *v42; // r13
  char *v43; // r15
  char *v44; // r12
  const char *v45; // rsi
  const char *v46; // rdi
  int v47; // eax
  char *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  char *v51; // rdx
  const char *v52; // rcx
  const char *v53; // rsi
  __int64 v54; // rdx
  const char *v55; // rsi
  const char *v56; // r13
  char *v57; // r14
  char *v58; // r15
  char *v59; // rdx
  char *v60; // rsi
  char *v61; // r14
  const char *v62; // rsi
  const char *v63; // rax
  char *v64; // rbp
  char *v65; // r14
  char *v66; // r13
  char *v67; // r15
  char *v68; // r12
  const char *v69; // rsi
  const char *v70; // rdi
  int v71; // eax
  char *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  char *v75; // rdx
  const char *v76; // rcx
  const char *v77; // rsi
  __int64 v78; // rdx
  const char *v79; // rsi
  const char *v80; // r13
  char *v81; // r14
  char *v82; // r15
  char *v83; // rdx
  char *v84; // rsi
  char *v85; // r14
  const char *v86; // rsi
  __int64 v87; // rbx
  const char *v88; // rdx
  __int64 user_idadir; // r12
  char *v90; // rsi
  unsigned __int64 v91; // rdx
  __int64 v92; // rbx
  unsigned __int64 v93; // rbp
  __int64 v94; // r14
  unsigned __int64 v95; // r13
  size_t v96; // r15
  size_t v97; // r8
  unsigned __int64 v98; // r13
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __m128 v103; // xmm4
  __m128 v104; // xmm5
  QT::QApplication *v105; // rbx
  size_t v106; // rax
  char *v107; // rbp
  unsigned __int64 v108; // rdx
  __m128i v109; // xmm0
  __int64 v110; // rdx
  __int64 v111; // rbp
  __int64 v112; // rbx
  __int64 *v113; // rax
  __int64 v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  size_t v118; // [rsp+0h] [rbp-3248h]
  unsigned __int8 v119; // [rsp+10h] [rbp-3238h]
  const char *v120; // [rsp+10h] [rbp-3238h]
  char *v121; // [rsp+10h] [rbp-3238h]
  const char *v122; // [rsp+18h] [rbp-3230h]
  const char *v123; // [rsp+20h] [rbp-3228h]
  const char *v124; // [rsp+20h] [rbp-3228h]
  unsigned int *v125; // [rsp+20h] [rbp-3228h]
  char *v126; // [rsp+20h] [rbp-3228h]
  char *v127; // [rsp+20h] [rbp-3228h]
  unsigned __int8 v128; // [rsp+28h] [rbp-3220h]
  unsigned int *v129; // [rsp+28h] [rbp-3220h]
  unsigned int *v130; // [rsp+38h] [rbp-3210h]
  char *v131; // [rsp+38h] [rbp-3210h]
  unsigned __int8 v132; // [rsp+42h] [rbp-3206h]
  unsigned __int8 v133; // [rsp+43h] [rbp-3205h]
  unsigned int v134; // [rsp+44h] [rbp-3204h]
  __int64 v135; // [rsp+50h] [rbp-31F8h] BYREF
  __int128 v136; // [rsp+58h] [rbp-31F0h]
  char *s; // [rsp+70h] [rbp-31D8h] BYREF
  __int128 v138; // [rsp+78h] [rbp-31D0h]
  __m128i v139; // [rsp+90h] [rbp-31B8h] BYREF
  unsigned __int64 v140; // [rsp+A0h] [rbp-31A8h]
  void *v141[4]; // [rsp+B0h] [rbp-3198h] BYREF
  char *s2[2]; // [rsp+D0h] [rbp-3178h] BYREF
  unsigned __int64 v143; // [rsp+E0h] [rbp-3168h]
  __int64 v144; // [rsp+F0h] [rbp-3158h] BYREF
  int v145; // [rsp+F8h] [rbp-3150h] BYREF
  void *v146; // [rsp+100h] [rbp-3148h]
  int *v147; // [rsp+108h] [rbp-3140h]
  int *v148; // [rsp+110h] [rbp-3138h]
  __int64 v149; // [rsp+118h] [rbp-3130h]
  __m128i si128; // [rsp+120h] [rbp-3128h] BYREF
  __m128i v151; // [rsp+130h] [rbp-3118h]
  __m256i v152; // [rsp+140h] [rbp-3108h]
  __m128i v153; // [rsp+160h] [rbp-30E8h]
  __m128i v154; // [rsp+170h] [rbp-30D8h]
  __m128i v155; // [rsp+180h] [rbp-30C8h]
  __m128i v156; // [rsp+190h] [rbp-30B8h]
  __m128i v157; // [rsp+1A0h] [rbp-30A8h]
  __m128i v158; // [rsp+1B0h] [rbp-3098h]
  __m128i v159; // [rsp+1C0h] [rbp-3088h]
  __m128i v160; // [rsp+1D0h] [rbp-3078h]
  __m128i v161; // [rsp+1E0h] [rbp-3068h]
  int v162; // [rsp+1F0h] [rbp-3058h]
  _BYTE v163[4096]; // [rsp+200h] [rbp-3048h] BYREF
  _BYTE v164[4096]; // [rsp+1200h] [rbp-2048h] BYREF
  _BYTE v165[4104]; // [rsp+2200h] [rbp-1048h] BYREF
  unsigned __int64 v166; // [rsp+3208h] [rbp-40h]

  v166 = __readfsqword(0x28u);
  if ( (unsigned int)reg_int_op("PortedToCss", 0, 0, 0) )
    return v166 - __readfsqword(0x28u);
  v9 = 0;
  v145 = 0;
  v146 = nullptr;
  v147 = &v145;
  v148 = &v145;
  v149 = 0;
  v10 = reg_int_op("Index", 0, 0, "Palettes");
  if ( v10 <= 3 )
    v9 = v10;
  qsnprintf(v165, 1024, "%d", v9);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5E0520);
  v162 = -13447886;
  v151 = _mm_load_si128((const __m128i *)&xmmword_5E0530);
  *(__m128i *)v152.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_5E0540);
  *(__m128i *)&v152.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_5E0550);
  v153 = _mm_load_si128((const __m128i *)&xmmword_5E0560);
  v154 = _mm_load_si128((const __m128i *)&xmmword_5E0570);
  v155 = _mm_load_si128((const __m128i *)&xmmword_5E0580);
  v156 = _mm_load_si128((const __m128i *)&xmmword_5E0590);
  v157 = _mm_load_si128((const __m128i *)&xmmword_5E05A0);
  v158 = _mm_load_si128((const __m128i *)&xmmword_5E05B0);
  v159 = _mm_load_si128((const __m128i *)&xmmword_5E05C0);
  v160 = _mm_load_si128((const __m128i *)&xmmword_5E05D0);
  v161 = _mm_load_si128((const __m128i *)&xmmword_5E05E0);
  if ( (unsigned __int8)reg_bin_op(v165, 0, &si128, 212, "Palettes", 0) )
    sub_1D3960(
      &v144,
      (__int64)&si128,
      (__int64)&xmmword_5E0520,
      (_BYTE *)&word_34 + 1,
      (__int64 (__fastcall *)(__int64 *))sub_1CDCA0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5E04F0);
  v151.m128i_i32[0] = -49088;
  if ( (unsigned __int8)reg_bin_op("ArrowsPalette", 0, &si128, 20, 0, 0) )
    sub_1D3960(&v144, (__int64)&si128, (__int64)&xmmword_5E04F0, &byte_5, (__int64 (__fastcall *)(__int64 *))sub_1CBC90);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC5E0);
  if ( (unsigned __int8)reg_bin_op("MiscPalette", 0, &si128, 16, 0, 0) )
    sub_1D3960(&v144, (__int64)&si128, (__int64)&unk_5E04E0, &byte_4, (__int64 (__fastcall *)(__int64 *))sub_1CB9A0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5E04A0);
  v151 = _mm_load_si128((const __m128i *)&xmmword_5E04B0);
  *(__m128i *)v152.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_5E04C0);
  *(__m128i *)((char *)&v152.m256i_u64[1] + 4) = _mm_loadu_si128((const __m128i *)((char *)&xmmword_5E04C0 + 12));
  if ( (unsigned __int8)reg_bin_op("GraphPalette", 0, &si128, 60, 0, 0) )
    sub_1D3960(
      &v144,
      (__int64)&si128,
      (__int64)&xmmword_5E04A0,
      &byte_9[6],
      (__int64 (__fastcall *)(__int64 *))sub_1CBDF0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5E0460);
  v151 = _mm_load_si128((const __m128i *)&xmmword_5E0470);
  *(__m128i *)v152.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_5E0480);
  if ( (unsigned __int8)reg_bin_op("DebuggerPalette", 0, &si128, 48, 0, 0) )
    sub_1D3960(
      &v144,
      (__int64)&si128,
      (__int64)&xmmword_5E0460,
      &byte_9[3],
      (__int64 (__fastcall *)(__int64 *))sub_1CDE30);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5E0420);
  v152.m256i_i32[0] = -8388609;
  v151 = _mm_load_si128((const __m128i *)&xmmword_5E0430);
  if ( (unsigned __int8)reg_bin_op("NavPalette", 0, &si128, 36, 0, 0) )
    sub_1D3960(&v144, (__int64)&si128, (__int64)&xmmword_5E0420, byte_9, (__int64 (__fastcall *)(__int64 *))sub_1CB4F0);
  si128.m128i_i64[0] = 0xFF32CD32FF00AAFFLL;
  if ( (unsigned __int8)reg_bin_op("NavPaletteExtended", 0, &si128, 8, 0, 0) )
    sub_1D3960(
      &v144,
      (__int64)&si128,
      (__int64)&unk_5E0418,
      (_BYTE *)&dword_0 + 2,
      (__int64 (__fastcall *)(__int64 *))sub_1CB660);
  v118 = 0;
  v11 = (unsigned int *)&unk_5E03C0;
  do
  {
    qsnprintf(v165, 1024, "SyntaxFormat_%zu", ++v118);
    v128 = *((_BYTE *)v11 + 4);
    v119 = (unsigned int)reg_int_op("Bold", 0, v128, v165) != 0;
    v133 = *((_BYTE *)v11 + 5);
    v12 = reg_int_op("Italic", 0, v133, v165);
    v13 = *v11;
    v132 = v12 != 0;
    v14 = reg_int_op("Color", 0, *v11, v165) | 0xFF000000;
    v122 = (const char *)qword_85D818[v118];
    if ( v13 == v14 )
      goto LABEL_54;
    sub_1A1F60((__int64)s2, "text_area_t");
    if ( !v146 )
    {
      v16 = (char *)&v145;
      goto LABEL_41;
    }
    v15 = &s1;
    v134 = v14;
    v16 = (char *)&v145;
    v17 = (char *)v146;
    v130 = v11;
    v18 = s2[1];
    v19 = s2[0];
    if ( s2[1] )
      v15 = s2[0];
    v123 = v15;
    while ( 1 )
    {
      v25 = *((_QWORD *)v17 + 5);
      if ( !v18 )
        break;
      if ( v25 )
        goto LABEL_34;
      v20 = v17;
      v21 = v19;
      v22 = &s1;
LABEL_27:
      v23 = strcmp(v22, v21);
      v24 = *((char **)v17 + 2);
      v17 = *((char **)v17 + 3);
      if ( v23 >= 0 )
      {
        v16 = v20;
        v17 = v24;
      }
      if ( !v17 )
      {
        v27 = v18;
        v11 = v130;
        v14 = v134;
        v28 = v19;
        goto LABEL_36;
      }
    }
    if ( v25 )
    {
LABEL_34:
      v22 = *((const char **)v17 + 4);
      v21 = v123;
      v20 = v17;
      goto LABEL_27;
    }
    while ( 1 )
    {
      v26 = *((_QWORD *)v17 + 2);
      if ( !v26 )
        break;
      v16 = v17;
      v17 = *((char **)v17 + 2);
      if ( *(_QWORD *)(v26 + 40) )
        goto LABEL_34;
    }
    v28 = v19;
    v27 = nullptr;
    v11 = v130;
    v14 = v134;
    v16 = v17;
LABEL_36:
    if ( v16 == (char *)&v145 )
      goto LABEL_41;
    if ( *((_QWORD *)v16 + 5) )
    {
      v29 = *((const char **)v16 + 4);
      if ( !v27 )
        v28 = &s1;
LABEL_40:
      if ( strcmp(v28, v29) < 0 )
      {
LABEL_41:
        s = (char *)s2;
        v16 = (char *)sub_1D35E0(&v144, v16, (__int64 **)&s);
      }
    }
    else
    {
      v29 = &s1;
      if ( v27 )
        goto LABEL_40;
    }
    v30 = *((_QWORD *)v16 + 8);
    v31 = *((const char **)v16 + 7);
    if ( *((_QWORD *)v16 + 9) < (unsigned __int64)(v30 + 1) )
    {
      v116 = qvector_reserve(v16 + 56, v31, v30 + 1, 24);
      *((_QWORD *)v16 + 7) = v116;
      v30 = *((_QWORD *)v16 + 8);
      v31 = (const char *)v116;
    }
    v32 = &v31[24 * v30];
    *(_QWORD *)v32 = 0;
    *(_OWORD *)(v32 + 8) = 0;
    ++*((_QWORD *)v16 + 8);
    if ( s2[0] )
    {
      s2[1] = nullptr;
      qfree(s2[0], v31);
    }
    sub_1A1F60((__int64)s2, v122);
    v33 = s2[1];
    if ( s2[1] )
    {
      v34 = s2[1] + 2;
      v35 = s2[1] + 3;
      v33 = s2[1] - 1;
    }
    else
    {
      v35 = &byte_4;
      v34 = (_BYTE *)(&dword_0 + 3);
    }
    v36 = s2[0];
    if ( v143 < (unsigned __int64)v35 )
    {
      v131 = v34;
      v126 = v35;
      s2[0] = (char *)qvector_reserve(s2, s2[0], v35, 1);
      v34 = v131;
      v36 = s2[0];
      v35 = v126;
    }
    s2[1] = v35;
    v34[(_QWORD)v36] = 0;
    v37 = &s1;
    v38 = &v33[(unsigned __int64)s2[0]];
    *(_WORD *)v38 = 26157;
    v38[2] = 103;
    if ( s2[1] )
      v37 = s2[0];
    sub_5264C0(v32, v37, v14, 1);
    if ( s2[0] )
    {
      s2[1] = nullptr;
      qfree(s2[0], v37);
    }
LABEL_54:
    if ( v128 == v119 )
      goto LABEL_88;
    sub_1A1F60((__int64)s2, "text_area_t");
    if ( !v146 )
    {
      v41 = (char *)&v145;
      goto LABEL_75;
    }
    v39 = &s1;
    v129 = v11;
    v40 = (char *)v146;
    v41 = (char *)&v145;
    v42 = s2[1];
    v43 = s2[0];
    if ( s2[1] )
      v39 = s2[0];
    v124 = v39;
    while ( 2 )
    {
      v49 = *((_QWORD *)v40 + 5);
      if ( v42 )
      {
        if ( v49 )
        {
LABEL_68:
          v46 = *((const char **)v40 + 4);
          v45 = v124;
          v44 = v40;
        }
        else
        {
          v44 = v40;
          v45 = v43;
          v46 = &s1;
        }
        v47 = strcmp(v46, v45);
        v48 = *((char **)v40 + 2);
        v40 = *((char **)v40 + 3);
        if ( v47 >= 0 )
        {
          v41 = v44;
          v40 = v48;
        }
        if ( !v40 )
        {
          v11 = v129;
          v51 = v42;
          v52 = v43;
          goto LABEL_70;
        }
        continue;
      }
      break;
    }
    if ( v49 )
      goto LABEL_68;
    while ( 1 )
    {
      v50 = *((_QWORD *)v40 + 2);
      if ( !v50 )
        break;
      v41 = v40;
      v40 = *((char **)v40 + 2);
      if ( *(_QWORD *)(v50 + 40) )
        goto LABEL_68;
    }
    v52 = v43;
    v11 = v129;
    v51 = nullptr;
    v41 = v40;
LABEL_70:
    if ( v41 == (char *)&v145 )
      goto LABEL_75;
    if ( *((_QWORD *)v41 + 5) )
    {
      v53 = *((const char **)v41 + 4);
      if ( !v51 )
        v52 = &s1;
LABEL_74:
      if ( strcmp(v52, v53) < 0 )
      {
LABEL_75:
        v139.m128i_i64[0] = (__int64)s2;
        v41 = (char *)sub_1D35E0(&v144, v41, (__int64 **)&v139);
      }
    }
    else
    {
      v53 = &s1;
      if ( v51 )
        goto LABEL_74;
    }
    v54 = *((_QWORD *)v41 + 8);
    v55 = *((const char **)v41 + 7);
    if ( *((_QWORD *)v41 + 9) < (unsigned __int64)(v54 + 1) )
    {
      v115 = qvector_reserve(v41 + 56, v55, v54 + 1, 24);
      *((_QWORD *)v41 + 7) = v115;
      v54 = *((_QWORD *)v41 + 8);
      v55 = (const char *)v115;
    }
    v56 = &v55[24 * v54];
    *(_QWORD *)v56 = 0;
    *(_OWORD *)(v56 + 8) = 0;
    ++*((_QWORD *)v41 + 8);
    if ( s2[0] )
    {
      s2[1] = nullptr;
      qfree(s2[0], v55);
    }
    sub_1A1F60((__int64)s2, v122);
    v57 = s2[1];
    if ( s2[1] )
    {
      v58 = s2[1] + 6;
      v59 = s2[1] + 7;
      v57 = s2[1] - 1;
    }
    else
    {
      v59 = &byte_8;
      v58 = &byte_7;
    }
    v60 = s2[0];
    if ( v143 < (unsigned __int64)v59 )
    {
      v127 = v59;
      s2[0] = (char *)qvector_reserve(s2, s2[0], v59, 1);
      v59 = v127;
      v60 = s2[0];
    }
    s2[1] = v59;
    v58[(_QWORD)v60] = 0;
    v61 = &s2[0][(unsigned __int64)v57];
    v62 = &s1;
    *(_DWORD *)v61 = 1768257325;
    *(_DWORD *)(v61 + 3) = 1952999273;
    if ( s2[1] )
      v62 = s2[0];
    sub_525C00(v56, v62, v119, 1);
    if ( s2[0] )
    {
      s2[1] = nullptr;
      qfree(s2[0], v62);
    }
LABEL_88:
    if ( v133 == v132 )
      goto LABEL_122;
    sub_1A1F60((__int64)s2, "text_area_t");
    if ( !v146 )
    {
      v65 = (char *)&v145;
      goto LABEL_109;
    }
    v63 = &s1;
    v125 = v11;
    v64 = (char *)v146;
    v65 = (char *)&v145;
    v66 = s2[1];
    v67 = s2[0];
    if ( s2[1] )
      v63 = s2[0];
    v120 = v63;
    while ( 2 )
    {
      v73 = *((_QWORD *)v64 + 5);
      if ( v66 )
      {
        if ( v73 )
        {
LABEL_102:
          v70 = *((const char **)v64 + 4);
          v69 = v120;
          v68 = v64;
        }
        else
        {
          v68 = v64;
          v69 = v67;
          v70 = &s1;
        }
        v71 = strcmp(v70, v69);
        v72 = *((char **)v64 + 2);
        v64 = *((char **)v64 + 3);
        if ( v71 >= 0 )
        {
          v65 = v68;
          v64 = v72;
        }
        if ( !v64 )
        {
          v11 = v125;
          v75 = v66;
          v76 = v67;
          goto LABEL_104;
        }
        continue;
      }
      break;
    }
    if ( v73 )
      goto LABEL_102;
    while ( 1 )
    {
      v74 = *((_QWORD *)v64 + 2);
      if ( !v74 )
        break;
      v65 = v64;
      v64 = *((char **)v64 + 2);
      if ( *(_QWORD *)(v74 + 40) )
        goto LABEL_102;
    }
    v76 = v67;
    v11 = v125;
    v75 = nullptr;
    v65 = v64;
LABEL_104:
    if ( v65 == (char *)&v145 )
      goto LABEL_109;
    if ( *((_QWORD *)v65 + 5) )
    {
      v77 = *((const char **)v65 + 4);
      if ( !v75 )
        v76 = &s1;
LABEL_108:
      if ( strcmp(v76, v77) < 0 )
      {
LABEL_109:
        v141[0] = s2;
        v65 = (char *)sub_1D35E0(&v144, v65, (__int64 **)v141);
      }
    }
    else
    {
      v77 = &s1;
      if ( v75 )
        goto LABEL_108;
    }
    v78 = *((_QWORD *)v65 + 8);
    v79 = *((const char **)v65 + 7);
    if ( *((_QWORD *)v65 + 9) < (unsigned __int64)(v78 + 1) )
    {
      v117 = qvector_reserve(v65 + 56, v79, v78 + 1, 24);
      *((_QWORD *)v65 + 7) = v117;
      v78 = *((_QWORD *)v65 + 8);
      v79 = (const char *)v117;
    }
    v80 = &v79[24 * v78];
    *(_QWORD *)v80 = 0;
    *(_OWORD *)(v80 + 8) = 0;
    ++*((_QWORD *)v65 + 8);
    if ( s2[0] )
    {
      s2[1] = nullptr;
      qfree(s2[0], v79);
    }
    sub_1A1F60((__int64)s2, v122);
    v81 = s2[1];
    if ( s2[1] )
    {
      v82 = s2[1] + 6;
      v83 = s2[1] + 7;
      v81 = s2[1] - 1;
    }
    else
    {
      v83 = &byte_8;
      v82 = &byte_7;
    }
    v84 = s2[0];
    if ( v143 < (unsigned __int64)v83 )
    {
      v121 = v83;
      s2[0] = (char *)qvector_reserve(s2, s2[0], v83, 1);
      v83 = v121;
      v84 = s2[0];
    }
    s2[1] = v83;
    v82[(_QWORD)v84] = 0;
    v85 = &s2[0][(unsigned __int64)v81];
    v86 = &s1;
    *(_DWORD *)v85 = 1635019053;
    *(_DWORD *)(v85 + 3) = 1667853409;
    if ( s2[1] )
      v86 = s2[0];
    sub_525C00(v80, v86, v132, 1);
    if ( s2[0] )
    {
      s2[1] = nullptr;
      qfree(s2[0], v86);
    }
LABEL_122:
    v11 += 2;
  }
  while ( v118 != 11 );
  sub_1D3700(&v144, 0xFFE1FFFF, (__int64)"HintColorQ", "CustomIDAMemo[hints=\"true\"]", (__int64)"line-bg-default");
  sub_1D3700(&v144, 0xFF00FFFF, (__int64)"AutoHighlightColorQ", "CustomIDAMemo", (__int64)"line-bg-highlight");
  v87 = (__int64)v147;
  v135 = 0;
  v136 = 0;
  if ( v147 != &v145 )
  {
    do
    {
      if ( *(_QWORD *)(v87 + 64) )
      {
        v88 = &s1;
        if ( *(_QWORD *)(v87 + 40) )
          v88 = *(const char **)(v87 + 32);
        sub_525060(&v135, v87 + 56, v88);
      }
      v87 = std::_Rb_tree_increment(v87);
    }
    while ( (int *)v87 != &v145 );
    if ( (_QWORD)v136 )
    {
      user_idadir = get_user_idadir();
      if ( user_idadir )
      {
        s = nullptr;
        v138 = 0;
        if ( (_QWORD)v136 )
        {
          v90 = nullptr;
          v91 = 0;
          v92 = 0;
          v93 = 0;
          while ( 1 )
          {
            v94 = v135 + 24 * v93;
            v95 = *(_QWORD *)(v94 + 8);
            if ( v95 )
            {
              v96 = v95 - 1;
              if ( v95 != 1 )
              {
                v97 = v95 - 1;
                if ( v92 )
                {
                  --v92;
                  v97 = v96 + v92;
                  v95 += v92;
                }
                if ( v91 < v95 )
                {
                  v118 = v97;
                  s = (char *)qvector_reserve(&s, v90, v95, 1);
                  v97 = v118;
                  v90 = s;
                }
                *(_QWORD *)&v138 = v95;
                v90[v97] = 0;
                memcpy(&s[v92], *(const void **)v94, v96);
                v92 = v138;
                v90 = s;
                v91 = *((_QWORD *)&v138 + 1);
              }
            }
            v98 = 2;
            if ( v92 )
              v98 = v92-- + 1;
            if ( v91 < v98 )
            {
              s = (char *)qvector_reserve(&s, v90, v98, 1);
              v90 = s;
            }
            *(_QWORD *)&v138 = v98;
            ++v93;
            v90[v92] = 10;
            s[v92 + 1] = 0;
            if ( v93 >= (unsigned __int64)v136 )
              break;
            v91 = *((_QWORD *)&v138 + 1);
            v92 = v138;
            v90 = s;
          }
        }
        qmakepath(v163, 4096, user_idadir, "themes", 0);
        qmakepath(v164, 4096, v163, "default", 0);
        qmakepath(v165, 4096, v164, "user.css", 0);
        if ( !(unsigned __int8)qisdir(v163) )
          qmkdir(v163, 511);
        if ( !(unsigned __int8)qisdir(v164) )
          qmkdir(v164, 511);
        sub_1B4DA0((__int64)&s, (__int64)v165);
        sub_169700(
          (int)"IDA 7.2 palette translated to theme CSS (%s)\n",
          (__int64)v165,
          v99,
          v100,
          v101,
          v102,
          (__m128)0LL,
          a2,
          a3,
          a4,
          v103,
          v104,
          a7,
          a8,
          v118);
        QT::QApplication::styleSheet((QT::QApplication *)&v139);
        v105 = (QT::QApplication *)QT::QCoreApplication::self;
        if ( (_QWORD)v138 )
        {
          v106 = v138 - 1;
          v107 = s;
          v108 = (unsigned __int64)(v138 - 1) >> 63;
        }
        else
        {
          LOBYTE(v108) = 0;
          v106 = 0;
          v107 = (char *)&s1;
        }
        if ( !v107 || (_BYTE)v108 )
        {
          v106 = 0;
          if ( v107 )
            v106 = strlen(v107);
        }
        QT::QString::fromUtf8(v141, v106, v107);
        v109 = _mm_load_si128(&v139);
        v143 = v140;
        *(__m128i *)s2 = v109;
        if ( v109.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)v109.m128i_i64[0], 1u);
        QT::QString::append((QT::QString *)s2, (const QT::QString *)v141);
        QT::QApplication::setStyleSheet(v105, (const QT::QString *)s2);
        sub_16D970((void **)s2);
        sub_16D970(v141);
        sub_16D970((void **)&v139);
        if ( s )
        {
          *(_QWORD *)&v138 = 0;
          qfree(s, (const char *)s2);
        }
      }
    }
  }
  reg_int_op("PortedToCss", 1, 1, 0);
  v110 = v135;
  if ( v135 )
  {
    v111 = v136;
    if ( (_QWORD)v136 )
    {
      v112 = 0;
      do
      {
        v113 = (__int64 *)(v110 + 24 * v112);
        v114 = *v113;
        if ( *v113 )
        {
          v113[1] = 0;
          qfree(v114, (_BYTE *)&dword_0 + 1);
          v110 = v135;
        }
        ++v112;
      }
      while ( v111 != v112 );
    }
    *(_QWORD *)&v136 = 0;
    qfree(v110, (_BYTE *)&dword_0 + 1);
  }
  sub_1CB220(v146, (_BYTE *)&dword_0 + 1);
  return v166 - __readfsqword(0x28u);
}
