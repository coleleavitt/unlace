unsigned __int64 __fastcall sub_2C7A50(__m128i *a1, _QWORD *a2, int a3)
{
  __m128i *v3; // rbx
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
  const __m128i *v43; // rsi
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
  const __m128i *v59; // rsi
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
  __int64 v79; // r12
  __int64 v80; // r15
  __int64 v81; // rdi
  __int32 v82; // esi
  __m128i v83; // xmm3
  __int64 v84; // r14
  __int8 v85; // r13
  __int64 v86; // rsi
  __m128i v87; // xmm0
  __int64 v88; // rdi
  const __m128i *v89; // rax
  __int64 v90; // rdi
  __m128i v91; // xmm4
  __int32 v92; // edi
  __int32 v93; // esi
  __int64 (__fastcall *v94)(const __m128i *, __int64); // r8
  __int64 *v95; // r12
  __int64 v96; // r14
  __int64 j; // r13
  _QWORD *v98; // rax
  __int64 v99; // rdi
  __int64 *v100; // r14
  __int64 *v101; // r15
  char *v102; // rsi
  __int64 *v103; // rdi
  __int64 *v104; // r14
  __int64 v105; // r13
  const __m128i *v106; // rax
  __int64 (__fastcall *v107)(const __m128i *, __int64); // r8
  __int64 v108; // rsi
  __int64 v109; // r8
  __int32 v110; // edi
  __m128i v111; // xmm7
  __int64 v112; // r15
  __int8 v113; // r12
  __int64 v114; // r8
  __m128i v115; // xmm0
  __int64 v116; // rdi
  __int64 v117; // rdi
  __m128i v118; // xmm1
  __int32 v119; // r8d
  __int32 v120; // edi
  __int64 v121; // rax
  __int64 v122; // r12
  __int64 v123; // rbp
  _QWORD *v124; // rax
  __int64 v125; // rdi
  __m128i v126; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v127; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v128; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v129; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v130; // [rsp+40h] [rbp-A8h]
  __m128i *v131; // [rsp+48h] [rbp-A0h]
  __m128i v132; // [rsp+50h] [rbp-98h] BYREF
  __m128i v133; // [rsp+60h] [rbp-88h] BYREF
  __m128i *v134; // [rsp+70h] [rbp-78h]
  _QWORD *v135; // [rsp+78h] [rbp-70h]
  __int64 *v136; // [rsp+80h] [rbp-68h]
  __int64 *v137; // [rsp+88h] [rbp-60h]
  __int64 v138; // [rsp+90h] [rbp-58h] BYREF
  __int128 v139; // [rsp+98h] [rbp-50h]
  unsigned __int64 v140; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[7].m128i_i64[0] == 0;
  v135 = a2;
  LODWORD(v136) = a3;
  v140 = __readfsqword(0x28u);
  v130 = (__int64 *)a1[6].m128i_i64[0];
  if ( v4 )
  {
    if ( !a1->m128i_i64[1] )
    {
      if ( !(_BYTE)v136 )
        return v140 - __readfsqword(0x28u);
      v130 = nullptr;
      v34 = *v135;
      v137 = (__int64 *)(*v135 + 40LL);
      v35 = v135[1];
      v136 = (__int64 *)(v35 + 40);
      goto LABEL_25;
    }
    m128i_i64 = a1[1].m128i_i64;
    v6 = 0;
    v7 = (__int64)a2;
    do
    {
      switch_dbctx();
      v8 = *(_QWORD *)(v7 + 8 * v6);
      sub_2C7690((__int64 *)(v8 + 40), (unsigned __int64)v130);
      v9 = *m128i_i64;
      v10 = *m128i_i64 + 88 * m128i_i64[1];
      if ( *m128i_i64 != v10 )
      {
        v131 = (__m128i *)m128i_i64;
        v11 = v8;
        v134 = v3;
        v12 = v9;
        v13 = v10;
        v129.m128i_i64[0] = v6;
        v132.m128i_i64[0] = v7;
        do
        {
          while ( 1 )
          {
            v26 = (const __m128i *)(*(_QWORD *)(v11 + 40) + 80LL * *(_QWORD *)(v12 + 80));
            v27 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v26->m128i_i64[0] + 8);
            if ( v27 == sub_2B1250 )
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
          v126 = v16;
          if ( v21 )
          {
            v26[2].m128i_i64[0] = 0;
            v127.m128i_i64[0] = v19;
            v128 = v20;
            qfree(v21);
            v20 = _mm_load_si128(&v128);
            v19 = v127.m128i_i64[0];
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
          v23 = _mm_load_si128(&v126);
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
        m128i_i64 = (__int64 *)v131;
        v6 = v129.m128i_i64[0];
        v3 = v134;
        v7 = v132.m128i_i64[0];
        v10 = v131->m128i_i64[0];
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
            *v31 = off_4E1258;
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
  v138 = 0;
  v137 = &v138;
  v139 = 0;
  sub_2C7690(&v138, (unsigned __int64)v130);
  v4 = a1->m128i_i64[1] == 0;
  v131 = nullptr;
  v134 = a1 + 1;
  if ( !v4 )
  {
    do
    {
      switch_dbctx();
      v79 = v134->m128i_i64[0];
      v80 = v134->m128i_i64[0] + 88 * v134->m128i_i64[1];
      if ( v134->m128i_i64[0] != v80 )
      {
        do
        {
          while ( 1 )
          {
            v89 = (const __m128i *)(v138 + 80LL * *(_QWORD *)(v79 + 80));
            v94 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v89->m128i_i64[0] + 8);
            if ( v94 == sub_2B1250 )
              break;
            v94((const __m128i *)(v138 + 80LL * *(_QWORD *)(v79 + 80)), v79);
            v79 += 88;
            if ( v80 == v79 )
              goto LABEL_69;
          }
          v81 = v89->m128i_i64[1];
          v82 = v89[1].m128i_i32[0];
          *(const __m128i *)((char *)v89 + 8) = _mm_loadu_si128((const __m128i *)(v79 + 8));
          *(_DWORD *)(v79 + 16) = v82;
          *(_QWORD *)(v79 + 8) = v81;
          v83 = _mm_loadu_si128(v89 + 2);
          v84 = v89[1].m128i_i64[1];
          v89[2] = 0;
          v85 = v89[3].m128i_i8[0];
          v89[1].m128i_i64[1] = 0;
          v86 = *(_QWORD *)(v79 + 24);
          v87 = _mm_loadu_si128((const __m128i *)(v79 + 32));
          *(_OWORD *)(v79 + 32) = 0;
          *(_QWORD *)(v79 + 24) = 0;
          v88 = v89[1].m128i_i64[1];
          v126 = v83;
          if ( v88 )
          {
            v89[2].m128i_i64[0] = 0;
            v128.m128i_i64[0] = v86;
            v127.m128i_i64[0] = (__int64)v89;
            v129 = v87;
            qfree(v88);
            v87 = _mm_load_si128(&v129);
            v86 = v128.m128i_i64[0];
            v89 = (const __m128i *)v127.m128i_i64[0];
          }
          v89[1].m128i_i64[1] = v86;
          v89[2] = v87;
          v89[3].m128i_i8[0] = *(_BYTE *)(v79 + 48);
          v90 = *(_QWORD *)(v79 + 24);
          if ( v90 )
          {
            *(_QWORD *)(v79 + 32) = 0;
            v127.m128i_i64[0] = (__int64)v89;
            qfree(v90);
            v89 = (const __m128i *)v127.m128i_i64[0];
          }
          v91 = _mm_load_si128(&v126);
          *(_QWORD *)(v79 + 24) = v84;
          v79 += 88;
          *(_BYTE *)(v79 - 40) = v85;
          v92 = *(_DWORD *)(v79 - 16);
          *(__m128i *)(v79 - 56) = v91;
          v93 = v89[4].m128i_i32[2];
          v89[4].m128i_i32[2] = v92;
          *(_DWORD *)(v79 - 16) = v93;
        }
        while ( v80 != v79 );
LABEL_69:
        v80 = v134->m128i_i64[0];
      }
      if ( v80 )
      {
        v95 = (__int64 *)v134;
        v96 = v134->m128i_i64[1];
        if ( v96 )
        {
          for ( j = 0; j != v96; ++j )
          {
            v98 = (_QWORD *)(v80 + 88 * j);
            v99 = v98[3];
            *v98 = off_4E1258;
            if ( v99 )
            {
              v98[4] = 0;
              qfree(v99);
            }
            v80 = *v95;
          }
        }
        v100 = (__int64 *)v134;
        v134->m128i_i64[1] = 0;
        qfree(v80);
        *v100 = 0;
        v100[2] = 0;
      }
      v101 = v130;
      v102 = (char *)v130 - v3[7].m128i_i64[0];
      v103 = (__int64 *)(v135[(_QWORD)v131] + 40LL);
      v127.m128i_i64[0] = v135[(_QWORD)v131];
      sub_2C7690(v103, (unsigned __int64)v102);
      if ( v101 )
      {
        v104 = nullptr;
        v105 = 0;
        do
        {
          if ( *(_DWORD *)(v3[5].m128i_i64[1] + 4LL * (_QWORD)v104) )
          {
            v106 = (const __m128i *)(*(_QWORD *)(v127.m128i_i64[0] + 40) + 80 * v105);
            v107 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v106->m128i_i64[0] + 8);
            v108 = v138 + 80LL * (_QWORD)v104;
            if ( v107 == sub_2B1250 )
            {
              v109 = v106->m128i_i64[1];
              v110 = v106[1].m128i_i32[0];
              *(const __m128i *)((char *)v106 + 8) = _mm_loadu_si128((const __m128i *)(v108 + 8));
              *(_QWORD *)(v108 + 8) = v109;
              *(_DWORD *)(v108 + 16) = v110;
              v111 = _mm_loadu_si128(v106 + 2);
              v112 = v106[1].m128i_i64[1];
              v106[2] = 0;
              v113 = v106[3].m128i_i8[0];
              v106[1].m128i_i64[1] = 0;
              v114 = *(_QWORD *)(v108 + 24);
              v115 = _mm_loadu_si128((const __m128i *)(v108 + 32));
              *(_QWORD *)(v108 + 24) = 0;
              *(_OWORD *)(v108 + 32) = 0;
              v116 = v106[1].m128i_i64[1];
              v126 = v111;
              if ( v116 )
              {
                v106[2].m128i_i64[0] = 0;
                v132.m128i_i64[0] = v114;
                v129.m128i_i64[0] = v108;
                v128.m128i_i64[0] = (__int64)v106;
                v133 = v115;
                qfree(v116);
                v115 = _mm_load_si128(&v133);
                v114 = v132.m128i_i64[0];
                v108 = v129.m128i_i64[0];
                v106 = (const __m128i *)v128.m128i_i64[0];
              }
              v106[1].m128i_i64[1] = v114;
              v106[2] = v115;
              v106[3].m128i_i8[0] = *(_BYTE *)(v108 + 48);
              v117 = *(_QWORD *)(v108 + 24);
              if ( v117 )
              {
                *(_QWORD *)(v108 + 32) = 0;
                v129.m128i_i64[0] = (__int64)v106;
                v128.m128i_i64[0] = v108;
                qfree(v117);
                v106 = (const __m128i *)v129.m128i_i64[0];
                v108 = v128.m128i_i64[0];
              }
              v118 = _mm_load_si128(&v126);
              v119 = *(_DWORD *)(v108 + 72);
              *(_QWORD *)(v108 + 24) = v112;
              *(_BYTE *)(v108 + 48) = v113;
              *(__m128i *)(v108 + 32) = v118;
              v120 = v106[4].m128i_i32[2];
              v106[4].m128i_i32[2] = v119;
              *(_DWORD *)(v108 + 72) = v120;
            }
            else
            {
              v107((const __m128i *)(*(_QWORD *)(v127.m128i_i64[0] + 40) + 80 * v105), v108);
            }
            ++v105;
          }
          v104 = (__int64 *)((char *)v104 + 1);
        }
        while ( v104 != v130 );
      }
      else
      {
        v105 = 0;
      }
      if ( *(_QWORD *)(v127.m128i_i64[0] + 48) != v105 )
      {
        if ( !under_debugger )
          sub_383060(1962);
        BUG();
      }
      v131 = (__m128i *)((char *)v131 + 1);
      v134 = (__m128i *)((char *)v134 + 24);
    }
    while ( (unsigned __int64)v131 < v3->m128i_i64[1] );
  }
  v121 = v138;
  if ( !v138 )
  {
LABEL_22:
    if ( !(_BYTE)v136 )
      return v140 - __readfsqword(0x28u);
    goto LABEL_23;
  }
  v122 = v139;
  if ( (_QWORD)v139 )
  {
    v123 = 0;
    do
    {
      v124 = (_QWORD *)(80 * v123 + v121);
      v125 = v124[3];
      *v124 = off_4E1258;
      if ( v125 )
      {
        v124[4] = 0;
        qfree(v125);
      }
      ++v123;
      v121 = v138;
    }
    while ( v122 != v123 );
  }
  *(_QWORD *)&v139 = 0;
  qfree(v121);
  if ( !(_BYTE)v136 )
    return v140 - __readfsqword(0x28u);
LABEL_23:
  v33 = v3->m128i_i64[1] <= 2uLL;
  v130 = nullptr;
  v34 = *v135;
  v137 = (__int64 *)(*v135 + 40LL);
  v35 = v135[1];
  v136 = (__int64 *)(v35 + 40);
  if ( !v33 )
  {
    v126.m128i_i64[0] = v135[2];
    v130 = (__int64 *)(v126.m128i_i64[0] + 40);
  }
LABEL_25:
  v36 = *(_QWORD *)(v34 + 48);
  if ( !v36 )
    goto LABEL_52;
  v37 = v34;
  v38 = 0;
  v126.m128i_i64[0] = v35;
  v39 = 0;
  v40 = v37;
  do
  {
    while ( 1 )
    {
      v73 = 80 * v38 + *(_QWORD *)(v40 + 40);
      v74 = 80 * v38;
      v75 = **(unsigned __int8 (***)(void))v73;
      if ( (char *)v75 == (char *)sub_2AD100 )
      {
        if ( *(_QWORD *)(v73 + 8) != *(_QWORD *)(v73 + 56) || *(_DWORD *)(v73 + 16) != *(_DWORD *)(v73 + 64) )
        {
LABEL_27:
          if ( v39 < v38 )
          {
            v41 = *(_QWORD *)(v40 + 40);
            v42 = (const __m128i *)(v41 + 80 * v39);
            v43 = (const __m128i *)(v74 + v41);
            v44 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v42->m128i_i64[0] + 8);
            if ( v44 == sub_2B1250 )
            {
              v45 = v42->m128i_i64[1];
              v46 = v42[1].m128i_i32[0];
              *(const __m128i *)((char *)v42 + 8) = _mm_loadu_si128((const __m128i *)&v43->m128i_u64[1]);
              v43->m128i_i64[1] = v45;
              v43[1].m128i_i32[0] = v46;
              v47 = v42[1].m128i_i64[1];
              v48 = _mm_loadu_si128(v42 + 2);
              v42[1].m128i_i64[1] = 0;
              v42[2] = 0;
              v49 = v43[1].m128i_i64[1];
              v50 = _mm_loadu_si128(v43 + 2);
              v128.m128i_i64[0] = v47;
              LOBYTE(v47) = v42[3].m128i_i8[0];
              v43[1].m128i_i64[1] = 0;
              v43[2] = 0;
              v51 = v42[1].m128i_i64[1];
              v129.m128i_i8[0] = v47;
              v127 = v48;
              if ( v51 )
              {
                v42[2].m128i_i64[0] = 0;
                v133.m128i_i64[0] = v49;
                v134 = (__m128i *)v43;
                v131 = (__m128i *)v42;
                v132 = v50;
                qfree(v51);
                v49 = v133.m128i_i64[0];
                v50 = _mm_load_si128(&v132);
                v43 = v134;
                v42 = v131;
              }
              v42[1].m128i_i64[1] = v49;
              v42[2] = v50;
              v42[3].m128i_i8[0] = v43[3].m128i_i8[0];
              v52 = v43[1].m128i_i64[1];
              if ( v52 )
              {
                v43[2].m128i_i64[0] = 0;
                v134 = (__m128i *)v42;
                v131 = (__m128i *)v43;
                qfree(v52);
                v42 = v134;
                v43 = v131;
              }
              v53 = _mm_load_si128(&v127);
              v54 = v43[4].m128i_i32[2];
              v43[1].m128i_i64[1] = v128.m128i_i64[0];
              v55 = v129.m128i_i8[0];
              v43[2] = v53;
              v43[3].m128i_i8[0] = v55;
              v56 = v42[4].m128i_i32[2];
              v42[4].m128i_i32[2] = v54;
              v43[4].m128i_i32[2] = v56;
            }
            else
            {
              v44(v42, (__int64)v43);
            }
            v57 = *(_QWORD *)(v126.m128i_i64[0] + 40);
            v58 = (const __m128i *)(v57 + 80 * v39);
            v59 = (const __m128i *)(v74 + v57);
            v60 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v58->m128i_i64[0] + 8);
            if ( v60 == sub_2B1250 )
            {
              v61 = v58->m128i_i64[1];
              v62 = v58[1].m128i_i32[0];
              *(const __m128i *)((char *)v58 + 8) = _mm_loadu_si128((const __m128i *)&v59->m128i_u64[1]);
              v59->m128i_i64[1] = v61;
              v59[1].m128i_i32[0] = v62;
              v63 = v58[1].m128i_i64[1];
              v64 = _mm_loadu_si128(v58 + 2);
              v58[1].m128i_i64[1] = 0;
              v58[2] = 0;
              v65 = v59[1].m128i_i64[1];
              v66 = _mm_loadu_si128(v59 + 2);
              v128.m128i_i64[0] = v63;
              LOBYTE(v63) = v58[3].m128i_i8[0];
              v59[1].m128i_i64[1] = 0;
              v59[2] = 0;
              v67 = v58[1].m128i_i64[1];
              v129.m128i_i8[0] = v63;
              v127 = v64;
              if ( v67 )
              {
                v58[2].m128i_i64[0] = 0;
                v133.m128i_i64[0] = v65;
                v134 = (__m128i *)v59;
                v131 = (__m128i *)v58;
                v132 = v66;
                qfree(v67);
                v65 = v133.m128i_i64[0];
                v66 = _mm_load_si128(&v132);
                v59 = v134;
                v58 = v131;
              }
              v58[1].m128i_i64[1] = v65;
              v58[2] = v66;
              v58[3].m128i_i8[0] = v59[3].m128i_i8[0];
              v68 = v59[1].m128i_i64[1];
              if ( v68 )
              {
                v59[2].m128i_i64[0] = 0;
                v134 = (__m128i *)v58;
                v131 = (__m128i *)v59;
                qfree(v68);
                v58 = v134;
                v59 = v131;
              }
              v69 = _mm_load_si128(&v127);
              v70 = v59[4].m128i_i32[2];
              v59[1].m128i_i64[1] = v128.m128i_i64[0];
              v71 = v129.m128i_i8[0];
              v59[2] = v69;
              v59[3].m128i_i8[0] = v71;
              v72 = v58[4].m128i_i32[2];
              v58[4].m128i_i32[2] = v70;
              v59[4].m128i_i32[2] = v72;
            }
            else
            {
              v60(v58, (__int64)v59);
            }
            if ( v130 )
              (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*v130 + 80 * v39) + 8LL))(
                *v130 + 80 * v39,
                v74 + *v130);
          }
          ++v39;
          goto LABEL_43;
        }
      }
      else if ( v75() )
      {
        goto LABEL_27;
      }
      v76 = v74 + *(_QWORD *)(v126.m128i_i64[0] + 40);
      v77 = **(bool (__fastcall ***)(__int64))v76;
      if ( v77 == sub_2AD100 )
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
LABEL_52:
  switch_dbctx();
  sub_2C7690(v137, v36);
  switch_dbctx();
  sub_2C7690(v136, v36);
  if ( v130 )
  {
    switch_dbctx();
    return sub_2C7690(v130, v36);
  }
  return v140 - __readfsqword(0x28u);
}
