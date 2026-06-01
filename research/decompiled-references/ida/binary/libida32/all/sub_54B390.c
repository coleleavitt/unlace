void __fastcall sub_54B390(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // r9
  __int64 v13; // r9
  __m128i *v14; // r11
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // r15
  __int64 v23; // r13
  __m128i v24; // xmm0
  void *v25; // rdi
  __int64 v26; // r13
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // r15
  __int64 v36; // r13
  __m128i v37; // xmm0
  void *v38; // rdi
  __int64 v39; // r13
  __m128i v40; // xmm0
  void *v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 v44; // rcx
  __int64 v45; // r12
  const __m128i *v46; // rbp
  __int64 v47; // rbx
  __int64 v48; // r14
  __int64 v49; // r13
  __m128i v50; // xmm0
  void *v51; // rdi
  __int64 v52; // r13
  __m128i v53; // xmm0
  void *v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __m128i *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // r12
  __int64 v63; // rbp
  __m128i *v64; // rbx
  __int64 v65; // r13
  __m128i v66; // xmm0
  void *v67; // rdi
  __int64 v68; // r13
  __m128i v69; // xmm0
  void *v70; // rdi
  __m128i *v71; // rdi
  __int64 v72; // rbp
  int v73; // r14d
  __int64 v74; // rbx
  __int64 v75; // r12
  __int64 v76; // r13
  __m128i v77; // xmm0
  void *v78; // rdi
  __int64 v79; // r13
  __m128i v80; // xmm0
  void *v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rbp
  __int64 v85; // r14
  __int64 v86; // rbx
  __int64 v87; // r12
  __int64 v88; // r13
  __m128i si128; // xmm0
  void *v90; // rdi
  __int64 v91; // r13
  __m128i v92; // xmm0
  void *v93; // rdi
  __int64 v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rbp
  __int64 v99; // r12
  __int64 v100; // rbx
  __int64 v101; // r14
  __int64 v102; // r13
  __m128i v103; // xmm0
  void *v104; // rdi
  __int64 v105; // r13
  __m128i v106; // xmm0
  void *v107; // rdi
  __int64 v108; // rdi
  __m128i *v109; // rbp
  __int64 v110; // r12
  __int64 v111; // rbx
  __int64 *v112; // r14
  __int64 v113; // r13
  __m128i v114; // xmm0
  void *v115; // rdi
  __int64 v116; // r13
  __m128i v117; // xmm0
  void *v118; // rdi
  __m128i *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rax
  int v122[4]; // [rsp+0h] [rbp-A8h] BYREF
  int v123[2]; // [rsp+10h] [rbp-98h]
  int v124[2]; // [rsp+18h] [rbp-90h]
  int v125[4]; // [rsp+20h] [rbp-88h] BYREF
  int v126[2]; // [rsp+30h] [rbp-78h]
  int v127[2]; // [rsp+38h] [rbp-70h]
  __int64 v128; // [rsp+40h] [rbp-68h]
  __m128i *v129; // [rsp+48h] [rbp-60h]
  char *v130; // [rsp+50h] [rbp-58h]
  __int64 v131; // [rsp+58h] [rbp-50h]
  __int64 v132; // [rsp+60h] [rbp-48h]
  __m128i *v133; // [rsp+68h] [rbp-40h]

  v7 = a5;
  v8 = a4;
  v9 = a4;
  if ( a5 <= a4 )
    v9 = a5;
  *(_QWORD *)v122 = a1;
  *(_QWORD *)v127 = a3;
  if ( a7 < v9 )
  {
    v10 = a4;
    *(_QWORD *)v126 = a6;
    v11 = a7;
    v12 = a2;
    if ( a4 <= a5 )
      goto LABEL_13;
LABEL_5:
    *(_QWORD *)v124 = v10 / 2;
    *(_QWORD *)v123 = sub_548DA0(v12, *(__int64 *)v127, *(_QWORD *)(*(_QWORD *)v122 + ((v10 / 2) << 7)));
    v15 = (*(_QWORD *)v123 - v13) >> 7;
    v10 -= v10 / 2;
    if ( v10 <= v15 )
      goto LABEL_14;
LABEL_6:
    if ( v11 >= v15 )
    {
      if ( !v15 )
        goto LABEL_8;
      if ( *(_QWORD *)v123 - v13 <= 0 )
      {
        v128 = 0;
        v96 = 0;
        v97 = (v13 - (__int64)v14) >> 7;
        if ( v13 - (__int64)v14 <= 0 )
          goto LABEL_8;
      }
      else
      {
        v129 = v14;
        v130 = (char *)v13;
        v131 = v7;
        v128 = v15;
        v84 = v13 + 64;
        v85 = (*(_QWORD *)v123 - v13) >> 7;
        v132 = v11;
        v86 = *(_QWORD *)v126 + 64LL;
        v87 = v85;
        do
        {
          *(_QWORD *)(v86 - 64) = *(_QWORD *)(v84 - 64);
          *(_QWORD *)(v86 - 56) = *(_QWORD *)(v84 - 56);
          v88 = *(_QWORD *)(v84 - 48);
          si128 = _mm_loadu_si128((const __m128i *)(v84 - 40));
          *(_QWORD *)(v84 - 48) = 0;
          *(_OWORD *)(v84 - 40) = 0;
          v90 = *(void **)(v86 - 48);
          if ( v90 )
          {
            *(_QWORD *)(v86 - 40) = 0;
            *(__m128i *)v125 = si128;
            qfree(v90);
            si128 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v86 - 48) = v88;
          *(__m128i *)(v86 - 40) = si128;
          v91 = *(_QWORD *)(v84 - 24);
          v92 = _mm_loadu_si128((const __m128i *)(v84 - 16));
          *(_QWORD *)(v84 - 24) = 0;
          *(_OWORD *)(v84 - 16) = 0;
          v93 = *(void **)(v86 - 24);
          if ( v93 )
          {
            *(_QWORD *)(v86 - 16) = 0;
            *(__m128i *)v125 = v92;
            qfree(v93);
            v92 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v86 - 24) = v91;
          v94 = v86;
          v84 += 128;
          *(__m128i *)(v86 - 16) = v92;
          v86 += 128;
          copy_tinfo_t(v94);
          *(__m128i *)(v86 - 120) = _mm_loadu_si128((const __m128i *)(v84 - 120));
          *(__m128i *)(v86 - 104) = _mm_loadu_si128((const __m128i *)(v84 - 104));
          *(_DWORD *)(v86 - 88) = *(_DWORD *)(v84 - 88);
          *(_DWORD *)(v86 - 80) = *(_DWORD *)(v84 - 80);
          *(_DWORD *)(v86 - 76) = *(_DWORD *)(v84 - 76);
          *(_BYTE *)(v86 - 72) = *(_BYTE *)(v84 - 72);
          --v87;
        }
        while ( v87 );
        v95 = v85 - 1;
        v13 = (__int64)v130;
        v14 = v129;
        v15 = v128;
        v7 = v131;
        if ( v85 - 1 < 0 )
          v95 = 0;
        v11 = v132;
        v96 = (v95 << 7) + 128;
        v128 = v96 >> 7;
        v97 = (v130 - (char *)v129) >> 7;
        if ( v130 - (char *)v129 <= 0 )
        {
LABEL_85:
          if ( v96 > 0 )
          {
            v130 = (char *)v7;
            v129 = (__m128i *)v15;
            v109 = v14 + 4;
            v110 = v128;
            v131 = v11;
            v111 = *(_QWORD *)v126 + 64LL;
            v112 = (__int64 *)v14;
            do
            {
              v109[-4].m128i_i64[0] = *(_QWORD *)(v111 - 64);
              v109[-4].m128i_i64[1] = *(_QWORD *)(v111 - 56);
              v113 = *(_QWORD *)(v111 - 48);
              v114 = _mm_loadu_si128((const __m128i *)(v111 - 40));
              *(_QWORD *)(v111 - 48) = 0;
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
              v111 += 128;
              v109[-1] = v117;
              v109 += 8;
              copy_tinfo_t(v119);
              *(__m128i *)((char *)v109 - 120) = _mm_loadu_si128((const __m128i *)(v111 - 120));
              *(__m128i *)((char *)v109 - 104) = _mm_loadu_si128((const __m128i *)(v111 - 104));
              v109[-6].m128i_i32[2] = *(_DWORD *)(v111 - 88);
              v109[-5].m128i_i32[0] = *(_DWORD *)(v111 - 80);
              v109[-5].m128i_i32[1] = *(_DWORD *)(v111 - 76);
              v109[-5].m128i_i8[8] = *(_BYTE *)(v111 - 72);
              --v110;
            }
            while ( v110 );
            LODWORD(v14) = (_DWORD)v112;
            v15 = (__int64)v129;
            v7 = (__int64)v130;
            v11 = v131;
            v120 = v128 - 1;
            if ( v128 - 1 < 0 )
              v120 = 0;
            v16 = (__int64)&v112[16 * v120 + 16];
            goto LABEL_9;
          }
LABEL_8:
          v16 = (__int64)v14;
          goto LABEL_9;
        }
      }
      v130 = (char *)v14;
      v131 = v7;
      v129 = (__m128i *)v15;
      v98 = v13 - 64;
      v99 = v97;
      v132 = v11;
      v100 = *(_QWORD *)v123 - 64LL;
      v101 = v96;
      do
      {
        *(_QWORD *)(v100 - 64) = *(_QWORD *)(v98 - 64);
        *(_QWORD *)(v100 - 56) = *(_QWORD *)(v98 - 56);
        v102 = *(_QWORD *)(v98 - 48);
        v103 = _mm_loadu_si128((const __m128i *)(v98 - 40));
        *(_QWORD *)(v98 - 48) = 0;
        *(_OWORD *)(v98 - 40) = 0;
        v104 = *(void **)(v100 - 48);
        if ( v104 )
        {
          *(_QWORD *)(v100 - 40) = 0;
          *(__m128i *)v125 = v103;
          qfree(v104);
          v103 = _mm_load_si128((const __m128i *)v125);
        }
        *(_QWORD *)(v100 - 48) = v102;
        *(__m128i *)(v100 - 40) = v103;
        v105 = *(_QWORD *)(v98 - 24);
        v106 = _mm_loadu_si128((const __m128i *)(v98 - 16));
        *(_QWORD *)(v98 - 24) = 0;
        *(_OWORD *)(v98 - 16) = 0;
        v107 = *(void **)(v100 - 24);
        if ( v107 )
        {
          *(_QWORD *)(v100 - 16) = 0;
          *(__m128i *)v125 = v106;
          qfree(v107);
          v106 = _mm_load_si128((const __m128i *)v125);
        }
        *(_QWORD *)(v100 - 24) = v105;
        v108 = v100;
        v98 -= 128;
        *(__m128i *)(v100 - 16) = v106;
        v100 -= 128;
        copy_tinfo_t(v108);
        *(__m128i *)(v100 + 136) = _mm_loadu_si128((const __m128i *)(v98 + 136));
        *(__m128i *)(v100 + 152) = _mm_loadu_si128((const __m128i *)(v98 + 152));
        *(_DWORD *)(v100 + 168) = *(_DWORD *)(v98 + 168);
        *(_DWORD *)(v100 + 176) = *(_DWORD *)(v98 + 176);
        *(_DWORD *)(v100 + 180) = *(_DWORD *)(v98 + 180);
        *(_BYTE *)(v100 + 184) = *(_BYTE *)(v98 + 184);
        --v99;
      }
      while ( v99 );
      v15 = (__int64)v129;
      v14 = (__m128i *)v130;
      v96 = v101;
      v7 = v131;
      v11 = v132;
      goto LABEL_85;
    }
    while ( 1 )
    {
LABEL_14:
      if ( v11 < v10 )
      {
        *(_QWORD *)v125 = v14;
        v121 = sub_54A930((__int64)v14, v13, *(__int64 *)v123);
        LODWORD(v14) = v125[0];
        v16 = v121;
        goto LABEL_9;
      }
      if ( !v10 )
        goto LABEL_16;
      if ( v13 - (__int64)v14 <= 0 )
      {
        v61 = (*(_QWORD *)v123 - v13) >> 7;
        if ( *(_QWORD *)v123 - v13 <= 0 )
        {
LABEL_16:
          v16 = *(_QWORD *)v123;
          goto LABEL_9;
        }
        v128 = 0;
        v59 = *(_QWORD *)v126;
        v60 = 0;
        v57 = v14 + 4;
      }
      else
      {
        v129 = v14;
        v45 = (v13 - (__int64)v14) >> 7;
        v130 = (char *)v13;
        v131 = v7;
        v133 = v14 + 4;
        v128 = v15;
        v46 = v14 + 4;
        v132 = v11;
        v47 = *(_QWORD *)v126 + 64LL;
        v48 = v45;
        do
        {
          *(_QWORD *)(v47 - 64) = v46[-4].m128i_i64[0];
          *(_QWORD *)(v47 - 56) = v46[-4].m128i_i64[1];
          v49 = v46[-3].m128i_i64[0];
          v50 = _mm_loadu_si128((const __m128i *)((char *)v46 - 40));
          v46[-3].m128i_i64[0] = 0;
          *(const __m128i *)((char *)&v46[-3] + 8) = 0;
          v51 = *(void **)(v47 - 48);
          if ( v51 )
          {
            *(_QWORD *)(v47 - 40) = 0;
            *(__m128i *)v125 = v50;
            qfree(v51);
            v50 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v47 - 48) = v49;
          *(__m128i *)(v47 - 40) = v50;
          v52 = v46[-2].m128i_i64[1];
          v53 = _mm_loadu_si128(v46 - 1);
          v46[-2].m128i_i64[1] = 0;
          v46[-1] = 0;
          v54 = *(void **)(v47 - 24);
          if ( v54 )
          {
            *(_QWORD *)(v47 - 16) = 0;
            *(__m128i *)v125 = v53;
            qfree(v54);
            v53 = _mm_load_si128((const __m128i *)v125);
          }
          *(_QWORD *)(v47 - 24) = v52;
          v55 = v47;
          v46 += 8;
          *(__m128i *)(v47 - 16) = v53;
          v47 += 128;
          copy_tinfo_t(v55);
          *(__m128i *)(v47 - 120) = _mm_loadu_si128((const __m128i *)((char *)v46 - 120));
          *(__m128i *)(v47 - 104) = _mm_loadu_si128((const __m128i *)((char *)v46 - 104));
          *(_DWORD *)(v47 - 88) = v46[-6].m128i_i32[2];
          *(_DWORD *)(v47 - 80) = v46[-5].m128i_i32[0];
          *(_DWORD *)(v47 - 76) = v46[-5].m128i_i32[1];
          *(_BYTE *)(v47 - 72) = v46[-5].m128i_i8[8];
          --v45;
        }
        while ( v45 );
        v15 = v128;
        v13 = (__int64)v130;
        v56 = v48 - 1;
        v14 = v129;
        v7 = v131;
        if ( v48 - 1 < 0 )
          v56 = 0;
        v11 = v132;
        v57 = v133;
        v58 = v56 << 7;
        v59 = *(_QWORD *)v126 + v58 + 128;
        v60 = v58 + 128;
        v128 = v60 >> 7;
        v61 = (__int64)(*(_QWORD *)v123 - (_QWORD)v130) >> 7;
        if ( (__int64)(*(_QWORD *)v123 - (_QWORD)v130) <= 0 )
          goto LABEL_58;
      }
      v130 = (char *)v14;
      v62 = v61;
      v131 = v59;
      v132 = v7;
      v129 = (__m128i *)v15;
      v63 = v13 + 64;
      v133 = (__m128i *)v11;
      v64 = v57;
      do
      {
        v64[-4].m128i_i64[0] = *(_QWORD *)(v63 - 64);
        v64[-4].m128i_i64[1] = *(_QWORD *)(v63 - 56);
        v65 = *(_QWORD *)(v63 - 48);
        v66 = _mm_loadu_si128((const __m128i *)(v63 - 40));
        *(_QWORD *)(v63 - 48) = 0;
        *(_OWORD *)(v63 - 40) = 0;
        v67 = (void *)v64[-3].m128i_i64[0];
        if ( v67 )
        {
          v64[-3].m128i_i64[1] = 0;
          *(__m128i *)v125 = v66;
          qfree(v67);
          v66 = _mm_load_si128((const __m128i *)v125);
        }
        v64[-3].m128i_i64[0] = v65;
        *(__m128i *)((char *)v64 - 40) = v66;
        v68 = *(_QWORD *)(v63 - 24);
        v69 = _mm_loadu_si128((const __m128i *)(v63 - 16));
        *(_QWORD *)(v63 - 24) = 0;
        *(_OWORD *)(v63 - 16) = 0;
        v70 = (void *)v64[-2].m128i_i64[1];
        if ( v70 )
        {
          v64[-1].m128i_i64[0] = 0;
          *(__m128i *)v125 = v69;
          qfree(v70);
          v69 = _mm_load_si128((const __m128i *)v125);
        }
        v64[-2].m128i_i64[1] = v68;
        v71 = v64;
        v63 += 128;
        v64[-1] = v69;
        v64 += 8;
        copy_tinfo_t(v71);
        *(__m128i *)((char *)v64 - 120) = _mm_loadu_si128((const __m128i *)(v63 - 120));
        *(__m128i *)((char *)v64 - 104) = _mm_loadu_si128((const __m128i *)(v63 - 104));
        v64[-6].m128i_i32[2] = *(_DWORD *)(v63 - 88);
        v64[-5].m128i_i32[0] = *(_DWORD *)(v63 - 80);
        v64[-5].m128i_i32[1] = *(_DWORD *)(v63 - 76);
        v64[-5].m128i_i8[8] = *(_BYTE *)(v63 - 72);
        --v62;
      }
      while ( v62 );
      v15 = (__int64)v129;
      LODWORD(v14) = (_DWORD)v130;
      v59 = v131;
      v7 = v132;
      v11 = (__int64)v133;
LABEL_58:
      if ( v60 <= 0 )
        goto LABEL_16;
      v130 = (char *)v7;
      v129 = (__m128i *)v15;
      v72 = v59 - 64;
      v73 = (int)v14;
      v131 = v11;
      v74 = *(_QWORD *)v123 - 64LL;
      v75 = v128;
      do
      {
        *(_QWORD *)(v74 - 64) = *(_QWORD *)(v72 - 64);
        *(_QWORD *)(v74 - 56) = *(_QWORD *)(v72 - 56);
        v76 = *(_QWORD *)(v72 - 48);
        v77 = _mm_loadu_si128((const __m128i *)(v72 - 40));
        *(_QWORD *)(v72 - 48) = 0;
        *(_OWORD *)(v72 - 40) = 0;
        v78 = *(void **)(v74 - 48);
        if ( v78 )
        {
          *(_QWORD *)(v74 - 40) = 0;
          *(__m128i *)v125 = v77;
          qfree(v78);
          v77 = _mm_load_si128((const __m128i *)v125);
        }
        *(_QWORD *)(v74 - 48) = v76;
        *(__m128i *)(v74 - 40) = v77;
        v79 = *(_QWORD *)(v72 - 24);
        v80 = _mm_loadu_si128((const __m128i *)(v72 - 16));
        *(_QWORD *)(v72 - 24) = 0;
        *(_OWORD *)(v72 - 16) = 0;
        v81 = *(void **)(v74 - 24);
        if ( v81 )
        {
          *(_QWORD *)(v74 - 16) = 0;
          *(__m128i *)v125 = v80;
          qfree(v81);
          v80 = _mm_load_si128((const __m128i *)v125);
        }
        *(_QWORD *)(v74 - 24) = v79;
        v82 = v74;
        v72 -= 128;
        *(__m128i *)(v74 - 16) = v80;
        v74 -= 128;
        copy_tinfo_t(v82);
        *(__m128i *)(v74 + 136) = _mm_loadu_si128((const __m128i *)(v72 + 136));
        *(__m128i *)(v74 + 152) = _mm_loadu_si128((const __m128i *)(v72 + 152));
        *(_DWORD *)(v74 + 168) = *(_DWORD *)(v72 + 168);
        *(_DWORD *)(v74 + 176) = *(_DWORD *)(v72 + 176);
        *(_DWORD *)(v74 + 180) = *(_DWORD *)(v72 + 180);
        *(_BYTE *)(v74 + 184) = *(_BYTE *)(v72 + 184);
        --v75;
      }
      while ( v75 );
      LODWORD(v14) = v73;
      v15 = (__int64)v129;
      v7 = (__int64)v130;
      v11 = v131;
      v83 = v128 - 1;
      if ( v128 - 1 < 0 )
        v83 = 0;
      v16 = *(_QWORD *)v123 - (v83 << 7) - 128;
LABEL_9:
      v7 -= v15;
      sub_54B390(v122[0], (_DWORD)v14, v16, v124[0], v15, v126[0], v11);
      v17 = v7;
      if ( v10 <= v7 )
        v17 = v10;
      if ( v17 <= v11 )
      {
        a6 = *(_QWORD *)v126;
        v8 = v10;
        goto LABEL_18;
      }
      *(_QWORD *)v122 = v16;
      v12 = *(_QWORD **)v123;
      if ( v10 > v7 )
        goto LABEL_5;
LABEL_13:
      v15 = v7 / 2;
      v18 = v12[16 * (v7 / 2)];
      *(_QWORD *)v123 = &v12[16 * (v7 / 2)];
      v14 = (__m128i *)sub_548D50(*(_QWORD **)v122, (__int64)v12, v18);
      *(_QWORD *)v124 = ((__int64)v14->m128i_i64 - *(_QWORD *)v122) >> 7;
      v10 -= *(_QWORD *)v124;
      if ( v10 > v7 / 2 )
        goto LABEL_6;
    }
  }
  *(_QWORD *)v123 = a2;
  v16 = a1;
LABEL_18:
  if ( v7 < v8 )
  {
    if ( (__int64)(*(_QWORD *)v127 - *(_QWORD *)v123) <= 0 )
    {
      v44 = a6;
    }
    else
    {
      *(_QWORD *)v124 = (__int64)(*(_QWORD *)v127 - *(_QWORD *)v123) >> 7;
      v32 = a6 + 64;
      v33 = *(_QWORD *)v123 + 64LL;
      v34 = *(_QWORD *)v124;
      v35 = a6;
      do
      {
        *(_QWORD *)(v32 - 64) = *(_QWORD *)(v33 - 64);
        *(_QWORD *)(v32 - 56) = *(_QWORD *)(v33 - 56);
        v36 = *(_QWORD *)(v33 - 48);
        v37 = _mm_loadu_si128((const __m128i *)(v33 - 40));
        *(_QWORD *)(v33 - 48) = 0;
        *(_OWORD *)(v33 - 40) = 0;
        v38 = *(void **)(v32 - 48);
        if ( v38 )
        {
          *(_QWORD *)(v32 - 40) = 0;
          *(__m128i *)v122 = v37;
          qfree(v38);
          v37 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v32 - 48) = v36;
        *(__m128i *)(v32 - 40) = v37;
        v39 = *(_QWORD *)(v33 - 24);
        v40 = _mm_loadu_si128((const __m128i *)(v33 - 16));
        *(_QWORD *)(v33 - 24) = 0;
        *(_OWORD *)(v33 - 16) = 0;
        v41 = *(void **)(v32 - 24);
        if ( v41 )
        {
          *(_QWORD *)(v32 - 16) = 0;
          *(__m128i *)v122 = v40;
          qfree(v41);
          v40 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v32 - 24) = v39;
        v42 = v32;
        v33 += 128;
        *(__m128i *)(v32 - 16) = v40;
        v32 += 128;
        copy_tinfo_t(v42);
        *(__m128i *)(v32 - 120) = _mm_loadu_si128((const __m128i *)(v33 - 120));
        *(__m128i *)(v32 - 104) = _mm_loadu_si128((const __m128i *)(v33 - 104));
        *(_DWORD *)(v32 - 88) = *(_DWORD *)(v33 - 88);
        *(_DWORD *)(v32 - 80) = *(_DWORD *)(v33 - 80);
        *(_DWORD *)(v32 - 76) = *(_DWORD *)(v33 - 76);
        *(_BYTE *)(v32 - 72) = *(_BYTE *)(v33 - 72);
        --v34;
      }
      while ( v34 );
      a6 = v35;
      v43 = *(_QWORD *)v124 - 1LL;
      if ( *(_QWORD *)v124 - 1LL < 0 )
        v43 = 0;
      v44 = v35 + (v43 << 7) + 128;
    }
    sub_549670(v16, *(__int64 *)v123, a6, v44, *(__int64 *)v127);
  }
  else
  {
    if ( *(_QWORD *)v123 - v16 <= 0 )
    {
      v31 = a6;
    }
    else
    {
      *(_QWORD *)v124 = (*(_QWORD *)v123 - v16) >> 7;
      v19 = a6 + 64;
      v20 = v16 + 64;
      v21 = *(_QWORD *)v124;
      v22 = a6;
      do
      {
        *(_QWORD *)(v19 - 64) = *(_QWORD *)(v20 - 64);
        *(_QWORD *)(v19 - 56) = *(_QWORD *)(v20 - 56);
        v23 = *(_QWORD *)(v20 - 48);
        v24 = _mm_loadu_si128((const __m128i *)(v20 - 40));
        *(_QWORD *)(v20 - 48) = 0;
        *(_OWORD *)(v20 - 40) = 0;
        v25 = *(void **)(v19 - 48);
        if ( v25 )
        {
          *(_QWORD *)(v19 - 40) = 0;
          *(__m128i *)v122 = v24;
          qfree(v25);
          v24 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v19 - 48) = v23;
        *(__m128i *)(v19 - 40) = v24;
        v26 = *(_QWORD *)(v20 - 24);
        v27 = _mm_loadu_si128((const __m128i *)(v20 - 16));
        *(_QWORD *)(v20 - 24) = 0;
        *(_OWORD *)(v20 - 16) = 0;
        v28 = *(void **)(v19 - 24);
        if ( v28 )
        {
          *(_QWORD *)(v19 - 16) = 0;
          *(__m128i *)v122 = v27;
          qfree(v28);
          v27 = _mm_load_si128((const __m128i *)v122);
        }
        *(_QWORD *)(v19 - 24) = v26;
        v29 = v19;
        v20 += 128;
        *(__m128i *)(v19 - 16) = v27;
        v19 += 128;
        copy_tinfo_t(v29);
        *(__m128i *)(v19 - 120) = _mm_loadu_si128((const __m128i *)(v20 - 120));
        *(__m128i *)(v19 - 104) = _mm_loadu_si128((const __m128i *)(v20 - 104));
        *(_DWORD *)(v19 - 88) = *(_DWORD *)(v20 - 88);
        *(_DWORD *)(v19 - 80) = *(_DWORD *)(v20 - 80);
        *(_DWORD *)(v19 - 76) = *(_DWORD *)(v20 - 76);
        *(_BYTE *)(v19 - 72) = *(_BYTE *)(v20 - 72);
        --v21;
      }
      while ( v21 );
      a6 = v22;
      v30 = *(_QWORD *)v124 - 1LL;
      if ( *(_QWORD *)v124 - 1LL < 0 )
        v30 = 0;
      v31 = v22 + (v30 << 7) + 128;
    }
    sub_548DF0(a6, v31, *(__int64 *)v123, *(__int64 *)v127, v16);
  }
}

