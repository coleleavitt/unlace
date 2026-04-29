void __fastcall sub_2B7D0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *v10; // r9
  __int64 v11; // rbx
  __m128i *v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // r13
  char *m128i_i8; // r15
  __int64 v17; // rax
  __int64 v18; // r10
  const __m128i *v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // r13
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r13
  __m128i v26; // xmm0
  __int64 v27; // rdi
  const __m128i *v28; // rsi
  __int64 v29; // rdi
  signed __int64 v30; // r14
  __int64 v31; // rsi
  unsigned __int64 v32; // r14
  const __m128i *v33; // rbx
  unsigned __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // r13
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // r13
  __m128i v40; // xmm0
  __int64 v41; // rdi
  const __m128i *v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rcx
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // r13
  const __m128i *v48; // rbp
  __int64 v49; // rbx
  __m128i *v50; // r15
  __int64 v51; // r12
  __m128i v52; // xmm0
  __int64 v53; // rdi
  __int64 v54; // r12
  __m128i v55; // xmm0
  __int64 v56; // rdi
  const __m128i *v57; // rsi
  __int64 v58; // rdi
  __m128i *v59; // rdi
  unsigned __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // r8
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // r14
  __int64 v66; // rbp
  __int64 v67; // r15
  __m128i *v68; // rbx
  __int64 v69; // r12
  __m128i v70; // xmm0
  __int64 v71; // rdi
  __int64 v72; // r12
  __m128i v73; // xmm0
  __int64 v74; // rdi
  __int64 v75; // rsi
  __m128i *v76; // rdi
  __int64 v77; // rbp
  int v78; // r15d
  __m128i *v79; // rbx
  unsigned __int64 v80; // r14
  __int64 v81; // r12
  __m128i v82; // xmm0
  __int64 v83; // rdi
  __int64 v84; // r12
  __m128i v85; // xmm0
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 *v88; // rdi
  unsigned __int64 v89; // r15
  __int64 v90; // rbp
  unsigned __int64 v91; // r15
  __int64 v92; // rbx
  unsigned __int64 v93; // r14
  __int64 v94; // r12
  __m128i v95; // xmm0
  __int64 v96; // rdi
  __int64 v97; // r12
  __m128i v98; // xmm0
  __int64 v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // rdi
  unsigned __int64 v102; // rsi
  __int64 v103; // rsi
  unsigned __int64 v104; // rdx
  __int64 v105; // rbp
  unsigned __int64 v106; // r14
  __m128i *v107; // rbx
  __int64 v108; // r15
  __int64 v109; // r12
  __m128i v110; // xmm0
  __int64 v111; // rdi
  __int64 v112; // r12
  __m128i v113; // xmm0
  __int64 v114; // rdi
  __int64 v115; // rsi
  __int64 *v116; // rdi
  __int64 v117; // rbp
  int v118; // r15d
  __m128i *v119; // rbx
  unsigned __int64 v120; // r14
  __int64 v121; // r12
  __m128i v122; // xmm0
  __int64 v123; // rdi
  __int64 v124; // r12
  __m128i v125; // xmm0
  __int64 v126; // rdi
  __int64 v127; // rsi
  __m128i *v128; // rdi
  unsigned __int64 v129; // r15
  __int64 v130; // rax
  __m128i *v131; // [rsp+0h] [rbp-A8h]
  __m128i v133; // [rsp+10h] [rbp-98h] BYREF
  __m128i v134; // [rsp+20h] [rbp-88h] BYREF
  __m128i *v135; // [rsp+30h] [rbp-78h]
  __int64 v136; // [rsp+38h] [rbp-70h]
  unsigned __int64 v137; // [rsp+40h] [rbp-68h]
  __int64 v138; // [rsp+48h] [rbp-60h]
  __int64 v139; // [rsp+50h] [rbp-58h]
  __int64 v140; // [rsp+58h] [rbp-50h]
  __int64 v141; // [rsp+60h] [rbp-48h]
  __int64 v142; // [rsp+68h] [rbp-40h]

  v7 = a4;
  v8 = a5;
  v9 = a4;
  if ( a5 <= a4 )
    v7 = a5;
  v133.m128i_i64[0] = a1;
  v136 = a3;
  if ( a7 < v7 )
  {
    v10 = (__int64 *)a2;
    v11 = a7;
    if ( a4 <= a5 )
      goto LABEL_13;
LABEL_5:
    v134.m128i_i64[0] = v9 / 2;
    v135 = (__m128i *)(144 * (v9 / 2) + v133.m128i_i64[0]);
    v12 = (__m128i *)sub_251E0(v10, v136, v135);
    v14 = v134.m128i_i64[0];
    v131 = v12;
    v9 -= v134.m128i_i64[0];
    v15 = 0x8E38E38E38E38E39LL * (((__int64)v12->m128i_i64 - v13) >> 4);
    if ( v9 <= v15 )
      goto LABEL_14;
LABEL_6:
    if ( v11 >= v15 )
    {
      if ( !v15 )
        goto LABEL_8;
      if ( (__int64)v131->m128i_i64 - v13 <= 0 )
      {
        v103 = 0;
        v137 = 0;
        v104 = 0x8E38E38E38E38E39LL * ((v13 - (__int64)v135) >> 4);
        if ( v13 - (__int64)v135 <= 0 )
          goto LABEL_8;
      }
      else
      {
        v137 = v14;
        v138 = v13;
        v140 = v8;
        v139 = v9;
        v90 = v13 + 64;
        v91 = 0x8E38E38E38E38E39LL * (((__int64)v131->m128i_i64 - v13) >> 4);
        v141 = v11;
        v92 = a6 + 64;
        v93 = v91;
        do
        {
          *(_QWORD *)(v92 - 64) = *(_QWORD *)(v90 - 64);
          *(_QWORD *)(v92 - 56) = *(_QWORD *)(v90 - 56);
          v94 = *(_QWORD *)(v90 - 48);
          v95 = _mm_loadu_si128((const __m128i *)(v90 - 40));
          *(_QWORD *)(v90 - 48) = 0;
          *(_OWORD *)(v90 - 40) = 0;
          v96 = *(_QWORD *)(v92 - 48);
          if ( v96 )
          {
            *(_QWORD *)(v92 - 40) = 0;
            v134 = v95;
            qfree(v96);
            v95 = _mm_load_si128(&v134);
          }
          *(_QWORD *)(v92 - 48) = v94;
          *(__m128i *)(v92 - 40) = v95;
          v97 = *(_QWORD *)(v90 - 24);
          v98 = _mm_loadu_si128((const __m128i *)(v90 - 16));
          *(_QWORD *)(v90 - 24) = 0;
          *(_OWORD *)(v90 - 16) = 0;
          v99 = *(_QWORD *)(v92 - 24);
          if ( v99 )
          {
            *(_QWORD *)(v92 - 16) = 0;
            v134 = v98;
            qfree(v99);
            v98 = _mm_load_si128(&v134);
          }
          *(_QWORD *)(v92 - 24) = v97;
          v100 = v90;
          v101 = v92;
          v90 += 144;
          *(__m128i *)(v92 - 16) = v98;
          v92 += 144;
          copy_tinfo_t(v101, v100);
          *(__m128i *)(v92 - 136) = _mm_loadu_si128((const __m128i *)(v90 - 136));
          *(__m128i *)(v92 - 120) = _mm_loadu_si128((const __m128i *)(v90 - 120));
          *(__m128i *)(v92 - 104) = _mm_loadu_si128((const __m128i *)(v90 - 104));
          *(_DWORD *)(v92 - 88) = *(_DWORD *)(v90 - 88);
          *(_DWORD *)(v92 - 80) = *(_DWORD *)(v90 - 80);
          *(_DWORD *)(v92 - 76) = *(_DWORD *)(v90 - 76);
          *(_BYTE *)(v92 - 72) = *(_BYTE *)(v90 - 72);
          *(_DWORD *)(v92 - 68) = *(_DWORD *)(v90 - 68);
          --v93;
        }
        while ( v93 );
        v102 = v91 - 1;
        v13 = v138;
        v14 = v137;
        v9 = v139;
        if ( (__int64)(v91 - 1) < 0 )
          v102 = 0;
        v8 = v140;
        v11 = v141;
        v103 = 144 * v102 + 144;
        v104 = 0x8E38E38E38E38E39LL * ((v138 - (__int64)v135) >> 4);
        v137 = 0x8E38E38E38E38E39LL * (v103 >> 4);
        if ( v138 - (__int64)v135 <= 0 )
        {
LABEL_85:
          if ( v103 > 0 )
          {
            v139 = v8;
            v138 = v9;
            v117 = a6 + 64;
            v118 = v14;
            v140 = v11;
            v119 = v135 + 4;
            v120 = v137;
            do
            {
              v119[-4].m128i_i64[0] = *(_QWORD *)(v117 - 64);
              v119[-4].m128i_i64[1] = *(_QWORD *)(v117 - 56);
              v121 = *(_QWORD *)(v117 - 48);
              v122 = _mm_loadu_si128((const __m128i *)(v117 - 40));
              *(_QWORD *)(v117 - 48) = 0;
              *(_OWORD *)(v117 - 40) = 0;
              v123 = v119[-3].m128i_i64[0];
              if ( v123 )
              {
                v119[-3].m128i_i64[1] = 0;
                v134 = v122;
                qfree(v123);
                v122 = _mm_load_si128(&v134);
              }
              v119[-3].m128i_i64[0] = v121;
              *(__m128i *)((char *)v119 - 40) = v122;
              v124 = *(_QWORD *)(v117 - 24);
              v125 = _mm_loadu_si128((const __m128i *)(v117 - 16));
              *(_QWORD *)(v117 - 24) = 0;
              *(_OWORD *)(v117 - 16) = 0;
              v126 = v119[-2].m128i_i64[1];
              if ( v126 )
              {
                v119[-1].m128i_i64[0] = 0;
                v134 = v125;
                qfree(v126);
                v125 = _mm_load_si128(&v134);
              }
              v119[-2].m128i_i64[1] = v124;
              v127 = v117;
              v128 = v119;
              v117 += 144;
              v119[-1] = v125;
              v119 += 9;
              copy_tinfo_t(v128, v127);
              *(__m128i *)((char *)v119 - 136) = _mm_loadu_si128((const __m128i *)(v117 - 136));
              *(__m128i *)((char *)v119 - 120) = _mm_loadu_si128((const __m128i *)(v117 - 120));
              *(__m128i *)((char *)v119 - 104) = _mm_loadu_si128((const __m128i *)(v117 - 104));
              v119[-6].m128i_i32[2] = *(_DWORD *)(v117 - 88);
              v119[-5].m128i_i32[0] = *(_DWORD *)(v117 - 80);
              v119[-5].m128i_i32[1] = *(_DWORD *)(v117 - 76);
              v119[-5].m128i_i8[8] = *(_BYTE *)(v117 - 72);
              v119[-5].m128i_i32[3] = *(_DWORD *)(v117 - 68);
              --v120;
            }
            while ( v120 );
            LODWORD(v14) = v118;
            v9 = v138;
            v8 = v139;
            v129 = v137 - 1;
            v11 = v140;
            if ( (__int64)(v137 - 1) < 0 )
              v129 = 0;
            m128i_i8 = v135[9 * v129 + 9].m128i_i8;
            goto LABEL_9;
          }
LABEL_8:
          m128i_i8 = (char *)v135;
          goto LABEL_9;
        }
      }
      v138 = v14;
      v140 = v8;
      v139 = v9;
      v105 = v13 - 80;
      v106 = v104;
      v141 = v11;
      v107 = v131 - 5;
      v108 = v103;
      do
      {
        v107[-4].m128i_i64[0] = *(_QWORD *)(v105 - 64);
        v107[-4].m128i_i64[1] = *(_QWORD *)(v105 - 56);
        v109 = *(_QWORD *)(v105 - 48);
        v110 = _mm_loadu_si128((const __m128i *)(v105 - 40));
        *(_QWORD *)(v105 - 48) = 0;
        *(_OWORD *)(v105 - 40) = 0;
        v111 = v107[-3].m128i_i64[0];
        if ( v111 )
        {
          v107[-3].m128i_i64[1] = 0;
          v134 = v110;
          qfree(v111);
          v110 = _mm_load_si128(&v134);
        }
        v107[-3].m128i_i64[0] = v109;
        *(__m128i *)((char *)v107 - 40) = v110;
        v112 = *(_QWORD *)(v105 - 24);
        v113 = _mm_loadu_si128((const __m128i *)(v105 - 16));
        *(_QWORD *)(v105 - 24) = 0;
        *(_OWORD *)(v105 - 16) = 0;
        v114 = v107[-2].m128i_i64[1];
        if ( v114 )
        {
          v107[-1].m128i_i64[0] = 0;
          v134 = v113;
          qfree(v114);
          v113 = _mm_load_si128(&v134);
        }
        v107[-2].m128i_i64[1] = v112;
        v115 = v105;
        v116 = (__int64 *)v107;
        v105 -= 144;
        v107[-1] = v113;
        v107 -= 9;
        copy_tinfo_t(v116, v115);
        *(__m128i *)((char *)v107 + 152) = _mm_loadu_si128((const __m128i *)(v105 + 152));
        *(__m128i *)((char *)v107 + 168) = _mm_loadu_si128((const __m128i *)(v105 + 168));
        *(__m128i *)((char *)v107 + 184) = _mm_loadu_si128((const __m128i *)(v105 + 184));
        v107[12].m128i_i32[2] = *(_DWORD *)(v105 + 200);
        v107[13].m128i_i32[0] = *(_DWORD *)(v105 + 208);
        v107[13].m128i_i32[1] = *(_DWORD *)(v105 + 212);
        v107[13].m128i_i8[8] = *(_BYTE *)(v105 + 216);
        v107[13].m128i_i32[3] = *(_DWORD *)(v105 + 220);
        --v106;
      }
      while ( v106 );
      LODWORD(v14) = v138;
      v9 = v139;
      v103 = v108;
      v8 = v140;
      v11 = v141;
      goto LABEL_85;
    }
    while ( 1 )
    {
LABEL_14:
      if ( v11 < v9 )
      {
        v134.m128i_i64[0] = v14;
        v130 = sub_2AC40((__int64)v135, v13, (__int64)v131);
        LODWORD(v14) = v134.m128i_i32[0];
        m128i_i8 = (char *)v130;
        goto LABEL_9;
      }
      if ( v9 )
      {
        if ( v13 - (__int64)v135 > 0 )
        {
          v137 = v14;
          v46 = 0x8E38E38E38E38E39LL * ((v13 - (__int64)v135) >> 4);
          v139 = v13;
          v141 = v8;
          v138 = v15;
          v47 = v46;
          v140 = v9;
          v142 = v11;
          v48 = v135 + 4;
          v49 = a6 + 64;
          v50 = v135 + 4;
          do
          {
            *(_QWORD *)(v49 - 64) = v48[-4].m128i_i64[0];
            *(_QWORD *)(v49 - 56) = v48[-4].m128i_i64[1];
            v51 = v48[-3].m128i_i64[0];
            v52 = _mm_loadu_si128((const __m128i *)((char *)v48 - 40));
            v48[-3].m128i_i64[0] = 0;
            *(const __m128i *)((char *)&v48[-3] + 8) = 0;
            v53 = *(_QWORD *)(v49 - 48);
            if ( v53 )
            {
              *(_QWORD *)(v49 - 40) = 0;
              v134 = v52;
              qfree(v53);
              v52 = _mm_load_si128(&v134);
            }
            *(_QWORD *)(v49 - 48) = v51;
            *(__m128i *)(v49 - 40) = v52;
            v54 = v48[-2].m128i_i64[1];
            v55 = _mm_loadu_si128(v48 - 1);
            v48[-2].m128i_i64[1] = 0;
            v48[-1] = 0;
            v56 = *(_QWORD *)(v49 - 24);
            if ( v56 )
            {
              *(_QWORD *)(v49 - 16) = 0;
              v134 = v55;
              qfree(v56);
              v55 = _mm_load_si128(&v134);
            }
            *(_QWORD *)(v49 - 24) = v54;
            v57 = v48;
            v58 = v49;
            v48 += 9;
            *(__m128i *)(v49 - 16) = v55;
            v49 += 144;
            copy_tinfo_t(v58, v57);
            *(__m128i *)(v49 - 136) = _mm_loadu_si128((const __m128i *)((char *)v48 - 136));
            *(__m128i *)(v49 - 120) = _mm_loadu_si128((const __m128i *)((char *)v48 - 120));
            *(__m128i *)(v49 - 104) = _mm_loadu_si128((const __m128i *)((char *)v48 - 104));
            *(_DWORD *)(v49 - 88) = v48[-6].m128i_i32[2];
            *(_DWORD *)(v49 - 80) = v48[-5].m128i_i32[0];
            *(_DWORD *)(v49 - 76) = v48[-5].m128i_i32[1];
            *(_BYTE *)(v49 - 72) = v48[-5].m128i_i8[8];
            *(_DWORD *)(v49 - 68) = v48[-5].m128i_i32[3];
            --v47;
          }
          while ( v47 );
          v59 = v50;
          v60 = v46 - 1;
          v14 = v137;
          v13 = v139;
          if ( (__int64)(v46 - 1) < 0 )
            v60 = 0;
          v15 = v138;
          v9 = v140;
          v8 = v141;
          v11 = v142;
          v61 = 144 * v60;
          v62 = 144 * v60 + 144;
          v63 = a6 + v61 + 144;
          v137 = 0x8E38E38E38E38E39LL * (v62 >> 4);
          v64 = 0x8E38E38E38E38E39LL * (((__int64)v131->m128i_i64 - v139) >> 4);
          if ( (__int64)v131->m128i_i64 - v139 > 0 )
          {
LABEL_51:
            v138 = v14;
            v65 = v64;
            v139 = v63;
            v141 = v8;
            v140 = v9;
            v66 = v13 + 64;
            v67 = v62;
            v142 = v11;
            v68 = v59;
            do
            {
              v68[-4].m128i_i64[0] = *(_QWORD *)(v66 - 64);
              v68[-4].m128i_i64[1] = *(_QWORD *)(v66 - 56);
              v69 = *(_QWORD *)(v66 - 48);
              v70 = _mm_loadu_si128((const __m128i *)(v66 - 40));
              *(_QWORD *)(v66 - 48) = 0;
              *(_OWORD *)(v66 - 40) = 0;
              v71 = v68[-3].m128i_i64[0];
              if ( v71 )
              {
                v68[-3].m128i_i64[1] = 0;
                v134 = v70;
                qfree(v71);
                v70 = _mm_load_si128(&v134);
              }
              v68[-3].m128i_i64[0] = v69;
              *(__m128i *)((char *)v68 - 40) = v70;
              v72 = *(_QWORD *)(v66 - 24);
              v73 = _mm_loadu_si128((const __m128i *)(v66 - 16));
              *(_QWORD *)(v66 - 24) = 0;
              *(_OWORD *)(v66 - 16) = 0;
              v74 = v68[-2].m128i_i64[1];
              if ( v74 )
              {
                v68[-1].m128i_i64[0] = 0;
                v134 = v73;
                qfree(v74);
                v73 = _mm_load_si128(&v134);
              }
              v68[-2].m128i_i64[1] = v72;
              v75 = v66;
              v76 = v68;
              v66 += 144;
              v68[-1] = v73;
              v68 += 9;
              copy_tinfo_t(v76, v75);
              *(__m128i *)((char *)v68 - 136) = _mm_loadu_si128((const __m128i *)(v66 - 136));
              *(__m128i *)((char *)v68 - 120) = _mm_loadu_si128((const __m128i *)(v66 - 120));
              *(__m128i *)((char *)v68 - 104) = _mm_loadu_si128((const __m128i *)(v66 - 104));
              v68[-6].m128i_i32[2] = *(_DWORD *)(v66 - 88);
              v68[-5].m128i_i32[0] = *(_DWORD *)(v66 - 80);
              v68[-5].m128i_i32[1] = *(_DWORD *)(v66 - 76);
              v68[-5].m128i_i8[8] = *(_BYTE *)(v66 - 72);
              v68[-5].m128i_i32[3] = *(_DWORD *)(v66 - 68);
              --v65;
            }
            while ( v65 );
            LODWORD(v14) = v138;
            v63 = v139;
            v62 = v67;
            v9 = v140;
            v8 = v141;
            v11 = v142;
          }
          if ( v62 > 0 )
          {
            v139 = v8;
            v138 = v9;
            v77 = v63 - 80;
            v78 = v14;
            v140 = v11;
            v79 = v131 - 5;
            v80 = v137;
            do
            {
              v79[-4].m128i_i64[0] = *(_QWORD *)(v77 - 64);
              v79[-4].m128i_i64[1] = *(_QWORD *)(v77 - 56);
              v81 = *(_QWORD *)(v77 - 48);
              v82 = _mm_loadu_si128((const __m128i *)(v77 - 40));
              *(_QWORD *)(v77 - 48) = 0;
              *(_OWORD *)(v77 - 40) = 0;
              v83 = v79[-3].m128i_i64[0];
              if ( v83 )
              {
                v79[-3].m128i_i64[1] = 0;
                v134 = v82;
                qfree(v83);
                v82 = _mm_load_si128(&v134);
              }
              v79[-3].m128i_i64[0] = v81;
              *(__m128i *)((char *)v79 - 40) = v82;
              v84 = *(_QWORD *)(v77 - 24);
              v85 = _mm_loadu_si128((const __m128i *)(v77 - 16));
              *(_QWORD *)(v77 - 24) = 0;
              *(_OWORD *)(v77 - 16) = 0;
              v86 = v79[-2].m128i_i64[1];
              if ( v86 )
              {
                v79[-1].m128i_i64[0] = 0;
                v134 = v85;
                qfree(v86);
                v85 = _mm_load_si128(&v134);
              }
              v79[-2].m128i_i64[1] = v84;
              v87 = v77;
              v88 = (__int64 *)v79;
              v77 -= 144;
              v79[-1] = v85;
              v79 -= 9;
              copy_tinfo_t(v88, v87);
              *(__m128i *)((char *)v79 + 152) = _mm_loadu_si128((const __m128i *)(v77 + 152));
              *(__m128i *)((char *)v79 + 168) = _mm_loadu_si128((const __m128i *)(v77 + 168));
              *(__m128i *)((char *)v79 + 184) = _mm_loadu_si128((const __m128i *)(v77 + 184));
              v79[12].m128i_i32[2] = *(_DWORD *)(v77 + 200);
              v79[13].m128i_i32[0] = *(_DWORD *)(v77 + 208);
              v79[13].m128i_i32[1] = *(_DWORD *)(v77 + 212);
              v79[13].m128i_i8[8] = *(_BYTE *)(v77 + 216);
              v79[13].m128i_i32[3] = *(_DWORD *)(v77 + 220);
              --v80;
            }
            while ( v80 );
            LODWORD(v14) = v78;
            v9 = v138;
            v8 = v139;
            v11 = v140;
            v89 = v137 - 1;
            if ( (__int64)(v137 - 1) < 0 )
              v89 = 0;
            m128i_i8 = v131[-9 * v89 - 9].m128i_i8;
            goto LABEL_9;
          }
          goto LABEL_16;
        }
        v64 = 0x8E38E38E38E38E39LL * (((__int64)v131->m128i_i64 - v13) >> 4);
        if ( (__int64)v131->m128i_i64 - v13 > 0 )
        {
          v63 = a6;
          v62 = 0;
          v137 = 0;
          v59 = v135 + 4;
          goto LABEL_51;
        }
      }
LABEL_16:
      m128i_i8 = (char *)v131;
LABEL_9:
      v8 -= v15;
      sub_2B7D0(v133.m128i_i32[0], (_DWORD)v135, (_DWORD)m128i_i8, v14, v15, a6, v11);
      v17 = v8;
      if ( v9 <= v8 )
        v17 = v9;
      if ( v17 <= v11 )
        goto LABEL_18;
      v133.m128i_i64[0] = (__int64)m128i_i8;
      v10 = (__int64 *)v131;
      if ( v9 > v8 )
        goto LABEL_5;
LABEL_13:
      v15 = v8 / 2;
      v131 = (__m128i *)&v10[18 * (v8 / 2)];
      v135 = (__m128i *)sub_25180(v133.m128i_i64[0], (__int64)v10, v131);
      v14 = 0x8E38E38E38E38E39LL * (((__int64)v135->m128i_i64 - v18) >> 4);
      v9 -= v14;
      if ( v9 > v8 / 2 )
        goto LABEL_6;
    }
  }
  v131 = a2;
  m128i_i8 = (char *)a1;
LABEL_18:
  if ( v8 < v9 )
  {
    v32 = 0x8E38E38E38E38E39LL * ((v136 - (__int64)v131) >> 4);
    if ( v136 - (__int64)v131 <= 0 )
    {
      v45 = a6;
    }
    else
    {
      v33 = v131 + 4;
      v34 = 0x8E38E38E38E38E39LL * ((v136 - (__int64)v131) >> 4);
      v35 = a6 + 64;
      do
      {
        *(_QWORD *)(v35 - 64) = v33[-4].m128i_i64[0];
        *(_QWORD *)(v35 - 56) = v33[-4].m128i_i64[1];
        v36 = v33[-3].m128i_i64[0];
        v37 = _mm_loadu_si128((const __m128i *)((char *)v33 - 40));
        v33[-3].m128i_i64[0] = 0;
        *(const __m128i *)((char *)&v33[-3] + 8) = 0;
        v38 = *(_QWORD *)(v35 - 48);
        if ( v38 )
        {
          *(_QWORD *)(v35 - 40) = 0;
          v133 = v37;
          qfree(v38);
          v37 = _mm_load_si128(&v133);
        }
        *(_QWORD *)(v35 - 48) = v36;
        *(__m128i *)(v35 - 40) = v37;
        v39 = v33[-2].m128i_i64[1];
        v40 = _mm_loadu_si128(v33 - 1);
        v33[-2].m128i_i64[1] = 0;
        v33[-1] = 0;
        v41 = *(_QWORD *)(v35 - 24);
        if ( v41 )
        {
          *(_QWORD *)(v35 - 16) = 0;
          v133 = v40;
          qfree(v41);
          v40 = _mm_load_si128(&v133);
        }
        *(_QWORD *)(v35 - 24) = v39;
        v42 = v33;
        v43 = v35;
        v33 += 9;
        *(__m128i *)(v35 - 16) = v40;
        v35 += 144;
        copy_tinfo_t(v43, v42);
        *(__m128i *)(v35 - 136) = _mm_loadu_si128((const __m128i *)((char *)v33 - 136));
        *(__m128i *)(v35 - 120) = _mm_loadu_si128((const __m128i *)((char *)v33 - 120));
        *(__m128i *)(v35 - 104) = _mm_loadu_si128((const __m128i *)((char *)v33 - 104));
        *(_DWORD *)(v35 - 88) = v33[-6].m128i_i32[2];
        *(_DWORD *)(v35 - 80) = v33[-5].m128i_i32[0];
        *(_DWORD *)(v35 - 76) = v33[-5].m128i_i32[1];
        *(_BYTE *)(v35 - 72) = v33[-5].m128i_i8[8];
        *(_DWORD *)(v35 - 68) = v33[-5].m128i_i32[3];
        --v34;
      }
      while ( v34 );
      v44 = v32 - 1;
      if ( v44 < 0 )
        v44 = 0;
      v45 = a6 + 144 * v44 + 144;
    }
    sub_286C0((__int64)m128i_i8, (__int64)v131, a6, v45, v136);
  }
  else
  {
    if ( (char *)v131 - m128i_i8 <= 0 )
    {
      v31 = a6;
    }
    else
    {
      v19 = (const __m128i *)(m128i_i8 + 64);
      v20 = 0x8E38E38E38E38E39LL * (((char *)v131 - m128i_i8) >> 4);
      v21 = a6 + 64;
      do
      {
        *(_QWORD *)(v21 - 64) = v19[-4].m128i_i64[0];
        *(_QWORD *)(v21 - 56) = v19[-4].m128i_i64[1];
        v22 = v19[-3].m128i_i64[0];
        v23 = _mm_loadu_si128((const __m128i *)((char *)v19 - 40));
        v19[-3].m128i_i64[0] = 0;
        *(const __m128i *)((char *)&v19[-3] + 8) = 0;
        v24 = *(_QWORD *)(v21 - 48);
        if ( v24 )
        {
          *(_QWORD *)(v21 - 40) = 0;
          v133 = v23;
          qfree(v24);
          v23 = _mm_load_si128(&v133);
        }
        *(_QWORD *)(v21 - 48) = v22;
        *(__m128i *)(v21 - 40) = v23;
        v25 = v19[-2].m128i_i64[1];
        v26 = _mm_loadu_si128(v19 - 1);
        v19[-2].m128i_i64[1] = 0;
        v19[-1] = 0;
        v27 = *(_QWORD *)(v21 - 24);
        if ( v27 )
        {
          *(_QWORD *)(v21 - 16) = 0;
          v133 = v26;
          qfree(v27);
          v26 = _mm_load_si128(&v133);
        }
        *(_QWORD *)(v21 - 24) = v25;
        v28 = v19;
        v29 = v21;
        v19 += 9;
        *(__m128i *)(v21 - 16) = v26;
        v21 += 144;
        copy_tinfo_t(v29, v28);
        *(__m128i *)(v21 - 136) = _mm_loadu_si128((const __m128i *)((char *)v19 - 136));
        *(__m128i *)(v21 - 120) = _mm_loadu_si128((const __m128i *)((char *)v19 - 120));
        *(__m128i *)(v21 - 104) = _mm_loadu_si128((const __m128i *)((char *)v19 - 104));
        *(_DWORD *)(v21 - 88) = v19[-6].m128i_i32[2];
        *(_DWORD *)(v21 - 80) = v19[-5].m128i_i32[0];
        *(_DWORD *)(v21 - 76) = v19[-5].m128i_i32[1];
        *(_BYTE *)(v21 - 72) = v19[-5].m128i_i8[8];
        *(_DWORD *)(v21 - 68) = v19[-5].m128i_i32[3];
        --v20;
      }
      while ( v20 );
      v30 = 0x8E38E38E38E38E39LL * (((char *)v131 - m128i_i8) >> 4) - 1;
      if ( v30 < 0 )
        v30 = 0;
      v31 = a6 + 144 * v30 + 144;
    }
    sub_26940(a6, v31, (__int64)v131, v136, (__int64)m128i_i8);
  }
}
