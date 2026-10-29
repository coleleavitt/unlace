unsigned __int64 __fastcall sub_5BE780(_QWORD *a1, _QWORD *a2, char a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __m128i *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  char *v29; // rax
  unsigned __int64 v30; // rdx
  char *v31; // rax
  unsigned __int64 v32; // rax
  char *v33; // rax
  bool v34; // zf
  _QWORD *v35; // r15
  unsigned __int64 v36; // rbp
  _QWORD *v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  char *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // r9
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rdi
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rdx
  char *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // r10
  __int64 v62; // rdi
  __int64 v63; // r10
  __int64 v64; // rdi
  _QWORD *v65; // rsi
  _QWORD *v66; // r12
  __int64 *v67; // r15
  _QWORD *v68; // r14
  unsigned __int64 v69; // rbp
  unsigned __int64 v70; // rcx
  __int64 *v71; // rax
  __int64 v72; // r13
  __int64 v73; // r11
  __int64 v74; // r13
  __int64 v75; // r11
  __int64 v76; // rax
  __int64 *v77; // rdx
  __int64 *v78; // rax
  __int64 v79; // r11
  __int64 v80; // r13
  __int64 v81; // r11
  __int64 v82; // r13
  __int64 v83; // r11
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r10
  __int64 v88; // rdx
  __int64 v89; // r10
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r10
  __int64 *v93; // rdx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rsi
  unsigned __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __m128i v101; // xmm0
  __int64 v102; // rsi
  __int64 v103; // rdi
  unsigned __int64 v104; // rdx
  __m128i *v105; // rdx
  __int64 v106; // rax
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  unsigned __int64 v111; // rsi
  unsigned __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  __m128i v117; // xmm0
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rdx
  __m128i *v121; // rdx
  __m128i v122; // xmm0
  __int64 v123; // rsi
  __int64 v124; // rdi
  __int64 v125; // rdx
  __m128i *v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  __m128i v129; // xmm0
  __int64 v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // rdx
  __m128i *v133; // rdx
  __int64 v134; // rax
  __int64 v136; // [rsp+8h] [rbp-A0h]
  _QWORD *v137; // [rsp+10h] [rbp-98h]
  unsigned __int64 v138; // [rsp+10h] [rbp-98h]
  unsigned __int64 v139; // [rsp+10h] [rbp-98h]
  _QWORD *v140; // [rsp+18h] [rbp-90h]
  _QWORD *v141; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int128 v143; // [rsp+28h] [rbp-80h]
  __m128i v144; // [rsp+40h] [rbp-68h] BYREF
  __int64 v145; // [rsp+50h] [rbp-58h]
  __int64 v146; // [rsp+58h] [rbp-50h]
  unsigned __int64 v147; // [rsp+68h] [rbp-40h]

  v5 = a1[14];
  v147 = __readfsqword(0x28u);
  v6 = a1[12];
  if ( v5 )
  {
    ptr = nullptr;
    v143 = 0;
    if ( v6 )
    {
      v29 = (char *)qvector_reserve(&ptr, 0, v6, 32);
      ptr = v29;
      if ( (unsigned __int64)v143 < v6 )
      {
        v30 = v143 + 1;
        v31 = &v29[32 * v143];
        *(_QWORD *)v31 = 0;
        *((_QWORD *)v31 + 1) = -1;
        *((_QWORD *)v31 + 2) = 0;
        v31[24] = 0;
        if ( v30 < v6 )
        {
          do
          {
            v32 = v30++;
            v33 = (char *)ptr + 32 * v32;
            *(_QWORD *)v33 = 0;
            *((_QWORD *)v33 + 1) = -1;
            *((_QWORD *)v33 + 2) = 0;
            v33[24] = 0;
          }
          while ( v6 != v30 );
        }
      }
      v34 = a1[1] == 0;
      *(_QWORD *)&v143 = v6;
      if ( v34 )
        goto LABEL_48;
    }
    else if ( !a1[1] )
    {
      goto LABEL_50;
    }
    v35 = a1 + 2;
    v36 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v36] + 8LL));
      v37 = (_QWORD *)*v35;
      v38 = *v35 + 40LL * v35[1];
      if ( v38 != *v35 )
      {
        do
        {
          v39 = v37[4];
          v40 = *v37;
          v37 += 5;
          v41 = (char *)ptr + 32 * v39;
          v42 = *(_QWORD *)v41;
          *(_QWORD *)v41 = v40;
          v43 = *(v37 - 4);
          *(v37 - 5) = v42;
          v44 = *((_QWORD *)v41 + 1);
          *((_QWORD *)v41 + 1) = v43;
          v45 = *(v37 - 3);
          *(v37 - 4) = v44;
          v46 = *((_QWORD *)v41 + 2);
          *((_QWORD *)v41 + 2) = v45;
          LOBYTE(v45) = *((_BYTE *)v37 - 16);
          *(v37 - 3) = v46;
          LOBYTE(v46) = v41[24];
          v41[24] = v45;
          *((_BYTE *)v37 - 16) = v46;
        }
        while ( (_QWORD *)v38 != v37 );
        v37 = (_QWORD *)*v35;
      }
      if ( v37 )
      {
        v35[1] = 0;
        qfree(v37);
        *v35 = 0;
        v35[2] = 0;
      }
      v47 = (_QWORD *)a2[v36];
      v48 = v6 - a1[14];
      v49 = v47[6];
      if ( v48 != v49 )
      {
        v144.m128i_i64[0] = 0;
        v145 = 0;
        LOBYTE(v146) = 0;
        v144.m128i_i64[1] = -1;
        if ( v48 >= v49 )
        {
          v50 = v47[5];
          v51 = v47[7];
          v52 = v47 + 5;
          if ( (unsigned __int64)&v144 < v50 || (unsigned __int64)&v144 >= v50 + 32 * v51 )
          {
            if ( v51 < v48 )
            {
              v140 = v47;
              v138 = v48;
              v106 = qvector_reserve(v52, v50, v48, 32);
              v47 = v140;
              v48 = v138;
              v140[5] = v106;
              v49 = v140[6];
            }
            if ( v49 < v48 )
            {
              v101 = _mm_load_si128(&v144);
              v102 = v145;
              v103 = v146;
              do
              {
                v104 = v49++;
                v105 = (__m128i *)(v47[5] + 32 * v104);
                v105[1].m128i_i64[0] = v102;
                v105[1].m128i_i64[1] = v103;
                *v105 = v101;
              }
              while ( v48 != v49 );
            }
          }
          else
          {
            if ( v51 < v48 )
            {
              v141 = v47;
              v139 = v48;
              v127 = qvector_reserve(v52, v50, v48, 32);
              v47 = v141;
              v48 = v139;
              v141[5] = v127;
              v49 = v141[6];
            }
            if ( v49 < v48 )
            {
              do
              {
                v53 = v49++;
                v54 = v47[5] + 32 * v53;
                *(_QWORD *)v54 = 0;
                *(_QWORD *)(v54 + 8) = -1;
                *(_QWORD *)(v54 + 16) = 0;
                *(_BYTE *)(v54 + 24) = 0;
              }
              while ( v48 != v49 );
            }
          }
        }
        v47[6] = v48;
      }
      if ( v6 )
      {
        v55 = 0;
        v56 = 0;
        do
        {
          if ( *(_DWORD *)(a1[11] + 4 * v55) )
          {
            v57 = v56++;
            v58 = v47[5] + 32 * v57;
            v59 = (char *)ptr + 32 * v55;
            v60 = *(_QWORD *)v58;
            *(_QWORD *)v58 = *(_QWORD *)v59;
            v61 = *((_QWORD *)v59 + 1);
            *(_QWORD *)v59 = v60;
            v62 = *(_QWORD *)(v58 + 8);
            *(_QWORD *)(v58 + 8) = v61;
            v63 = *((_QWORD *)v59 + 2);
            *((_QWORD *)v59 + 1) = v62;
            v64 = *(_QWORD *)(v58 + 16);
            *(_QWORD *)(v58 + 16) = v63;
            LOBYTE(v63) = v59[24];
            *((_QWORD *)v59 + 2) = v64;
            LOBYTE(v64) = *(_BYTE *)(v58 + 24);
            *(_BYTE *)(v58 + 24) = v63;
            v59[24] = v64;
          }
          ++v55;
        }
        while ( v55 != v6 );
      }
      else
      {
        v56 = 0;
      }
      if ( v47[6] != v56 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++v36;
      v35 += 3;
    }
    while ( v36 < a1[1] );
LABEL_48:
    if ( ptr )
    {
      *(_QWORD *)&v143 = 0;
      qfree(ptr);
    }
LABEL_50:
    if ( !a3 )
      return v147 - __readfsqword(0x28u);
    goto LABEL_51;
  }
  if ( !a1[1] )
  {
    if ( !a3 )
      return v147 - __readfsqword(0x28u);
    v65 = (_QWORD *)*a2;
    v66 = (_QWORD *)a2[1];
    v67 = nullptr;
    v68 = (_QWORD *)*a2;
    v136 = *a2 + 40LL;
    v137 = v66 + 5;
    goto LABEL_53;
  }
  v7 = a1 + 2;
  do
  {
    switch_dbctx(*(int *)(a2[v5] + 8LL));
    v8 = (_QWORD *)a2[v5];
    v9 = v8[6];
    if ( v6 != v9 )
    {
      v144.m128i_i64[0] = 0;
      v145 = 0;
      LOBYTE(v146) = 0;
      v144.m128i_i64[1] = -1;
      if ( v6 >= v9 )
      {
        v10 = v8[5];
        v11 = v8[7];
        v12 = v8 + 5;
        if ( (unsigned __int64)&v144 < v10 || (unsigned __int64)&v144 >= v10 + 32 * v11 )
        {
          if ( v11 < v6 )
          {
            v128 = qvector_reserve(v12, v10, v6, 32);
            v9 = v8[6];
            v8[5] = v128;
          }
          if ( v9 < v6 )
          {
            v13 = _mm_load_si128(&v144);
            v14 = v145;
            v15 = v146;
            do
            {
              v16 = v9++;
              v17 = (__m128i *)(v8[5] + 32 * v16);
              v17[1].m128i_i64[0] = v14;
              v17[1].m128i_i64[1] = v15;
              *v17 = v13;
            }
            while ( v6 != v9 );
          }
        }
        else
        {
          if ( v11 < v6 )
          {
            v134 = qvector_reserve(v12, v10, v6, 32);
            v9 = v8[6];
            v8[5] = v134;
          }
          if ( v9 < v6 )
          {
            do
            {
              v115 = v9++;
              v116 = v8[5] + 32 * v115;
              *(_QWORD *)v116 = 0;
              *(_QWORD *)(v116 + 8) = -1;
              *(_QWORD *)(v116 + 16) = 0;
              *(_BYTE *)(v116 + 24) = 0;
            }
            while ( v6 != v9 );
          }
        }
      }
      v8[6] = v6;
    }
    v18 = (_QWORD *)*v7;
    v19 = (_QWORD *)(*v7 + 40LL * v7[1]);
    if ( (_QWORD *)*v7 != v19 )
    {
      do
      {
        v20 = v18[4];
        v21 = *v18;
        v18 += 5;
        v22 = v8[5] + 32 * v20;
        v23 = *(_QWORD *)v22;
        *(_QWORD *)v22 = v21;
        v24 = *(v18 - 4);
        *(v18 - 5) = v23;
        v25 = *(_QWORD *)(v22 + 8);
        *(_QWORD *)(v22 + 8) = v24;
        v26 = *(v18 - 3);
        *(v18 - 4) = v25;
        v27 = *(_QWORD *)(v22 + 16);
        *(_QWORD *)(v22 + 16) = v26;
        LOBYTE(v26) = *((_BYTE *)v18 - 16);
        *(v18 - 3) = v27;
        LOBYTE(v27) = *(_BYTE *)(v22 + 24);
        *(_BYTE *)(v22 + 24) = v26;
        *((_BYTE *)v18 - 16) = v27;
      }
      while ( v19 != v18 );
      v19 = (_QWORD *)*v7;
    }
    if ( v19 )
    {
      v7[1] = 0;
      qfree(v19);
      *v7 = 0;
      v7[2] = 0;
    }
    ++v5;
    v7 += 3;
  }
  while ( v5 < a1[1] );
  if ( !a3 )
    return v147 - __readfsqword(0x28u);
LABEL_51:
  v65 = (_QWORD *)*a2;
  v66 = (_QWORD *)a2[1];
  v67 = nullptr;
  v68 = (_QWORD *)*a2;
  v136 = *a2 + 40LL;
  v137 = v66 + 5;
  if ( a1[1] > 2u )
    v67 = (__int64 *)(a2[2] + 40LL);
LABEL_53:
  v69 = v65[6];
  if ( v69 )
  {
    v70 = 0;
    v69 = 0;
    do
    {
      while ( 1 )
      {
        v91 = v65[5];
        v92 = 32 * v70;
        v93 = (__int64 *)(v91 + 32 * v70);
        if ( *v93 || *(_QWORD *)(v66[5] + 32 * v70) )
          break;
        if ( ++v70 >= v65[6] )
          goto LABEL_62;
      }
      if ( v69 < v70 )
      {
        v71 = (__int64 *)(32 * v69 + v91);
        v72 = *v71;
        *v71 = *v93;
        *v93 = v72;
        v73 = v71[1];
        v71[1] = v93[1];
        v74 = v93[2];
        v93[1] = v73;
        v75 = v71[2];
        v71[2] = v74;
        LOBYTE(v74) = *((_BYTE *)v93 + 24);
        v93[2] = v75;
        LOBYTE(v75) = *((_BYTE *)v71 + 24);
        *((_BYTE *)v71 + 24) = v74;
        *((_BYTE *)v93 + 24) = v75;
        v76 = v66[5];
        v77 = (__int64 *)(v76 + 32 * v69);
        v78 = (__int64 *)(v92 + v76);
        v79 = *v77;
        *v77 = *v78;
        v80 = v78[1];
        *v78 = v79;
        v81 = v77[1];
        v77[1] = v80;
        v82 = v78[2];
        v78[1] = v81;
        v83 = v77[2];
        v77[2] = v82;
        LOBYTE(v82) = *((_BYTE *)v78 + 24);
        v78[2] = v83;
        LOBYTE(v83) = *((_BYTE *)v77 + 24);
        *((_BYTE *)v77 + 24) = v82;
        *((_BYTE *)v78 + 24) = v83;
        if ( v67 )
        {
          v84 = *v67 + 32 * v69;
          v85 = v92 + *v67;
          v86 = *(_QWORD *)v84;
          *(_QWORD *)v84 = *(_QWORD *)v85;
          v87 = *(_QWORD *)(v85 + 8);
          *(_QWORD *)v85 = v86;
          v88 = *(_QWORD *)(v84 + 8);
          *(_QWORD *)(v84 + 8) = v87;
          v89 = *(_QWORD *)(v85 + 16);
          *(_QWORD *)(v85 + 8) = v88;
          v90 = *(_QWORD *)(v84 + 16);
          *(_QWORD *)(v84 + 16) = v89;
          LOBYTE(v89) = *(_BYTE *)(v85 + 24);
          *(_QWORD *)(v85 + 16) = v90;
          LOBYTE(v90) = *(_BYTE *)(v84 + 24);
          *(_BYTE *)(v84 + 24) = v89;
          *(_BYTE *)(v85 + 24) = v90;
        }
      }
      ++v69;
      ++v70;
    }
    while ( v70 < v65[6] );
LABEL_62:
    v65 = (_QWORD *)*a2;
  }
  switch_dbctx(*((int *)v65 + 2));
  v94 = v68[6];
  if ( v94 != v69 )
  {
    v144.m128i_i64[0] = 0;
    v145 = 0;
    LOBYTE(v146) = 0;
    v144.m128i_i64[1] = -1;
    if ( v69 >= v94 )
    {
      v111 = v68[5];
      v112 = v68[7];
      if ( (unsigned __int64)&v144 < v111 || (unsigned __int64)&v144 >= v111 + 32 * v112 )
      {
        if ( v112 < v69 )
        {
          v68[5] = qvector_reserve(v136, v111, v69, 32);
          v94 = v68[6];
        }
        if ( v94 < v69 )
        {
          v122 = _mm_load_si128(&v144);
          v123 = v145;
          v124 = v146;
          do
          {
            v125 = v94++;
            v126 = (__m128i *)(v68[5] + 32 * v125);
            v126[1].m128i_i64[0] = v123;
            v126[1].m128i_i64[1] = v124;
            *v126 = v122;
          }
          while ( v69 != v94 );
        }
      }
      else
      {
        if ( v112 < v69 )
        {
          v68[5] = qvector_reserve(v136, v111, v69, 32);
          v94 = v68[6];
        }
        if ( v94 < v69 )
        {
          do
          {
            v113 = v94++;
            v114 = v68[5] + 32 * v113;
            *(_QWORD *)v114 = 0;
            *(_QWORD *)(v114 + 8) = -1;
            *(_QWORD *)(v114 + 16) = 0;
            *(_BYTE *)(v114 + 24) = 0;
          }
          while ( v69 != v94 );
        }
      }
    }
    v68[6] = v69;
  }
  switch_dbctx(*(int *)(a2[1] + 8LL));
  v95 = v66[6];
  if ( v95 != v69 )
  {
    v144.m128i_i64[0] = 0;
    v145 = 0;
    LOBYTE(v146) = 0;
    v144.m128i_i64[1] = -1;
    if ( v69 >= v95 )
    {
      v107 = v66[5];
      v108 = v66[7];
      if ( (unsigned __int64)&v144 < v107 || (unsigned __int64)&v144 >= v107 + 32 * v108 )
      {
        if ( v108 < v69 )
        {
          v66[5] = qvector_reserve(v137, v107, v69, 32);
          v95 = v66[6];
        }
        if ( v95 < v69 )
        {
          v117 = _mm_load_si128(&v144);
          v118 = v145;
          v119 = v146;
          do
          {
            v120 = v95++;
            v121 = (__m128i *)(v66[5] + 32 * v120);
            v121[1].m128i_i64[0] = v118;
            v121[1].m128i_i64[1] = v119;
            *v121 = v117;
          }
          while ( v69 != v95 );
        }
      }
      else
      {
        if ( v108 < v69 )
        {
          v66[5] = qvector_reserve(v137, v107, v69, 32);
          v95 = v66[6];
        }
        if ( v95 < v69 )
        {
          do
          {
            v109 = v95++;
            v110 = v66[5] + 32 * v109;
            *(_QWORD *)v110 = 0;
            *(_QWORD *)(v110 + 8) = -1;
            *(_QWORD *)(v110 + 16) = 0;
            *(_BYTE *)(v110 + 24) = 0;
          }
          while ( v69 != v95 );
        }
      }
    }
    v66[6] = v69;
  }
  if ( v67 )
  {
    switch_dbctx(*(int *)(a2[2] + 8LL));
    v96 = v67[1];
    if ( v96 != v69 )
    {
      v144.m128i_i64[0] = 0;
      v145 = 0;
      LOBYTE(v146) = 0;
      v144.m128i_i64[1] = -1;
      if ( v69 >= v96 )
      {
        v97 = *v67;
        v98 = v67[2];
        if ( (unsigned __int64)&v144 < *v67 || (unsigned __int64)&v144 >= v97 + 32 * v98 )
        {
          if ( v98 < v69 )
          {
            *v67 = qvector_reserve(v67, v97, v69, 32);
            v96 = v67[1];
          }
          if ( v96 < v69 )
          {
            v129 = _mm_load_si128(&v144);
            v130 = v145;
            v131 = v146;
            do
            {
              v132 = v96++;
              v133 = (__m128i *)(*v67 + 32 * v132);
              v133[1].m128i_i64[0] = v130;
              v133[1].m128i_i64[1] = v131;
              *v133 = v129;
            }
            while ( v69 != v96 );
          }
        }
        else
        {
          if ( v98 < v69 )
          {
            *v67 = qvector_reserve(v67, v97, v69, 32);
            v96 = v67[1];
          }
          if ( v96 < v69 )
          {
            do
            {
              v99 = v96++;
              v100 = *v67 + 32 * v99;
              *(_QWORD *)v100 = 0;
              *(_QWORD *)(v100 + 8) = -1;
              *(_QWORD *)(v100 + 16) = 0;
              *(_BYTE *)(v100 + 24) = 0;
            }
            while ( v69 != v96 );
          }
        }
      }
      v67[1] = v69;
    }
  }
  return v147 - __readfsqword(0x28u);
}
