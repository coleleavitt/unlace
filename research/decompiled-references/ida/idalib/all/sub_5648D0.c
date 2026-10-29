void __fastcall sub_5648D0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  unsigned __int64 *v8; // r10
  __int64 v9; // r15
  unsigned __int64 *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbx
  unsigned __int64 *v13; // rax
  __int64 v14; // r10
  unsigned __int64 *v15; // r11
  unsigned __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // r13
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // r13
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rsi
  unsigned __int64 v33; // r14
  unsigned __int64 *v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // r13
  __m128i v38; // xmm0
  void *v39; // rdi
  __int64 v40; // r13
  __m128i v41; // xmm0
  void *v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rcx
  __m128i *v46; // r14
  unsigned __int64 v47; // r15
  __int64 v48; // rbx
  const __m128i *v49; // rbp
  __int64 v50; // r12
  __m128i v51; // xmm0
  void *v52; // rdi
  __int64 v53; // r12
  __m128i v54; // xmm0
  void *v55; // rdi
  __int64 v56; // rdi
  __m128i *v57; // rdi
  unsigned __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // r8
  unsigned __int64 v62; // rdx
  __m128i *v63; // rbx
  __int64 v64; // r12
  unsigned __int64 v65; // rbp
  __int64 v66; // r13
  __m128i v67; // xmm0
  void *v68; // rdi
  __int64 v69; // r13
  __m128i v70; // xmm0
  void *v71; // rdi
  __m128i *v72; // rdi
  unsigned __int64 *v73; // rbx
  unsigned __int64 v74; // rbp
  __int64 v75; // r12
  int v76; // r14d
  unsigned __int64 v77; // r13
  __m128i v78; // xmm0
  void *v79; // rdi
  unsigned __int64 v80; // r13
  __m128i v81; // xmm0
  void *v82; // rdi
  unsigned __int64 *v83; // rdi
  __int64 v84; // rbp
  __int64 v85; // rbx
  unsigned __int64 v86; // r14
  __int64 v87; // r12
  unsigned __int64 v88; // rbp
  __int64 v89; // r13
  __m128i si128; // xmm0
  void *v91; // rdi
  __int64 v92; // r13
  __m128i v93; // xmm0
  void *v94; // rdi
  __int64 v95; // rdi
  unsigned __int64 v96; // rsi
  __int64 v97; // rsi
  unsigned __int64 v98; // rdx
  unsigned __int64 *v99; // rbx
  unsigned __int64 v100; // rbp
  __int64 v101; // r12
  unsigned __int64 v102; // r13
  __m128i v103; // xmm0
  void *v104; // rdi
  unsigned __int64 v105; // r13
  __m128i v106; // xmm0
  void *v107; // rdi
  unsigned __int64 *v108; // rdi
  __m128i *v109; // rbx
  unsigned __int64 v110; // rbp
  __int64 v111; // r12
  unsigned __int64 *v112; // r14
  __int64 v113; // r13
  __m128i v114; // xmm0
  void *v115; // rdi
  __int64 v116; // r13
  __m128i v117; // xmm0
  void *v118; // rdi
  __m128i *v119; // rdi
  __int64 v120; // rbp
  __int64 v121; // rax
  int v122[4]; // [rsp+0h] [rbp-A8h] BYREF
  int v123[2]; // [rsp+10h] [rbp-98h]
  int v124[2]; // [rsp+18h] [rbp-90h]
  int v125[4]; // [rsp+20h] [rbp-88h] BYREF
  int v126[2]; // [rsp+30h] [rbp-78h]
  int v127[2]; // [rsp+38h] [rbp-70h]
  unsigned __int64 *v128; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v129; // [rsp+48h] [rbp-60h]
  unsigned __int64 *v130; // [rsp+50h] [rbp-58h]
  __int64 v131; // [rsp+58h] [rbp-50h]
  __int64 v132; // [rsp+60h] [rbp-48h]
  unsigned __int64 v133; // [rsp+68h] [rbp-40h]

  v7 = a4;
  v8 = a2;
  v9 = a1;
  v10 = a2;
  v11 = a5;
  v12 = a4;
  if ( a5 <= a4 )
    v7 = a5;
  *(_QWORD *)v122 = a1;
  *(_QWORD *)v126 = a3;
  *(_QWORD *)v123 = a6;
  if ( a7 < v7 )
  {
    *(_QWORD *)v124 = a7;
    if ( a4 <= a5 )
      goto LABEL_13;
LABEL_5:
    *(_QWORD *)v125 = v12 / 2;
    v13 = sub_561FB0(v8, *(__int64 *)v126, *(_QWORD *)(*(_QWORD *)v122 + 144 * (v12 / 2)));
    v16 = *(_QWORD *)v125;
    v10 = v13;
    v12 -= *(_QWORD *)v125;
    v17 = 0x8E38E38E38E38E39LL * (((__int64)v13 - v14) >> 4);
    if ( v12 <= v17 )
      goto LABEL_14;
LABEL_6:
    if ( *(__int64 *)v124 >= v17 )
    {
      if ( !v17 )
        goto LABEL_8;
      if ( (__int64)v10 - v14 <= 0 )
      {
        *(_QWORD *)v127 = 0;
        v97 = 0;
        v98 = 0x8E38E38E38E38E39LL * ((v14 - (__int64)v15) >> 4);
        if ( v14 - (__int64)v15 <= 0 )
          goto LABEL_8;
      }
      else
      {
        *(_QWORD *)v127 = v16;
        v128 = v15;
        v129 = v10;
        v130 = (unsigned __int64 *)v14;
        v131 = v12;
        v85 = *(_QWORD *)v123 + 64LL;
        v86 = 0x8E38E38E38E38E39LL * (((__int64)v10 - v14) >> 4);
        v132 = v11;
        v87 = v14 + 64;
        v88 = v86;
        do
        {
          *(_QWORD *)(v85 - 64) = *(_QWORD *)(v87 - 64);
          *(_QWORD *)(v85 - 56) = *(_QWORD *)(v87 - 56);
          v89 = *(_QWORD *)(v87 - 48);
          *(_QWORD *)(v87 - 48) = 0;
          si128 = _mm_loadu_si128((const __m128i *)(v87 - 40));
          *(_OWORD *)(v87 - 40) = 0;
          v91 = *(void **)(v85 - 48);
          if ( v91 )
          {
            *(_QWORD *)(v85 - 40) = 0;
            *(__m128i *)v125 = si128;
            qfree(v91);
            si128 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v85 - 48) = v89;
          *(__m128i *)(v85 - 40) = si128;
          v92 = *(_QWORD *)(v87 - 24);
          v93 = _mm_loadu_si128((const __m128i *)(v87 - 16));
          *(_QWORD *)(v87 - 24) = 0;
          *(_OWORD *)(v87 - 16) = 0;
          v94 = *(void **)(v85 - 24);
          if ( v94 )
          {
            *(_QWORD *)(v85 - 16) = 0;
            *(__m128i *)v125 = v93;
            qfree(v94);
            v93 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v85 - 24) = v92;
          v95 = v85;
          v87 += 144;
          *(__m128i *)(v85 - 16) = v93;
          v85 += 144;
          copy_tinfo_t(v95);
          *(__m128i *)(v85 - 136) = _mm_loadu_si128((const __m128i *)(v87 - 136));
          *(__m128i *)(v85 - 120) = _mm_loadu_si128((const __m128i *)(v87 - 120));
          *(__m128i *)(v85 - 104) = _mm_loadu_si128((const __m128i *)(v87 - 104));
          *(_DWORD *)(v85 - 88) = *(_DWORD *)(v87 - 88);
          *(_DWORD *)(v85 - 80) = *(_DWORD *)(v87 - 80);
          *(_DWORD *)(v85 - 76) = *(_DWORD *)(v87 - 76);
          *(_BYTE *)(v85 - 72) = *(_BYTE *)(v87 - 72);
          --v88;
        }
        while ( v88 );
        v96 = v86 - 1;
        v14 = (__int64)v130;
        v15 = v128;
        v16 = *(_QWORD *)v127;
        v10 = v129;
        if ( (__int64)(v86 - 1) < 0 )
          v96 = 0;
        v12 = v131;
        v11 = v132;
        v97 = 144 * v96 + 144;
        v98 = 0x8E38E38E38E38E39LL * (((char *)v130 - (char *)v128) >> 4);
        *(_QWORD *)v127 = 0x8E38E38E38E38E39LL * (v97 >> 4);
        if ( (char *)v130 - (char *)v128 <= 0 )
        {
LABEL_85:
          if ( v97 > 0 )
          {
            v128 = (unsigned __int64 *)v16;
            v129 = v10;
            v130 = (unsigned __int64 *)v12;
            v109 = (__m128i *)(v15 + 8);
            v110 = *(_QWORD *)v127;
            v131 = v11;
            v111 = *(_QWORD *)v123 + 64LL;
            v112 = v15;
            do
            {
              v109[-4].m128i_i64[0] = *(_QWORD *)(v111 - 64);
              v109[-4].m128i_i64[1] = *(_QWORD *)(v111 - 56);
              v113 = *(_QWORD *)(v111 - 48);
              *(_QWORD *)(v111 - 48) = 0;
              v114 = _mm_loadu_si128((const __m128i *)(v111 - 40));
              *(_OWORD *)(v111 - 40) = 0;
              v115 = (void *)v109[-3].m128i_i64[0];
              if ( v115 )
              {
                v109[-3].m128i_i64[1] = 0;
                *(__m128i *)v125 = v114;
                qfree(v115);
                v114 = _mm_load_si128((const __m128i *)v125);
              }
              v109[-3].m128i_i64[0] = v113;
              *(__m128i *)((char *)v109 - 40) = v114;
              v116 = *(_QWORD *)(v111 - 24);
              v117 = _mm_loadu_si128((const __m128i *)(v111 - 16));
              *(_QWORD *)(v111 - 24) = 0;
              *(_OWORD *)(v111 - 16) = 0;
              v118 = (void *)v109[-2].m128i_i64[1];
              if ( v118 )
              {
                v109[-1].m128i_i64[0] = 0;
                *(__m128i *)v125 = v117;
                qfree(v118);
                v117 = _mm_load_si128((const __m128i *)v125);
              }
              v109[-2].m128i_i64[1] = v116;
              v119 = v109;
              v111 += 144;
              v109[-1] = v117;
              v109 += 9;
              copy_tinfo_t(v119);
              *(__m128i *)((char *)v109 - 136) = _mm_loadu_si128((const __m128i *)(v111 - 136));
              *(__m128i *)((char *)v109 - 120) = _mm_loadu_si128((const __m128i *)(v111 - 120));
              *(__m128i *)((char *)v109 - 104) = _mm_loadu_si128((const __m128i *)(v111 - 104));
              v109[-6].m128i_i32[2] = *(_DWORD *)(v111 - 88);
              v109[-5].m128i_i32[0] = *(_DWORD *)(v111 - 80);
              v109[-5].m128i_i32[1] = *(_DWORD *)(v111 - 76);
              v109[-5].m128i_i8[8] = *(_BYTE *)(v111 - 72);
              --v110;
            }
            while ( v110 );
            LODWORD(v16) = (_DWORD)v128;
            LODWORD(v15) = (_DWORD)v112;
            v10 = v129;
            v12 = (__int64)v130;
            v120 = *(_QWORD *)v127 - 1LL;
            v11 = v131;
            if ( *(_QWORD *)v127 - 1LL < 0 )
              v120 = 0;
            v18 = (__int64)&v112[18 * v120 + 18];
            goto LABEL_9;
          }
LABEL_8:
          v18 = (__int64)v15;
          goto LABEL_9;
        }
      }
      v128 = (unsigned __int64 *)v16;
      v129 = v15;
      v130 = v10;
      v131 = v12;
      v99 = v10 - 10;
      v100 = v98;
      v132 = v11;
      v101 = v14 - 80;
      do
      {
        *(v99 - 8) = *(_QWORD *)(v101 - 64);
        *(v99 - 7) = *(_QWORD *)(v101 - 56);
        v102 = *(_QWORD *)(v101 - 48);
        *(_QWORD *)(v101 - 48) = 0;
        v103 = _mm_loadu_si128((const __m128i *)(v101 - 40));
        *(_OWORD *)(v101 - 40) = 0;
        v104 = (void *)*(v99 - 6);
        if ( v104 )
        {
          *(v99 - 5) = 0;
          *(__m128i *)v125 = v103;
          qfree(v104);
          v103 = _mm_load_si128((const __m128i *)v125);
        }
        *(v99 - 6) = v102;
        *(__m128i *)(v99 - 5) = v103;
        v105 = *(_QWORD *)(v101 - 24);
        v106 = _mm_loadu_si128((const __m128i *)(v101 - 16));
        *(_QWORD *)(v101 - 24) = 0;
        *(_OWORD *)(v101 - 16) = 0;
        v107 = (void *)*(v99 - 3);
        if ( v107 )
        {
          *(v99 - 2) = 0;
          *(__m128i *)v125 = v106;
          qfree(v107);
          v106 = _mm_load_si128((const __m128i *)v125);
        }
        *(v99 - 3) = v105;
        v108 = v99;
        v101 -= 144;
        *((__m128i *)v99 - 1) = v106;
        v99 -= 18;
        copy_tinfo_t(v108);
        *(__m128i *)(v99 + 19) = _mm_loadu_si128((const __m128i *)(v101 + 152));
        *(__m128i *)(v99 + 21) = _mm_loadu_si128((const __m128i *)(v101 + 168));
        *(__m128i *)(v99 + 23) = _mm_loadu_si128((const __m128i *)(v101 + 184));
        *((_DWORD *)v99 + 50) = *(_DWORD *)(v101 + 200);
        *((_DWORD *)v99 + 52) = *(_DWORD *)(v101 + 208);
        *((_DWORD *)v99 + 53) = *(_DWORD *)(v101 + 212);
        *((_BYTE *)v99 + 216) = *(_BYTE *)(v101 + 216);
        --v100;
      }
      while ( v100 );
      v16 = (unsigned __int64)v128;
      v15 = v129;
      v10 = v130;
      v12 = v131;
      v11 = v132;
      goto LABEL_85;
    }
    while ( 1 )
    {
LABEL_14:
      if ( *(__int64 *)v124 < v12 )
      {
        *(_QWORD *)v127 = v16;
        *(_QWORD *)v125 = v15;
        v121 = sub_563DB0((__int64)v15, v14, (__int64)v10);
        LODWORD(v16) = v127[0];
        LODWORD(v15) = v125[0];
        v18 = v121;
        goto LABEL_9;
      }
      if ( !v12 )
        goto LABEL_16;
      if ( v14 - (__int64)v15 <= 0 )
      {
        v62 = 0x8E38E38E38E38E39LL * (((__int64)v10 - v14) >> 4);
        if ( (__int64)v10 - v14 <= 0 )
        {
LABEL_16:
          v18 = (__int64)v10;
          goto LABEL_9;
        }
        *(_QWORD *)v127 = 0;
        v61 = *(_QWORD *)v123;
        v60 = 0;
        v57 = (__m128i *)(v15 + 8);
      }
      else
      {
        *(_QWORD *)v127 = v16;
        v129 = v15;
        v46 = (__m128i *)(v15 + 8);
        v130 = (unsigned __int64 *)v14;
        v132 = v11;
        v133 = 0x8E38E38E38E38E39LL * ((v14 - (__int64)v15) >> 4);
        v128 = (unsigned __int64 *)v17;
        v47 = v133;
        v131 = v12;
        v48 = *(_QWORD *)v123 + 64LL;
        v49 = (const __m128i *)(v15 + 8);
        do
        {
          *(_QWORD *)(v48 - 64) = v49[-4].m128i_i64[0];
          *(_QWORD *)(v48 - 56) = v49[-4].m128i_i64[1];
          v50 = v49[-3].m128i_i64[0];
          v51 = _mm_loadu_si128((const __m128i *)((char *)v49 - 40));
          v49[-3].m128i_i64[0] = 0;
          *(const __m128i *)((char *)&v49[-3] + 8) = 0;
          v52 = *(void **)(v48 - 48);
          if ( v52 )
          {
            *(_QWORD *)(v48 - 40) = 0;
            *(__m128i *)v125 = v51;
            qfree(v52);
            v51 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v48 - 48) = v50;
          *(__m128i *)(v48 - 40) = v51;
          v53 = v49[-2].m128i_i64[1];
          v54 = _mm_loadu_si128(v49 - 1);
          v49[-2].m128i_i64[1] = 0;
          v49[-1] = 0;
          v55 = *(void **)(v48 - 24);
          if ( v55 )
          {
            *(_QWORD *)(v48 - 16) = 0;
            *(__m128i *)v125 = v54;
            qfree(v55);
            v54 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v48 - 24) = v53;
          v56 = v48;
          v49 += 9;
          *(__m128i *)(v48 - 16) = v54;
          v48 += 144;
          copy_tinfo_t(v56);
          *(__m128i *)(v48 - 136) = _mm_loadu_si128((const __m128i *)((char *)v49 - 136));
          *(__m128i *)(v48 - 120) = _mm_loadu_si128((const __m128i *)((char *)v49 - 120));
          *(__m128i *)(v48 - 104) = _mm_loadu_si128((const __m128i *)((char *)v49 - 104));
          *(_DWORD *)(v48 - 88) = v49[-6].m128i_i32[2];
          *(_DWORD *)(v48 - 80) = v49[-5].m128i_i32[0];
          *(_DWORD *)(v48 - 76) = v49[-5].m128i_i32[1];
          *(_BYTE *)(v48 - 72) = v49[-5].m128i_i8[8];
          --v47;
        }
        while ( v47 );
        v14 = (__int64)v130;
        v16 = *(_QWORD *)v127;
        v57 = v46;
        v58 = v133 - 1;
        v17 = (__int64)v128;
        v15 = v129;
        if ( (__int64)(v133 - 1) < 0 )
          v58 = 0;
        v12 = v131;
        v11 = v132;
        v59 = 144 * v58;
        v60 = 144 * v58 + 144;
        v61 = *(_QWORD *)v123 + v59 + 144;
        *(_QWORD *)v127 = 0x8E38E38E38E38E39LL * (v60 >> 4);
        v62 = 0x8E38E38E38E38E39LL * (((char *)v10 - (char *)v130) >> 4);
        if ( (char *)v10 - (char *)v130 <= 0 )
          goto LABEL_58;
      }
      v128 = (unsigned __int64 *)v16;
      v129 = v15;
      v130 = v10;
      v131 = v61;
      v132 = v12;
      v63 = v57;
      v133 = v11;
      v64 = v14 + 64;
      v65 = v62;
      do
      {
        v63[-4].m128i_i64[0] = *(_QWORD *)(v64 - 64);
        v63[-4].m128i_i64[1] = *(_QWORD *)(v64 - 56);
        v66 = *(_QWORD *)(v64 - 48);
        *(_QWORD *)(v64 - 48) = 0;
        v67 = _mm_loadu_si128((const __m128i *)(v64 - 40));
        *(_OWORD *)(v64 - 40) = 0;
        v68 = (void *)v63[-3].m128i_i64[0];
        if ( v68 )
        {
          v63[-3].m128i_i64[1] = 0;
          *(__m128i *)v125 = v67;
          qfree(v68);
          v67 = _mm_load_si128((const __m128i *)v125);
        }
        v63[-3].m128i_i64[0] = v66;
        *(__m128i *)((char *)v63 - 40) = v67;
        v69 = *(_QWORD *)(v64 - 24);
        v70 = _mm_loadu_si128((const __m128i *)(v64 - 16));
        *(_QWORD *)(v64 - 24) = 0;
        *(_OWORD *)(v64 - 16) = 0;
        v71 = (void *)v63[-2].m128i_i64[1];
        if ( v71 )
        {
          v63[-1].m128i_i64[0] = 0;
          *(__m128i *)v125 = v70;
          qfree(v71);
          v70 = _mm_load_si128((const __m128i *)v125);
        }
        v63[-2].m128i_i64[1] = v69;
        v72 = v63;
        v64 += 144;
        v63[-1] = v70;
        v63 += 9;
        copy_tinfo_t(v72);
        *(__m128i *)((char *)v63 - 136) = _mm_loadu_si128((const __m128i *)(v64 - 136));
        *(__m128i *)((char *)v63 - 120) = _mm_loadu_si128((const __m128i *)(v64 - 120));
        *(__m128i *)((char *)v63 - 104) = _mm_loadu_si128((const __m128i *)(v64 - 104));
        v63[-6].m128i_i32[2] = *(_DWORD *)(v64 - 88);
        v63[-5].m128i_i32[0] = *(_DWORD *)(v64 - 80);
        v63[-5].m128i_i32[1] = *(_DWORD *)(v64 - 76);
        v63[-5].m128i_i8[8] = *(_BYTE *)(v64 - 72);
        --v65;
      }
      while ( v65 );
      v16 = (unsigned __int64)v128;
      LODWORD(v15) = (_DWORD)v129;
      v10 = v130;
      v61 = v131;
      v12 = v132;
      v11 = v133;
LABEL_58:
      if ( v60 <= 0 )
        goto LABEL_16;
      v128 = (unsigned __int64 *)v16;
      v129 = v10;
      v130 = (unsigned __int64 *)v12;
      v73 = v10 - 10;
      v74 = *(_QWORD *)v127;
      v131 = v11;
      v75 = v61 - 80;
      v76 = (int)v15;
      do
      {
        *(v73 - 8) = *(_QWORD *)(v75 - 64);
        *(v73 - 7) = *(_QWORD *)(v75 - 56);
        v77 = *(_QWORD *)(v75 - 48);
        *(_QWORD *)(v75 - 48) = 0;
        v78 = _mm_loadu_si128((const __m128i *)(v75 - 40));
        *(_OWORD *)(v75 - 40) = 0;
        v79 = (void *)*(v73 - 6);
        if ( v79 )
        {
          *(v73 - 5) = 0;
          *(__m128i *)v125 = v78;
          qfree(v79);
          v78 = _mm_load_si128((const __m128i *)v125);
        }
        *(v73 - 6) = v77;
        *(__m128i *)(v73 - 5) = v78;
        v80 = *(_QWORD *)(v75 - 24);
        v81 = _mm_loadu_si128((const __m128i *)(v75 - 16));
        *(_QWORD *)(v75 - 24) = 0;
        *(_OWORD *)(v75 - 16) = 0;
        v82 = (void *)*(v73 - 3);
        if ( v82 )
        {
          *(v73 - 2) = 0;
          *(__m128i *)v125 = v81;
          qfree(v82);
          v81 = _mm_load_si128((const __m128i *)v125);
        }
        *(v73 - 3) = v80;
        v83 = v73;
        v75 -= 144;
        *((__m128i *)v73 - 1) = v81;
        v73 -= 18;
        copy_tinfo_t(v83);
        *(__m128i *)(v73 + 19) = _mm_loadu_si128((const __m128i *)(v75 + 152));
        *(__m128i *)(v73 + 21) = _mm_loadu_si128((const __m128i *)(v75 + 168));
        *(__m128i *)(v73 + 23) = _mm_loadu_si128((const __m128i *)(v75 + 184));
        *((_DWORD *)v73 + 50) = *(_DWORD *)(v75 + 200);
        *((_DWORD *)v73 + 52) = *(_DWORD *)(v75 + 208);
        *((_DWORD *)v73 + 53) = *(_DWORD *)(v75 + 212);
        *((_BYTE *)v73 + 216) = *(_BYTE *)(v75 + 216);
        --v74;
      }
      while ( v74 );
      v10 = v129;
      LODWORD(v15) = v76;
      LODWORD(v16) = (_DWORD)v128;
      v12 = (__int64)v130;
      v84 = *(_QWORD *)v127 - 1LL;
      v11 = v131;
      if ( *(_QWORD *)v127 - 1LL < 0 )
        v84 = 0;
      v18 = (__int64)&v129[-18 * v84 - 18];
LABEL_9:
      v11 -= v17;
      sub_5648D0(v122[0], (_DWORD)v15, v18, v16, v17, v123[0], v124[0]);
      v19 = v11;
      if ( v12 <= v11 )
        v19 = v12;
      if ( v19 <= *(__int64 *)v124 )
      {
        v9 = v18;
        break;
      }
      *(_QWORD *)v122 = v18;
      v8 = v10;
      if ( v12 > v11 )
        goto LABEL_5;
LABEL_13:
      v17 = v11 / 2;
      v10 = &v8[18 * (v11 / 2)];
      v15 = sub_561F50(*(_QWORD **)v122, (__int64)v8, *v10);
      v16 = 0x8E38E38E38E38E39LL * (((__int64)v15 - *(_QWORD *)v122) >> 4);
      v12 -= v16;
      if ( v12 > v11 / 2 )
        goto LABEL_6;
    }
  }
  if ( v11 < v12 )
  {
    v33 = 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)v126 - (_QWORD)v10) >> 4);
    if ( (__int64)(*(_QWORD *)v126 - (_QWORD)v10) <= 0 )
    {
      v45 = *(_QWORD *)v123;
    }
    else
    {
      *(_QWORD *)v124 = v10;
      v34 = v10 + 8;
      v35 = 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)v126 - (_QWORD)v10) >> 4);
      v36 = *(_QWORD *)v123 + 64LL;
      do
      {
        *(_QWORD *)(v36 - 64) = *(v34 - 8);
        *(_QWORD *)(v36 - 56) = *(v34 - 7);
        v37 = *(v34 - 6);
        v38 = _mm_loadu_si128((const __m128i *)(v34 - 5));
        *(v34 - 6) = 0;
        *(_OWORD *)(v34 - 5) = 0;
        v39 = *(void **)(v36 - 48);
        if ( v39 )
        {
          *(_QWORD *)(v36 - 40) = 0;
          *(__m128i *)v122 = v38;
          qfree(v39);
          v38 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v36 - 48) = v37;
        *(__m128i *)(v36 - 40) = v38;
        v40 = *(v34 - 3);
        v41 = _mm_loadu_si128((const __m128i *)v34 - 1);
        *(v34 - 3) = 0;
        *((_OWORD *)v34 - 1) = 0;
        v42 = *(void **)(v36 - 24);
        if ( v42 )
        {
          *(_QWORD *)(v36 - 16) = 0;
          *(__m128i *)v122 = v41;
          qfree(v42);
          v41 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v36 - 24) = v40;
        v43 = v36;
        v34 += 18;
        *(__m128i *)(v36 - 16) = v41;
        v36 += 144;
        copy_tinfo_t(v43);
        *(__m128i *)(v36 - 136) = _mm_loadu_si128((const __m128i *)(v34 - 17));
        *(__m128i *)(v36 - 120) = _mm_loadu_si128((const __m128i *)(v34 - 15));
        *(__m128i *)(v36 - 104) = _mm_loadu_si128((const __m128i *)(v34 - 13));
        *(_DWORD *)(v36 - 88) = *((_DWORD *)v34 - 22);
        *(_DWORD *)(v36 - 80) = *((_DWORD *)v34 - 20);
        *(_DWORD *)(v36 - 76) = *((_DWORD *)v34 - 19);
        *(_BYTE *)(v36 - 72) = *((_BYTE *)v34 - 72);
        --v35;
      }
      while ( v35 );
      v44 = v33 - 1;
      v10 = *(unsigned __int64 **)v124;
      if ( v44 < 0 )
        v44 = 0;
      v45 = *(_QWORD *)v123 + 144 * v44 + 144;
    }
    sub_562950(v9, (__int64)v10, *(__int64 *)v123, v45, *(__int64 *)v126);
  }
  else
  {
    v20 = 0x8E38E38E38E38E39LL * (((__int64)v10 - v9) >> 4);
    if ( (__int64)v10 - v9 <= 0 )
    {
      v32 = *(_QWORD *)v123;
    }
    else
    {
      *(_QWORD *)v124 = v10;
      v21 = v9 + 64;
      v22 = 0x8E38E38E38E38E39LL * (((__int64)v10 - v9) >> 4);
      v23 = *(_QWORD *)v123 + 64LL;
      do
      {
        *(_QWORD *)(v23 - 64) = *(_QWORD *)(v21 - 64);
        *(_QWORD *)(v23 - 56) = *(_QWORD *)(v21 - 56);
        v24 = *(_QWORD *)(v21 - 48);
        v25 = _mm_loadu_si128((const __m128i *)(v21 - 40));
        *(_QWORD *)(v21 - 48) = 0;
        *(_OWORD *)(v21 - 40) = 0;
        v26 = *(void **)(v23 - 48);
        if ( v26 )
        {
          *(_QWORD *)(v23 - 40) = 0;
          *(__m128i *)v122 = v25;
          qfree(v26);
          v25 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v23 - 48) = v24;
        *(__m128i *)(v23 - 40) = v25;
        v27 = *(_QWORD *)(v21 - 24);
        v28 = _mm_loadu_si128((const __m128i *)(v21 - 16));
        *(_QWORD *)(v21 - 24) = 0;
        *(_OWORD *)(v21 - 16) = 0;
        v29 = *(void **)(v23 - 24);
        if ( v29 )
        {
          *(_QWORD *)(v23 - 16) = 0;
          *(__m128i *)v122 = v28;
          qfree(v29);
          v28 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v23 - 24) = v27;
        v30 = v23;
        v21 += 144;
        *(__m128i *)(v23 - 16) = v28;
        v23 += 144;
        copy_tinfo_t(v30);
        *(__m128i *)(v23 - 136) = _mm_loadu_si128((const __m128i *)(v21 - 136));
        *(__m128i *)(v23 - 120) = _mm_loadu_si128((const __m128i *)(v21 - 120));
        *(__m128i *)(v23 - 104) = _mm_loadu_si128((const __m128i *)(v21 - 104));
        *(_DWORD *)(v23 - 88) = *(_DWORD *)(v21 - 88);
        *(_DWORD *)(v23 - 80) = *(_DWORD *)(v21 - 80);
        *(_DWORD *)(v23 - 76) = *(_DWORD *)(v21 - 76);
        *(_BYTE *)(v23 - 72) = *(_BYTE *)(v21 - 72);
        --v22;
      }
      while ( v22 );
      v31 = v20 - 1;
      v10 = *(unsigned __int64 **)v124;
      if ( v31 < 0 )
        v31 = 0;
      v32 = *(_QWORD *)v123 + 144 * v31 + 144;
    }
    sub_562010(*(__int64 *)v123, v32, (__int64)v10, *(__int64 *)v126, v9);
  }
}
