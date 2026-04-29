unsigned __int64 __fastcall sub_2C9970(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r14
  bool v4; // zf
  __int64 *v5; // rbp
  unsigned __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // esi
  __m128i v12; // xmm2
  __int64 v13; // rbx
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rdi
  __m128i v18; // xmm1
  int v19; // edi
  int v20; // esi
  __int64 v21; // r13
  __int64 (__fastcall *v22)(__int64, __int64); // r8
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 j; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rdi
  bool v28; // cc
  __int64 v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // rbp
  __int64 v32; // r14
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r15
  __int64 v35; // rdi
  unsigned __int8 (*v36)(void); // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 (__fastcall *v41)(__int64, __int64); // r9
  int v42; // edi
  __int64 v43; // rcx
  __m128i v44; // xmm2
  __int64 v45; // r9
  __m128i v46; // xmm1
  __int64 v47; // rdi
  __int64 v48; // rdi
  __m128i v49; // xmm2
  int v50; // r9d
  int v51; // edi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 (__fastcall *v55)(__int64, __int64); // r9
  int v56; // edi
  __int64 v57; // rcx
  __m128i v58; // xmm2
  __int64 v59; // r9
  __m128i v60; // xmm1
  __int64 v61; // rdi
  __int64 v62; // rdi
  __m128i v63; // xmm2
  int v64; // r9d
  int v65; // edi
  __int64 v66; // rbx
  __int64 v67; // rbp
  __int64 (__fastcall *v68)(__int64, __int64); // rax
  int v69; // eax
  __int64 v70; // rax
  __m128i v71; // xmm1
  unsigned __int64 v72; // rdx
  __m128i v73; // xmm2
  __int64 v74; // rdi
  __int64 v75; // rdi
  int v76; // edx
  int v77; // eax
  __int64 v78; // rdi
  __int64 v79; // rbp
  unsigned __int8 (*v80)(void); // rax
  __int64 v82; // rbp
  __int64 v83; // r15
  int v84; // edx
  __m128i v85; // xmm4
  __int64 v86; // r12
  __int64 v87; // rdx
  __m128i v88; // xmm0
  __int64 v89; // rdi
  __int64 v90; // rdi
  __m128i v91; // xmm5
  int v92; // esi
  int v93; // edx
  __int64 v94; // r13
  __int64 (__fastcall *v95)(__int64, __int64); // rdx
  __int64 *v96; // rbp
  __int64 v97; // r13
  __int64 i; // r12
  _QWORD *v99; // rax
  __int64 v100; // rdi
  _QWORD *v101; // rbp
  __int64 *v102; // rbp
  __int64 v103; // r15
  __int64 *v104; // r12
  __int64 v105; // r13
  __int64 v106; // rax
  __int64 (__fastcall *v107)(__int64, __int64); // r8
  __int64 v108; // rsi
  int v109; // edi
  __m128i v110; // xmm2
  __int64 v111; // rbp
  __int64 v112; // r8
  __m128i v113; // xmm0
  __int64 v114; // rdi
  __int64 v115; // rdi
  __m128i v116; // xmm1
  int v117; // r8d
  int v118; // edi
  __int64 v119; // rax
  __int64 v120; // rbp
  __int64 v121; // rbx
  _QWORD *v122; // rax
  __int64 v123; // rdi
  __m128i v124; // [rsp+0h] [rbp-E8h] BYREF
  __int64 *v125; // [rsp+18h] [rbp-D0h]
  __m128i v126; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v127; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v128; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v129; // [rsp+50h] [rbp-98h] BYREF
  __m128i v130; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v131; // [rsp+70h] [rbp-78h]
  _QWORD *v132; // [rsp+78h] [rbp-70h]
  __int64 *v133; // [rsp+80h] [rbp-68h]
  __int64 *v134; // [rsp+88h] [rbp-60h]
  __int64 v135; // [rsp+90h] [rbp-58h] BYREF
  __int128 v136; // [rsp+98h] [rbp-50h]
  unsigned __int64 v137; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v132 = a2;
  LODWORD(v133) = a3;
  v137 = __readfsqword(0x28u);
  v125 = (__int64 *)a1[12];
  if ( !v4 )
  {
    v135 = 0;
    v134 = &v135;
    v136 = 0;
    sub_2C95E0(&v135, (unsigned __int64)v125);
    v4 = a1[1] == 0;
    v131 = 0;
    v128.m128i_i64[0] = (__int64)(a1 + 2);
    if ( !v4 )
    {
      do
      {
        switch_dbctx();
        v82 = *(_QWORD *)v128.m128i_i64[0];
        v83 = *(_QWORD *)v128.m128i_i64[0] + 56LL * *(_QWORD *)(v128.m128i_i64[0] + 8);
        if ( *(_QWORD *)v128.m128i_i64[0] != v83 )
        {
          do
          {
            while ( 1 )
            {
              v94 = v135 + 48LL * *(_QWORD *)(v82 + 48);
              v95 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v94 + 8LL);
              if ( v95 == sub_2B0210 )
                break;
              v95(v135 + 48LL * *(_QWORD *)(v82 + 48), v82);
              v82 += 56;
              if ( v83 == v82 )
                goto LABEL_72;
            }
            v84 = *(_DWORD *)(v94 + 8);
            *(_DWORD *)(v94 + 8) = *(_DWORD *)(v82 + 8);
            *(_DWORD *)(v82 + 8) = v84;
            v85 = _mm_loadu_si128((const __m128i *)(v94 + 24));
            v86 = *(_QWORD *)(v94 + 16);
            *(_OWORD *)(v94 + 24) = 0;
            *(_QWORD *)(v94 + 16) = 0;
            v87 = *(_QWORD *)(v82 + 16);
            v88 = _mm_loadu_si128((const __m128i *)(v82 + 24));
            *(_QWORD *)(v82 + 16) = 0;
            *(_OWORD *)(v82 + 24) = 0;
            v89 = *(_QWORD *)(v94 + 16);
            v124 = v85;
            if ( v89 )
            {
              *(_QWORD *)(v94 + 24) = 0;
              v126.m128i_i64[0] = v87;
              v127 = v88;
              qfree(v89);
              v88 = _mm_load_si128(&v127);
              v87 = v126.m128i_i64[0];
            }
            *(_QWORD *)(v94 + 16) = v87;
            *(__m128i *)(v94 + 24) = v88;
            v90 = *(_QWORD *)(v82 + 16);
            if ( v90 )
            {
              *(_QWORD *)(v82 + 24) = 0;
              qfree(v90);
            }
            v91 = _mm_load_si128(&v124);
            v92 = *(_DWORD *)(v82 + 44);
            *(_QWORD *)(v82 + 16) = v86;
            v82 += 56;
            *(__m128i *)(v82 - 32) = v91;
            v93 = *(_DWORD *)(v94 + 44);
            *(_DWORD *)(v94 + 44) = v92;
            *(_DWORD *)(v82 - 12) = v93;
          }
          while ( v83 != v82 );
LABEL_72:
          v83 = *(_QWORD *)v128.m128i_i64[0];
        }
        if ( v83 )
        {
          v96 = (__int64 *)v128.m128i_i64[0];
          v97 = *(_QWORD *)(v128.m128i_i64[0] + 8);
          if ( v97 )
          {
            for ( i = 0; i != v97; ++i )
            {
              v99 = (_QWORD *)(v83 + 56 * i);
              v100 = v99[2];
              *v99 = off_4E1370;
              if ( v100 )
              {
                v99[3] = 0;
                qfree(v100);
              }
              v83 = *v96;
            }
          }
          v101 = (_QWORD *)v128.m128i_i64[0];
          *(_QWORD *)(v128.m128i_i64[0] + 8) = 0;
          qfree(v83);
          *v101 = 0;
          v101[2] = 0;
        }
        v102 = v125;
        v103 = v132[v131];
        sub_2C95E0((__int64 *)(v103 + 40), (unsigned __int64)v125 - v3[14]);
        if ( v102 )
        {
          v104 = nullptr;
          v105 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4LL * (_QWORD)v104) )
            {
              v106 = *(_QWORD *)(v103 + 40) + 48 * v105;
              v107 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v106 + 8LL);
              v108 = v135 + 48LL * (_QWORD)v104;
              if ( v107 == sub_2B0210 )
              {
                v109 = *(_DWORD *)(v106 + 8);
                *(_DWORD *)(v106 + 8) = *(_DWORD *)(v108 + 8);
                *(_DWORD *)(v108 + 8) = v109;
                v110 = _mm_loadu_si128((const __m128i *)(v106 + 24));
                v111 = *(_QWORD *)(v106 + 16);
                *(_OWORD *)(v106 + 24) = 0;
                *(_QWORD *)(v106 + 16) = 0;
                v112 = *(_QWORD *)(v108 + 16);
                v113 = _mm_loadu_si128((const __m128i *)(v108 + 24));
                *(_QWORD *)(v108 + 16) = 0;
                *(_OWORD *)(v108 + 24) = 0;
                v114 = *(_QWORD *)(v106 + 16);
                v124 = v110;
                if ( v114 )
                {
                  *(_QWORD *)(v106 + 24) = 0;
                  v129.m128i_i64[0] = v112;
                  v127.m128i_i64[0] = v108;
                  v126.m128i_i64[0] = v106;
                  v130 = v113;
                  qfree(v114);
                  v113 = _mm_load_si128(&v130);
                  v112 = v129.m128i_i64[0];
                  v108 = v127.m128i_i64[0];
                  v106 = v126.m128i_i64[0];
                }
                *(_QWORD *)(v106 + 16) = v112;
                *(__m128i *)(v106 + 24) = v113;
                v115 = *(_QWORD *)(v108 + 16);
                if ( v115 )
                {
                  *(_QWORD *)(v108 + 24) = 0;
                  v127.m128i_i64[0] = v106;
                  v126.m128i_i64[0] = v108;
                  qfree(v115);
                  v106 = v127.m128i_i64[0];
                  v108 = v126.m128i_i64[0];
                }
                v116 = _mm_load_si128(&v124);
                v117 = *(_DWORD *)(v108 + 44);
                *(_QWORD *)(v108 + 16) = v111;
                *(__m128i *)(v108 + 24) = v116;
                v118 = *(_DWORD *)(v106 + 44);
                *(_DWORD *)(v106 + 44) = v117;
                *(_DWORD *)(v108 + 44) = v118;
              }
              else
              {
                v107(*(_QWORD *)(v103 + 40) + 48 * v105, v108);
              }
              ++v105;
            }
            v104 = (__int64 *)((char *)v104 + 1);
          }
          while ( v104 != v125 );
        }
        else
        {
          v105 = 0;
        }
        if ( *(_QWORD *)(v103 + 48) != v105 )
        {
          if ( !under_debugger )
            sub_383060(1962);
          BUG();
        }
        ++v131;
        v128.m128i_i64[0] += 24;
      }
      while ( v131 < v3[1] );
    }
    v119 = v135;
    if ( v135 )
    {
      v120 = v136;
      if ( (_QWORD)v136 )
      {
        v121 = 0;
        do
        {
          v122 = (_QWORD *)(48 * v121 + v119);
          v123 = v122[2];
          *v122 = off_4E1370;
          if ( v123 )
          {
            v122[3] = 0;
            qfree(v123);
          }
          ++v121;
          v119 = v135;
        }
        while ( v120 != v121 );
      }
      *(_QWORD *)&v136 = 0;
      qfree(v119);
    }
LABEL_23:
    if ( (_BYTE)v133 )
    {
      v28 = v3[1] <= 2u;
      v125 = nullptr;
      v29 = *v132;
      v30 = v132[1];
      v133 = (__int64 *)(*v132 + 40LL);
      v134 = (__int64 *)(v30 + 40);
      if ( !v28 )
      {
        v124.m128i_i64[0] = v132[2];
        v125 = (__int64 *)(v124.m128i_i64[0] + 40);
      }
      goto LABEL_26;
    }
    return v137 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v131 = 0;
    v5 = a1 + 2;
    v128.m128i_i64[0] = (__int64)a1;
    do
    {
      v6 = v131;
      v7 = v132;
      switch_dbctx();
      v8 = v7[v6];
      sub_2C95E0((__int64 *)(v8 + 40), (unsigned __int64)v125);
      v9 = *v5;
      v10 = *v5 + 56 * v5[1];
      if ( *v5 != v10 )
      {
        do
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v8 + 40) + 48LL * *(_QWORD *)(v9 + 48);
            v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 8LL);
            if ( v22 == sub_2B0210 )
              break;
            v23 = v9;
            v9 += 56;
            v22(v21, v23);
            if ( v9 == v10 )
              goto LABEL_13;
          }
          v11 = *(_DWORD *)(v21 + 8);
          *(_DWORD *)(v21 + 8) = *(_DWORD *)(v9 + 8);
          *(_DWORD *)(v9 + 8) = v11;
          v12 = _mm_loadu_si128((const __m128i *)(v21 + 24));
          v13 = *(_QWORD *)(v21 + 16);
          *(_OWORD *)(v21 + 24) = 0;
          *(_QWORD *)(v21 + 16) = 0;
          v14 = *(_QWORD *)(v9 + 16);
          v15 = _mm_loadu_si128((const __m128i *)(v9 + 24));
          *(_QWORD *)(v9 + 16) = 0;
          *(_OWORD *)(v9 + 24) = 0;
          v16 = *(_QWORD *)(v21 + 16);
          v124 = v12;
          if ( v16 )
          {
            *(_QWORD *)(v21 + 24) = 0;
            v126.m128i_i64[0] = v14;
            v127 = v15;
            qfree(v16);
            v15 = _mm_load_si128(&v127);
            v14 = v126.m128i_i64[0];
          }
          *(_QWORD *)(v21 + 16) = v14;
          *(__m128i *)(v21 + 24) = v15;
          v17 = *(_QWORD *)(v9 + 16);
          if ( v17 )
          {
            *(_QWORD *)(v9 + 24) = 0;
            qfree(v17);
          }
          v18 = _mm_load_si128(&v124);
          v19 = *(_DWORD *)(v9 + 44);
          *(_QWORD *)(v9 + 16) = v13;
          v9 += 56;
          *(__m128i *)(v9 - 32) = v18;
          v20 = *(_DWORD *)(v21 + 44);
          *(_DWORD *)(v21 + 44) = v19;
          *(_DWORD *)(v9 - 12) = v20;
        }
        while ( v9 != v10 );
LABEL_13:
        v10 = *v5;
      }
      if ( v10 )
      {
        v24 = v5[1];
        if ( v24 )
        {
          for ( j = 0; j != v24; ++j )
          {
            v26 = (_QWORD *)(v10 + 56 * j);
            v27 = v26[2];
            *v26 = off_4E1370;
            if ( v27 )
            {
              v26[3] = 0;
              qfree(v27);
            }
            v10 = *v5;
          }
        }
        v5[1] = 0;
        qfree(v10);
        *v5 = 0;
        v5[2] = 0;
      }
      ++v131;
      v5 += 3;
    }
    while ( v131 < *(_QWORD *)(v128.m128i_i64[0] + 8) );
    v3 = (_QWORD *)v128.m128i_i64[0];
    goto LABEL_23;
  }
  if ( !(_BYTE)v133 )
    return v137 - __readfsqword(0x28u);
  v125 = nullptr;
  v29 = *v132;
  v30 = v132[1];
  v133 = (__int64 *)(*v132 + 40LL);
  v134 = (__int64 *)(v30 + 40);
LABEL_26:
  v31 = *(_QWORD *)(v29 + 48);
  if ( !v31 )
    goto LABEL_58;
  v32 = v29;
  v124.m128i_i64[0] = v30;
  v33 = 0;
  v34 = 0;
  do
  {
    v78 = 48 * v33 + *(_QWORD *)(v32 + 40);
    v79 = 48 * v33;
    v80 = **(unsigned __int8 (***)(void))v78;
    if ( (char *)v80 == (char *)sub_2AD160 )
    {
      if ( *(_DWORD *)(v78 + 8) != *(_DWORD *)(v78 + 40) )
        goto LABEL_31;
    }
    else if ( v80() )
    {
      goto LABEL_31;
    }
    v35 = v79 + *(_QWORD *)(v124.m128i_i64[0] + 40);
    v36 = **(unsigned __int8 (***)(void))v35;
    if ( (char *)v36 == (char *)sub_2AD160 )
    {
      if ( *(_DWORD *)(v35 + 8) == *(_DWORD *)(v35 + 40) )
        goto LABEL_52;
    }
    else if ( !v36() )
    {
      goto LABEL_52;
    }
LABEL_31:
    if ( v34 < v33 )
    {
      v37 = *(_QWORD *)(v32 + 40);
      v38 = 48 * v34;
      v39 = v37 + 48 * v34;
      v40 = v79 + v37;
      v41 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 8LL);
      if ( v41 == sub_2B0210 )
      {
        v42 = *(_DWORD *)(v39 + 8);
        *(_DWORD *)(v39 + 8) = *(_DWORD *)(v40 + 8);
        *(_DWORD *)(v40 + 8) = v42;
        v43 = *(_QWORD *)(v39 + 16);
        v44 = _mm_loadu_si128((const __m128i *)(v39 + 24));
        *(_QWORD *)(v39 + 16) = 0;
        *(_OWORD *)(v39 + 24) = 0;
        v45 = *(_QWORD *)(v40 + 16);
        v46 = _mm_loadu_si128((const __m128i *)(v40 + 24));
        *(_QWORD *)(v40 + 16) = 0;
        *(_OWORD *)(v40 + 24) = 0;
        v47 = *(_QWORD *)(v39 + 16);
        v127.m128i_i64[0] = v43;
        v126 = v44;
        if ( v47 )
        {
          *(_QWORD *)(v39 + 24) = 0;
          v130.m128i_i64[0] = v45;
          v128.m128i_i64[0] = v40;
          v131 = v39;
          v129 = v46;
          qfree(v47);
          v45 = v130.m128i_i64[0];
          v46 = _mm_load_si128(&v129);
          v40 = v128.m128i_i64[0];
          v39 = v131;
        }
        *(_QWORD *)(v39 + 16) = v45;
        *(__m128i *)(v39 + 24) = v46;
        v48 = *(_QWORD *)(v40 + 16);
        if ( v48 )
        {
          *(_QWORD *)(v40 + 24) = 0;
          v128.m128i_i64[0] = v39;
          v131 = v40;
          qfree(v48);
          v39 = v128.m128i_i64[0];
          v40 = v131;
        }
        v49 = _mm_load_si128(&v126);
        v50 = *(_DWORD *)(v40 + 44);
        *(_QWORD *)(v40 + 16) = v127.m128i_i64[0];
        *(__m128i *)(v40 + 24) = v49;
        v51 = *(_DWORD *)(v39 + 44);
        *(_DWORD *)(v39 + 44) = v50;
        *(_DWORD *)(v40 + 44) = v51;
      }
      else
      {
        v41(v39, v40);
      }
      v52 = *(_QWORD *)(v124.m128i_i64[0] + 40);
      v53 = v52 + v38;
      v54 = v79 + v52;
      v55 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 8LL);
      if ( v55 == sub_2B0210 )
      {
        v56 = *(_DWORD *)(v53 + 8);
        *(_DWORD *)(v53 + 8) = *(_DWORD *)(v54 + 8);
        *(_DWORD *)(v54 + 8) = v56;
        v57 = *(_QWORD *)(v53 + 16);
        v58 = _mm_loadu_si128((const __m128i *)(v53 + 24));
        *(_QWORD *)(v53 + 16) = 0;
        *(_OWORD *)(v53 + 24) = 0;
        v59 = *(_QWORD *)(v54 + 16);
        v60 = _mm_loadu_si128((const __m128i *)(v54 + 24));
        *(_QWORD *)(v54 + 16) = 0;
        *(_OWORD *)(v54 + 24) = 0;
        v61 = *(_QWORD *)(v53 + 16);
        v127.m128i_i64[0] = v57;
        v126 = v58;
        if ( v61 )
        {
          *(_QWORD *)(v53 + 24) = 0;
          v130.m128i_i64[0] = v59;
          v129.m128i_i64[0] = v54;
          v131 = v53;
          v128 = v60;
          qfree(v61);
          v59 = v130.m128i_i64[0];
          v54 = v129.m128i_i64[0];
          v60 = _mm_load_si128(&v128);
          v53 = v131;
        }
        *(_QWORD *)(v53 + 16) = v59;
        *(__m128i *)(v53 + 24) = v60;
        v62 = *(_QWORD *)(v54 + 16);
        if ( v62 )
        {
          *(_QWORD *)(v54 + 24) = 0;
          v128.m128i_i64[0] = v53;
          v131 = v54;
          qfree(v62);
          v53 = v128.m128i_i64[0];
          v54 = v131;
        }
        v63 = _mm_load_si128(&v126);
        v64 = *(_DWORD *)(v54 + 44);
        *(_QWORD *)(v54 + 16) = v127.m128i_i64[0];
        *(__m128i *)(v54 + 24) = v63;
        v65 = *(_DWORD *)(v53 + 44);
        *(_DWORD *)(v53 + 44) = v64;
        *(_DWORD *)(v54 + 44) = v65;
      }
      else
      {
        v55(v53, v54);
      }
      if ( v125 )
      {
        v66 = *v125 + v38;
        v67 = *v125 + v79;
        v68 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 8LL);
        if ( v68 == sub_2B0210 )
        {
          v69 = *(_DWORD *)(v66 + 8);
          *(_DWORD *)(v66 + 8) = *(_DWORD *)(v67 + 8);
          *(_DWORD *)(v67 + 8) = v69;
          v70 = *(_QWORD *)(v66 + 16);
          v71 = _mm_loadu_si128((const __m128i *)(v66 + 24));
          *(_QWORD *)(v66 + 16) = 0;
          *(_OWORD *)(v66 + 24) = 0;
          v72 = *(_QWORD *)(v67 + 16);
          v73 = _mm_loadu_si128((const __m128i *)(v67 + 24));
          *(_QWORD *)(v67 + 16) = 0;
          *(_OWORD *)(v67 + 24) = 0;
          v74 = *(_QWORD *)(v66 + 16);
          if ( v74 )
          {
            *(_QWORD *)(v66 + 24) = 0;
            v131 = v72;
            v127.m128i_i64[0] = v70;
            v128 = v71;
            v126 = v73;
            qfree(v74);
            v71 = _mm_load_si128(&v128);
            v72 = v131;
            v70 = v127.m128i_i64[0];
            v73 = _mm_load_si128(&v126);
          }
          *(_QWORD *)(v66 + 16) = v72;
          *(__m128i *)(v66 + 24) = v73;
          v75 = *(_QWORD *)(v67 + 16);
          if ( v75 )
          {
            *(_QWORD *)(v67 + 24) = 0;
            v126.m128i_i64[0] = v70;
            v127 = v71;
            qfree(v75);
            v71 = _mm_load_si128(&v127);
            v70 = v126.m128i_i64[0];
          }
          *(_QWORD *)(v67 + 16) = v70;
          v76 = *(_DWORD *)(v67 + 44);
          *(__m128i *)(v67 + 24) = v71;
          v77 = *(_DWORD *)(v66 + 44);
          *(_DWORD *)(v66 + 44) = v76;
          *(_DWORD *)(v67 + 44) = v77;
        }
        else
        {
          v68(v66, v67);
        }
      }
    }
    ++v34;
LABEL_52:
    ++v33;
  }
  while ( v33 < *(_QWORD *)(v32 + 48) );
  v31 = v34;
LABEL_58:
  switch_dbctx();
  sub_2C95E0(v133, v31);
  switch_dbctx();
  sub_2C95E0(v134, v31);
  if ( !v125 )
    return v137 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2C95E0(v125, v31);
}
