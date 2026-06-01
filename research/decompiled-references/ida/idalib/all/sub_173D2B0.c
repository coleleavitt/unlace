__int64 __fastcall sub_173D2B0(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7,
        __int128 a8,
        __int64 a9)
{
  __int64 v9; // rax
  const __m128i *v10; // r13
  __m128i *v11; // rbp
  __int64 v12; // r15
  __m128i *v13; // r13
  __int64 v14; // r10
  __m128i *v15; // r12
  signed __int64 v16; // rbp
  __m128i *v17; // r14
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  __m128i *v20; // rbx
  __int64 v21; // rax
  __int64 result; // rax
  __m128i *v23; // r14
  const __m128i *v24; // r15
  unsigned __int64 v25; // r12
  _QWORD *v26; // rbx
  _QWORD *v27; // rbp
  _QWORD *v28; // r13
  __m128i v29; // xmm6
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  char *v34; // rdi
  __int32 v35; // eax
  __int64 v36; // r10
  signed __int64 v37; // rbp
  __int64 v38; // rbx
  unsigned __int64 v39; // r15
  const __m128i *v40; // r12
  __m128i *v41; // r14
  _QWORD *v42; // rbx
  _QWORD *v43; // rbp
  _QWORD *v44; // r13
  __m128i v45; // xmm1
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  char *v50; // rdi
  __int32 v51; // eax
  const __m128i *v52; // r13
  __m128i *v53; // rbx
  __int128 v54; // kr00_16
  __int64 v55; // r15
  const __m128i *v56; // rbp
  const __m128i *v57; // rsi
  __m128i *v58; // rdi
  __int64 v59; // r14
  unsigned __int64 v60; // rbp
  _QWORD *v61; // r15
  _QWORD *v62; // r14
  _QWORD *v63; // r12
  __m128i v64; // xmm0
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  char *v69; // rdi
  __int32 v70; // eax
  const __m128i *v71; // rsi
  __m128i *v72; // rdi
  const __m128i *v73; // r15
  __m128i *v74; // rbp
  __m128i *v75; // r15
  const __m128i *v76; // r13
  const __m128i *v77; // r14
  __m128i *v78; // rbx
  _QWORD *v79; // r12
  __int64 v80; // r15
  __m128i v81; // xmm7
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rax
  _QWORD *i; // rax
  char *v87; // rdi
  __int8 v88; // al
  __int8 v89; // al
  __int8 v90; // al
  __int8 v91; // al
  __int8 v92; // al
  __int8 v93; // al
  __int8 v94; // al
  _QWORD *v95; // r12
  __int64 v96; // r15
  __m128i v97; // xmm3
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rax
  _QWORD *j; // rax
  char *v103; // rdi
  __int8 v104; // al
  __int8 v105; // al
  __int8 v106; // al
  __int8 v107; // al
  __int8 v108; // al
  __int8 v109; // al
  __int8 v110; // al
  __m128i *v111; // r12
  const __m128i *v112; // r14
  unsigned __int64 v113; // rbx
  unsigned __int64 v114; // rbx
  __m128i *v115; // [rsp+0h] [rbp-A8h]
  __m128i *v116; // [rsp+0h] [rbp-A8h]
  __m128i *v117; // [rsp+0h] [rbp-A8h]
  _QWORD *v118; // [rsp+0h] [rbp-A8h]
  _QWORD *v119; // [rsp+0h] [rbp-A8h]
  __m128i *v120; // [rsp+8h] [rbp-A0h]
  __m128i *v121; // [rsp+8h] [rbp-A0h]
  __m128i *v122; // [rsp+8h] [rbp-A0h]
  __int64 v123; // [rsp+8h] [rbp-A0h]
  __int64 v124; // [rsp+10h] [rbp-98h]
  const __m128i *v125; // [rsp+10h] [rbp-98h]
  const __m128i *v126; // [rsp+10h] [rbp-98h]
  __int128 v127; // [rsp+10h] [rbp-98h]
  __int64 v129; // [rsp+20h] [rbp-88h]
  __m128i *v130; // [rsp+20h] [rbp-88h]
  __int64 v131; // [rsp+20h] [rbp-88h]
  __m128i *v132; // [rsp+20h] [rbp-88h]
  const __m128i *v133; // [rsp+20h] [rbp-88h]
  unsigned int *v134; // [rsp+28h] [rbp-80h]
  unsigned int *v135; // [rsp+28h] [rbp-80h]
  const __m128i *v136; // [rsp+28h] [rbp-80h]
  __int64 v137; // [rsp+30h] [rbp-78h]
  __int64 v138; // [rsp+30h] [rbp-78h]
  __int64 v139; // [rsp+38h] [rbp-70h]

  v9 = a5;
  v10 = a6;
  v11 = a3;
  v115 = a1;
  if ( a7 <= a5 )
    v9 = a7;
  v120 = a2;
  v124 = a4;
  if ( a4 <= v9 )
  {
    v20 = a1;
    v132 = a2;
LABEL_39:
    result = (char *)v132 - (char *)v20;
    v39 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v132 - (char *)v20) >> 3);
    if ( (char *)v132 - (char *)v20 <= 0 )
      return result;
    v117 = v20;
    v40 = v20;
    v41 = (__m128i *)v10;
    v122 = v11;
    v126 = v10;
    do
    {
      v42 = (_QWORD *)v41[4].m128i_i64[0];
      v43 = (_QWORD *)v41[4].m128i_i64[1];
      v41->m128i_i64[0] = v40->m128i_i64[0];
      v44 = v42;
      v41->m128i_i64[1] = v40->m128i_i64[1];
      v41[1] = _mm_loadu_si128(v40 + 1);
      v41[2].m128i_i64[0] = v40[2].m128i_i64[0];
      v41[2].m128i_i64[1] = v40[2].m128i_i64[1];
      v45 = _mm_loadu_si128(v40 + 3);
      v41[4].m128i_i64[1] = 0;
      v41[5].m128i_i64[0] = 0;
      v41[4].m128i_i64[0] = 0;
      v41[3] = v45;
      v41[4].m128i_i64[0] = v40[4].m128i_i64[0];
      v46 = v40[4].m128i_i64[1];
      v40[4].m128i_i64[0] = 0;
      v47 = v41[4].m128i_i64[1];
      v41[4].m128i_i64[1] = v46;
      v48 = v40[5].m128i_i64[0];
      v40[4].m128i_i64[1] = v47;
      v49 = v41[5].m128i_i64[0];
      v41[5].m128i_i64[0] = v48;
      for ( v40[5].m128i_i64[0] = v49; v43 != v44; v44 += 8 )
      {
        while ( 1 )
        {
          v50 = (char *)v44[3];
          if ( v50 == (char *)(v44 + 5) )
            break;
          operator delete(v50);
          v44 += 8;
          if ( v43 == v44 )
            goto LABEL_44;
        }
      }
LABEL_44:
      if ( v42 )
        operator delete(v42);
      v51 = v40[5].m128i_i32[2];
      v41 = (__m128i *)((char *)v41 + 168);
      v40 = (const __m128i *)((char *)v40 + 168);
      v41[-5].m128i_i32[0] = v51;
      v41[-5].m128i_i32[1] = v40[-5].m128i_i32[1];
      v41[-5].m128i_i64[1] = v40[-5].m128i_i64[1];
      LOBYTE(v51) = v40[-4].m128i_i8[0] & 1 | v41[-4].m128i_i8[0] & 0xFE;
      v41[-4].m128i_i8[0] = v51;
      LOBYTE(v51) = v40[-4].m128i_i8[0] & 2 | v51 & 0xFD;
      v41[-4].m128i_i8[0] = v51;
      LOBYTE(v51) = v40[-4].m128i_i8[0] & 4 | v51 & 0xFB;
      v41[-4].m128i_i8[0] = v51;
      LOBYTE(v51) = v40[-4].m128i_i8[0] & 8 | v51 & 0xF7;
      v41[-4].m128i_i8[0] = v51;
      LOBYTE(v51) = v40[-4].m128i_i8[0] & 0x10 | v51 & 0xEF;
      v41[-4].m128i_i8[0] = v51;
      LOBYTE(v51) = v40[-4].m128i_i8[0] & 0x20 | v51 & 0xDF;
      v41[-4].m128i_i8[0] = v51;
      LOBYTE(v51) = v40[-4].m128i_i8[0] & 0x40 | v51 & 0xBF;
      v41[-4].m128i_i8[0] = v51;
      v41[-4].m128i_i8[0] = v40[-4].m128i_i8[0] & 0x80 | v51 & 0x7F;
      v41[-4].m128i_i8[1] = v40[-4].m128i_i8[1] & 3 | v41[-4].m128i_i8[1] & 0xFC;
      v41[-4].m128i_i32[0] = v40[-4].m128i_i32[0] & 0x3FC00 | v41[-4].m128i_i32[0] & 0xFFFC03FF;
      v41[-4].m128i_i32[1] = v40[-4].m128i_i32[1];
      *(__m128i *)((char *)v41 - 56) = _mm_loadu_si128((const __m128i *)((char *)v40 - 56));
      *(__m128i *)((char *)v41 - 40) = _mm_loadu_si128((const __m128i *)((char *)v40 - 40));
      *(__m128i *)((char *)v41 - 24) = _mm_loadu_si128((const __m128i *)((char *)v40 - 24));
      v41[-1].m128i_i64[1] = v40[-1].m128i_i64[1];
      --v39;
    }
    while ( v39 );
    result = a8;
    v52 = v126;
    v53 = v117;
    v54 = a8;
    v55 = a9;
    if ( v126 != v41 )
    {
      result = (__int64)v132;
      if ( v122 != v132 )
      {
        v56 = v132;
        do
        {
          while ( (unsigned __int8)sub_1BD5DB0(
                                     v54,
                                     v56,
                                     v52,
                                     (unsigned int)**((_DWORD **)&v54 + 1),
                                     *(unsigned int *)(v55 + 2972),
                                     1) )
          {
            v57 = v56;
            v58 = v53;
            v56 = (const __m128i *)((char *)v56 + 168);
            v53 = (__m128i *)((char *)v53 + 168);
            result = (__int64)sub_172F0A0(v58, v57);
            if ( v122 == v56 || v41 == v52 )
              goto LABEL_53;
          }
          v71 = v52;
          v72 = v53;
          v52 = (const __m128i *)((char *)v52 + 168);
          v53 = (__m128i *)((char *)v53 + 168);
          result = (__int64)sub_172F0A0(v72, v71);
        }
        while ( v41 != v52 && v122 != v56 );
      }
    }
LABEL_53:
    if ( v41 == v52 )
      return result;
    result = 0xCF3CF3CF3CF3CF3DLL;
    v59 = (char *)v41 - (char *)v52;
    v60 = 0xCF3CF3CF3CF3CF3DLL * (v59 >> 3);
    if ( v59 <= 0 )
      return result;
    do
    {
      v61 = (_QWORD *)v53[4].m128i_i64[0];
      v62 = (_QWORD *)v53[4].m128i_i64[1];
      v53->m128i_i64[0] = v52->m128i_i64[0];
      v63 = v61;
      v53->m128i_i64[1] = v52->m128i_i64[1];
      v53[1] = _mm_loadu_si128(v52 + 1);
      v53[2].m128i_i64[0] = v52[2].m128i_i64[0];
      v53[2].m128i_i64[1] = v52[2].m128i_i64[1];
      v64 = _mm_loadu_si128(v52 + 3);
      v53[4].m128i_i64[1] = 0;
      v53[5].m128i_i64[0] = 0;
      v53[4].m128i_i64[0] = 0;
      v53[3] = v64;
      v53[4].m128i_i64[0] = v52[4].m128i_i64[0];
      v65 = v52[4].m128i_i64[1];
      v52[4].m128i_i64[0] = 0;
      v66 = v53[4].m128i_i64[1];
      v53[4].m128i_i64[1] = v65;
      v67 = v52[5].m128i_i64[0];
      v52[4].m128i_i64[1] = v66;
      v68 = v53[5].m128i_i64[0];
      v53[5].m128i_i64[0] = v67;
      for ( v52[5].m128i_i64[0] = v68; v62 != v63; v63 += 8 )
      {
        while ( 1 )
        {
          v69 = (char *)v63[3];
          if ( v69 == (char *)(v63 + 5) )
            break;
          operator delete(v69);
          v63 += 8;
          if ( v62 == v63 )
            goto LABEL_58;
        }
      }
LABEL_58:
      if ( v61 )
        operator delete(v61);
      v70 = v52[5].m128i_i32[2];
      v53 = (__m128i *)((char *)v53 + 168);
      v52 = (const __m128i *)((char *)v52 + 168);
      v53[-5].m128i_i32[0] = v70;
      v53[-5].m128i_i32[1] = v52[-5].m128i_i32[1];
      v53[-5].m128i_i64[1] = v52[-5].m128i_i64[1];
      LOBYTE(v70) = v52[-4].m128i_i8[0] & 1 | v53[-4].m128i_i8[0] & 0xFE;
      v53[-4].m128i_i8[0] = v70;
      LOBYTE(v70) = v52[-4].m128i_i8[0] & 2 | v70 & 0xFD;
      v53[-4].m128i_i8[0] = v70;
      LOBYTE(v70) = v52[-4].m128i_i8[0] & 4 | v70 & 0xFB;
      v53[-4].m128i_i8[0] = v70;
      LOBYTE(v70) = v52[-4].m128i_i8[0] & 8 | v70 & 0xF7;
      v53[-4].m128i_i8[0] = v70;
      LOBYTE(v70) = v52[-4].m128i_i8[0] & 0x10 | v70 & 0xEF;
      v53[-4].m128i_i8[0] = v70;
      LOBYTE(v70) = v52[-4].m128i_i8[0] & 0x20 | v70 & 0xDF;
      v53[-4].m128i_i8[0] = v70;
      LOBYTE(v70) = v52[-4].m128i_i8[0] & 0x40 | v70 & 0xBF;
      v53[-4].m128i_i8[0] = v70;
      v53[-4].m128i_i8[0] = v52[-4].m128i_i8[0] & 0x80 | v70 & 0x7F;
      v53[-4].m128i_i8[1] = v52[-4].m128i_i8[1] & 3 | v53[-4].m128i_i8[1] & 0xFC;
      v53[-4].m128i_i32[0] = v52[-4].m128i_i32[0] & 0x3FC00 | v53[-4].m128i_i32[0] & 0xFFFC03FF;
      v53[-4].m128i_i32[1] = v52[-4].m128i_i32[1];
      *(__m128i *)((char *)v53 - 56) = _mm_loadu_si128((const __m128i *)((char *)v52 - 56));
      *(__m128i *)((char *)v53 - 40) = _mm_loadu_si128((const __m128i *)((char *)v52 - 40));
      *(__m128i *)((char *)v53 - 24) = _mm_loadu_si128((const __m128i *)((char *)v52 - 24));
      result = v52[-1].m128i_i64[1];
      v53[-1].m128i_i64[1] = result;
      --v60;
    }
    while ( v60 );
    return result;
  }
  v12 = a5;
  if ( a7 < a5 )
  {
    while ( 1 )
    {
      if ( v12 >= v124 )
      {
        v15 = v115;
        v36 = v12 / 2;
        v19 = v12 / 2;
        v138 = a9;
        v13 = (__m128i *)((char *)v120 + 168 * (v12 / 2));
        v131 = a8;
        v135 = (unsigned int *)_mm_loadu_si128((const __m128i *)&a8).m128i_i64[1];
        v37 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v120 - (char *)v115) >> 3);
        if ( (char *)v120 - (char *)v115 > 0 )
        {
          while ( 1 )
          {
            v38 = v37 >> 1;
            if ( (unsigned __int8)sub_1BD5DB0(
                                    v131,
                                    v13,
                                    (char *)v15 + 168 * (v37 >> 1),
                                    *v135,
                                    *(unsigned int *)(v138 + 2972),
                                    1) )
            {
              if ( !v38 )
              {
LABEL_34:
                v19 = v12 / 2;
                v36 = v12 / 2;
                v124 -= 0xCF3CF3CF3CF3CF3DLL * (((char *)v15 - (char *)v115) >> 3);
                v129 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v15 - (char *)v115) >> 3);
                goto LABEL_35;
              }
            }
            else
            {
              v15 = (__m128i *)((char *)v15 + 168 * (v37 >> 1) + 168);
              v38 = v37 - v38 - 1;
              if ( v38 <= 0 )
                goto LABEL_34;
            }
            v37 = v38;
          }
        }
        LODWORD(v129) = 0;
LABEL_35:
        v12 -= v36;
      }
      else
      {
        v13 = v120;
        v14 = v124 / 2;
        v129 = v124 / 2;
        v15 = (__m128i *)((char *)v115 + 168 * (v124 / 2));
        v137 = a8;
        v139 = a9;
        v134 = (unsigned int *)_mm_loadu_si128((const __m128i *)&a8).m128i_i64[1];
        v16 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a3 - (char *)v120) >> 3);
        if ( (char *)a3 - (char *)v120 > 0 )
        {
          v17 = v120;
          while ( 1 )
          {
            v18 = v16 >> 1;
            if ( (unsigned __int8)sub_1BD5DB0(
                                    v137,
                                    (char *)v17 + 168 * (v16 >> 1),
                                    v15,
                                    *v134,
                                    *(unsigned int *)(v139 + 2972),
                                    1) )
            {
              v17 = (__m128i *)((char *)v17 + 168 * (v16 >> 1) + 168);
              v18 = v16 - v18 - 1;
              if ( v18 <= 0 )
                goto LABEL_12;
            }
            else if ( !v18 )
            {
LABEL_12:
              v13 = v17;
              v14 = v124 / 2;
              v19 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v17 - (char *)v120) >> 3);
              v12 -= v19;
              goto LABEL_13;
            }
            v16 = v18;
          }
        }
        v19 = 0;
LABEL_13:
        v124 -= v14;
      }
      v20 = sub_173C660(v15, v120, v13, v124, v19, a6, a7);
      sub_173D2B0((_DWORD)v115, (_DWORD)v15, (_DWORD)v20, v129, v19, (_DWORD)a6, a7, a8, a9);
      v21 = v12;
      if ( a7 <= v12 )
        v21 = a7;
      if ( v21 >= v124 )
        break;
      v115 = v20;
      v120 = v13;
      if ( a7 >= v12 )
      {
        v130 = v13;
        v11 = a3;
        v10 = a6;
        goto LABEL_19;
      }
    }
    v132 = v13;
    v11 = a3;
    v10 = a6;
    goto LABEL_39;
  }
  v20 = a1;
  v130 = a2;
LABEL_19:
  result = (char *)v11 - (char *)v130;
  if ( (char *)v11 - (char *)v130 <= 0 )
    return result;
  v116 = v20;
  v23 = (__m128i *)v10;
  v24 = v130;
  v25 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v11 - (char *)v130) >> 3);
  v121 = v11;
  v125 = v10;
  while ( 1 )
  {
    v26 = (_QWORD *)v23[4].m128i_i64[0];
    v27 = (_QWORD *)v23[4].m128i_i64[1];
    v23->m128i_i64[0] = v24->m128i_i64[0];
    v28 = v26;
    v23->m128i_i64[1] = v24->m128i_i64[1];
    v23[1] = _mm_loadu_si128(v24 + 1);
    v23[2].m128i_i64[0] = v24[2].m128i_i64[0];
    v23[2].m128i_i64[1] = v24[2].m128i_i64[1];
    v29 = _mm_loadu_si128(v24 + 3);
    v23[4].m128i_i64[1] = 0;
    v23[5].m128i_i64[0] = 0;
    v23[4].m128i_i64[0] = 0;
    v23[3] = v29;
    v23[4].m128i_i64[0] = v24[4].m128i_i64[0];
    v30 = v24[4].m128i_i64[1];
    v24[4].m128i_i64[0] = 0;
    v31 = v23[4].m128i_i64[1];
    v23[4].m128i_i64[1] = v30;
    v32 = v24[5].m128i_i64[0];
    v24[4].m128i_i64[1] = v31;
    v33 = v23[5].m128i_i64[0];
    v23[5].m128i_i64[0] = v32;
    for ( v24[5].m128i_i64[0] = v33; v27 != v28; v28 += 8 )
    {
      while ( 1 )
      {
        v34 = (char *)v28[3];
        if ( v34 == (char *)(v28 + 5) )
          break;
        operator delete(v34);
        v28 += 8;
        if ( v27 == v28 )
          goto LABEL_24;
      }
    }
LABEL_24:
    if ( v26 )
      operator delete(v26);
    v35 = v24[5].m128i_i32[2];
    v24 = (const __m128i *)((char *)v24 + 168);
    v23[5].m128i_i32[2] = v35;
    v23[5].m128i_i32[3] = v24[-5].m128i_i32[1];
    v23[6].m128i_i64[0] = v24[-5].m128i_i64[1];
    LOBYTE(v35) = v24[-4].m128i_i8[0] & 1 | v23[6].m128i_i8[8] & 0xFE;
    v23[6].m128i_i8[8] = v35;
    LOBYTE(v35) = v24[-4].m128i_i8[0] & 2 | v35 & 0xFD;
    v23[6].m128i_i8[8] = v35;
    LOBYTE(v35) = v24[-4].m128i_i8[0] & 4 | v35 & 0xFB;
    v23[6].m128i_i8[8] = v35;
    LOBYTE(v35) = v24[-4].m128i_i8[0] & 8 | v35 & 0xF7;
    v23[6].m128i_i8[8] = v35;
    LOBYTE(v35) = v24[-4].m128i_i8[0] & 0x10 | v35 & 0xEF;
    v23[6].m128i_i8[8] = v35;
    LOBYTE(v35) = v24[-4].m128i_i8[0] & 0x20 | v35 & 0xDF;
    v23[6].m128i_i8[8] = v35;
    LOBYTE(v35) = v24[-4].m128i_i8[0] & 0x40 | v35 & 0xBF;
    v23[6].m128i_i8[8] = v35;
    v23[6].m128i_i8[8] = v24[-4].m128i_i8[0] & 0x80 | v35 & 0x7F;
    v23[6].m128i_i8[9] = v24[-4].m128i_i8[1] & 3 | v23[6].m128i_i8[9] & 0xFC;
    v23[6].m128i_i32[2] = v24[-4].m128i_i32[0] & 0x3FC00 | v23[6].m128i_i32[2] & 0xFFFC03FF;
    v23[6].m128i_i32[3] = v24[-4].m128i_i32[1];
    v23[7] = _mm_loadu_si128((const __m128i *)((char *)v24 - 56));
    v23[8] = _mm_loadu_si128((const __m128i *)((char *)v24 - 40));
    v23[9] = _mm_loadu_si128((const __m128i *)((char *)v24 - 24));
    v23[10].m128i_i64[0] = v24[-1].m128i_i64[1];
    result = (__int64)&v23[10].m128i_i64[1];
    if ( !--v25 )
      break;
    v23 = (__m128i *)((char *)v23 + 168);
  }
  v73 = (__m128i *)((char *)v23 + 168);
  v74 = v121;
  if ( v130 != v116 )
  {
    if ( v125 == (const __m128i *)result )
      return result;
    v75 = v130;
    v136 = v116;
    v133 = v125;
    v76 = v23;
    v127 = a8;
    v77 = (__m128i *)((char *)v75 - 168);
    v123 = a9;
    while ( 1 )
    {
      v78 = (__m128i *)((char *)v74 - 168);
      if ( (unsigned __int8)sub_1BD5DB0(
                              v127,
                              v76,
                              v77,
                              (unsigned int)**((_DWORD **)&v127 + 1),
                              *(unsigned int *)(v123 + 2972),
                              1) )
      {
        v79 = (_QWORD *)v74[-7].m128i_i64[1];
        v80 = v74[-6].m128i_i64[0];
        v74[-11].m128i_i64[1] = v77->m128i_i64[0];
        v74[-10].m128i_i64[0] = v77->m128i_i64[1];
        *(__m128i *)((char *)v74 - 152) = _mm_loadu_si128(v77 + 1);
        v74[-9].m128i_i64[1] = v77[2].m128i_i64[0];
        v74[-8].m128i_i64[0] = v77[2].m128i_i64[1];
        v81 = _mm_loadu_si128(v77 + 3);
        v74[-6].m128i_i64[0] = 0;
        v74[-6].m128i_i64[1] = 0;
        v74[-7].m128i_i64[1] = 0;
        *(__m128i *)((char *)v74 - 120) = v81;
        v74[-7].m128i_i64[1] = v77[4].m128i_i64[0];
        v82 = v77[4].m128i_i64[1];
        v77[4].m128i_i64[0] = 0;
        v83 = v74[-6].m128i_i64[0];
        v74[-6].m128i_i64[0] = v82;
        v84 = v77[5].m128i_i64[0];
        v77[4].m128i_i64[1] = v83;
        v85 = v74[-6].m128i_i64[1];
        v74[-6].m128i_i64[1] = v84;
        v77[5].m128i_i64[0] = v85;
        for ( i = v79; (_QWORD *)v80 != i; i += 8 )
        {
          while ( 1 )
          {
            v87 = (char *)i[3];
            if ( v87 == (char *)(i + 5) )
              break;
            v118 = i;
            operator delete(v87);
            i = v118 + 8;
            if ( (_QWORD *)v80 == v118 + 8 )
              goto LABEL_76;
          }
        }
LABEL_76:
        if ( v79 )
          operator delete(v79);
        v78[5].m128i_i32[2] = v77[5].m128i_i32[2];
        v78[5].m128i_i32[3] = v77[5].m128i_i32[3];
        v78[6].m128i_i64[0] = v77[6].m128i_i64[0];
        v88 = v77[6].m128i_i8[8] & 1 | v74[-4].m128i_i8[0] & 0xFE;
        v74[-4].m128i_i8[0] = v88;
        v89 = v77[6].m128i_i8[8] & 2 | v88 & 0xFD;
        v74[-4].m128i_i8[0] = v89;
        v90 = v77[6].m128i_i8[8] & 4 | v89 & 0xFB;
        v74[-4].m128i_i8[0] = v90;
        v91 = v77[6].m128i_i8[8] & 8 | v90 & 0xF7;
        v74[-4].m128i_i8[0] = v91;
        v92 = v77[6].m128i_i8[8] & 0x10 | v91 & 0xEF;
        v74[-4].m128i_i8[0] = v92;
        v93 = v77[6].m128i_i8[8] & 0x20 | v92 & 0xDF;
        v74[-4].m128i_i8[0] = v93;
        v94 = v77[6].m128i_i8[8] & 0x40 | v93 & 0xBF;
        v74[-4].m128i_i8[0] = v94;
        v74[-4].m128i_i8[0] = v77[6].m128i_i8[8] & 0x80 | v94 & 0x7F;
        v74[-4].m128i_i8[1] = v77[6].m128i_i8[9] & 3 | v74[-4].m128i_i8[1] & 0xFC;
        v74[-4].m128i_i32[0] = v77[6].m128i_i32[2] & 0x3FC00 | v74[-4].m128i_i32[0] & 0xFFFC03FF;
        v78[6].m128i_i32[3] = v77[6].m128i_i32[3];
        v78[7] = _mm_loadu_si128(v77 + 7);
        v78[8] = _mm_loadu_si128(v77 + 8);
        v78[9] = _mm_loadu_si128(v77 + 9);
        v78[10].m128i_i64[0] = v77[10].m128i_i64[0];
        if ( v77 == v136 )
        {
          v111 = (__m128i *)((char *)v74 - 168);
          v112 = (const __m128i *)((char *)v76 + 168);
          result = (char *)&v76[10].m128i_u64[1] - (char *)v133;
          v113 = 0xCF3CF3CF3CF3CF3DLL * (result >> 3);
          if ( result > 0 )
          {
            do
            {
              v112 = (const __m128i *)((char *)v112 - 168);
              v111 = (__m128i *)((char *)v111 - 168);
              result = (__int64)sub_172F0A0(v111, v112);
              --v113;
            }
            while ( v113 );
          }
          return result;
        }
        v77 = (const __m128i *)((char *)v77 - 168);
      }
      else
      {
        v95 = (_QWORD *)v74[-7].m128i_i64[1];
        v96 = v74[-6].m128i_i64[0];
        v74[-11].m128i_i64[1] = v76->m128i_i64[0];
        v74[-10].m128i_i64[0] = v76->m128i_i64[1];
        *(__m128i *)((char *)v74 - 152) = _mm_loadu_si128(v76 + 1);
        v74[-9].m128i_i64[1] = v76[2].m128i_i64[0];
        v74[-8].m128i_i64[0] = v76[2].m128i_i64[1];
        v97 = _mm_loadu_si128(v76 + 3);
        v74[-6].m128i_i64[0] = 0;
        v74[-6].m128i_i64[1] = 0;
        v74[-7].m128i_i64[1] = 0;
        *(__m128i *)((char *)v74 - 120) = v97;
        v74[-7].m128i_i64[1] = v76[4].m128i_i64[0];
        v98 = v76[4].m128i_i64[1];
        v76[4].m128i_i64[0] = 0;
        v99 = v74[-6].m128i_i64[0];
        v74[-6].m128i_i64[0] = v98;
        v100 = v76[5].m128i_i64[0];
        v76[4].m128i_i64[1] = v99;
        v101 = v74[-6].m128i_i64[1];
        v74[-6].m128i_i64[1] = v100;
        v76[5].m128i_i64[0] = v101;
        for ( j = v95; (_QWORD *)v96 != j; j += 8 )
        {
          while ( 1 )
          {
            v103 = (char *)j[3];
            if ( v103 == (char *)(j + 5) )
              break;
            v119 = j;
            operator delete(v103);
            j = v119 + 8;
            if ( (_QWORD *)v96 == v119 + 8 )
              goto LABEL_86;
          }
        }
LABEL_86:
        if ( v95 )
          operator delete(v95);
        v78[5].m128i_i32[2] = v76[5].m128i_i32[2];
        v78[5].m128i_i32[3] = v76[5].m128i_i32[3];
        v78[6].m128i_i64[0] = v76[6].m128i_i64[0];
        v104 = v76[6].m128i_i8[8] & 1 | v74[-4].m128i_i8[0] & 0xFE;
        v74[-4].m128i_i8[0] = v104;
        v105 = v76[6].m128i_i8[8] & 2 | v104 & 0xFD;
        v74[-4].m128i_i8[0] = v105;
        v106 = v76[6].m128i_i8[8] & 4 | v105 & 0xFB;
        v74[-4].m128i_i8[0] = v106;
        v107 = v76[6].m128i_i8[8] & 8 | v106 & 0xF7;
        v74[-4].m128i_i8[0] = v107;
        v108 = v76[6].m128i_i8[8] & 0x10 | v107 & 0xEF;
        v74[-4].m128i_i8[0] = v108;
        v109 = v76[6].m128i_i8[8] & 0x20 | v108 & 0xDF;
        v74[-4].m128i_i8[0] = v109;
        v110 = v76[6].m128i_i8[8] & 0x40 | v109 & 0xBF;
        v74[-4].m128i_i8[0] = v110;
        v74[-4].m128i_i8[0] = v76[6].m128i_i8[8] & 0x80 | v110 & 0x7F;
        v74[-4].m128i_i8[1] = v76[6].m128i_i8[9] & 3 | v74[-4].m128i_i8[1] & 0xFC;
        v74[-4].m128i_i32[0] = v76[6].m128i_i32[2] & 0x3FC00 | v74[-4].m128i_i32[0] & 0xFFFC03FF;
        v78[6].m128i_i32[3] = v76[6].m128i_i32[3];
        v78[7] = _mm_loadu_si128(v76 + 7);
        v78[8] = _mm_loadu_si128(v76 + 8);
        v78[9] = _mm_loadu_si128(v76 + 9);
        result = v76[10].m128i_i64[0];
        v78[10].m128i_i64[0] = result;
        if ( v133 == v76 )
          return result;
        v76 = (const __m128i *)((char *)v76 - 168);
      }
      v74 = (__m128i *)((char *)v74 - 168);
    }
  }
  result -= (__int64)v125;
  v114 = 0xCF3CF3CF3CF3CF3DLL * (result >> 3);
  if ( result > 0 )
  {
    do
    {
      v73 = (const __m128i *)((char *)v73 - 168);
      v74 = (__m128i *)((char *)v74 - 168);
      result = (__int64)sub_172F0A0(v74, v73);
      --v114;
    }
    while ( v114 );
  }
  return result;
}
