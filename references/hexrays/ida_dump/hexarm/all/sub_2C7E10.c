unsigned __int64 __fastcall sub_2C7E10(const __m128i *a1, _QWORD *a2, int a3)
{
  const __m128i *v3; // rbx
  bool v4; // zf
  __int64 *m128i_i64; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int32 v14; // ecx
  __int64 v15; // rsi
  __m128i v16; // xmm7
  __int64 v17; // r12
  __int8 v18; // bp
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __int64 v22; // rdi
  __m128i v23; // xmm1
  __int32 v24; // esi
  __int32 v25; // ecx
  const __m128i *v26; // r13
  __int64 (__fastcall *v27)(const __m128i *, __int64); // rcx
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 i; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rdi
  bool v33; // cc
  __int64 v34; // r12
  __int64 v35; // rdx
  unsigned __int64 v36; // r13
  __int64 v37; // rax
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r12
  __int64 v40; // r14
  __int64 v41; // rsi
  const __m128i *v42; // rax
  __int64 *v43; // rsi
  __int64 (__fastcall *v44)(const __m128i *, __int64); // r10
  __int64 v45; // r10
  __int32 v46; // edi
  __int64 v47; // rdx
  __m128i v48; // xmm7
  __int64 v49; // r10
  __m128i v50; // xmm1
  __int64 v51; // rdi
  __int64 v52; // rdi
  __m128i v53; // xmm7
  __int32 v54; // r10d
  __int8 v55; // dl
  __int32 v56; // edi
  __int64 v57; // rsi
  const __m128i *v58; // rax
  __int64 *v59; // rsi
  __int64 (__fastcall *v60)(const __m128i *, __int64); // r10
  __int64 v61; // r10
  __int32 v62; // edi
  __int64 v63; // rdx
  __m128i v64; // xmm7
  __int64 v65; // r10
  __m128i v66; // xmm1
  __int64 v67; // rdi
  __int64 v68; // rdi
  __m128i v69; // xmm7
  __int32 v70; // r10d
  __int8 v71; // dl
  __int32 v72; // edi
  __int64 v73; // rdi
  __int64 v74; // r15
  unsigned __int8 (*v75)(void); // rax
  __int64 v76; // rdi
  bool (__fastcall *v77)(__int64); // rax
  _QWORD *v78; // rbx
  __int64 v80; // r12
  __int64 v81; // r15
  __int64 v82; // rdi
  __int32 v83; // esi
  __m128i v84; // xmm3
  __int64 v85; // r14
  __int8 v86; // r13
  __int64 v87; // rsi
  __m128i v88; // xmm0
  __int64 v89; // rdi
  const __m128i *v90; // rax
  __int64 v91; // rdi
  __m128i v92; // xmm4
  __int32 v93; // edi
  __int32 v94; // esi
  __int64 (__fastcall *v95)(const __m128i *, __int64); // r8
  __int64 *v96; // r12
  __int64 v97; // r14
  __int64 j; // r13
  _QWORD *v99; // rax
  __int64 v100; // rdi
  __int64 *v101; // r14
  _QWORD *v102; // r15
  char *v103; // rsi
  _QWORD *v104; // rdi
  _QWORD *v105; // r14
  __int64 v106; // r13
  const __m128i *v107; // rax
  __int64 (__fastcall *v108)(const __m128i *, __int64); // r8
  __int64 v109; // rsi
  __int64 v110; // r8
  __int32 v111; // edi
  __m128i v112; // xmm7
  __int64 v113; // r15
  __int8 v114; // r12
  __int64 v115; // r8
  __m128i v116; // xmm0
  __int64 v117; // rdi
  __int64 v118; // rdi
  __m128i v119; // xmm1
  __int32 v120; // r8d
  __int32 v121; // edi
  __int64 v122; // rax
  __int64 v123; // r12
  __int64 v124; // rbp
  _QWORD *v125; // rax
  __int64 v126; // rdi
  __m128i v127; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v128; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v129; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v130; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v131; // [rsp+40h] [rbp-A8h]
  __m128i *v132; // [rsp+48h] [rbp-A0h]
  __m128i v133; // [rsp+50h] [rbp-98h] BYREF
  __m128i v134; // [rsp+60h] [rbp-88h] BYREF
  const __m128i *v135; // [rsp+70h] [rbp-78h]
  _QWORD *v136; // [rsp+78h] [rbp-70h]
  _QWORD *v137; // [rsp+80h] [rbp-68h]
  __int64 *v138; // [rsp+88h] [rbp-60h]
  __int64 v139; // [rsp+90h] [rbp-58h] BYREF
  __int128 v140; // [rsp+98h] [rbp-50h]
  unsigned __int64 v141; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[7].m128i_i64[0] == 0;
  v136 = a2;
  LODWORD(v137) = a3;
  v141 = __readfsqword(0x28u);
  v131 = (_QWORD *)a1[6].m128i_i64[0];
  if ( v4 )
  {
    if ( !a1->m128i_i64[1] )
    {
      if ( !(_BYTE)v137 )
        return v141 - __readfsqword(0x28u);
      v131 = nullptr;
      v34 = *v136;
      v138 = (__int64 *)(*v136 + 40LL);
      v35 = v136[1];
      v137 = (_QWORD *)(v35 + 40);
      goto LABEL_25;
    }
    m128i_i64 = a1[1].m128i_i64;
    v6 = 0;
    v7 = (__int64)a2;
    do
    {
      switch_dbctx(*(int *)(*(_QWORD *)(v7 + 8 * v6) + 8LL));
      v8 = *(_QWORD *)(v7 + 8 * v6);
      sub_2C7A50((_QWORD *)(v8 + 40), (unsigned __int64)v131);
      v9 = *m128i_i64;
      v10 = *m128i_i64 + 88 * m128i_i64[1];
      if ( *m128i_i64 != v10 )
      {
        v132 = (__m128i *)m128i_i64;
        v11 = v8;
        v135 = v3;
        v12 = v9;
        v13 = v10;
        v130.m128i_i64[0] = v6;
        v133.m128i_i64[0] = v7;
        do
        {
          while ( 1 )
          {
            v26 = (const __m128i *)(*(_QWORD *)(v11 + 40) + 80LL * *(_QWORD *)(v12 + 80));
            v27 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v26->m128i_i64[0] + 8);
            if ( v27 == sub_2B1610 )
              break;
            v28 = v12;
            v12 += 88;
            v27(v26, v28);
            if ( v12 == v13 )
              goto LABEL_13;
          }
          v14 = v26[1].m128i_i32[0];
          v15 = v26->m128i_i64[1];
          *(const __m128i *)((char *)v26 + 8) = _mm_loadu_si128((const __m128i *)(v12 + 8));
          *(_DWORD *)(v12 + 16) = v14;
          *(_QWORD *)(v12 + 8) = v15;
          v16 = _mm_loadu_si128(v26 + 2);
          v17 = v26[1].m128i_i64[1];
          v26[2] = 0;
          v18 = v26[3].m128i_i8[0];
          v26[1].m128i_i64[1] = 0;
          v19 = *(_QWORD *)(v12 + 24);
          v20 = _mm_loadu_si128((const __m128i *)(v12 + 32));
          *(_QWORD *)(v12 + 24) = 0;
          *(_OWORD *)(v12 + 32) = 0;
          v21 = v26[1].m128i_i64[1];
          v127 = v16;
          if ( v21 )
          {
            v26[2].m128i_i64[0] = 0;
            v128.m128i_i64[0] = v19;
            v129 = v20;
            qfree(v21);
            v20 = _mm_load_si128(&v129);
            v19 = v128.m128i_i64[0];
          }
          v26[1].m128i_i64[1] = v19;
          v26[2] = v20;
          v26[3].m128i_i8[0] = *(_BYTE *)(v12 + 48);
          v22 = *(_QWORD *)(v12 + 24);
          if ( v22 )
          {
            *(_QWORD *)(v12 + 32) = 0;
            qfree(v22);
          }
          v23 = _mm_load_si128(&v127);
          v24 = *(_DWORD *)(v12 + 72);
          *(_QWORD *)(v12 + 24) = v17;
          v12 += 88;
          *(_BYTE *)(v12 - 40) = v18;
          *(__m128i *)(v12 - 56) = v23;
          v25 = v26[4].m128i_i32[2];
          v26[4].m128i_i32[2] = v24;
          *(_DWORD *)(v12 - 16) = v25;
        }
        while ( v12 != v13 );
LABEL_13:
        m128i_i64 = (__int64 *)v132;
        v6 = v130.m128i_i64[0];
        v3 = v135;
        v7 = v133.m128i_i64[0];
        v10 = v132->m128i_i64[0];
      }
      if ( v10 )
      {
        v29 = m128i_i64[1];
        if ( v29 )
        {
          for ( i = 0; i != v29; ++i )
          {
            v31 = (_QWORD *)(v10 + 88 * i);
            v32 = v31[3];
            *v31 = off_4DB918;
            if ( v32 )
            {
              v31[4] = 0;
              qfree(v32);
            }
            v10 = *m128i_i64;
          }
        }
        m128i_i64[1] = 0;
        qfree(v10);
        *m128i_i64 = 0;
        m128i_i64[2] = 0;
      }
      ++v6;
      m128i_i64 += 3;
    }
    while ( v6 < v3->m128i_i64[1] );
    goto LABEL_22;
  }
  v139 = 0;
  v138 = &v139;
  v140 = 0;
  sub_2C7A50(&v139, (unsigned __int64)v131);
  v4 = a1->m128i_i64[1] == 0;
  v132 = nullptr;
  v135 = a1 + 1;
  if ( !v4 )
  {
    do
    {
      switch_dbctx(*(int *)(v136[(_QWORD)v132] + 8LL));
      v80 = v135->m128i_i64[0];
      v81 = v135->m128i_i64[0] + 88 * v135->m128i_i64[1];
      if ( v135->m128i_i64[0] != v81 )
      {
        do
        {
          while ( 1 )
          {
            v90 = (const __m128i *)(v139 + 80LL * *(_QWORD *)(v80 + 80));
            v95 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v90->m128i_i64[0] + 8);
            if ( v95 == sub_2B1610 )
              break;
            v95((const __m128i *)(v139 + 80LL * *(_QWORD *)(v80 + 80)), v80);
            v80 += 88;
            if ( v81 == v80 )
              goto LABEL_69;
          }
          v82 = v90->m128i_i64[1];
          v83 = v90[1].m128i_i32[0];
          *(const __m128i *)((char *)v90 + 8) = _mm_loadu_si128((const __m128i *)(v80 + 8));
          *(_DWORD *)(v80 + 16) = v83;
          *(_QWORD *)(v80 + 8) = v82;
          v84 = _mm_loadu_si128(v90 + 2);
          v85 = v90[1].m128i_i64[1];
          v90[2] = 0;
          v86 = v90[3].m128i_i8[0];
          v90[1].m128i_i64[1] = 0;
          v87 = *(_QWORD *)(v80 + 24);
          v88 = _mm_loadu_si128((const __m128i *)(v80 + 32));
          *(_OWORD *)(v80 + 32) = 0;
          *(_QWORD *)(v80 + 24) = 0;
          v89 = v90[1].m128i_i64[1];
          v127 = v84;
          if ( v89 )
          {
            v90[2].m128i_i64[0] = 0;
            v129.m128i_i64[0] = v87;
            v128.m128i_i64[0] = (__int64)v90;
            v130 = v88;
            qfree(v89);
            v88 = _mm_load_si128(&v130);
            v87 = v129.m128i_i64[0];
            v90 = (const __m128i *)v128.m128i_i64[0];
          }
          v90[1].m128i_i64[1] = v87;
          v90[2] = v88;
          v90[3].m128i_i8[0] = *(_BYTE *)(v80 + 48);
          v91 = *(_QWORD *)(v80 + 24);
          if ( v91 )
          {
            *(_QWORD *)(v80 + 32) = 0;
            v128.m128i_i64[0] = (__int64)v90;
            qfree(v91);
            v90 = (const __m128i *)v128.m128i_i64[0];
          }
          v92 = _mm_load_si128(&v127);
          *(_QWORD *)(v80 + 24) = v85;
          v80 += 88;
          *(_BYTE *)(v80 - 40) = v86;
          v93 = *(_DWORD *)(v80 - 16);
          *(__m128i *)(v80 - 56) = v92;
          v94 = v90[4].m128i_i32[2];
          v90[4].m128i_i32[2] = v93;
          *(_DWORD *)(v80 - 16) = v94;
        }
        while ( v81 != v80 );
LABEL_69:
        v81 = v135->m128i_i64[0];
      }
      if ( v81 )
      {
        v96 = (__int64 *)v135;
        v97 = v135->m128i_i64[1];
        if ( v97 )
        {
          for ( j = 0; j != v97; ++j )
          {
            v99 = (_QWORD *)(v81 + 88 * j);
            v100 = v99[3];
            *v99 = off_4DB918;
            if ( v100 )
            {
              v99[4] = 0;
              qfree(v100);
            }
            v81 = *v96;
          }
        }
        v101 = (__int64 *)v135;
        v135->m128i_i64[1] = 0;
        qfree(v81);
        *v101 = 0;
        v101[2] = 0;
      }
      v102 = v131;
      v103 = (char *)v131 - v3[7].m128i_i64[0];
      v104 = (_QWORD *)(v136[(_QWORD)v132] + 40LL);
      v128.m128i_i64[0] = v136[(_QWORD)v132];
      sub_2C7A50(v104, (unsigned __int64)v103);
      if ( v102 )
      {
        v105 = nullptr;
        v106 = 0;
        do
        {
          if ( *(_DWORD *)(v3[5].m128i_i64[1] + 4LL * (_QWORD)v105) )
          {
            v107 = (const __m128i *)(*(_QWORD *)(v128.m128i_i64[0] + 40) + 80 * v106);
            v108 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v107->m128i_i64[0] + 8);
            v109 = v139 + 80LL * (_QWORD)v105;
            if ( v108 == sub_2B1610 )
            {
              v110 = v107->m128i_i64[1];
              v111 = v107[1].m128i_i32[0];
              *(const __m128i *)((char *)v107 + 8) = _mm_loadu_si128((const __m128i *)(v109 + 8));
              *(_QWORD *)(v109 + 8) = v110;
              *(_DWORD *)(v109 + 16) = v111;
              v112 = _mm_loadu_si128(v107 + 2);
              v113 = v107[1].m128i_i64[1];
              v107[2] = 0;
              v114 = v107[3].m128i_i8[0];
              v107[1].m128i_i64[1] = 0;
              v115 = *(_QWORD *)(v109 + 24);
              v116 = _mm_loadu_si128((const __m128i *)(v109 + 32));
              *(_QWORD *)(v109 + 24) = 0;
              *(_OWORD *)(v109 + 32) = 0;
              v117 = v107[1].m128i_i64[1];
              v127 = v112;
              if ( v117 )
              {
                v107[2].m128i_i64[0] = 0;
                v133.m128i_i64[0] = v115;
                v130.m128i_i64[0] = v109;
                v129.m128i_i64[0] = (__int64)v107;
                v134 = v116;
                qfree(v117);
                v116 = _mm_load_si128(&v134);
                v115 = v133.m128i_i64[0];
                v109 = v130.m128i_i64[0];
                v107 = (const __m128i *)v129.m128i_i64[0];
              }
              v107[1].m128i_i64[1] = v115;
              v107[2] = v116;
              v107[3].m128i_i8[0] = *(_BYTE *)(v109 + 48);
              v118 = *(_QWORD *)(v109 + 24);
              if ( v118 )
              {
                *(_QWORD *)(v109 + 32) = 0;
                v130.m128i_i64[0] = (__int64)v107;
                v129.m128i_i64[0] = v109;
                qfree(v118);
                v107 = (const __m128i *)v130.m128i_i64[0];
                v109 = v129.m128i_i64[0];
              }
              v119 = _mm_load_si128(&v127);
              v120 = *(_DWORD *)(v109 + 72);
              *(_QWORD *)(v109 + 24) = v113;
              *(_BYTE *)(v109 + 48) = v114;
              *(__m128i *)(v109 + 32) = v119;
              v121 = v107[4].m128i_i32[2];
              v107[4].m128i_i32[2] = v120;
              *(_DWORD *)(v109 + 72) = v121;
            }
            else
            {
              v108((const __m128i *)(*(_QWORD *)(v128.m128i_i64[0] + 40) + 80 * v106), v109);
            }
            ++v106;
          }
          v105 = (_QWORD *)((char *)v105 + 1);
        }
        while ( v105 != v131 );
      }
      else
      {
        v106 = 0;
      }
      if ( *(_QWORD *)(v128.m128i_i64[0] + 48) != v106 )
      {
        if ( !under_debugger )
          sub_3835A0(1962);
        BUG();
      }
      v132 = (__m128i *)((char *)v132 + 1);
      v135 = (const __m128i *)((char *)v135 + 24);
    }
    while ( (unsigned __int64)v132 < v3->m128i_i64[1] );
  }
  v122 = v139;
  if ( !v139 )
  {
LABEL_22:
    if ( !(_BYTE)v137 )
      return v141 - __readfsqword(0x28u);
    goto LABEL_23;
  }
  v123 = v140;
  if ( (_QWORD)v140 )
  {
    v124 = 0;
    do
    {
      v125 = (_QWORD *)(80 * v124 + v122);
      v126 = v125[3];
      *v125 = off_4DB918;
      if ( v126 )
      {
        v125[4] = 0;
        qfree(v126);
      }
      ++v124;
      v122 = v139;
    }
    while ( v123 != v124 );
  }
  *(_QWORD *)&v140 = 0;
  qfree(v122);
  if ( !(_BYTE)v137 )
    return v141 - __readfsqword(0x28u);
LABEL_23:
  v33 = v3->m128i_i64[1] <= 2uLL;
  v131 = nullptr;
  v34 = *v136;
  v138 = (__int64 *)(*v136 + 40LL);
  v35 = v136[1];
  v137 = (_QWORD *)(v35 + 40);
  if ( !v33 )
  {
    v127.m128i_i64[0] = v136[2];
    v131 = (_QWORD *)(v127.m128i_i64[0] + 40);
  }
LABEL_25:
  v36 = *(_QWORD *)(v34 + 48);
  if ( !v36 )
    goto LABEL_52;
  v37 = v34;
  v38 = 0;
  v127.m128i_i64[0] = v35;
  v39 = 0;
  v40 = v37;
  do
  {
    while ( 1 )
    {
      v73 = 80 * v38 + *(_QWORD *)(v40 + 40);
      v74 = 80 * v38;
      v75 = **(unsigned __int8 (***)(void))v73;
      if ( (char *)v75 == (char *)sub_2AD4C0 )
      {
        if ( *(_QWORD *)(v73 + 8) != *(_QWORD *)(v73 + 56) || *(_DWORD *)(v73 + 16) != *(_DWORD *)(v73 + 64) )
        {
LABEL_27:
          if ( v39 < v38 )
          {
            v41 = *(_QWORD *)(v40 + 40);
            v42 = (const __m128i *)(v41 + 80 * v39);
            v43 = (__int64 *)(v74 + v41);
            v44 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v42->m128i_i64[0] + 8);
            if ( v44 == sub_2B1610 )
            {
              v45 = v42->m128i_i64[1];
              v46 = v42[1].m128i_i32[0];
              *(const __m128i *)((char *)v42 + 8) = _mm_loadu_si128((const __m128i *)(v43 + 1));
              v43[1] = v45;
              *((_DWORD *)v43 + 4) = v46;
              v47 = v42[1].m128i_i64[1];
              v48 = _mm_loadu_si128(v42 + 2);
              v42[1].m128i_i64[1] = 0;
              v42[2] = 0;
              v49 = v43[3];
              v50 = _mm_loadu_si128((const __m128i *)v43 + 2);
              v129.m128i_i64[0] = v47;
              LOBYTE(v47) = v42[3].m128i_i8[0];
              v43[3] = 0;
              *((_OWORD *)v43 + 2) = 0;
              v51 = v42[1].m128i_i64[1];
              v130.m128i_i8[0] = v47;
              v128 = v48;
              if ( v51 )
              {
                v42[2].m128i_i64[0] = 0;
                v134.m128i_i64[0] = v49;
                v135 = (const __m128i *)v43;
                v132 = (__m128i *)v42;
                v133 = v50;
                qfree(v51);
                v49 = v134.m128i_i64[0];
                v50 = _mm_load_si128(&v133);
                v43 = (__int64 *)v135;
                v42 = v132;
              }
              v42[1].m128i_i64[1] = v49;
              v42[2] = v50;
              v42[3].m128i_i8[0] = *((_BYTE *)v43 + 48);
              v52 = v43[3];
              if ( v52 )
              {
                v43[4] = 0;
                v135 = v42;
                v132 = (__m128i *)v43;
                qfree(v52);
                v42 = v135;
                v43 = (__int64 *)v132;
              }
              v53 = _mm_load_si128(&v128);
              v54 = *((_DWORD *)v43 + 18);
              v43[3] = v129.m128i_i64[0];
              v55 = v130.m128i_i8[0];
              *((__m128i *)v43 + 2) = v53;
              *((_BYTE *)v43 + 48) = v55;
              v56 = v42[4].m128i_i32[2];
              v42[4].m128i_i32[2] = v54;
              *((_DWORD *)v43 + 18) = v56;
            }
            else
            {
              v44(v42, (__int64)v43);
            }
            v57 = *(_QWORD *)(v127.m128i_i64[0] + 40);
            v58 = (const __m128i *)(v57 + 80 * v39);
            v59 = (__int64 *)(v74 + v57);
            v60 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v58->m128i_i64[0] + 8);
            if ( v60 == sub_2B1610 )
            {
              v61 = v58->m128i_i64[1];
              v62 = v58[1].m128i_i32[0];
              *(const __m128i *)((char *)v58 + 8) = _mm_loadu_si128((const __m128i *)(v59 + 1));
              v59[1] = v61;
              *((_DWORD *)v59 + 4) = v62;
              v63 = v58[1].m128i_i64[1];
              v64 = _mm_loadu_si128(v58 + 2);
              v58[1].m128i_i64[1] = 0;
              v58[2] = 0;
              v65 = v59[3];
              v66 = _mm_loadu_si128((const __m128i *)v59 + 2);
              v129.m128i_i64[0] = v63;
              LOBYTE(v63) = v58[3].m128i_i8[0];
              v59[3] = 0;
              *((_OWORD *)v59 + 2) = 0;
              v67 = v58[1].m128i_i64[1];
              v130.m128i_i8[0] = v63;
              v128 = v64;
              if ( v67 )
              {
                v58[2].m128i_i64[0] = 0;
                v134.m128i_i64[0] = v65;
                v135 = (const __m128i *)v59;
                v132 = (__m128i *)v58;
                v133 = v66;
                qfree(v67);
                v65 = v134.m128i_i64[0];
                v66 = _mm_load_si128(&v133);
                v59 = (__int64 *)v135;
                v58 = v132;
              }
              v58[1].m128i_i64[1] = v65;
              v58[2] = v66;
              v58[3].m128i_i8[0] = *((_BYTE *)v59 + 48);
              v68 = v59[3];
              if ( v68 )
              {
                v59[4] = 0;
                v135 = v58;
                v132 = (__m128i *)v59;
                qfree(v68);
                v58 = v135;
                v59 = (__int64 *)v132;
              }
              v69 = _mm_load_si128(&v128);
              v70 = *((_DWORD *)v59 + 18);
              v59[3] = v129.m128i_i64[0];
              v71 = v130.m128i_i8[0];
              *((__m128i *)v59 + 2) = v69;
              *((_BYTE *)v59 + 48) = v71;
              v72 = v58[4].m128i_i32[2];
              v58[4].m128i_i32[2] = v70;
              *((_DWORD *)v59 + 18) = v72;
            }
            else
            {
              v60(v58, (__int64)v59);
            }
            if ( v131 )
              (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*v131 + 80 * v39) + 8LL))(
                *v131 + 80 * v39,
                v74 + *v131);
          }
          ++v39;
          goto LABEL_43;
        }
      }
      else if ( v75() )
      {
        goto LABEL_27;
      }
      v76 = v74 + *(_QWORD *)(v127.m128i_i64[0] + 40);
      v77 = **(bool (__fastcall ***)(__int64))v76;
      if ( v77 == sub_2AD4C0 )
        break;
      if ( ((unsigned __int8 (*)(void))v77)() )
        goto LABEL_27;
LABEL_43:
      if ( ++v38 >= *(_QWORD *)(v40 + 48) )
        goto LABEL_51;
    }
    if ( *(_QWORD *)(v76 + 8) != *(_QWORD *)(v76 + 56) || *(_DWORD *)(v76 + 16) != *(_DWORD *)(v76 + 64) )
      goto LABEL_27;
    ++v38;
  }
  while ( v38 < *(_QWORD *)(v40 + 48) );
LABEL_51:
  v36 = v39;
  v34 = *v136;
LABEL_52:
  switch_dbctx(*(int *)(v34 + 8));
  sub_2C7A50(v138, v36);
  v78 = v136;
  switch_dbctx(*(int *)(v136[1] + 8LL));
  sub_2C7A50(v137, v36);
  if ( v131 )
  {
    switch_dbctx(*(int *)(v78[2] + 8LL));
    return sub_2C7A50(v131, v36);
  }
  return v141 - __readfsqword(0x28u);
}
