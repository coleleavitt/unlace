/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C900
// Address: 0x000000000047C900

//----- (000000000047C900) ----------------------------------------------------
_BYTE *__fastcall sub_47C900(char *a1, __int64 a2, __m128i *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v6; // eax
  __int64 v7; // rdx
  char *v8; // rsi
  __int16 v10; // ax
  __int64 v11; // r12
  unsigned int v12; // eax
  char *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rbx
  char *v17; // rdi
  int v18; // eax
  int v19; // ebx
  __m128i *v20; // r10
  __int64 *v21; // r15
  int v22; // ebx
  __int64 *v23; // rbp
  int v24; // r12d
  __m128i *v25; // r10
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int16 v28; // ax
  char *v29; // rax
  int *v30; // rdi
  char v31; // al
  int v32; // r11d
  __int64 v33; // rbp
  __m128i *v34; // rcx
  int v35; // edx
  __int16 v36; // ax
  __m128i v37; // xmm0
  int v38; // edx
  __m128i *v39; // rcx
  __int16 v40; // ax
  int v41; // edx
  __m128i *v42; // rcx
  __int16 v43; // ax
  unsigned __int16 *v44; // rcx
  unsigned int v45; // edi
  __m128i *v46; // rdx
  int v47; // eax
  int v48; // esi
  unsigned int v49; // eax
  unsigned __int16 v50; // ax
  char *v51; // rcx
  char v52; // dl
  char *i; // rsi
  char v54; // al
  int v55; // edx
  char v56; // al
  int v57; // edx
  unsigned int v58; // r13d
  unsigned int v59; // ecx
  __m128i *v60; // r9
  int v61; // edi
  __int16 v62; // ax
  __m128i v63; // xmm0
  int v64; // edi
  __m128i *v65; // r9
  __int16 v66; // ax
  int v67; // edi
  __m128i *v68; // r9
  __int16 v69; // ax
  unsigned __int16 *v70; // r9
  unsigned int v71; // r10d
  __m128i *v72; // rdi
  int v73; // eax
  int v74; // edx
  unsigned int v75; // eax
  __int16 v76; // ax
  unsigned int v77; // ebx
  __int64 *v78; // r12
  __m128i v79; // xmm0
  __int16 epi16; // dx
  int v81; // ecx
  int v82; // eax
  unsigned int v83; // eax
  __m128i *v84; // rdi
  unsigned int v85; // esi
  unsigned int v86; // eax
  __m128i *v87; // rcx
  __int64 *v88; // rbx
  unsigned int v89; // r13d
  __m128i v90; // xmm0
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // r10
  unsigned int v94; // edx
  int v95; // eax
  int *v96; // rsi
  char *v97; // rax
  char v98; // cl
  char *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rsi
  int v102; // eax
  size_t v103; // rax
  __int64 v104; // rbx
  size_t v105; // rax
  char *v106; // r11
  __int64 v107; // rsi
  size_t v108; // r14
  unsigned int v109; // r10d
  unsigned int v110; // eax
  signed int v111; // r10d
  char *v112; // rcx
  unsigned int v113; // r10d
  char *v114; // rcx
  int v115; // eax
  __m128i *v116; // r10
  __m128i v117; // xmm0
  int v118; // r9d
  unsigned int v119; // esi
  unsigned __int16 *v120; // rcx
  __m128i *v121; // r11
  __m128i *v122; // rdx
  int v123; // eax
  int v124; // edi
  unsigned int v125; // eax
  __m128i v126; // xmm0
  size_t v127; // rax
  __int64 v128; // rbx
  signed int v129; // r13d
  unsigned int v130; // eax
  signed int v131; // ebx
  int v132; // eax
  size_t v133; // rbx
  size_t v134; // rax
  int v135; // eax
  int v136; // eax
  char *v137; // rdi
  size_t v138; // rdx
  unsigned int src; // [rsp+10h] [rbp-178h]
  char *srca; // [rsp+10h] [rbp-178h]
  unsigned int srcb; // [rsp+10h] [rbp-178h]
  __int64 v143; // [rsp+18h] [rbp-170h]
  __m128i *v144; // [rsp+18h] [rbp-170h]
  int v146; // [rsp+20h] [rbp-168h]
  int v147; // [rsp+24h] [rbp-164h]
  int v148; // [rsp+24h] [rbp-164h]
  __m128i *v149; // [rsp+28h] [rbp-160h]
  unsigned int v150; // [rsp+30h] [rbp-158h]
  unsigned int n; // [rsp+34h] [rbp-154h]
  const char *n_4; // [rsp+38h] [rbp-150h]
  __int64 v153; // [rsp+40h] [rbp-148h]
  __m128i *v154; // [rsp+48h] [rbp-140h]
  __m128i v155; // [rsp+50h] [rbp-138h] BYREF
  __m128i v156; // [rsp+60h] [rbp-128h] BYREF
  __m128i v157; // [rsp+70h] [rbp-118h] BYREF
  __m128i si128; // [rsp+80h] [rbp-108h] BYREF
  __m128i v159; // [rsp+90h] [rbp-F8h] BYREF
  int v160; // [rsp+A0h] [rbp-E8h]
  __int16 v161; // [rsp+A4h] [rbp-E4h]
  __m128i v162; // [rsp+B0h] [rbp-D8h] BYREF
  __int32 v163; // [rsp+C0h] [rbp-C8h]
  _WORD v164[6]; // [rsp+C4h] [rbp-C4h] BYREF
  __m128i v165; // [rsp+D0h] [rbp-B8h] BYREF
  __int32 v166; // [rsp+E0h] [rbp-A8h]
  __int16 v167; // [rsp+E4h] [rbp-A4h]
  __m128i v168; // [rsp+F0h] [rbp-98h] BYREF
  __int32 v169; // [rsp+100h] [rbp-88h]
  __int16 v170; // [rsp+104h] [rbp-84h] BYREF
  char v171[10]; // [rsp+106h] [rbp-82h] BYREF
  char s[56]; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v173; // [rsp+148h] [rbp-40h]

  v173 = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1225);
    BUG();
  }
  v4 = a2;
  v6 = sub_47C890(a3);
  if ( v6 == 3 )
  {
    v7 = a2;
    v8 = "+Inf";
    return sub_4821A0(a1, v8, v7);
  }
  if ( v6 > 3 )
  {
    if ( v6 == 4 )
    {
      v7 = a2;
      v8 = "-Inf";
      return sub_4821A0(a1, v8, v7);
    }
  }
  else
  {
    if ( !v6 )
      return (_BYTE *)(v173 - __readfsqword(0x28u));
    if ( v6 == 2 )
    {
      v7 = a2;
      v8 = "NaN";
      return sub_4821A0(a1, v8, v7);
    }
  }
  n = BYTE1(a4);
  v150 = BYTE2(a4);
  if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= (unsigned __int64)a2) )
  {
    v150 = 0;
    n = 0;
  }
  n_4 = "";
  v155 = _mm_loadu_si128(a3);
  v10 = v155.m128i_i16[7];
  si128 = _mm_load_si128((const __m128i *)&xmmword_48F5F0);
  if ( v155.m128i_i16[7] < 0 )
  {
    v10 = v155.m128i_i16[7] & 0x7FFF;
    v155.m128i_i16[7] &= ~0x8000u;
    n_4 = "-";
  }
  if ( !v10 )
  {
    if ( !v150 )
    {
      sub_485490(a1, a2, "%s0.0", n_4);
      return (_BYTE *)(v173 - __readfsqword(0x28u));
    }
    strcpy(s, "0.0");
    if ( n )
    {
      v147 = 0;
      LODWORD(v11) = v150;
      n = n - v150 - 3;
      goto LABEL_22;
    }
    goto LABEL_98;
  }
  v18 = sub_47B940((__int64)&qword_4A27E0, (__int64)&v155);
  v147 = v18;
  if ( !v18 )
  {
    v25 = &v165;
    goto LABEL_48;
  }
  if ( v18 >= 0 )
  {
    if ( v155.m128i_i16[7] )
    {
      sub_47AD20((__int64)&v155, &v165);
      v116 = &v165;
      if ( (v167 & 7) != 0 )
      {
        v148 = 0;
      }
      else
      {
        do
        {
          v117 = _mm_load_si128(v116);
          v163 = v116[1].m128i_i32[0];
          v162 = v117;
          v164[0] = 0;
          sub_47A400((__int64)&v162);
          sub_47A400((__int64)&v162);
          v119 = 0;
          v120 = v164;
          v122 = v121;
          do
          {
            v123 = v122->m128i_u16[0];
            v124 = *v120;
            v122 = (__m128i *)((char *)v122 - 2);
            --v120;
            v125 = v119 + v124 + v123;
            v120[1] = v125;
            v119 = HIWORD(v125);
          }
          while ( v122 != (__m128i *)&v165.m128i_i16[1] );
          for ( v162.m128i_i16[1] += 3; v162.m128i_i16[2]; ++v162.m128i_i16[1] )
            sub_47A400((__int64)&v162);
          if ( v164[0] )
            break;
          if ( v162.m128i_i16[1] > 0x3FFEu )
            break;
          v126 = _mm_load_si128(&v162);
          --v118;
          v116[1].m128i_i32[0] = v163;
          v167 = 0;
          *v116 = v126;
        }
        while ( v118 != -34 );
        v148 = v118;
      }
      v144 = v116;
      sub_47ACE0(v116, (__int64)&v155);
      v20 = v144;
    }
    else if ( v155.m128i_i16[6] < 0 )
    {
      v148 = 0;
      v20 = &v165;
    }
    else
    {
      v19 = 0;
      do
      {
        --v19;
        sub_47BA00((__int64)&v155, (__int64)&qword_4A2760, &v155);
      }
      while ( v155.m128i_i16[6] >= 0 );
      v148 = v19;
      v20 = &v165;
    }
    v143 = v4;
    v21 = qword_4A25C0;
    v22 = -4096;
    v23 = qword_4A26A0;
    v24 = v148;
    v154 = v20;
    v156 = _mm_load_si128(&v155);
    si128 = _mm_load_si128((const __m128i *)&xmmword_48F5F0);
    while ( (int)sub_47B940((__int64)&qword_4A27E0, (__int64)&v156) > 0 )
    {
      if ( (int)sub_47B940((__int64)v21, (__int64)&v156) >= 0 )
      {
        v24 += v22;
        sub_47BA00((__int64)&v156, (__int64)v23, &v156);
        sub_47BA00((__int64)&si128, (__int64)v23, &si128);
      }
      v22 /= 2;
      if ( v21 == qword_4A2680 )
        break;
      v21 += 2;
      v23 += 2;
    }
    v147 = v24;
    v4 = v143;
    sub_47BAD0((__int64)&qword_4A27E0, (__int64)&si128, &si128);
    v25 = v154;
    goto LABEL_48;
  }
  v147 = 0;
  v77 = 16;
  v157 = _mm_load_si128(&v155);
  v78 = &qword_4A2720;
  v157.m128i_i16[7] = 16494;
  do
  {
    sub_47BAD0((__int64)&v157, (__int64)v78, &si128);
    v79 = _mm_load_si128(&si128);
    epi16 = _mm_extract_epi16(v79, 7);
    v168 = v79;
    v81 = (epi16 & 0x7FFF) - 16382;
    if ( v81 <= 0 )
    {
      v156 = 0;
    }
    else
    {
      v82 = 112 - v81;
      v156 = _mm_load_si128(&v168);
      if ( 112 - v81 <= 0 )
        goto LABEL_139;
      if ( v82 <= 15 )
      {
        v87 = &v156;
      }
      else
      {
        v83 = (unsigned int)v82 >> 4;
        v84 = &v156;
        v85 = v83 - 1;
        v86 = 2 * v83;
        if ( v86 >= 8 )
        {
          LODWORD(v92) = 0;
          do
          {
            v93 = (unsigned int)v92;
            v92 = (unsigned int)(v92 + 8);
            *(__int64 *)((char *)v156.m128i_i64 + v93) = 0;
          }
          while ( (unsigned int)v92 < (v86 & 0xFFFFFFF8) );
          v84 = (__m128i *)((char *)&v156 + v92);
        }
        if ( (v86 & 4) != 0 )
        {
          v84->m128i_i32[0] = 0;
          v84 = (__m128i *)((char *)v84 + 4);
        }
        if ( (v86 & 2) != 0 )
          v84->m128i_i16[0] = 0;
        v82 = 96 - v81 - 16 * v85;
        v87 = (__m128i *)&v156.m128i_i16[v85 + 1];
      }
      v87->m128i_i16[0] &= *((_WORD *)qword_4A2780 + v82);
    }
    if ( epi16 < 0 )
    {
      v91 = 0;
      while ( v168.m128i_i16[v91] == v156.m128i_i16[v91] )
      {
        if ( ++v91 == 7 )
          goto LABEL_139;
      }
      sub_47B4C0((__int64)&v156, (__int64)&qword_4A27E0, &v156, 1);
    }
LABEL_139:
    if ( si128.m128i_i64[0] == v156.m128i_i64[0]
      && *(__int64 *)((char *)si128.m128i_i64 + 6) == *(__int64 *)((char *)v156.m128i_i64 + 6) )
    {
      v147 += v77;
      v157 = _mm_load_si128(&si128);
    }
    v78 += 2;
    v77 >>= 1;
  }
  while ( v78 != qword_4A2770 );
  v88 = qword_4A26A0;
  v89 = 4096;
  v157.m128i_i16[7] = v157.m128i_i16[7] + v155.m128i_i16[7] - 16494;
  v90 = _mm_load_si128(&v157);
  si128 = _mm_load_si128((const __m128i *)&xmmword_48F5F0);
  v155 = v90;
  do
  {
    if ( (int)sub_47B940((__int64)&qword_4A2760, (__int64)&v157) > 0 )
      break;
    if ( (int)sub_47B940((__int64)v88, (__int64)&v157) <= 0 )
    {
      sub_47BAD0((__int64)&v157, (__int64)v88, &v157);
      sub_47BA00((__int64)&si128, (__int64)v88, &si128);
      v147 += v89;
    }
    v88 += 2;
    v89 >>= 1;
  }
  while ( v88 != qword_4A2770 );
  v25 = &v165;
LABEL_48:
  v149 = v25;
  sub_47AD20((__int64)&si128, v25);
  v26 = _mm_load_si128(&v165);
  v160 = v166;
  v161 = 0;
  v159 = v26;
  sub_47AD20((__int64)&v155, v149);
  v27 = _mm_load_si128(&v165);
  v169 = v166;
  v170 = 0;
  v168 = v27;
  v28 = sub_47B300((__int64)&v159, (__int64)&v168);
  if ( v28 == 10 )
  {
    ++v147;
    v31 = 49;
  }
  else if ( v28 )
  {
    v31 = v28 + 48;
  }
  else
  {
    do
    {
      v29 = &v168.m128i_i8[4];
      v30 = &dword_4A27B4;
      while ( *(_WORD *)v29 == *(_WORD *)v30 )
      {
        v29 += 2;
        v30 = (int *)((char *)v30 + 2);
        if ( v29 == v171 )
        {
          v31 = 48;
          goto LABEL_54;
        }
      }
      v60 = (__m128i *)&v170;
      v61 = 0;
      do
      {
        if ( v60->m128i_i16[0] < 0 )
          v61 |= 1u;
        v62 = 2 * v60->m128i_i16[0];
        if ( (v61 & 2) != 0 )
          v62 |= 1u;
        v60 = (__m128i *)((char *)v60 - 2);
        v61 *= 2;
        v60->m128i_i16[1] = v62;
      }
      while ( v60 != (__m128i *)&v168.m128i_i16[1] );
      v63 = _mm_load_si128(&v168);
      v64 = 0;
      v65 = (__m128i *)v164;
      v163 = v169;
      v164[0] = 0;
      v162 = v63;
      do
      {
        if ( v65->m128i_i16[0] < 0 )
          v64 |= 1u;
        v66 = 2 * v65->m128i_i16[0];
        if ( (v64 & 2) != 0 )
          v66 |= 1u;
        v65 = (__m128i *)((char *)v65 - 2);
        v64 *= 2;
        v65->m128i_i16[1] = v66;
      }
      while ( v65 != (__m128i *)&v162.m128i_i16[1] );
      v67 = 0;
      v68 = (__m128i *)v164;
      do
      {
        if ( v68->m128i_i16[0] < 0 )
          v67 |= 1u;
        v69 = 2 * v68->m128i_i16[0];
        if ( (v67 & 2) != 0 )
          v69 |= 1u;
        v68 = (__m128i *)((char *)v68 - 2);
        v67 *= 2;
        v68->m128i_i16[1] = v69;
      }
      while ( v68 != (__m128i *)&v162.m128i_i16[1] );
      v70 = (unsigned __int16 *)&v170;
      v71 = 0;
      v72 = (__m128i *)v164;
      do
      {
        v73 = v72->m128i_u16[0];
        v74 = *v70;
        v72 = (__m128i *)((char *)v72 - 2);
        --v70;
        v75 = v71 + v74 + v73;
        v70[1] = v75;
        v71 = HIWORD(v75);
      }
      while ( v72 != (__m128i *)&v162.m128i_i16[1] );
      v76 = sub_47B300((__int64)&v159, (__int64)&v168);
      --v147;
    }
    while ( !v76 );
    v31 = v76 + 48;
  }
LABEL_54:
  v32 = (unsigned __int8)a4;
  s[0] = v31;
  s[1] = 46;
  if ( (unsigned __int8)a4 > 0x21u )
    v32 = 33;
  v153 = v4;
  v33 = 0;
  v146 = v32;
  do
  {
    v34 = (__m128i *)&v170;
    v35 = 0;
    do
    {
      if ( v34->m128i_i16[0] < 0 )
        v35 |= 1u;
      v36 = 2 * v34->m128i_i16[0];
      if ( (v35 & 2) != 0 )
        v36 |= 1u;
      v34 = (__m128i *)((char *)v34 - 2);
      v35 *= 2;
      v34->m128i_i16[1] = v36;
    }
    while ( v34 != (__m128i *)&v168.m128i_i16[1] );
    v37 = _mm_load_si128(&v168);
    v38 = 0;
    v39 = (__m128i *)v164;
    v163 = v169;
    v164[0] = 0;
    v162 = v37;
    do
    {
      if ( v39->m128i_i16[0] < 0 )
        v38 |= 1u;
      v40 = 2 * v39->m128i_i16[0];
      if ( (v38 & 2) != 0 )
        v40 |= 1u;
      v39 = (__m128i *)((char *)v39 - 2);
      v38 *= 2;
      v39->m128i_i16[1] = v40;
    }
    while ( v39 != (__m128i *)&v162.m128i_i16[1] );
    v41 = 0;
    v42 = (__m128i *)v164;
    do
    {
      if ( v42->m128i_i16[0] < 0 )
        v41 |= 1u;
      v43 = 2 * v42->m128i_i16[0];
      if ( (v41 & 2) != 0 )
        v43 |= 1u;
      v42 = (__m128i *)((char *)v42 - 2);
      v41 *= 2;
      v42->m128i_i16[1] = v43;
    }
    while ( v42 != (__m128i *)&v162.m128i_i16[1] );
    v44 = (unsigned __int16 *)&v170;
    v45 = 0;
    v46 = (__m128i *)v164;
    do
    {
      v47 = v46->m128i_u16[0];
      v48 = *v44;
      v46 = (__m128i *)((char *)v46 - 2);
      --v44;
      v49 = v45 + v48 + v47;
      v44[1] = v49;
      v45 = HIWORD(v49);
    }
    while ( v46 != (__m128i *)&v162.m128i_i16[1] );
    v50 = sub_47B300((__int64)&v159, (__int64)&v168);
    s[v33++ + 2] = v50 + 48;
  }
  while ( v146 >= (int)v33 );
  v4 = v153;
  v51 = &s[v146 + 2];
  v52 = *(v51 - 1);
  if ( v50 > 4u )
  {
    if ( v50 == 5 )
    {
      v96 = &dword_4A27B4;
      v97 = &v168.m128i_i8[4];
      while ( *(_WORD *)v97 == *(_WORD *)v96 )
      {
        v97 += 2;
        v96 = (int *)((char *)v96 + 2);
        if ( v97 == v171 )
        {
          if ( (v52 & 1) != 0 )
          {
            i = v51 - 1;
            v55 = v52 & 0x7F;
            v56 = *(v51 - 1) & 0x7F;
            goto LABEL_81;
          }
          goto LABEL_87;
        }
      }
    }
    for ( i = v51 - 1; ; --i )
    {
      v54 = v52;
      v55 = v52 & 0x7F;
      v56 = v54 & 0x7F;
      if ( v56 == 46 )
        break;
LABEL_81:
      *i = v56 + 1;
      if ( v55 + 1 <= 57 )
        goto LABEL_86;
      *i = 48;
      v52 = *(i - 1);
    }
    v57 = (*(i - 1))++;
    if ( v57 + 1 > 57 )
    {
      ++v147;
      *(i - 1) = 49;
    }
LABEL_86:
    v52 = *(v51 - 1);
  }
LABEL_87:
  while ( v52 == 48 )
  {
    v52 = *(v51 - 2);
    --v51;
  }
  if ( v52 == 46 )
    *v51++ = 48;
  *v51 = 0;
  if ( !n )
  {
    v16 = (int)sub_485490(a1, v153, "%s%s", n_4, s);
    goto LABEL_29;
  }
  v58 = -v147;
  if ( v147 > 0 )
    v58 = v147;
  if ( !v150 )
  {
    if ( !v147 )
    {
LABEL_98:
      sub_485490(a1, v4, "%s%s", n_4, s);
      return (_BYTE *)(v173 - __readfsqword(0x28u));
    }
    if ( n < v58 )
    {
      v16 = (int)sub_485490(a1, v153, "%s%s", n_4, s);
      goto LABEL_30;
    }
    if ( s[2] == 48 && !s[3] )
    {
      s[1] = 0;
      v11 = 0;
      goto LABEL_170;
    }
    v11 = 0;
LABEL_183:
    v103 = strlen(&s[2]);
    memmove(&s[1], &s[2], v103 + 1);
    if ( v150 )
    {
LABEL_184:
      if ( v147 > 0 )
      {
        LODWORD(v104) = n - v58;
        if ( n == v58 )
        {
          v104 = 0;
          v105 = strlen(s);
          v106 = a1;
          v107 = v153;
          v108 = v105;
          v109 = v105;
          if ( v58 < (unsigned int)v105 )
          {
LABEL_187:
            v110 = v109 - v58 - 1;
            v111 = v58 + 1;
            if ( v150 < v110 )
            {
              v136 = v111 + v11;
              LODWORD(v11) = 0;
              s[v136] = 0;
            }
            else
            {
              LODWORD(v11) = v150 - v110;
            }
            v108 = v111;
            v112 = (char *)(v104 + (int)sub_485490(v106, v107, "%s%.*s", n_4, v111, s));
            v113 = v58 + 1;
            goto LABEL_190;
          }
        }
        else
        {
          v104 = (unsigned int)v104;
          memset(a1, 32, (unsigned int)v104);
          a1[(unsigned int)v104] = 0;
          v134 = strlen(s);
          v106 = &a1[(unsigned int)v104];
          v107 = v153 - (unsigned int)v104;
          v108 = v134;
          v109 = v134;
          if ( v58 < (unsigned int)v134 )
            goto LABEL_187;
        }
        srcb = v109;
        v135 = sub_485490(v106, v107, "%s%.*s", n_4, v109, s);
        v113 = srcb;
        v112 = (char *)(v104 + v135);
        goto LABEL_190;
      }
      LODWORD(v128) = n - 1;
      if ( n == 1 )
      {
        v99 = a1;
        v100 = 1;
        v128 = 0;
      }
      else
      {
        v128 = (unsigned int)v128;
        memset(a1, 32, (unsigned int)v128);
        v99 = &a1[(unsigned int)v128];
        v100 = (unsigned int)v128 + 1LL;
        *v99 = 0;
      }
      v16 = v128 + 2;
      v98 = *n_4;
      if ( !*n_4 )
      {
LABEL_174:
        *v99 = 48;
        a1[v100] = 46;
        if ( v150 && (int)v11 < (int)v58 )
        {
          v102 = v153 - v16;
          if ( (int)v153 - (int)v16 >= (unsigned int)v11 )
            goto LABEL_178;
          goto LABEL_177;
        }
        v129 = v58 - 1;
        if ( v129 )
        {
          v137 = &a1[v16];
          v16 += v129;
          memset(v137, 48, v129);
          if ( v150 )
          {
            v11 = (unsigned int)(v11 - v129);
            goto LABEL_216;
          }
        }
        else if ( v150 )
        {
LABEL_216:
          v130 = strlen(s);
          if ( (unsigned int)v11 < v130 )
          {
            s[v11] = 0;
            sub_485490(&a1[v16], v153 - v16, "%s", s);
            return (_BYTE *)(v173 - __readfsqword(0x28u));
          }
          LODWORD(v11) = v11 - v130;
          v114 = s;
LABEL_192:
          v115 = sub_485490(&a1[v16], v153 - v16, "%s", v114);
          if ( !(_DWORD)v11 )
            return (_BYTE *)(v173 - __readfsqword(0x28u));
          v16 += v115;
          v102 = v153 - v16;
          if ( (int)v153 - (int)v16 >= (unsigned int)v11 )
          {
LABEL_179:
            v147 = 0;
            goto LABEL_28;
          }
LABEL_177:
          LODWORD(v11) = v102;
LABEL_178:
          if ( !(_DWORD)v11 )
            return (_BYTE *)(v173 - __readfsqword(0x28u));
          goto LABEL_179;
        }
LABEL_220:
        sub_485490(&a1[v16], v153 - v16, "%s", s);
        return (_BYTE *)(v173 - __readfsqword(0x28u));
      }
      v16 = v100 + 2;
      v101 = v100++;
LABEL_173:
      *v99 = v98;
      v99 = &a1[v101];
      goto LABEL_174;
    }
LABEL_170:
    if ( v147 > 0 )
    {
      v127 = strlen(s);
      v108 = v127;
      if ( v58 >= (unsigned int)v127 )
      {
        src = v127;
        v132 = sub_485490(a1, v153, "%s%.*s", n_4, v127, s);
        v113 = src;
        v112 = (char *)v132;
        if ( s[(unsigned int)v108] )
          goto LABEL_222;
      }
      else
      {
        v108 = (int)(v58 + 1);
        v112 = (char *)(int)sub_485490(a1, v153, "%s%.*s", n_4, v58 + 1, s);
        v113 = v58 + 1;
        if ( s[v58 + 1] )
          goto LABEL_190;
      }
      LODWORD(v11) = v11 + 1;
LABEL_190:
      if ( v58 < v113 )
      {
LABEL_191:
        v16 = (__int64)(v112 + 1);
        v112[(_QWORD)a1] = 46;
        v114 = &s[v108];
        goto LABEL_192;
      }
LABEL_222:
      srca = v112;
      v133 = (int)(v58 + 1 - v113);
      memset(&v112[(_QWORD)a1], 48, v133);
      v112 = &srca[v133];
      goto LABEL_191;
    }
    v98 = *n_4;
    if ( !*n_4 )
    {
      *(_WORD *)a1 = 11824;
      v131 = v58 - 1;
      if ( v58 == 1 )
      {
        v16 = 2;
      }
      else
      {
        v138 = v131;
        v16 = v131 + 2LL;
        memset(a1 + 2, 48, v138);
      }
      goto LABEL_220;
    }
    v99 = a1;
    v16 = 3;
    v100 = 2;
    v101 = 1;
    goto LABEL_173;
  }
  v11 = v150;
  v59 = n - 2 - (v150 + (v147 >= 0));
  n = v59;
  if ( !v147 )
    goto LABEL_22;
  if ( v59 >= v58 )
  {
    if ( s[2] == 48 && !s[3] )
    {
      s[1] = 0;
      goto LABEL_184;
    }
    goto LABEL_183;
  }
  n = v59 - ((v59 != 0) & ((unsigned int)v147 >> 31));
LABEL_22:
  v12 = strlen(&s[2]);
  if ( v150 < v12 )
  {
    v94 = v150;
    do
    {
      if ( s[v94 + 1] != 48 )
      {
        v95 = v94 + 2;
        LODWORD(v11) = v150 - v94;
        goto LABEL_161;
      }
      --v94;
    }
    while ( v94 );
    v95 = 2;
LABEL_161:
    s[v95] = 0;
  }
  else
  {
    LODWORD(v11) = v150 - v12;
  }
  if ( n )
  {
    v15 = n;
    memset(a1, 32, n);
    v13 = &a1[n];
    *v13 = 0;
    v14 = v4 - n;
  }
  else
  {
    v13 = a1;
    v14 = v4;
    v15 = 0;
  }
  v16 = v15 + (int)sub_485490(v13, v14, "%s%s", n_4, s);
  if ( (_DWORD)v11 )
  {
    if ( (int)v4 - (int)v16 >= (unsigned int)v11 || (LODWORD(v11) = v4 - v16, (_DWORD)v4 != (_DWORD)v16) )
    {
LABEL_28:
      v17 = &a1[v16];
      v16 += (int)v11;
      memset(v17, 48, (int)v11);
      a1[v16] = 0;
    }
  }
LABEL_29:
  if ( v147 )
LABEL_30:
    sub_485490(&a1[v16], v4 - v16, "e%d", v147);
  return (_BYTE *)(v173 - __readfsqword(0x28u));
}
// 47D994: variable 'v116' is possibly undefined
// 47D9C0: variable 'v121' is possibly undefined
// 47DA5C: variable 'v118' is possibly undefined
// 48F5F0: using guessed type __int128 xmmword_48F5F0;
// 4A25C0: using guessed type __int64 qword_4A25C0[24];
// 4A2680: using guessed type __int64 qword_4A2680[4];
// 4A26A0: using guessed type __int64 qword_4A26A0[16];
// 4A2720: using guessed type __int64 qword_4A2720;
// 4A2760: using guessed type __int64 qword_4A2760;
// 4A2770: using guessed type __int64 qword_4A2770[2];
// 4A2780: using guessed type __int64 qword_4A2780[6];
// 4A27B4: using guessed type int dword_4A27B4;
// 4A27E0: using guessed type __int64 qword_4A27E0;
// 4C94E1: using guessed type char byte_4C94E1;
