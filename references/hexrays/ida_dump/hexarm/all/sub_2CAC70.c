unsigned __int64 __fastcall sub_2CAC70(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r15
  bool v4; // zf
  __int64 *v5; // rbp
  unsigned __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rsi
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
  __int64 i; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rdi
  bool v28; // cc
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 *v31; // r14
  unsigned __int64 v32; // rbp
  __int64 v33; // r12
  unsigned __int64 v34; // r14
  __int64 v35; // rbp
  unsigned __int64 v36; // r13
  __int64 v37; // rdi
  unsigned __int8 (*v38)(void); // rax
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 (__fastcall *v43)(__int64, __int64); // r10
  __int64 v44; // rsi
  __int64 v45; // rcx
  __m128i v46; // xmm2
  __int64 v47; // rsi
  __m128i v48; // xmm1
  __int64 v49; // rdi
  __int64 v50; // rdi
  __m128i v51; // xmm2
  int v52; // edi
  int v53; // esi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 (__fastcall *v57)(__int64, __int64); // r10
  __int64 v58; // rsi
  __int64 v59; // rcx
  __m128i v60; // xmm2
  __int64 v61; // rsi
  __m128i v62; // xmm1
  __int64 v63; // rdi
  __int64 v64; // rdi
  __m128i v65; // xmm2
  int v66; // edi
  int v67; // esi
  __int64 v68; // r15
  __int64 v69; // rbx
  __int64 (__fastcall *v70)(__int64, __int64); // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __m128i v73; // xmm1
  unsigned __int64 v74; // rax
  __m128i v75; // xmm2
  __int64 v76; // rdi
  __int64 v77; // rdi
  int v78; // esi
  int v79; // eax
  __int64 v80; // rdi
  unsigned __int8 (*v81)(void); // rax
  _QWORD *v83; // rbx
  __int64 v84; // r14
  __int64 v85; // r13
  __int64 v86; // rsi
  __m128i v87; // xmm4
  __int64 v88; // rbx
  __int64 v89; // rsi
  __m128i v90; // xmm0
  __int64 v91; // rdi
  __int64 v92; // rdi
  __m128i v93; // xmm5
  int v94; // edi
  int v95; // esi
  __int64 v96; // r12
  __int64 (__fastcall *v97)(__int64, __int64); // r8
  __int64 *v98; // r14
  __int64 v99; // rbx
  __int64 v100; // r12
  _QWORD *v101; // r13
  __int64 v102; // rdi
  _QWORD *v103; // rbx
  __int64 *v104; // r14
  __int64 v105; // rbx
  __int64 *v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // r13
  __int64 v109; // rax
  __int64 (__fastcall *v110)(__int64, __int64); // r10
  __int64 v111; // rsi
  __int64 v112; // rdi
  __m128i v113; // xmm2
  __int64 v114; // r12
  __int64 *v115; // r10
  __m128i v116; // xmm0
  __int64 v117; // rdi
  __int64 v118; // rdi
  __m128i v119; // xmm1
  int v120; // r10d
  int v121; // edi
  __int64 v122; // rdi
  __int64 v123; // r12
  __int64 v124; // rbp
  __int64 v125; // rbx
  _QWORD *v126; // rax
  __int64 v127; // rdi
  __m128i v128; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v129; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v130; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v131; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v132; // [rsp+38h] [rbp-B0h]
  __m128i v133; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v134; // [rsp+50h] [rbp-98h]
  __int64 *v135; // [rsp+58h] [rbp-90h]
  __m128i v136; // [rsp+60h] [rbp-88h] BYREF
  __int64 *v137; // [rsp+70h] [rbp-78h]
  _QWORD *v138; // [rsp+78h] [rbp-70h]
  int v139; // [rsp+84h] [rbp-64h]
  __int64 *v140; // [rsp+88h] [rbp-60h]
  __int64 v141; // [rsp+90h] [rbp-58h] BYREF
  __int128 v142; // [rsp+98h] [rbp-50h]
  unsigned __int64 v143; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v138 = a2;
  v139 = a3;
  v143 = __readfsqword(0x28u);
  v131 = (__int64 *)a1[12];
  if ( !v4 )
  {
    v141 = 0;
    v140 = &v141;
    v142 = 0;
    sub_2CA940(&v141, (unsigned __int64)v131);
    v4 = a1[1] == 0;
    v132 = 0;
    v133.m128i_i64[0] = (__int64)(a1 + 2);
    if ( !v4 )
    {
      do
      {
        switch_dbctx(*(int *)(v138[v132] + 8LL));
        v84 = *(_QWORD *)v133.m128i_i64[0];
        v128.m128i_i64[0] = *(_QWORD *)(v133.m128i_i64[0] + 8);
        v85 = v84 + (v128.m128i_i64[0] << 6);
        if ( v84 != v85 )
        {
          do
          {
            while ( 1 )
            {
              v96 = v141 + 56LL * *(_QWORD *)(v84 + 56);
              v97 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v96 + 8LL);
              if ( v97 == sub_2AEFC0 )
                break;
              v97(v141 + 56LL * *(_QWORD *)(v84 + 56), v84);
              v84 += 64;
              if ( v85 == v84 )
                goto LABEL_72;
            }
            v86 = *(_QWORD *)(v96 + 8);
            *(_QWORD *)(v96 + 8) = *(_QWORD *)(v84 + 8);
            *(_QWORD *)(v84 + 8) = v86;
            v87 = _mm_loadu_si128((const __m128i *)(v96 + 24));
            v88 = *(_QWORD *)(v96 + 16);
            *(_OWORD *)(v96 + 24) = 0;
            *(_QWORD *)(v96 + 16) = 0;
            v89 = *(_QWORD *)(v84 + 16);
            v90 = _mm_loadu_si128((const __m128i *)(v84 + 24));
            *(_QWORD *)(v84 + 16) = 0;
            *(_OWORD *)(v84 + 24) = 0;
            v91 = *(_QWORD *)(v96 + 16);
            v128 = v87;
            if ( v91 )
            {
              *(_QWORD *)(v96 + 24) = 0;
              v129.m128i_i64[0] = v89;
              v130 = v90;
              qfree(v91);
              v90 = _mm_load_si128(&v130);
              v89 = v129.m128i_i64[0];
            }
            *(_QWORD *)(v96 + 16) = v89;
            *(__m128i *)(v96 + 24) = v90;
            v92 = *(_QWORD *)(v84 + 16);
            if ( v92 )
            {
              *(_QWORD *)(v84 + 24) = 0;
              qfree(v92);
            }
            v93 = _mm_load_si128(&v128);
            v94 = *(_DWORD *)(v84 + 48);
            *(_QWORD *)(v84 + 16) = v88;
            v84 += 64;
            *(__m128i *)(v84 - 40) = v93;
            v95 = *(_DWORD *)(v96 + 48);
            *(_DWORD *)(v96 + 48) = v94;
            *(_DWORD *)(v84 - 16) = v95;
          }
          while ( v85 != v84 );
LABEL_72:
          v85 = *(_QWORD *)v133.m128i_i64[0];
        }
        if ( v85 )
        {
          v98 = (__int64 *)v133.m128i_i64[0];
          if ( *(_QWORD *)(v133.m128i_i64[0] + 8) )
          {
            v99 = 0;
            v100 = *(_QWORD *)(v133.m128i_i64[0] + 8);
            do
            {
              v101 = (_QWORD *)((v99 << 6) + v85);
              v102 = v101[2];
              *v101 = off_4DBA80;
              if ( v102 )
              {
                v101[3] = 0;
                qfree(v102);
              }
              ++v99;
              v85 = *v98;
            }
            while ( v100 != v99 );
          }
          v103 = (_QWORD *)v133.m128i_i64[0];
          *(_QWORD *)(v133.m128i_i64[0] + 8) = 0;
          qfree(v85);
          *v103 = 0;
          v103[2] = 0;
        }
        v104 = v131;
        v105 = v138[v132];
        sub_2CA940((__int64 *)(v105 + 40), (unsigned __int64)v131 - v3[14]);
        if ( v104 )
        {
          v106 = nullptr;
          v107 = 0;
          v108 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4 * v107) )
            {
              v109 = *(_QWORD *)(v105 + 40) + 56 * v108;
              v110 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v109 + 8LL);
              v111 = (__int64)v106 + v141;
              if ( v110 == sub_2AEFC0 )
              {
                v112 = *(_QWORD *)(v109 + 8);
                *(_QWORD *)(v109 + 8) = *(_QWORD *)(v111 + 8);
                *(_QWORD *)(v111 + 8) = v112;
                v113 = _mm_loadu_si128((const __m128i *)(v109 + 24));
                v114 = *(_QWORD *)(v109 + 16);
                *(_OWORD *)(v109 + 24) = 0;
                *(_QWORD *)(v109 + 16) = 0;
                v115 = *(__int64 **)(v111 + 16);
                v116 = _mm_loadu_si128((const __m128i *)(v111 + 24));
                *(_QWORD *)(v111 + 16) = 0;
                *(_OWORD *)(v111 + 24) = 0;
                v117 = *(_QWORD *)(v109 + 16);
                v128 = v113;
                if ( v117 )
                {
                  *(_QWORD *)(v109 + 24) = 0;
                  v137 = v106;
                  v135 = v115;
                  v134 = v111;
                  v130.m128i_i64[0] = v107;
                  v129.m128i_i64[0] = v109;
                  v136 = v116;
                  qfree(v117);
                  v106 = v137;
                  v116 = _mm_load_si128(&v136);
                  v115 = v135;
                  v111 = v134;
                  v107 = v130.m128i_i64[0];
                  v109 = v129.m128i_i64[0];
                }
                *(_QWORD *)(v109 + 16) = v115;
                *(__m128i *)(v109 + 24) = v116;
                v118 = *(_QWORD *)(v111 + 16);
                if ( v118 )
                {
                  *(_QWORD *)(v111 + 24) = 0;
                  v135 = v106;
                  v134 = v109;
                  v130.m128i_i64[0] = v107;
                  v129.m128i_i64[0] = v111;
                  qfree(v118);
                  v106 = v135;
                  v109 = v134;
                  v107 = v130.m128i_i64[0];
                  v111 = v129.m128i_i64[0];
                }
                v119 = _mm_load_si128(&v128);
                v120 = *(_DWORD *)(v111 + 48);
                *(_QWORD *)(v111 + 16) = v114;
                *(__m128i *)(v111 + 24) = v119;
                v121 = *(_DWORD *)(v109 + 48);
                *(_DWORD *)(v109 + 48) = v120;
                *(_DWORD *)(v111 + 48) = v121;
              }
              else
              {
                v129.m128i_i64[0] = (__int64)v106;
                v128.m128i_i64[0] = v107;
                v110(v109, v111);
                v107 = v128.m128i_i64[0];
                v106 = (__int64 *)v129.m128i_i64[0];
              }
              ++v108;
            }
            ++v107;
            v106 += 7;
          }
          while ( (__int64 *)v107 != v131 );
        }
        else
        {
          v108 = 0;
        }
        if ( *(_QWORD *)(v105 + 48) != v108 )
        {
          if ( !under_debugger )
            sub_3835A0(1962);
          BUG();
        }
        ++v132;
        v133.m128i_i64[0] += 24;
      }
      while ( v132 < v3[1] );
    }
    v122 = v141;
    if ( v141 )
    {
      v123 = v142;
      if ( (_QWORD)v142 )
      {
        v124 = 0;
        v125 = 0;
        do
        {
          v126 = (_QWORD *)(v122 + v124);
          v127 = *(_QWORD *)(v122 + v124 + 16);
          *v126 = off_4DBA80;
          if ( v127 )
          {
            v126[3] = 0;
            qfree(v127);
          }
          ++v125;
          v122 = v141;
          v124 += 56;
        }
        while ( v123 != v125 );
      }
      *(_QWORD *)&v142 = 0;
      qfree(v122);
    }
LABEL_23:
    if ( (_BYTE)v139 )
    {
      v28 = v3[1] <= 2u;
      v131 = nullptr;
      v29 = v138[1];
      v30 = *v138;
      v31 = (__int64 *)(*v138 + 40LL);
      v135 = (__int64 *)(v29 + 40);
      if ( !v28 )
      {
        v128.m128i_i64[0] = v138[2];
        v131 = (__int64 *)(v128.m128i_i64[0] + 40);
      }
      goto LABEL_26;
    }
    return v143 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v132 = 0;
    v133.m128i_i64[0] = (__int64)a1;
    v5 = a1 + 2;
    do
    {
      v6 = v132;
      v7 = v138;
      switch_dbctx(*(int *)(v138[v132] + 8LL));
      v8 = v7[v6];
      sub_2CA940((__int64 *)(v8 + 40), (unsigned __int64)v131);
      v9 = *v5;
      v10 = *v5 + (v5[1] << 6);
      if ( *v5 != v10 )
      {
        do
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v8 + 40) + 56LL * *(_QWORD *)(v9 + 56);
            v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 8LL);
            if ( v22 == sub_2AEFC0 )
              break;
            v23 = v9;
            v9 += 64;
            v22(v21, v23);
            if ( v9 == v10 )
              goto LABEL_13;
          }
          v11 = *(_QWORD *)(v21 + 8);
          *(_QWORD *)(v21 + 8) = *(_QWORD *)(v9 + 8);
          *(_QWORD *)(v9 + 8) = v11;
          v12 = _mm_loadu_si128((const __m128i *)(v21 + 24));
          v13 = *(_QWORD *)(v21 + 16);
          *(_OWORD *)(v21 + 24) = 0;
          *(_QWORD *)(v21 + 16) = 0;
          v14 = *(_QWORD *)(v9 + 16);
          v15 = _mm_loadu_si128((const __m128i *)(v9 + 24));
          *(_QWORD *)(v9 + 16) = 0;
          *(_OWORD *)(v9 + 24) = 0;
          v16 = *(_QWORD *)(v21 + 16);
          v128 = v12;
          if ( v16 )
          {
            *(_QWORD *)(v21 + 24) = 0;
            v129.m128i_i64[0] = v14;
            v130 = v15;
            qfree(v16);
            v15 = _mm_load_si128(&v130);
            v14 = v129.m128i_i64[0];
          }
          *(_QWORD *)(v21 + 16) = v14;
          *(__m128i *)(v21 + 24) = v15;
          v17 = *(_QWORD *)(v9 + 16);
          if ( v17 )
          {
            *(_QWORD *)(v9 + 24) = 0;
            qfree(v17);
          }
          v18 = _mm_load_si128(&v128);
          v19 = *(_DWORD *)(v9 + 48);
          *(_QWORD *)(v9 + 16) = v13;
          v9 += 64;
          *(__m128i *)(v9 - 40) = v18;
          v20 = *(_DWORD *)(v21 + 48);
          *(_DWORD *)(v21 + 48) = v19;
          *(_DWORD *)(v9 - 16) = v20;
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
          for ( i = 0; i != v24; ++i )
          {
            v26 = (_QWORD *)(v10 + (i << 6));
            v27 = v26[2];
            *v26 = off_4DBA80;
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
      ++v132;
      v5 += 3;
    }
    while ( v132 < *(_QWORD *)(v133.m128i_i64[0] + 8) );
    v3 = (_QWORD *)v133.m128i_i64[0];
    goto LABEL_23;
  }
  if ( !(_BYTE)v139 )
    return v143 - __readfsqword(0x28u);
  v131 = nullptr;
  v29 = v138[1];
  v30 = *v138;
  v31 = (__int64 *)(*v138 + 40LL);
  v135 = (__int64 *)(v29 + 40);
LABEL_26:
  v32 = *(_QWORD *)(v30 + 48);
  if ( !v32 )
    goto LABEL_58;
  v136.m128i_i64[0] = (__int64)v31;
  v33 = 0;
  v34 = 0;
  v128.m128i_i64[0] = v29;
  v35 = v30;
  v36 = 0;
  do
  {
    v80 = v33 + *(_QWORD *)(v35 + 40);
    v81 = **(unsigned __int8 (***)(void))v80;
    if ( (char *)v81 == (char *)sub_2AD530 )
    {
      if ( *(_QWORD *)(v80 + 8) != *(_QWORD *)(v80 + 40) )
        goto LABEL_31;
    }
    else if ( v81() )
    {
      goto LABEL_31;
    }
    v37 = v33 + *(_QWORD *)(v128.m128i_i64[0] + 40);
    v38 = **(unsigned __int8 (***)(void))v37;
    if ( (char *)v38 == (char *)sub_2AD530 )
    {
      if ( *(_QWORD *)(v37 + 8) == *(_QWORD *)(v37 + 40) )
        goto LABEL_52;
    }
    else if ( !v38() )
    {
      goto LABEL_52;
    }
LABEL_31:
    if ( v34 < v36 )
    {
      v39 = *(_QWORD *)(v35 + 40);
      v40 = 56 * v34;
      v41 = v39 + 56 * v34;
      v42 = v33 + v39;
      v43 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 8LL);
      if ( v43 == sub_2AEFC0 )
      {
        v44 = *(_QWORD *)(v41 + 8);
        *(_QWORD *)(v41 + 8) = *(_QWORD *)(v42 + 8);
        *(_QWORD *)(v42 + 8) = v44;
        v45 = *(_QWORD *)(v41 + 16);
        v46 = _mm_loadu_si128((const __m128i *)(v41 + 24));
        *(_QWORD *)(v41 + 16) = 0;
        *(_OWORD *)(v41 + 24) = 0;
        v47 = *(_QWORD *)(v42 + 16);
        v48 = _mm_loadu_si128((const __m128i *)(v42 + 24));
        *(_QWORD *)(v42 + 16) = 0;
        *(_OWORD *)(v42 + 24) = 0;
        v49 = *(_QWORD *)(v41 + 16);
        v130.m128i_i64[0] = v45;
        v129 = v46;
        if ( v49 )
        {
          *(_QWORD *)(v41 + 24) = 0;
          v134 = v47;
          v132 = v41;
          v133 = v48;
          qfree(v49);
          v47 = v134;
          v48 = _mm_load_si128(&v133);
          v41 = v132;
        }
        *(_QWORD *)(v41 + 16) = v47;
        *(__m128i *)(v41 + 24) = v48;
        v50 = *(_QWORD *)(v42 + 16);
        if ( v50 )
        {
          *(_QWORD *)(v42 + 24) = 0;
          v132 = v41;
          qfree(v50);
          v41 = v132;
        }
        v51 = _mm_load_si128(&v129);
        v52 = *(_DWORD *)(v42 + 48);
        *(_QWORD *)(v42 + 16) = v130.m128i_i64[0];
        *(__m128i *)(v42 + 24) = v51;
        v53 = *(_DWORD *)(v41 + 48);
        *(_DWORD *)(v41 + 48) = v52;
        *(_DWORD *)(v42 + 48) = v53;
      }
      else
      {
        v43(v41, v42);
      }
      v54 = *(_QWORD *)(v128.m128i_i64[0] + 40);
      v55 = v54 + v40;
      v56 = v33 + v54;
      v57 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 8LL);
      if ( v57 == sub_2AEFC0 )
      {
        v58 = *(_QWORD *)(v55 + 8);
        *(_QWORD *)(v55 + 8) = *(_QWORD *)(v56 + 8);
        *(_QWORD *)(v56 + 8) = v58;
        v59 = *(_QWORD *)(v55 + 16);
        v60 = _mm_loadu_si128((const __m128i *)(v55 + 24));
        *(_QWORD *)(v55 + 16) = 0;
        *(_OWORD *)(v55 + 24) = 0;
        v61 = *(_QWORD *)(v56 + 16);
        v62 = _mm_loadu_si128((const __m128i *)(v56 + 24));
        *(_QWORD *)(v56 + 16) = 0;
        *(_OWORD *)(v56 + 24) = 0;
        v63 = *(_QWORD *)(v55 + 16);
        v130.m128i_i64[0] = v59;
        v129 = v60;
        if ( v63 )
        {
          *(_QWORD *)(v55 + 24) = 0;
          v134 = v61;
          v132 = v55;
          v133 = v62;
          qfree(v63);
          v61 = v134;
          v62 = _mm_load_si128(&v133);
          v55 = v132;
        }
        *(_QWORD *)(v55 + 16) = v61;
        *(__m128i *)(v55 + 24) = v62;
        v64 = *(_QWORD *)(v56 + 16);
        if ( v64 )
        {
          *(_QWORD *)(v56 + 24) = 0;
          v132 = v55;
          qfree(v64);
          v55 = v132;
        }
        v65 = _mm_load_si128(&v129);
        v66 = *(_DWORD *)(v56 + 48);
        *(_QWORD *)(v56 + 16) = v130.m128i_i64[0];
        *(__m128i *)(v56 + 24) = v65;
        v67 = *(_DWORD *)(v55 + 48);
        *(_DWORD *)(v55 + 48) = v66;
        *(_DWORD *)(v56 + 48) = v67;
      }
      else
      {
        v57(v55, v56);
      }
      if ( v131 )
      {
        v68 = *v131 + v40;
        v69 = v33 + *v131;
        v70 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 8LL);
        if ( v70 == sub_2AEFC0 )
        {
          v71 = *(_QWORD *)(v68 + 8);
          *(_QWORD *)(v68 + 8) = *(_QWORD *)(v69 + 8);
          *(_QWORD *)(v69 + 8) = v71;
          v72 = *(_QWORD *)(v68 + 16);
          v73 = _mm_loadu_si128((const __m128i *)(v68 + 24));
          *(_QWORD *)(v68 + 16) = 0;
          *(_OWORD *)(v68 + 24) = 0;
          v74 = *(_QWORD *)(v69 + 16);
          v75 = _mm_loadu_si128((const __m128i *)(v69 + 24));
          *(_QWORD *)(v69 + 16) = 0;
          *(_OWORD *)(v69 + 24) = 0;
          v76 = *(_QWORD *)(v68 + 16);
          if ( v76 )
          {
            *(_QWORD *)(v68 + 24) = 0;
            v132 = v74;
            v130.m128i_i64[0] = v72;
            v133 = v73;
            v129 = v75;
            qfree(v76);
            v73 = _mm_load_si128(&v133);
            v74 = v132;
            v72 = v130.m128i_i64[0];
            v75 = _mm_load_si128(&v129);
          }
          *(_QWORD *)(v68 + 16) = v74;
          *(__m128i *)(v68 + 24) = v75;
          v77 = *(_QWORD *)(v69 + 16);
          if ( v77 )
          {
            *(_QWORD *)(v69 + 24) = 0;
            v129.m128i_i64[0] = v72;
            v130 = v73;
            qfree(v77);
            v73 = _mm_load_si128(&v130);
            v72 = v129.m128i_i64[0];
          }
          *(_QWORD *)(v69 + 16) = v72;
          v78 = *(_DWORD *)(v69 + 48);
          *(__m128i *)(v69 + 24) = v73;
          v79 = *(_DWORD *)(v68 + 48);
          *(_DWORD *)(v68 + 48) = v78;
          *(_DWORD *)(v69 + 48) = v79;
        }
        else
        {
          v70(v68, v69);
        }
      }
    }
    ++v34;
LABEL_52:
    ++v36;
    v33 += 56;
  }
  while ( v36 < *(_QWORD *)(v35 + 48) );
  v32 = v34;
  v31 = (__int64 *)v136.m128i_i64[0];
  v30 = *v138;
LABEL_58:
  switch_dbctx(*(int *)(v30 + 8));
  sub_2CA940(v31, v32);
  v83 = v138;
  switch_dbctx(*(int *)(v138[1] + 8LL));
  sub_2CA940(v135, v32);
  if ( !v131 )
    return v143 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(v83[2] + 8LL));
  return sub_2CA940(v131, v32);
}
