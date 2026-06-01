__int64 __fastcall sub_3258C0(
        __int64 a1,
        double a2,
        __m128 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char **v9; // rbx
  void *v10; // r12
  __m128i v11; // xmm0
  char *v12; // rax
  const char *v13; // r13
  size_t v14; // rax
  __int64 v15; // r14
  size_t v16; // r12
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  char *v19; // rax
  char **v20; // rbx
  void *v21; // r14
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  char *v24; // rax
  unsigned __int64 *v25; // rdi
  const char *v26; // r13
  size_t v27; // rax
  __int64 v28; // r14
  size_t v29; // r15
  const char *v30; // rax
  const char *v31; // r8
  const char *v32; // rdx
  double v33; // xmm0_8
  unsigned __int64 v34; // r14
  const __m128i *v35; // rax
  __m128i v36; // xmm0
  unsigned __int64 v37; // r15
  __m128i v38; // xmm0
  __int64 segm_para; // rax
  __int64 v40; // r13
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  double v43; // xmm0_8
  __int64 v44; // rax
  __int64 v45; // rsi
  int v46; // edx
  char *v47; // r13
  char *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __m128 v53; // xmm4
  __m128 v54; // xmm5
  const char *v55; // r13
  char *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  char *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __m128 v68; // xmm4
  __m128 v69; // xmm5
  char *v70; // rdx
  __int64 v71; // r9
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  unsigned int v74; // r13d
  unsigned __int64 *v75; // r12
  char v76; // al
  unsigned int v77; // r13d
  unsigned __int64 *prev_seg; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  __m128 v81; // xmm4
  __m128 v82; // xmm5
  unsigned __int64 v83; // rdi
  __int64 v84; // rcx
  unsigned __int64 *v85; // rax
  char v86; // dl
  __int16 v87; // r15
  bool v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // r8d
  int v92; // r9d
  __int64 v93; // r12
  const char *v94; // rsi
  int v95; // r12d
  int v96; // edx
  int v97; // ecx
  int v98; // r8d
  int v99; // r9d
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __m128 v104; // xmm4
  __m128 v105; // xmm5
  __int16 v106; // bx
  __int64 v107; // rax
  __int64 v108; // rdi
  __int16 v109; // dx
  __int16 v110; // ax
  __int16 v111; // dx
  unsigned __int64 v112; // rdx
  __int64 v113; // rbx
  __int64 v114; // r14
  __int64 *v115; // rax
  __int64 v116; // rdi
  unsigned __int64 v117; // rdx
  __int64 v118; // rbx
  __int64 v119; // r14
  __int64 *v120; // rax
  __int64 v121; // rdi
  const char *v123; // rsi
  __int128 v124; // rax
  const char *v125; // rsi
  __int64 v126; // rax
  char v127; // [rsp+0h] [rbp-630h]
  __int64 ph; // [rsp+8h] [rbp-628h]
  char v129; // [rsp+2Eh] [rbp-602h]
  char v130; // [rsp+2Fh] [rbp-601h]
  __m128i n; // [rsp+30h] [rbp-600h] BYREF
  void **v132; // [rsp+40h] [rbp-5F0h]
  __int64 v133; // [rsp+48h] [rbp-5E8h] BYREF
  unsigned __int16 v134; // [rsp+52h] [rbp-5DEh]
  unsigned __int16 v135; // [rsp+54h] [rbp-5DCh]
  _BYTE v136[6]; // [rsp+56h] [rbp-5DAh]
  int v137; // [rsp+5Ch] [rbp-5D4h]
  unsigned __int64 v138; // [rsp+60h] [rbp-5D0h] BYREF
  unsigned __int64 v139; // [rsp+68h] [rbp-5C8h] BYREF
  unsigned __int64 v140; // [rsp+70h] [rbp-5C0h] BYREF
  __int128 v141; // [rsp+78h] [rbp-5B8h]
  unsigned __int64 v142; // [rsp+90h] [rbp-5A0h] BYREF
  __int128 v143; // [rsp+98h] [rbp-598h]
  char *s1; // [rsp+B0h] [rbp-580h] BYREF
  __int128 v145; // [rsp+B8h] [rbp-578h]
  char *v146; // [rsp+D0h] [rbp-560h] BYREF
  __int128 v147; // [rsp+D8h] [rbp-558h]
  char *s2; // [rsp+F0h] [rbp-540h] BYREF
  __int128 v149; // [rsp+F8h] [rbp-538h]
  void *v150; // [rsp+110h] [rbp-520h] BYREF
  __m128i v151; // [rsp+118h] [rbp-518h] BYREF
  __m128i v152; // [rsp+130h] [rbp-500h] BYREF
  __m128i v153; // [rsp+140h] [rbp-4F0h]
  __m128i v154; // [rsp+150h] [rbp-4E0h]
  _BYTE v155[144]; // [rsp+160h] [rbp-4D0h] BYREF
  _BYTE v156[1032]; // [rsp+1F0h] [rbp-440h] BYREF
  unsigned __int64 v157; // [rsp+5F8h] [rbp-38h]

  n.m128i_i64[1] = a1;
  v157 = __readfsqword(0x28u);
  if ( !a1 )
    return 1;
  v140 = 0;
  v9 = &off_865EA0;
  v132 = &v150;
  v141 = 0;
  do
  {
    while ( 1 )
    {
      v13 = *v9;
      v150 = nullptr;
      v151 = 0;
      if ( v13 )
      {
        v14 = strlen(v13);
        v15 = v14 + 1;
        v16 = v14;
        v150 = (void *)qvector_reserve(v132, 0, v14 + 1, 1);
        v151.m128i_i64[0] = v15;
        memmove(v150, v13, v16);
        *((_BYTE *)v150 + v16) = 0;
      }
      v126 = v141;
      v125 = (const char *)v140;
      v17 = v141 + 1;
      if ( (unsigned __int64)v132 < v140 || (unsigned __int64)v132 >= v140 + 24LL * *((_QWORD *)&v141 + 1) )
        break;
      a8 = 0;
      v10 = v150;
      v11 = _mm_loadl_epi64(&v151);
      v150 = nullptr;
      a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v151.m128i_u64[1]);
      v151 = 0;
      if ( *((_QWORD *)&v141 + 1) < v17 )
      {
        n.m128i_i64[0] = a3.m128_u64[0];
        v133 = v11.m128i_i64[0];
        v140 = qvector_reserve(&v140, v140, v141 + 1, 24);
        v125 = (const char *)v140;
        a3 = (__m128)_mm_loadl_epi64(&n);
        v11 = _mm_loadl_epi64((const __m128i *)&v133);
        v126 = v141;
      }
      v12 = (char *)&v125[24 * v126];
      *(_QWORD *)v12 = v10;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v11, (__m128i)a3);
      *(_QWORD *)&v141 = v141 + 1;
      if ( v150 )
      {
        v151.m128i_i64[0] = 0;
        qfree(v150, v125);
      }
      if ( &off_865EE0 == (_UNKNOWN **)++v9 )
        goto LABEL_15;
    }
    if ( *((_QWORD *)&v141 + 1) < v17 )
    {
      v140 = qvector_reserve(&v140, v140, v141 + 1, 24);
      v125 = (const char *)v140;
      v126 = v141;
    }
    v18 = _mm_loadu_si128(&v151);
    ++v9;
    v19 = (char *)&v125[24 * v126];
    *(_QWORD *)v19 = v150;
    *(__m128i *)(v19 + 8) = v18;
    *(_QWORD *)&v141 = v141 + 1;
  }
  while ( &off_865EE0 != (_UNKNOWN **)v9 );
LABEL_15:
  v20 = &off_865E40;
  v142 = 0;
  v143 = 0;
  do
  {
    while ( 1 )
    {
      v26 = *v20;
      v150 = nullptr;
      v151 = 0;
      if ( v26 )
      {
        v27 = strlen(v26);
        v28 = v27 + 1;
        v29 = v27;
        v150 = (void *)qvector_reserve(v132, 0, v27 + 1, 1);
        v151.m128i_i64[0] = v28;
        memmove(v150, v26, v29);
        *((_BYTE *)v150 + v29) = 0;
      }
      v124 = v143;
      v123 = (const char *)v142;
      v25 = (unsigned __int64 *)(v143 + 1);
      if ( (unsigned __int64)v132 < v142 || (unsigned __int64)v132 >= v142 + 24LL * *((_QWORD *)&v143 + 1) )
        break;
      v21 = v150;
      v22 = _mm_loadl_epi64(&v151);
      v150 = nullptr;
      a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v151.m128i_u64[1]);
      v151 = 0;
      if ( *((_QWORD *)&v143 + 1) < (unsigned __int64)v25 )
      {
        n.m128i_i64[0] = a3.m128_u64[0];
        v133 = v22.m128i_i64[0];
        v142 = qvector_reserve(&v142, v142, v143 + 1, 24);
        v123 = (const char *)v142;
        a3 = (__m128)_mm_loadl_epi64(&n);
        v22 = _mm_loadl_epi64((const __m128i *)&v133);
        *(_QWORD *)&v124 = v143;
      }
      v23 = _mm_unpacklo_epi64(v22, (__m128i)a3);
      v24 = (char *)&v123[24 * v124];
      *(_QWORD *)v24 = v21;
      *(__m128i *)(v24 + 8) = v23;
      v25 = (unsigned __int64 *)v150;
      *(_QWORD *)&v143 = v143 + 1;
      if ( v150 )
      {
        v151.m128i_i64[0] = 0;
        *(double *)v23.m128i_i64 = qfree(v150, v123);
      }
      if ( ++v20 == (char **)algn_865E98 )
        goto LABEL_28;
    }
    if ( *((_QWORD *)&v143 + 1) < (unsigned __int64)v25 )
    {
      v25 = &v142;
      v142 = qvector_reserve(&v142, v142, v143 + 1, 24);
      v123 = (const char *)v142;
      *(_QWORD *)&v124 = v143;
    }
    *((_QWORD *)&v124 + 1) = v150;
    v23 = _mm_loadu_si128(&v151);
    ++v20;
    *(_QWORD *)&v124 = &v123[24 * v124];
    *(_QWORD *)v124 = v150;
    *(__m128i *)(v124 + 8) = v23;
    *(_QWORD *)&v143 = v143 + 1;
  }
  while ( v20 != (char **)algn_865E98 );
LABEL_28:
  LOBYTE(v133) = is_debugger_on(v25, v123, *((_QWORD *)&v124 + 1), *(double *)v23.m128i_i64);
  v30 = (const char *)&unk_5C2F25;
  v31 = ">";
  v32 = (const char *)&unk_5C2F25;
  if ( (_BYTE)v133 )
  {
    v30 = "<#Temporary segment created by the debugger#Deb~u~gger segment:c>";
    v32 = "<#Segment created by a file loader#~L~oader segment:c>>";
    v31 = (const char *)&unk_5C2F25;
  }
  v33 = qsnprintf(
          v156,
          1024,
          "%s%s%s%s%s                <Read:C>>%s\n\n\n",
          "@0:514[]\n"
          "Change segment attributes\n"
          "%/\n"
          "<Segment ~n~ame    :q:511:18::>\n"
          "<Segment cl~a~ss   :q:511:18::>\n"
          "<~S~tart address   :N::18::>\n"
          "<~E~nd address     :N::18::>\n"
          "\n"
          "<Com~b~ination:b::12::>    <~C~olor:K::12::>\n"
          "<Ali~g~nment  :b::12::>\n"
          "\n"
          "<~M~ove adjacent segments:c> <## Segment bitness##~1~6-bit:R10>  <##Segment permissions##Execute:C>\n"
          "<~D~isable addresses     :c>",
          v31,
          " <~3~2-bit:R11>                      <Write:C>\n",
          v30,
          "        <~6~4-bit:R12>>",
          v32);
  ph = get_ph(v156, (const char *)&elf_gnu_hash_bucket[42], v33);
  v134 = 1;
  v34 = *(_QWORD *)n.m128i_i64[1];
  while ( 1 )
  {
    *(_QWORD *)&v155[136] = 0xFFFFFFFF00000000LL;
    v154 = 0u;
    *(_QWORD *)v155 = 0;
    v152 = 0;
    v153 = 0;
    memset(&v155[8], 255, 128);
    v35 = (const __m128i *)getseg(v34);
    v36 = _mm_loadu_si128(v35);
    v138 = v34;
    v152 = v36;
    v37 = v36.m128i_u64[1];
    v153 = _mm_loadu_si128(v35 + 1);
    v38 = _mm_loadu_si128(v35 + 2);
    v139 = v152.m128i_u64[1];
    v154 = v38;
    *(__m128i *)v155 = _mm_loadu_si128(v35 + 3);
    *(__m128i *)&v155[16] = _mm_loadu_si128(v35 + 4);
    *(__m128i *)&v155[32] = _mm_loadu_si128(v35 + 5);
    *(__m128i *)&v155[48] = _mm_loadu_si128(v35 + 6);
    *(__m128i *)&v155[64] = _mm_loadu_si128(v35 + 7);
    *(__m128i *)&v155[80] = _mm_loadu_si128(v35 + 8);
    *(__m128i *)&v155[96] = _mm_loadu_si128(v35 + 9);
    *(__m128i *)&v155[112] = _mm_loadu_si128(v35 + 10);
    *(__m128i *)&v155[128] = _mm_loadu_si128(v35 + 11);
    segm_para = get_segm_para(&v152);
    s1 = nullptr;
    v40 = segm_para;
    v146 = nullptr;
    v145 = 0;
    v147 = 0;
    get_segm_name(&s1, &v152, 0);
    get_segm_class(&v146, &v152);
    s2 = nullptr;
    v149 = 0;
    if ( (_QWORD)v145 )
    {
      n.m128i_i64[0] = v145;
      s2 = (char *)qalloc_or_throw(v145);
      *((_QWORD *)&v149 + 1) = n.m128i_i64[0];
      memcpy(s2, s1, n.m128i_u64[0]);
      *(_QWORD *)&v149 = n.m128i_i64[0];
    }
    v43 = 0.0;
    v150 = nullptr;
    v151 = 0;
    if ( (_QWORD)v147 )
    {
      n.m128i_i64[0] = v147;
      v150 = (void *)qalloc_or_throw(v147);
      v151.m128i_i64[1] = n.m128i_i64[0];
      memcpy(v150, v146, n.m128i_u64[0]);
      v151.m128i_i64[0] = n.m128i_i64[0];
    }
    if ( (_BYTE)v133 )
    {
      v130 = (v154.m128i_i8[12] & 8) != 0;
      if ( (v154.m128i_i8[12] & 8) != 0 )
        v134 |= 4u;
      n.m128i_i8[0] = 0;
      if ( (v154.m128i_i8[12] & 0x10) != 0 )
      {
        v134 |= 8u;
        n.m128i_i8[0] = v133;
      }
    }
    else
    {
      n.m128i_i8[0] = 0;
      v130 = 0;
    }
    *(_WORD *)&v136[4] = 0;
    v135 = v154.m128i_u8[11];
    *(_DWORD *)v136 = v154.m128i_u8[10];
    v44 = 0;
    while ( v154.m128i_u8[8] != dword_5E7AE0[v44] )
    {
      if ( ++v44 == 11 )
        goto LABEL_43;
    }
    *(_DWORD *)&v136[2] = v44;
LABEL_43:
    v137 = v154.m128i_u8[9];
    v45 = (__int64)sub_3236F0;
    if ( !(unsigned int)sub_1697D0(
                          (int)v156,
                          (__int64)sub_3236F0,
                          (__int64)&s2,
                          (__int64)v132,
                          (__int64)&v138,
                          (__int64)&v139,
                          (__m128)0LL,
                          a3,
                          (__m128)-1LL,
                          (__m128)0LL,
                          v41,
                          v42,
                          a8,
                          a9,
                          (char)&v140) )
      break;
    v46 = dword_5E7AE0[*(int *)&v136[2]];
    v45 = n.m128i_i64[1];
    v154.m128i_i8[10] = v136[0];
    v154.m128i_i8[8] = v46;
    v154.m128i_i8[9] = v137;
    if ( *(_WORD *)(n.m128i_i64[1] + 40) != v154.m128i_i16[4]
      || (v45 = n.m128i_i64[1], *(_DWORD *)(n.m128i_i64[1] + 188) != *(_DWORD *)&v155[140])
      || v136[0] != *(_BYTE *)(n.m128i_i64[1] + 42) )
    {
      update_segm(&v152);
    }
    if ( v138 >= v139 )
    {
      sub_17CE30(1031);
      goto LABEL_96;
    }
    if ( v138 < 16 * v40 )
    {
      sub_17CE30(1032);
      goto LABEL_96;
    }
    if ( !(_QWORD)v149 )
    {
      v47 = (char *)&::s1;
      if ( !(_QWORD)v145 )
        goto LABEL_54;
LABEL_51:
      v48 = s1;
      goto LABEL_52;
    }
    v47 = s2;
    v48 = (char *)&::s1;
    if ( (_QWORD)v145 )
      goto LABEL_51;
LABEL_52:
    v45 = (__int64)v47;
    if ( strcmp(v48, v47) )
    {
      v45 = (__int64)v47;
      if ( !(unsigned int)set_segm_name(&v152, v47, 0) )
      {
        v45 = (__int64)&::s1;
        if ( (_QWORD)v149 )
          v45 = (__int64)s2;
        sub_169630(
          (int)"Invalid segment name: '%s'",
          v45,
          v49,
          v50,
          v51,
          v52,
          (__m128)0LL,
          a3,
          (__m128)-1LL,
          (__m128)0LL,
          v53,
          v54,
          a8,
          a9,
          v127);
        goto LABEL_96;
      }
    }
LABEL_54:
    if ( v151.m128i_i64[0] )
    {
      v55 = (const char *)v150;
      v56 = (char *)&::s1;
      if ( (_QWORD)v147 )
LABEL_56:
        v56 = v146;
      v45 = (__int64)v55;
      if ( strcmp(v56, v55) )
      {
        v45 = (__int64)v55;
        if ( !(unsigned int)set_segm_class(&v152, v55, 0) )
        {
          v45 = (__int64)&::s1;
          if ( v151.m128i_i64[0] )
            v45 = (__int64)v150;
          sub_169630(
            (int)"Invalid segment class: '%s'",
            v45,
            v57,
            v58,
            v59,
            v60,
            (__m128)0LL,
            a3,
            (__m128)-1LL,
            (__m128)0LL,
            v61,
            v62,
            a8,
            a9,
            v127);
          goto LABEL_96;
        }
      }
      goto LABEL_59;
    }
    v55 = &::s1;
    if ( (_QWORD)v147 )
      goto LABEL_56;
LABEL_59:
    if ( (*(_WORD *)(ph + 8) & 0x2002) == 0 || *(unsigned __int8 *)(n.m128i_i64[1] + 43) == v135 )
      goto LABEL_144;
    v63 = (char *)&::s1;
    if ( (_QWORD)v149 )
      v63 = s2;
    v45 = 1030;
    if ( (int)sub_300700(0, 1030, v63, (unsigned int)(1 << (v135 + 4))) <= 0 )
      goto LABEL_96;
    v45 = v135;
    if ( (unsigned __int8)set_segm_addressing(&v152) )
    {
LABEL_144:
      if ( v138 == v34 && v37 == v139 )
        goto LABEL_85;
      v70 = (char *)&::s1;
      if ( (_QWORD)v149 )
        v70 = s2;
      v45 = 1029;
      if ( (int)sub_300700(0, 1029, v70, v34, v37) <= 0 )
        goto LABEL_96;
      v45 = v138;
      if ( v37 < v138 || v139 < v34 )
      {
        sub_169630(
          (int)"New segment (%08a-%08a) does not intersect with old segment (%08a-%08a).\n"
               "Please delete old segment and create new one",
          v138,
          v139,
          v34,
          v37,
          v71,
          (__m128)0LL,
          a3,
          (__m128)-1LL,
          (__m128)0LL,
          v72,
          v73,
          a8,
          a9,
          v127);
      }
      else
      {
        v74 = v134;
        v75 = (unsigned __int64 *)getseg(v34);
        v76 = v74 & 1;
        v77 = (v74 >> 1) & 1;
        v129 = v76;
        if ( v138 != v34 )
        {
          prev_seg = (unsigned __int64 *)get_prev_seg(v34);
          v83 = v138;
          LOBYTE(v84) = prev_seg != nullptr;
          if ( v75 != prev_seg && prev_seg != nullptr && v129 && prev_seg[1] == v34 )
          {
            if ( v138 < *prev_seg )
              goto LABEL_161;
            v45 = v138;
            move_segm_start(v34, v138, v77);
          }
          else
          {
            if ( v138 < v34 )
            {
              sub_3250F0(v138, v34, v77);
              v83 = v138;
            }
            v45 = v83;
            set_segm_start(v34, v83, v77);
          }
        }
        if ( v139 == v37 )
          goto LABEL_85;
        v85 = (unsigned __int64 *)getseg(v37);
        v45 = v139;
        LOBYTE(v84) = v85 != nullptr;
        if ( v75 == v85 || v85 == nullptr || !v129 || *v85 != v37 )
        {
          if ( v37 < v139 )
          {
            sub_3250F0(v37, v139, v77);
            v45 = v139;
          }
          set_segm_end(*v75, v45, v77);
LABEL_85:
          if ( !(_BYTE)v133 )
            break;
          v86 = v134;
          v87 = v134 & 4;
          v88 = (v134 & 4) != 0;
          if ( v130 == (unsigned __int8)(v134 & 4) >> 2 )
            goto LABEL_105;
          v93 = getseg(v138);
          if ( !v93 )
          {
            if ( !under_debugger )
              interr(40238, v45, v89, v90, 0.0);
            BUG();
          }
          callui(45, (unsigned int)&callui, v89, v90, v91, v92);
          v94 = "loader";
          if ( v87 )
            v94 = "debugger";
          sub_1C76F0((int)"Converting segment to %s segment...", v94);
          v95 = change_segment_status(v93, v88);
          sub_1C78D0();
          v45 = (__int64)&callui;
          callui(46, (unsigned int)&callui, v96, v97, v98, v99);
          if ( !v95 )
          {
            v86 = v134;
LABEL_105:
            v106 = v86 & 8;
            if ( n.m128i_i8[0] != (unsigned __int8)(v86 & 8) >> 3 )
            {
              v107 = getseg(v138);
              v108 = v107;
              if ( v107 )
              {
                v109 = *(_WORD *)(v107 + 44);
                v110 = v109 & 0xFFEF;
                v111 = v109 | 0x10;
                if ( v106 )
                  v110 = v111;
                *(_WORD *)(v108 + 44) = v110;
                update_segm(v108);
              }
            }
            break;
          }
          if ( v95 == -2 )
          {
            v45 = (__int64)"missing memory range";
            goto LABEL_95;
          }
          if ( v95 >= -1 )
          {
            v45 = (__int64)"debugger is not running";
            if ( v95 == -1 )
              goto LABEL_95;
          }
          else
          {
            if ( v95 == -4 )
            {
              v45 = (__int64)"interrupted by user";
              goto LABEL_95;
            }
            v45 = (__int64)"not enough memory";
            if ( v95 == -3 )
            {
LABEL_95:
              sub_169630(
                (int)"Could not modify the segment status: %s",
                v45,
                v100,
                v101,
                v102,
                v103,
                (__m128)0LL,
                a3,
                (__m128)-1LL,
                (__m128)0LL,
                v104,
                v105,
                a8,
                a9,
                v127);
              goto LABEL_96;
            }
          }
          v45 = qstrerror((unsigned int)v95);
          goto LABEL_95;
        }
        if ( v85[1] >= v139 )
        {
          move_segm_start(v37, v139, v77);
          goto LABEL_85;
        }
LABEL_161:
        v45 = v138;
        sub_169630(
          (int)"New segment (%08a-%08a) would extend over more than two existing segments.",
          v138,
          v139,
          v84,
          v79,
          v80,
          (__m128)0LL,
          a3,
          (__m128)-1LL,
          (__m128)0LL,
          v81,
          v82,
          a8,
          a9,
          v127);
      }
    }
    else
    {
      sub_169700(
        (int)"Changing segment bitness failed\n",
        v45,
        v64,
        v65,
        v66,
        v67,
        (__m128)0LL,
        a3,
        (__m128)-1LL,
        (__m128)0LL,
        v68,
        v69,
        a8,
        a9,
        v127);
    }
LABEL_96:
    if ( v150 )
    {
      v151.m128i_i64[0] = 0;
      v43 = qfree(v150, (const char *)v45);
    }
    if ( s2 )
    {
      *(_QWORD *)&v149 = 0;
      v43 = qfree(s2, (const char *)v45, v43);
    }
    if ( v146 )
    {
      *(_QWORD *)&v147 = 0;
      v43 = qfree(v146, (const char *)v45, v43);
    }
    if ( s1 )
    {
      *(_QWORD *)&v145 = 0;
      qfree(s1, (const char *)v45, v43);
    }
  }
  if ( v150 )
  {
    v151.m128i_i64[0] = 0;
    v43 = qfree(v150, (const char *)v45);
  }
  if ( s2 )
  {
    *(_QWORD *)&v149 = 0;
    v43 = qfree(s2, (const char *)v45, v43);
  }
  if ( v146 )
  {
    *(_QWORD *)&v147 = 0;
    v43 = qfree(v146, (const char *)v45, v43);
  }
  if ( s1 )
  {
    *(_QWORD *)&v145 = 0;
    v43 = qfree(s1, (const char *)v45, v43);
  }
  v112 = v142;
  if ( v142 )
  {
    if ( (_QWORD)v143 )
    {
      v113 = 0;
      v114 = v143;
      do
      {
        v115 = (__int64 *)(v112 + 24 * v113);
        v116 = *v115;
        if ( *v115 )
        {
          v115[1] = 0;
          v43 = qfree(v116, (const char *)v45, v43);
          v112 = v142;
        }
        ++v113;
      }
      while ( v114 != v113 );
    }
    *(_QWORD *)&v143 = 0;
    v43 = qfree(v112, (const char *)v45, v43);
  }
  v117 = v140;
  if ( v140 )
  {
    if ( (_QWORD)v141 )
    {
      v118 = 0;
      v119 = v141;
      do
      {
        v120 = (__int64 *)(v117 + 24 * v118);
        v121 = *v120;
        if ( *v120 )
        {
          v120[1] = 0;
          v43 = qfree(v121, (const char *)v45, v43);
          v117 = v140;
        }
        ++v118;
      }
      while ( v119 != v118 );
    }
    *(_QWORD *)&v141 = 0;
    qfree(v117, (const char *)v45, v43);
  }
  return 1;
}
