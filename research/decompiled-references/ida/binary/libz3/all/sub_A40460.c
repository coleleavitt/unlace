__int64 __fastcall sub_A40460(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  unsigned int v3; // ebp
  __int64 v4; // r14
  char *v5; // r12
  char *v6; // rdx
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __m128i si128; // xmm0
  void *v12; // r13
  __int64 v13; // rdx
  void *v14; // r13
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r12
  unsigned int v19; // r14d
  const __m128i *v20; // rbx
  __int8 v21; // si
  __int64 v22; // rdx
  __int8 v23; // si
  __int64 v24; // rdx
  __int8 v25; // si
  __int64 v26; // rdx
  __m128i v27; // xmm0
  void *v28; // r15
  void *v29; // rdi
  __int64 v30; // rdx
  void *v31; // r15
  int v32; // r13d
  unsigned int v33; // edx
  unsigned int v34; // r15d
  _BYTE *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdi
  bool v48; // zf
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // r15
  __int32 v52; // edx
  __int32 v53; // edx
  void *v54; // rdi
  __int32 v55; // edx
  __m128i v56; // xmm0
  void *v57; // rdi
  unsigned int v58; // r13d
  const __m128i *v59; // rax
  void *v60; // rdi
  __int32 v61; // edx
  void *v62; // r13
  void *v63; // r12
  void *v64; // r13
  int v65; // edx
  _QWORD *v66; // r13
  void *v67; // r12
  void *v68; // r15
  int v69; // edx
  _QWORD *v70; // r13
  unsigned int v71; // r12d
  void *v72; // rdi
  char *v73; // rbp
  char *v74; // r14
  void *v75; // r13
  void *v76; // r13
  char *v77; // rsi
  __int64 v79; // r12
  char *v80; // rax
  __int32 *v81; // rdi
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r12
  char *v85; // rax
  __int32 *v86; // rdi
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  __int64 i; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rsi
  unsigned __int64 v92; // rax
  __int64 v93; // rcx
  char *v94; // [rsp+8h] [rbp-940h]
  __int64 v95; // [rsp+10h] [rbp-938h]
  void *v96; // [rsp+10h] [rbp-938h]
  int v97; // [rsp+20h] [rbp-928h]
  __int64 v98; // [rsp+20h] [rbp-928h]
  unsigned int v99; // [rsp+28h] [rbp-920h]
  char *v100; // [rsp+28h] [rbp-920h]
  int v101[2]; // [rsp+30h] [rbp-918h]
  void *v102; // [rsp+30h] [rbp-918h]
  void *v103; // [rsp+30h] [rbp-918h]
  int v104[2]; // [rsp+30h] [rbp-918h]
  int v105[2]; // [rsp+30h] [rbp-918h]
  char *v106; // [rsp+38h] [rbp-910h]
  __int64 v107; // [rsp+40h] [rbp-908h]
  __int64 v108; // [rsp+40h] [rbp-908h]
  __int64 v109; // [rsp+48h] [rbp-900h]
  const __m128i *v110; // [rsp+50h] [rbp-8F8h]
  const __m128i *v111; // [rsp+50h] [rbp-8F8h]
  int v112; // [rsp+60h] [rbp-8E8h]
  int v113; // [rsp+60h] [rbp-8E8h]
  unsigned int v114; // [rsp+64h] [rbp-8E4h]
  _BYTE *v116; // [rsp+A0h] [rbp-8A8h]
  unsigned int v117; // [rsp+A8h] [rbp-8A0h]
  _BYTE v118[16]; // [rsp+B0h] [rbp-898h] BYREF
  _QWORD v119[2]; // [rsp+C0h] [rbp-888h] BYREF
  _QWORD v120[2]; // [rsp+D0h] [rbp-878h] BYREF
  __int64 v121; // [rsp+E0h] [rbp-868h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-860h]
  __int64 v123; // [rsp+F0h] [rbp-858h] BYREF
  __int64 v124; // [rsp+F8h] [rbp-850h]
  __m128i v125; // [rsp+100h] [rbp-848h] BYREF
  _QWORD v126[2]; // [rsp+110h] [rbp-838h] BYREF
  _QWORD v127[2]; // [rsp+120h] [rbp-828h] BYREF
  __int32 v128; // [rsp+130h] [rbp-818h]
  _QWORD v129[2]; // [rsp+138h] [rbp-810h] BYREF
  _QWORD v130[2]; // [rsp+148h] [rbp-800h] BYREF
  __int16 v131; // [rsp+158h] [rbp-7F0h]
  __m128i v132; // [rsp+160h] [rbp-7E8h]
  void *v133; // [rsp+170h] [rbp-7D8h] BYREF
  __int64 v134; // [rsp+178h] [rbp-7D0h]
  __int32 v135; // [rsp+180h] [rbp-7C8h] BYREF
  char v136; // [rsp+184h] [rbp-7C4h]
  __int64 v137; // [rsp+188h] [rbp-7C0h]
  __int32 v138; // [rsp+190h] [rbp-7B8h] BYREF
  char v139; // [rsp+194h] [rbp-7B4h]
  __int64 v140; // [rsp+198h] [rbp-7B0h]
  __int32 v141; // [rsp+1A0h] [rbp-7A8h]
  __int32 v142; // [rsp+1A8h] [rbp-7A0h] BYREF
  char v143; // [rsp+1ACh] [rbp-79Ch]
  __int64 v144; // [rsp+1B0h] [rbp-798h]
  __int32 v145; // [rsp+1B8h] [rbp-790h] BYREF
  char v146; // [rsp+1BCh] [rbp-78Ch]
  __int64 v147; // [rsp+1C0h] [rbp-788h]
  __int16 v148; // [rsp+1C8h] [rbp-780h]
  __m128i v149[3]; // [rsp+1D0h] [rbp-778h] BYREF
  void *ptr; // [rsp+200h] [rbp-748h]
  __int64 v151; // [rsp+208h] [rbp-740h]
  _BYTE v152[1848]; // [rsp+210h] [rbp-738h] BYREF

  ptr = v152;
  v151 = 0x1000000000LL;
  v2 = *(__int64 **)(a2 + 8);
  if ( !v2 || (v3 = *((_DWORD *)v2 - 1)) == 0 )
  {
    v71 = 0;
    v116 = v118;
    goto LABEL_87;
  }
  v4 = a2;
  v5 = nullptr;
  v94 = (char *)(8LL * v3);
  sub_9B10A0((__int64)&v133, a1, *v2);
  while ( 1 )
  {
    v15 = v151;
    if ( (unsigned int)v151 < HIDWORD(v151) )
    {
      v6 = (char *)ptr;
    }
    else
    {
      v97 = 2 * HIDWORD(v151);
      v16 = sub_186B270(112LL * (unsigned int)(2 * HIDWORD(v151)));
      v15 = v151;
      v6 = (char *)v16;
      if ( (_DWORD)v151 )
      {
        v106 = (char *)v16;
        v99 = v3;
        v17 = 0;
        *(_QWORD *)v101 = v5;
        v18 = v16;
        v107 = v4;
        v19 = 0;
        do
        {
          ++v19;
          v18 += 112;
          v20 = (const __m128i *)((char *)ptr + v17);
          v17 += 112;
          v21 = v20[1].m128i_i8[4];
          *(_QWORD *)(v18 - 112) = v20->m128i_i64[0];
          *(_DWORD *)(v18 - 104) = v20->m128i_i32[2];
          *(_DWORD *)(v18 - 96) = v20[1].m128i_i32[0];
          *(_BYTE *)(v18 - 92) = v21 & 3 | *(_BYTE *)(v18 - 92) & 0xFC;
          v22 = v20[1].m128i_i64[1];
          v20[1].m128i_i64[1] = 0;
          *(_QWORD *)(v18 - 88) = v22;
          v23 = v20[2].m128i_i8[4];
          *(_DWORD *)(v18 - 80) = v20[2].m128i_i32[0];
          *(_BYTE *)(v18 - 76) = v23 & 3 | *(_BYTE *)(v18 - 76) & 0xFC;
          v24 = v20[2].m128i_i64[1];
          v20[2].m128i_i64[1] = 0;
          *(_QWORD *)(v18 - 72) = v24;
          v25 = v20[3].m128i_i8[12];
          *(_DWORD *)(v18 - 64) = v20[3].m128i_i32[0];
          *(_DWORD *)(v18 - 56) = v20[3].m128i_i32[2];
          *(_BYTE *)(v18 - 52) = v25 & 3 | *(_BYTE *)(v18 - 52) & 0xFC;
          v26 = v20[4].m128i_i64[0];
          v20[4].m128i_i64[0] = 0;
          *(_QWORD *)(v18 - 48) = v26;
          *(_DWORD *)(v18 - 40) = v20[4].m128i_i32[2];
          v27 = _mm_loadu_si128(v20 + 6);
          v28 = qword_1C7F2C0;
          v29 = qword_1C7F2C0;
          *(_BYTE *)(v18 - 36) = v20[4].m128i_i8[12] & 3 | *(_BYTE *)(v18 - 36) & 0xFC;
          v30 = v20[5].m128i_i64[0];
          v20[5].m128i_i64[0] = 0;
          *(_QWORD *)(v18 - 32) = v30;
          LOWORD(v30) = v20[5].m128i_i16[4];
          *(__m128i *)(v18 - 16) = v27;
          *(_WORD *)(v18 - 24) = v30;
          sub_182CBA0(v29, &v20[3].m128i_u64[1]);
          sub_182CBA0(v28, &v20[4].m128i_u64[1]);
          v31 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v20[1]);
          sub_182CBA0(v31, &v20[2]);
          v15 = v151;
        }
        while ( v19 < (unsigned int)v151 );
        v3 = v99;
        v5 = *(char **)v101;
        v6 = v106;
        v4 = v107;
      }
      if ( ptr && ptr != v152 )
      {
        v100 = v6;
        sub_186B220(ptr);
        v15 = v151;
        v6 = v100;
      }
      ptr = v6;
      HIDWORD(v151) = v97;
    }
    v5 += 8;
    v7 = (__m128i *)&v6[112 * v15];
    v7->m128i_i64[0] = (__int64)v133;
    v7->m128i_i32[2] = v134;
    v7[1].m128i_i32[0] = v135;
    v7[1].m128i_i8[4] = v136 & 3 | v7[1].m128i_i8[4] & 0xFC;
    v8 = v137;
    v137 = 0;
    v7[1].m128i_i64[1] = v8;
    v7[2].m128i_i32[0] = v138;
    v7[2].m128i_i8[4] = v139 & 3 | v7[2].m128i_i8[4] & 0xFC;
    v9 = v140;
    v140 = 0;
    v7[2].m128i_i64[1] = v9;
    v7[3].m128i_i32[0] = v141;
    v7[3].m128i_i32[2] = v142;
    v7[3].m128i_i8[12] = v143 & 3 | v7[3].m128i_i8[12] & 0xFC;
    v10 = v144;
    v144 = 0;
    v7[4].m128i_i64[0] = v10;
    v7[4].m128i_i32[2] = v145;
    LOBYTE(v10) = v7[4].m128i_i8[12];
    LODWORD(v151) = v15 + 1;
    si128 = _mm_load_si128(v149);
    v12 = qword_1C7F2C0;
    v7[4].m128i_i8[12] = v146 & 3 | v10 & 0xFC;
    v13 = v147;
    v147 = 0;
    v7[5].m128i_i64[0] = v13;
    LOWORD(v13) = v148;
    v7[6] = si128;
    v7[5].m128i_i16[4] = v13;
    sub_182CBA0(v12, &v142);
    sub_182CBA0(v12, &v145);
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v135);
    sub_182CBA0(v14, &v138);
    if ( v94 == v5 )
      break;
    sub_9B10A0((__int64)&v133, a1, *(_QWORD *)&v5[*(_QWORD *)(v4 + 8)]);
  }
  v32 = 0;
  v33 = 0;
  v34 = 16;
  v35 = v118;
  v116 = v118;
  while ( 1 )
  {
    v36 = v33;
    ++v32;
    ++v33;
    v35[v36] = 0;
    v117 = v33;
    if ( v3 == v32 )
      break;
    if ( v33 >= v34 )
    {
      v34 *= 2;
      v37 = sub_186B270(v34);
      v33 = v117;
      v35 = (_BYTE *)v37;
      if ( !v117 )
        goto LABEL_35;
      if ( v117 - 1 <= 6 || (unsigned __int64)(v37 - (_QWORD)(v116 + 1)) <= 0xE )
      {
        for ( i = 0; i != v117; ++i )
          v35[i] = v116[i];
        goto LABEL_35;
      }
      v38 = v117;
      if ( v117 - 1 <= 0xE )
      {
        v40 = 0;
      }
      else
      {
        v39 = 0;
        do
        {
          *(__m128i *)&v35[v39] = _mm_loadu_si128((const __m128i *)&v116[v39]);
          v39 += 16;
        }
        while ( 16LL * (v117 >> 4) != v39 );
        v40 = v117 & 0xFFFFFFF0;
        if ( (v117 & 0xF) == 0 )
          goto LABEL_35;
        v38 = v117 - v40;
        if ( v117 - v40 - 1 <= 6 )
          goto LABEL_28;
      }
      *(_QWORD *)&v35[v40] = *(_QWORD *)&v116[v40];
      v40 += v38 & 0xFFFFFFF8;
      if ( (v38 & 7) == 0 )
        goto LABEL_35;
LABEL_28:
      v35[v40] = v116[v40];
      v41 = v40 + 1;
      if ( (unsigned int)v41 < v117 )
      {
        v35[v41] = v116[v41];
        v42 = v40 + 2;
        if ( (unsigned int)v42 < v117 )
        {
          v35[v42] = v116[v42];
          v43 = v40 + 3;
          if ( (unsigned int)v43 < v117 )
          {
            v35[v43] = v116[v43];
            v44 = v40 + 4;
            if ( (unsigned int)v44 < v117 )
            {
              v35[v44] = v116[v44];
              v45 = v40 + 5;
              if ( (unsigned int)v45 < v117 )
              {
                v46 = v40 + 6;
                v35[v45] = v116[v45];
                if ( (unsigned int)v46 < v117 )
                  v35[v46] = v116[v46];
              }
            }
          }
        }
      }
LABEL_35:
      if ( v116 )
      {
        if ( v116 != v118 )
        {
          sub_186B220(v116);
          v33 = v117;
        }
      }
      v116 = v35;
    }
  }
  v108 = 0;
  v109 = 1;
  v133 = &v135;
  v134 = 0x1000000000LL;
  while ( 2 )
  {
    v47 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * v109 - 8);
    v119[0] = 0;
    v120[0] = 1;
    v48 = v35[v109 - 1] == 0;
    v98 = v47;
    v119[1] = 0;
    v120[1] = 0;
    if ( !v48 )
      goto LABEL_77;
    if ( !(unsigned __int8)sub_98B8A0(v47, (__int64)v119) )
    {
      v65 = v134;
      if ( (unsigned int)v134 >= HIDWORD(v134) )
      {
        v79 = (unsigned int)(2 * HIDWORD(v134));
        v80 = (char *)sub_186B270(8 * v79);
        v65 = v134;
        v81 = (__int32 *)v133;
        v66 = v80;
        if ( (_DWORD)v134 )
        {
          if ( (unsigned int)(v134 - 1) <= 2 || v80 == (char *)v133 + 8 )
          {
            v90 = 0;
            v91 = 8LL * (unsigned int)v134;
            do
            {
              v66[v90 / 8] = *(_QWORD *)&v81[v90 / 4];
              v90 += 8LL;
            }
            while ( v90 != v91 );
          }
          else
          {
            v82 = 0;
            v83 = 16LL * ((unsigned int)v134 >> 1);
            do
            {
              *(__m128i *)&v66[v82 / 8] = _mm_loadu_si128((const __m128i *)&v81[v82 / 4]);
              v82 += 16LL;
            }
            while ( v82 != v83 );
            if ( (v65 & 1) != 0 )
              v66[v65 & 0xFFFFFFFE] = *(_QWORD *)&v81[2 * (v65 & 0xFFFFFFFE)];
          }
        }
        if ( v81 != &v135 && v81 )
        {
          sub_186B220(v81);
          v65 = v134;
        }
        v133 = v66;
        HIDWORD(v134) = v79;
      }
      else
      {
        v66 = v133;
      }
      v66[v65] = v98;
      LODWORD(v134) = v65 + 1;
LABEL_77:
      v67 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v119);
      sub_182CBA0(v67, v120);
      v114 = v109;
      goto LABEL_68;
    }
    v114 = v109;
    if ( (unsigned int)v109 >= v3 )
    {
      v113 = v109;
LABEL_66:
      if ( v3 == v113 )
        goto LABEL_80;
      goto LABEL_67;
    }
    v49 = v109;
    while ( 1 )
    {
      while ( 1 )
      {
        v112 = v49;
        if ( !v116[v49] )
          break;
LABEL_64:
        if ( (unsigned int)++v49 >= v3 )
          goto LABEL_65;
      }
      v50 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * v49);
      v121 = 0;
      v122 = 0;
      v95 = v50;
      v123 = 1;
      v124 = 0;
      if ( (unsigned __int8)sub_98B8A0(v50, (__int64)&v121) )
        break;
      v64 = qword_1C7F2C0;
      ++v49;
      sub_182CBA0(qword_1C7F2C0, &v121);
      sub_182CBA0(v64, &v123);
      if ( (unsigned int)v49 >= v3 )
      {
LABEL_65:
        v113 = v112 + 1;
        goto LABEL_66;
      }
    }
    v51 = v109;
    while ( 2 )
    {
      v58 = v51;
      if ( v116[v51]
        || !(unsigned __int8)sub_98BF50(
                               v98,
                               (__int64)v119,
                               v95,
                               (__int64)&v121,
                               *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * v51)) )
      {
LABEL_56:
        if ( (unsigned int)++v51 >= v3 )
        {
          if ( v58 + 1 < v3 )
            goto LABEL_79;
LABEL_63:
          v62 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v121);
          sub_182CBA0(v62, &v123);
          goto LABEL_64;
        }
        continue;
      }
      break;
    }
    v59 = (const __m128i *)((char *)ptr + v108);
    v60 = qword_1C7F2C0;
    v125.m128i_i64[0] = *(_QWORD *)((char *)ptr + v108);
    v61 = *(_DWORD *)((char *)ptr + v108 + 8);
    v126[0] = 0;
    v125.m128i_i32[2] = v61;
    v126[1] = 0;
    v127[0] = 1;
    v127[1] = 0;
    if ( (*((_BYTE *)ptr + v108 + 20) & 1) == 0 )
    {
      LODWORD(v126[0]) = v59[1].m128i_i32[0];
      if ( (v59[2].m128i_i8[4] & 1) != 0 )
        goto LABEL_61;
      goto LABEL_48;
    }
    v110 = (const __m128i *)((char *)ptr + v108);
    sub_182C690(qword_1C7F2C0, v126, &v59[1]);
    v59 = v110;
    if ( (v110[2].m128i_i8[4] & 1) == 0 )
    {
LABEL_48:
      v52 = v59[2].m128i_i32[0];
      BYTE4(v127[0]) &= ~1u;
      LODWORD(v127[0]) = v52;
      goto LABEL_49;
    }
LABEL_61:
    *(_QWORD *)v104 = v59;
    sub_182C690(v60, v127, &v59[2]);
    v59 = *(const __m128i **)v104;
LABEL_49:
    v53 = v59[3].m128i_i32[0];
    v54 = qword_1C7F2C0;
    v129[0] = 0;
    v129[1] = 0;
    v128 = v53;
    v130[0] = 1;
    v130[1] = 0;
    if ( (v59[3].m128i_i8[12] & 1) != 0 )
    {
      v111 = v59;
      sub_182C690(qword_1C7F2C0, v129, &v59[3].m128i_u64[1]);
      v59 = v111;
    }
    else
    {
      LODWORD(v129[0]) = v59[3].m128i_i32[2];
    }
    if ( (v59[4].m128i_i8[12] & 1) != 0 )
    {
      *(_QWORD *)v105 = v59;
      sub_182C690(v54, v130, &v59[4].m128i_u64[1]);
      v59 = *(const __m128i **)v105;
    }
    else
    {
      v55 = v59[4].m128i_i32[2];
      BYTE4(v130[0]) &= ~1u;
      LODWORD(v130[0]) = v55;
    }
    v56 = _mm_loadu_si128(v59 + 6);
    v131 = v59[5].m128i_i16[4];
    v132 = v56;
    sub_B29360(&v125, (char *)ptr + 112 * v49);
    sub_B29360(&v125, (char *)ptr + 112 * v51);
    v57 = qword_1C7F2C0;
    if ( v125.m128i_i32[2] == 1 && SLODWORD(v126[0]) >= 0 )
    {
      v102 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v129);
      sub_182CBA0(v102, v130);
      v103 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v126);
      sub_182CBA0(v103, v127);
      goto LABEL_56;
    }
    v96 = qword_1C7F2C0;
    v116[v109 - 1] = 1;
    v116[v49] = 1;
    v116[v51] = 1;
    sub_182CBA0(v57, v129);
    sub_182CBA0(v96, v130);
    v68 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v126);
    sub_182CBA0(v68, v127);
    if ( v58 >= v3 )
      goto LABEL_63;
LABEL_79:
    sub_25A130((char *)&v121);
    if ( v3 == (_DWORD)v49 )
    {
LABEL_80:
      v69 = v134;
      if ( (unsigned int)v134 >= HIDWORD(v134) )
      {
        v84 = (unsigned int)(2 * HIDWORD(v134));
        v85 = (char *)sub_186B270(8 * v84);
        v69 = v134;
        v86 = (__int32 *)v133;
        v70 = v85;
        if ( (_DWORD)v134 )
        {
          if ( (unsigned int)(v134 - 1) <= 2 || v85 == (char *)v133 + 8 )
          {
            v92 = 0;
            v93 = 8LL * (unsigned int)v134;
            do
            {
              v70[v92 / 8] = *(_QWORD *)&v86[v92 / 4];
              v92 += 8LL;
            }
            while ( v92 != v93 );
          }
          else
          {
            v87 = 0;
            v88 = 16LL * ((unsigned int)v134 >> 1);
            do
            {
              *(__m128i *)&v70[v87 / 8] = _mm_loadu_si128((const __m128i *)&v86[v87 / 4]);
              v87 += 16LL;
            }
            while ( v87 != v88 );
            if ( (v69 & 1) != 0 )
              v70[v69 & 0xFFFFFFFE] = *(_QWORD *)&v86[2 * (v69 & 0xFFFFFFFE)];
          }
        }
        if ( v86 && v86 != &v135 )
        {
          sub_186B220(v86);
          v69 = v134;
        }
        v133 = v70;
        HIDWORD(v134) = v84;
      }
      else
      {
        v70 = v133;
      }
      v70[v69] = v98;
      LODWORD(v134) = v69 + 1;
    }
LABEL_67:
    v63 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v119);
    sub_182CBA0(v63, v120);
LABEL_68:
    ++v109;
    v108 += 112;
    if ( v114 < v3 )
    {
      v35 = v116;
      continue;
    }
    break;
  }
  if ( v3 == (_DWORD)v134 )
  {
    v72 = v133;
    v71 = 0;
  }
  else
  {
    v121 = 0;
    v122 = 0;
    v123 = 1;
    v124 = 0;
    sub_182CBA0(qword_1C7F2C0, &v123);
    BYTE4(v123) &= ~1u;
    LODWORD(v123) = 1;
    sub_B28C00(&v125, a1 + 776, &v121, 0, 1, 0);
    sub_25A130((char *)&v121);
    v71 = sub_A38360(a1, &v125, v134, (__int64 *)v133, *(unsigned int **)(v4 + 16));
    sub_25A130((char *)v129);
    sub_25A130((char *)v126);
    v72 = v133;
  }
  if ( v133 != nullptr && v133 != &v135 )
    sub_186B220(v72);
LABEL_87:
  if ( v116 != v118 && v116 )
    sub_186B220(v116);
  v73 = (char *)ptr;
  v74 = (char *)ptr + 112 * (unsigned int)v151;
  if ( ptr != v74 )
  {
    do
    {
      v75 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v73 + 56);
      sub_182CBA0(v75, v73 + 72);
      v76 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v73 + 16);
      v77 = v73 + 32;
      v73 += 112;
      sub_182CBA0(v76, v77);
    }
    while ( v74 != v73 );
    v74 = (char *)ptr;
  }
  if ( v74 != v152 && v74 )
    sub_186B220(v74);
  return v71;
}

