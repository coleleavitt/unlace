__int64 __fastcall sub_3D0A10(__int64 a1, __int64 a2, int a3, __m128i a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  char **v6; // rbx
  __int64 v7; // rdx
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  size_t v16; // rsi
  char *v17; // rdi
  int v18; // ecx
  char *v19; // rax
  char *v20; // rdx
  unsigned int v21; // r12d
  size_t v22; // rbx
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  _OWORD *v25; // rdx
  __int64 *v26; // r12
  _QWORD *v27; // rbx
  _QWORD *v28; // rsi
  __int64 v29; // r12
  __int64 v30; // rsi
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rbp
  unsigned __int64 *v36; // rbx
  unsigned __int64 *v37; // rcx
  const char *v38; // rsi
  int v39; // ebx
  __int64 v40; // r12
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // r12
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rsi
  int v50; // edx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // r15
  __int64 v54; // rsi
  int v55; // r12d
  __int64 v56; // rax
  _DWORD *v57; // r14
  _BYTE *v58; // rcx
  __int64 v59; // rax
  _DWORD *v60; // r14
  _BYTE *v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdi
  unsigned int v67; // ebp
  __int64 v68; // rsi
  __int64 v69; // rdi
  unsigned __int64 v71; // r12
  __int64 v72; // r8
  __m128i *v73; // rbp
  __int32 v74; // r9d
  __int64 v75; // r8
  __m128i *v76; // r14
  int v77; // esi
  __m128i v78; // xmm1
  __int64 v79; // r9
  __m128i *v80; // rdi
  __m128i *v81; // rax
  __m128i *v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rbp
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // r12
  _DWORD *v88; // rdx
  unsigned int v89; // eax
  unsigned int v90; // ebp
  __int64 v91; // rsi
  unsigned int v92; // eax
  unsigned __int64 *v93; // rsi
  unsigned __int64 v94; // r12
  unsigned __int64 *v95; // rax
  unsigned int v96; // ebp
  size_t v97; // rsi
  unsigned int *v98; // rax
  size_t v99; // rsi
  unsigned int *v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rax
  int v103; // r10d
  _OWORD *m128i_i8; // rdx
  __int64 v105; // rax
  const __m128i *v106; // r15
  __m128i *v107; // r11
  __int64 v108; // rdx
  __m128i *v109; // rsi
  __m128i *v110; // rdx
  __m128i v111; // xmm1
  int v112; // edx
  int v113; // ecx
  int v114; // r8d
  int v115; // r9d
  __int64 v116; // rsi
  int v117; // edx
  int v118; // ecx
  int v119; // r8d
  int v120; // r9d
  __int64 v121; // rdi
  void (__fastcall ***v122)(void *, __int64); // rbp
  _QWORD *v123; // rax
  __int64 v124; // rsi
  int v125; // eax
  void (__fastcall ***v126)(void *, __int64); // rbp
  __int64 v127; // rbx
  __int64 v128; // rsi
  __int64 v129; // rdi
  _BYTE *v130; // [rsp+0h] [rbp-1D8h]
  __int64 v131; // [rsp+0h] [rbp-1D8h]
  __int64 v132; // [rsp+8h] [rbp-1D0h]
  __int64 v133; // [rsp+8h] [rbp-1D0h]
  __m128i v134; // [rsp+10h] [rbp-1C8h] BYREF
  unsigned __int64 *v135; // [rsp+20h] [rbp-1B8h]
  __m128i v136; // [rsp+28h] [rbp-1B0h] BYREF
  __int64 v137; // [rsp+38h] [rbp-1A0h]
  __int64 v138; // [rsp+40h] [rbp-198h]
  int v139; // [rsp+48h] [rbp-190h]
  int v140; // [rsp+4Ch] [rbp-18Ch]
  __int64 v141; // [rsp+50h] [rbp-188h] BYREF
  __int64 v142; // [rsp+58h] [rbp-180h]
  _BYTE v143[32]; // [rsp+60h] [rbp-178h] BYREF
  void *ptr[4]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v145[312]; // [rsp+A0h] [rbp-138h] BYREF

  v10 = *(_QWORD *)(a1 + 48);
  v140 = a3;
  sub_64C320(v10);
  v11 = *(_QWORD **)(a1 + 592);
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(a1 + 584);
          v15 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_8;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_8:
    v11 = *(_QWORD **)(a1 + 592);
    if ( v11 )
LABEL_9:
      *((_DWORD *)v11 - 1) = 0;
  }
  v16 = *(unsigned int *)(a1 + 572);
  if ( *(_QWORD *)(a1 + 572) )
  {
    v17 = *(char **)(a1 + 560);
    v18 = 0;
    v16 = *(unsigned int *)(a1 + 568);
    v19 = v17;
    v20 = &v17[16 * v16];
    if ( v17 == v20 )
      goto LABEL_24;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_16;
      }
      v19 += 16;
      ++v18;
    }
    while ( v20 != v19 );
LABEL_16:
    if ( (unsigned int)v16 <= 0x10 || 3 * (int)v16 >= (unsigned int)(4 * v18) )
      goto LABEL_24;
    if ( v17 )
    {
      sub_186B220(v17);
      v21 = *(_DWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 560) = 0;
      v21 >>= 1;
      *(_DWORD *)(a1 + 568) = v21;
      v22 = v21;
      v23 = (_OWORD *)sub_186B270(v22 * 16);
      if ( !v21 )
      {
LABEL_23:
        *(_QWORD *)(a1 + 560) = v23;
LABEL_24:
        *(_QWORD *)(a1 + 572) = 0;
        goto LABEL_25;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 560) = 0;
      v16 = (unsigned int)v16 >> 1;
      *(_DWORD *)(a1 + 568) = v16;
      v22 = v16;
      v23 = (_OWORD *)sub_186B270(16 * v16);
    }
    v24 = &v23[v22];
    a4.m128i_i64[0] = 0;
    v25 = v23;
    if ( ((v22 * 16) & 0x10) == 0 || (v25 = v23 + 1, *v23 = 0, v24 != v23 + 1) )
    {
      do
      {
        *v25 = 0;
        v25 += 2;
        *(v25 - 1) = 0;
      }
      while ( v24 != v25 );
    }
    goto LABEL_23;
  }
LABEL_25:
  v26 = *(__int64 **)(a1 + 48);
  v27 = v26 + 82;
  v132 = *v26;
  sub_654110(v26, v16);
  v28 = v26 + 295;
  v134.m128i_i64[1] = (__int64)v145;
  sub_643420(v145, v26 + 295);
  v29 = *(_QWORD *)(a1 + 48);
  sub_654110(v29, v28);
  sub_632080(v27, a2, v29 + 2360);
  v30 = *(_QWORD *)(a1 + 48);
  sub_64C590(&v141, v30);
  sub_3D05E0((_QWORD *)a1, v30);
  sub_5D9090(*(_QWORD *)(a1 + 48), v30, v31, v32, v33, v34);
  if ( (unsigned __int8)sub_1859630(
                          **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                          "xform.slice",
                          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                          1) )
  {
    v130 = v143;
    sub_6440D0(v143, *(_QWORD *)(a1 + 48));
    v35 = sub_186B270(0xA8u);
    sub_5BDEB0(v35, *(_QWORD *)(a1 + 48));
    sub_644270(v143, v35);
    sub_64C400(*(_QWORD *)(a1 + 48), v143);
    v36 = *(unsigned __int64 **)(v35 + 88);
    v37 = &v36[2 * *(unsigned int *)(v35 + 96)];
    if ( v37 == v36 )
      goto LABEL_27;
    while ( *v36 <= 1 )
    {
      v36 += 2;
      if ( v37 == v36 )
        goto LABEL_27;
    }
    if ( v37 != v36 )
    {
      v71 = *v36;
      while ( 1 )
      {
        v72 = *(unsigned int *)(a1 + 568);
        a4 = _mm_loadl_epi64((const __m128i *)(v36 + 1));
        if ( 3 * (int)v72 < (unsigned int)(4 * (*(_DWORD *)(a1 + 572) + *(_DWORD *)(a1 + 576))) )
        {
          v136.m128i_i64[1] = (__int64)v37;
          LODWORD(v135) = 2 * v72;
          v134.m128i_i64[0] = 16LL * (unsigned int)(2 * v72);
          v136.m128i_i64[0] = a4.m128i_i64[0];
          v102 = sub_186B270(v134.m128i_u64[0]);
          v103 = (int)v135;
          v75 = v134.m128i_i64[0];
          v73 = (__m128i *)v102;
          m128i_i8 = (_OWORD *)v102;
          a4 = _mm_loadl_epi64(&v136);
          v37 = (unsigned __int64 *)v136.m128i_i64[1];
          v105 = v134.m128i_i64[0] + v102;
          if ( (_DWORD)v135 )
          {
            if ( (((_BYTE)v105 - (_BYTE)v73) & 0x10) == 0
              || (m128i_i8 = v73[1].m128i_i8, *v73 = 0, &v73[1] != (__m128i *)v105) )
            {
              do
              {
                m128i_i8 += 2;
                *(m128i_i8 - 2) = 0;
                *(m128i_i8 - 1) = 0;
              }
              while ( m128i_i8 != (_OWORD *)v105 );
            }
          }
          v106 = *(const __m128i **)(a1 + 560);
          v74 = v103 - 1;
          v76 = (__m128i *)v105;
          v107 = (__m128i *)&v106[*(unsigned int *)(a1 + 568)];
          if ( v106 != v107 )
          {
            do
            {
              while ( v106->m128i_i64[0] <= 1uLL )
              {
                if ( v107 == ++v106 )
                  goto LABEL_123;
              }
              v108 = 16LL * (*(_DWORD *)(v106->m128i_i64[0] + 12) & (unsigned int)v74);
              v109 = &v73[(unsigned __int64)v108 / 0x10];
              if ( v75 == v108 )
              {
LABEL_127:
                if ( v73 == v109 )
                {
LABEL_135:
                  v138 = v105;
                  v139 = v103;
                  v137 = v75;
                  v136.m128i_i32[2] = v103 - 1;
                  v136.m128i_i64[0] = (__int64)v107;
                  v135 = v37;
                  v134.m128i_i64[0] = a4.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v110 = v73;
                while ( v110->m128i_i64[0] )
                {
                  if ( v109 == ++v110 )
                    goto LABEL_135;
                }
              }
              else
              {
                v110 = &v73[(unsigned __int64)v108 / 0x10];
                while ( v110->m128i_i64[0] )
                {
                  if ( (__m128i *)v105 == ++v110 )
                    goto LABEL_127;
                }
              }
              v111 = _mm_loadu_si128(v106++);
              *v110 = v111;
            }
            while ( v107 != v106 );
LABEL_123:
            v107 = *(__m128i **)(a1 + 560);
          }
          if ( v107 )
          {
            LODWORD(v137) = v103;
            v136.m128i_i64[1] = v75;
            v136.m128i_i32[0] = v103 - 1;
            v135 = v37;
            v134.m128i_i64[0] = a4.m128i_i64[0];
            sub_186B220(v107);
            v103 = v137;
            v75 = v136.m128i_i64[1];
            v74 = v136.m128i_i32[0];
            v37 = v135;
            a4 = _mm_loadl_epi64(&v134);
          }
          *(_QWORD *)(a1 + 560) = v73;
          *(_DWORD *)(a1 + 568) = v103;
          *(_DWORD *)(a1 + 576) = 0;
        }
        else
        {
          v73 = *(__m128i **)(a1 + 560);
          v74 = v72 - 1;
          v75 = 16 * v72;
          v76 = (__m128i *)((char *)v73 + v75);
        }
        v77 = *(_DWORD *)(v71 + 12);
        v78 = _mm_unpacklo_epi64((__m128i)v71, a4);
        v79 = 16LL * (v77 & (unsigned int)v74);
        v80 = &v73[(unsigned __int64)v79 / 0x10];
        if ( v79 != v75 )
        {
          v81 = &v73[(unsigned __int64)v79 / 0x10];
          v82 = nullptr;
          while ( 1 )
          {
            v83 = v81->m128i_i64[0];
            if ( v81->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v83 + 12) == v77 && v83 == v71 )
              {
                *v81 = v78;
                goto LABEL_90;
              }
            }
            else
            {
              if ( !v83 )
              {
                if ( v82 )
                  goto LABEL_133;
                v82 = v81;
                goto LABEL_134;
              }
              v82 = v81;
            }
            if ( ++v81 == v76 )
              goto LABEL_85;
          }
        }
        v82 = nullptr;
        while ( 1 )
        {
LABEL_85:
          if ( v80 == v73 )
          {
            v134.m128i_i64[0] = (__int64)v37;
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v86 = v73->m128i_i64[0];
          if ( v73->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v86 + 12) == v77 && v86 == v71 )
          {
            *v73 = v78;
            goto LABEL_90;
          }
LABEL_84:
          ++v73;
        }
        if ( v86 )
          break;
        if ( v82 )
LABEL_133:
          --*(_DWORD *)(a1 + 576);
        else
          v82 = v73;
LABEL_134:
        *v82 = v78;
        ++*(_DWORD *)(a1 + 572);
LABEL_90:
        v87 = *v36;
        if ( *v36 )
          ++*(_DWORD *)(v87 + 8);
        v88 = *(_DWORD **)(a1 + 592);
        if ( v88 )
        {
          v89 = *(v88 - 1);
          v90 = *(v88 - 2);
          if ( v89 == v90 )
          {
            v90 = (3 * v89 + 1) >> 1;
            v99 = 8 * v90 + 8;
            if ( 8 * v89 + 8 >= (unsigned int)v99 || v89 >= v90 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C88C8((__int64 *)ptr, "Overflow encountered when expanding vector", v5);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, ptr);
              sub_233E40((__int64)ptr);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v134.m128i_i64[0] = (__int64)v37;
            v100 = (unsigned int *)sub_186B300(v88 - 2, v99);
            v101 = v100[1];
            v88 = v100 + 2;
            v37 = (unsigned __int64 *)v134.m128i_i64[0];
            *v100 = v90;
            *(_QWORD *)(a1 + 592) = v100 + 2;
            LODWORD(v100) = v101;
            v93 = (unsigned __int64 *)&v88[2 * v101];
            v92 = (_DWORD)v100 + 1;
          }
          else
          {
            v91 = v89;
            v92 = v89 + 1;
            v93 = (unsigned __int64 *)&v88[2 * v91];
          }
          *v93 = v87;
          v94 = v36[1];
          *(v88 - 1) = v92;
          if ( v94 )
          {
LABEL_96:
            ++*(_DWORD *)(v94 + 8);
            v92 = *(v88 - 1);
            v90 = *(v88 - 2);
          }
          if ( v92 == v90 )
          {
            v96 = (3 * v92 + 1) >> 1;
            v97 = 8 * v96 + 8;
            if ( 8 * v92 + 8 >= (unsigned int)v97 || v92 >= v96 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_C88C8((__int64 *)ptr, "Overflow encountered when expanding vector", v7);
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, ptr);
              sub_233E40((__int64)ptr);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v134.m128i_i64[0] = (__int64)v37;
            v98 = (unsigned int *)sub_186B300(v88 - 2, v97);
            v88 = v98 + 2;
            *v98 = v96;
            v37 = (unsigned __int64 *)v134.m128i_i64[0];
            *(_QWORD *)(a1 + 592) = v98 + 2;
            v92 = v98[1];
          }
        }
        else
        {
          v134.m128i_i64[0] = (__int64)v37;
          v123 = (_QWORD *)sub_186B270(0x18u);
          v123[1] = v87;
          v94 = v36[1];
          v88 = v123 + 1;
          *v123 = 0x100000002LL;
          v37 = (unsigned __int64 *)v134.m128i_i64[0];
          v92 = 1;
          *(_QWORD *)(a1 + 592) = v88;
          if ( v94 )
            goto LABEL_96;
        }
        *(_QWORD *)&v88[2 * v92] = v94;
        *(v88 - 1) = v92 + 1;
        v95 = v36 + 2;
        if ( v37 != v36 + 2 )
        {
          while ( 1 )
          {
            v71 = *v95;
            v36 = v95;
            if ( *v95 > 1 )
              break;
            v95 += 2;
            if ( v37 == v95 )
              goto LABEL_27;
          }
          if ( v37 != v95 )
            continue;
        }
        goto LABEL_27;
      }
      v82 = v73;
      goto LABEL_84;
    }
LABEL_27:
    sub_6440F0(v143);
  }
  v38 = "xform.unfold_rules";
  if ( (unsigned int)sub_1859980(
                       **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                       "xform.unfold_rules",
                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                       0) )
  {
    v39 = sub_1859980(
            **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
            "xform.unfold_rules",
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
            0);
    v130 = v143;
    sub_6440D0(v143, *(_QWORD *)(a1 + 48));
    sub_6440D0(ptr, *(_QWORD *)(a1 + 48));
    v40 = sub_186B270(0x58u);
    sub_5DA440(v40, *(_QWORD *)(a1 + 48));
    sub_644270(v143, v40);
    v41 = sub_186B270(0x2C0u);
    sub_613120(v41, *(_QWORD *)(a1 + 48));
    sub_644270(ptr, v41);
    v38 = "xform.coalesce_rules";
    if ( (unsigned __int8)sub_1859630(
                            **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                            "xform.coalesce_rules",
                            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                            0) )
    {
      v38 = v143;
      sub_64C400(*(_QWORD *)(a1 + 48), v143);
      for ( ; v39; --v39 )
      {
LABEL_31:
        v38 = (const char *)ptr;
        sub_64C400(*(_QWORD *)(a1 + 48), ptr);
      }
    }
    else if ( v39 )
    {
      goto LABEL_31;
    }
    sub_6440F0(ptr);
    sub_6440F0(v143);
  }
  v42 = *(_QWORD *)(a1 + 48);
  v43 = v42;
  sub_654110(v42, v38);
  v44 = v42 + 2360;
  if ( *(_DWORD *)(v42 + 2524) )
  {
    v45 = *(_QWORD **)(v42 + 2512);
    v46 = &v45[*(unsigned int *)(v42 + 2520)];
    if ( v45 == v46 )
    {
      v127 = *v45;
LABEL_146:
      if ( !v127 )
        goto LABEL_39;
    }
    else
    {
      while ( 1 )
      {
        v127 = *v45;
        v47 = v45;
        if ( *v45 > 1u )
          break;
        if ( v46 == ++v45 )
        {
          v127 = v47[1];
          goto LABEL_146;
        }
      }
    }
    ++*(_DWORD *)(v127 + 8);
LABEL_39:
    if ( (unsigned int)sub_180B130(v43) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
      {
        sub_186A4C0(*(double *)a4.m128i_i64);
        v48 = *(_QWORD *)(a1 + 48);
        v49 = sub_180B150(v43, v38);
        sub_63C8E0(v48 + 2360, v49);
        sub_186A500(v48 + 2360, v49);
      }
      else
      {
        v84 = *(_QWORD *)(a1 + 48);
        v85 = sub_180B150(v43, v38);
        sub_63C8E0(v84 + 2360, v85);
      }
    }
    sub_63ECD0(a1 + 56, v44);
    sub_6430A0(a1 + 56);
    sub_64C470(*(_QWORD *)(a1 + 48));
    sub_64C350(*(_QWORD *)(a1 + 48));
    sub_64C430(*(_QWORD *)(a1 + 48), v134.m128i_i64[1]);
    v53 = *(_QWORD *)(a1 + 48);
    v54 = *(_QWORD *)(a1 + 552);
    v55 = *(_DWORD *)(v132 + 712);
    v56 = *(_QWORD *)(v53 + 2960);
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    v57 = *(_DWORD **)(v54 + 632);
    if ( v57 && (v15 = v57[2] == 1, --v57[2], v15) )
    {
      LODWORD(v130) = v54;
      (**(void (__fastcall ***)(_DWORD *))v57)(v57);
      sub_186B220(v57);
      v56 = *(_QWORD *)(v53 + 2960);
      v58 = *(_BYTE **)(a1 + 552);
      v53 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      v58 = (_BYTE *)v54;
    }
    *(_QWORD *)(v54 + 632) = v56;
    v59 = *(_QWORD *)(v53 + 2952);
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
    v60 = *((_DWORD **)v58 + 78);
    if ( v60 && (v15 = v60[2] == 1, --v60[2], v15) )
    {
      v130 = v58;
      (**(void (__fastcall ***)(_DWORD *))v60)(v60);
      sub_186B220(v60);
      v61 = *(_BYTE **)(a1 + 552);
      v59 = *(_QWORD *)(v53 + 2952);
      v58 = v130;
    }
    else
    {
      v61 = v58;
    }
    *((_QWORD *)v58 + 78) = v59;
    if ( v127 )
      ++*(_DWORD *)(v127 + 8);
    v62 = *((_QWORD *)v61 + 36);
    if ( v62 && (v63 = *((_QWORD *)v61 + 37), v15 = *(_DWORD *)(v62 + 8) == 1, --*(_DWORD *)(v62 + 8), v15) )
    {
      sub_15D7BC0(v63, v62);
      v64 = *(_QWORD *)(a1 + 552);
    }
    else
    {
      LODWORD(v64) = (_DWORD)v61;
    }
    *((_QWORD *)v61 + 36) = v127;
    sub_415900(
      v64,
      a1 + 56,
      v50,
      (int)v58,
      v51,
      v52,
      (int)v130,
      v132,
      v134.m128i_i32[0],
      v134.m128i_i32[2],
      v135,
      v136.m128i_i32[0],
      v136.m128i_i32[2],
      v137);
    v65 = *(_QWORD *)(a1 + 80);
    v66 = *(_QWORD *)(a1 + 552);
    if ( v65 && *(_DWORD *)(v65 - 4) )
    {
      v67 = sub_41C290(v66);
    }
    else
    {
      *(_DWORD *)(v66 + 360) = -1;
      if ( (unsigned int)sub_180B130(v66) )
      {
        if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
        {
          sub_186A4C0(*(double *)a4.m128i_i64);
          v116 = *(_QWORD *)(a1 + 552);
          sub_40D4F0(
            (unsigned int)ptr,
            v116,
            v117,
            v118,
            v119,
            v120,
            v131,
            v133,
            v134.m128i_i32[0],
            v134.m128i_i32[2],
            (_DWORD)v135,
            v136.m128i_i32[0],
            v136.m128i_i32[2],
            v137,
            v138,
            v139);
          v121 = sub_180B150(ptr, v116);
          sub_1352510(v121);
          v122 = (void (__fastcall ***)(void *, __int64))ptr[0];
          if ( ptr[0] )
          {
            v15 = (*((_DWORD *)ptr[0] + 4))-- == 1;
            if ( v15 )
            {
              (**v122)(v122, v133);
              v121 = (__int64)v122;
              sub_186B220(v122);
            }
          }
          sub_186A500(v121, v133);
        }
        else
        {
          v124 = *(_QWORD *)(a1 + 552);
          sub_40D4F0(
            (unsigned int)ptr,
            v124,
            v112,
            v113,
            v114,
            v115,
            v131,
            v133,
            v134.m128i_i32[0],
            v134.m128i_i32[2],
            (_DWORD)v135,
            v136.m128i_i32[0],
            v136.m128i_i32[2],
            v137,
            v138,
            v139);
          v125 = sub_180B150(ptr, v124);
          sub_1352510(v125);
          v126 = (void (__fastcall ***)(void *, __int64))ptr[0];
          if ( ptr[0] )
          {
            v15 = (*((_DWORD *)ptr[0] + 4))-- == 1;
            if ( v15 )
            {
              (**v126)(v126, v133);
              sub_186B220(v126);
            }
          }
        }
      }
      v67 = -1;
    }
    v68 = v141;
    *(_DWORD *)(v133 + 712) = v55;
    if ( v68 )
    {
      v69 = v142;
      v15 = (*(_DWORD *)(v68 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v69, v68);
    }
    if ( v127 )
    {
      v15 = (*(_DWORD *)(v127 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v133, v127);
    }
    goto LABEL_66;
  }
  v128 = v141;
  v67 = -1;
  *(_DWORD *)(*(_QWORD *)(a1 + 552) + 360LL) = -1;
  if ( v128 )
  {
    v129 = v142;
    v15 = (*(_DWORD *)(v128 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v129, v128);
    v67 = -1;
  }
LABEL_66:
  sub_63D960(v134.m128i_i64[1]);
  return v67;
}

