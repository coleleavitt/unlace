__int64 __fastcall sub_B477A0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  _BYTE *v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD **v14; // rbp
  __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // r12
  char v18; // al
  __int64 v19; // r13
  int v20; // eax
  int *v21; // rdx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // r9
  __m128i v25; // xmm1
  __m128 *v26; // r13
  __int32 v27; // r11d
  __int64 v28; // rcx
  __m128 *v29; // r14
  int v30; // esi
  __int64 v31; // r11
  __m128 *v32; // rdi
  __m128 *v33; // rax
  __m128 *v34; // r10
  unsigned __int64 v35; // rdx
  unsigned __int64 v37; // rax
  __m128 *v38; // rax
  __int32 v39; // edx
  __m128 *v40; // r10
  const __m128i *v41; // r15
  __int64 v42; // rdi
  __m128i *v43; // r8
  __int64 v44; // rax
  _QWORD **v45; // r14
  const __m128i *v46; // rbp
  __int64 v47; // r8
  __m128i *v48; // rbx
  __int32 v49; // r10d
  __int64 v50; // rdx
  __m128 *v51; // rsi
  __m128i *v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 v57; // r13
  int v58; // eax
  _DWORD *v59; // rdx
  _QWORD **v60; // rax
  _QWORD **v61; // r12
  __int64 v62; // rbp
  int v63; // eax
  _DWORD *v64; // rdx
  _QWORD *v65; // r14
  char v66; // al
  __int64 *v67; // rax
  __int64 v68; // r14
  int v69; // eax
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  _DWORD *v73; // rdx
  _QWORD **v74; // r13
  __int64 v75; // r15
  __int64 v76; // rbx
  int v77; // eax
  _DWORD *v78; // rdx
  _QWORD *v79; // r14
  char v80; // al
  unsigned int v81; // r12d
  unsigned int v82; // ecx
  unsigned int *v83; // rax
  __int64 v84; // rcx
  unsigned int v85; // ecx
  __int64 v86; // rbx
  __m128i v87; // xmm1
  __m128 *v88; // rbp
  __int32 v89; // r11d
  __int64 v90; // r8
  __m128 *v91; // r12
  int v92; // ecx
  __int64 v93; // r11
  __m128 *v94; // rsi
  __m128 *v95; // rax
  __m128 *v96; // rdi
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rax
  __m128 *v99; // rax
  __int32 v100; // edx
  __m128i *v101; // r9
  __int64 v102; // rcx
  __int64 v103; // rsi
  __m128i *v104; // r10
  __int64 v105; // rsi
  __int64 v106; // rax
  const __m128i *v107; // rbx
  __int32 v108; // r14d
  __int32 v109; // r11d
  __int64 v110; // rcx
  __int64 v111; // rdx
  __m128 *v112; // rsi
  __m128i *v113; // rdx
  _QWORD *v114; // rdx
  __int64 v115; // rax
  __m128i *v116; // rbp
  unsigned int v117; // esi
  __m128i *v118; // r13
  __int32 v119; // r11d
  __int64 v120; // r9
  __m128i *v121; // r15
  int v122; // edi
  __int64 v123; // rax
  __m128i *v124; // r8
  __m128i *v125; // rax
  __m128i *v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rax
  __int32 v129; // r15d
  __m128i *v130; // rax
  __m128i *v131; // r10
  __int64 v132; // r8
  __int64 v133; // rsi
  __m128i *v134; // rcx
  __int64 v135; // rdi
  const __m128i *v136; // rbx
  __int64 v137; // rax
  __m128i *v138; // rdx
  __m128i *v139; // rax
  __int32 v140; // eax
  _QWORD **v141; // [rsp+8h] [rbp-F0h]
  __int64 v142; // [rsp+10h] [rbp-E8h]
  _BYTE *v143; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v144; // [rsp+20h] [rbp-D8h]
  __m128i v145; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v146; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v147; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v148; // [rsp+60h] [rbp-98h] BYREF
  _QWORD **v149; // [rsp+70h] [rbp-88h]
  __m128i *v150; // [rsp+78h] [rbp-80h]
  __int64 v151; // [rsp+80h] [rbp-78h]
  __int64 v152; // [rsp+88h] [rbp-70h]
  __int64 v153[11]; // [rsp+A0h] [rbp-58h] BYREF

  v3 = a1;
  v4 = sub_B39350(*(_QWORD *)(a2 + 8), *(_DWORD *)(a1 + 8));
  if ( v4 == -1 )
    return 0;
  do
  {
    v5 = v4;
    v6 = v4;
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * v4);
  }
  while ( v4 != v6 );
  v7 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * v5) + 8LL);
  v143 = v7;
  if ( !v7 )
    return 0;
  v8 = *((_QWORD *)v7 + 1);
  *(_BYTE *)(v8 + 44) |= 1u;
  v9 = *(_QWORD **)(a1 + 384);
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v81 = (3 * v10 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v10 + 8 >= v82 || v10 >= v81 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v153, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v153);
        sub_233E40((__int64)v153);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v83 = (unsigned int *)sub_186B300(v9 - 1, v82);
      v84 = v83[1];
      v9 = v83 + 2;
      *v83 = v81;
      *(_QWORD *)(a1 + 384) = v83 + 2;
      LODWORD(v83) = v84;
      v13 = &v9[v84];
      v12 = (_DWORD)v83 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v9[v11];
    }
  }
  else
  {
    v114 = (_QWORD *)sub_186B270(0x18u);
    *v114 = 2;
    v12 = 1;
    v9 = v114 + 1;
    *(_QWORD *)(a1 + 384) = v9;
    v13 = v9;
  }
  *v13 = v8;
  *((_DWORD *)v9 - 1) = v12;
  if ( (v143[44] & 8) != 0 )
    return 0;
  v14 = (_QWORD **)(v143 + 112);
  v15 = 8LL * *(unsigned int *)(*(_QWORD *)v143 + 24LL);
  v141 = (_QWORD **)&v143[v15 + 112];
  if ( !v15 )
    return 0;
  v142 = a1 + 56;
LABEL_14:
  v17 = *v14;
  v18 = *(_BYTE *)((*v14)[1] + 44LL);
  if ( (v18 & 2) != 0 )
    goto LABEL_13;
  if ( (v18 & 1) != 0 )
  {
    sub_B47570(v3, (__int64)v143, *v14);
    return 1;
  }
  v19 = sub_15D1F10(*v17);
  v20 = sub_15F0200(v142);
  v21 = *(int **)(v19 + 24);
  if ( !v21 )
    goto LABEL_13;
  v22 = *v21;
  if ( v20 == *v21 )
  {
    if ( v21[1] )
      goto LABEL_11;
    v23 = *(unsigned int *)(v3 + 416);
    v24 = v17[1];
    v25 = (__m128i)_mm_loadh_ps((const double *)&v143);
    if ( 3 * (int)v23 < (unsigned int)(4 * (*(_DWORD *)(v3 + 420) + *(_DWORD *)(v3 + 424))) )
    {
      v146.m128i_i64[0] = v17[1];
      v145.m128i_i32[0] = 2 * v23;
      v144.m128i_i64[0] = 16LL * (unsigned int)(2 * v23);
      v147 = v25;
      v38 = (__m128 *)sub_186B270(v144.m128i_u64[0]);
      v39 = v145.m128i_i32[0];
      v28 = v144.m128i_i64[0];
      v24 = v146.m128i_i64[0];
      v25 = _mm_load_si128(&v147);
      v26 = v38;
      v40 = (__m128 *)((char *)v38 + v144.m128i_i64[0]);
      if ( v145.m128i_i32[0] )
      {
        if ( (v144.m128i_i8[0] & 0x10) == 0 || (*v38 = 0, ++v38, v38 != v40) )
        {
          do
          {
            *v38 = 0;
            v38 += 2;
            v38[-1] = 0;
          }
          while ( v38 != v40 );
        }
      }
      v41 = *(const __m128i **)(v3 + 408);
      v27 = v39 - 1;
      v29 = v40;
      v42 = *(unsigned int *)(v3 + 416);
      v43 = (__m128i *)&v41[v42];
      if ( v41 != &v41[v42] )
      {
        v44 = (__int64)v40;
        v45 = v14;
        v46 = &v41[v42];
        v47 = v3;
        v48 = (__m128i *)v40;
        v49 = v39;
        do
        {
          while ( v41->m128i_i64[0] <= 1uLL )
          {
            if ( v46 == ++v41 )
              goto LABEL_52;
          }
          v50 = 16LL * (*(_DWORD *)(*(_QWORD *)v41->m128i_i64[0] + 12LL) & (unsigned int)v27);
          v51 = &v26[(unsigned __int64)v50 / 0x10];
          if ( v28 == v50 )
          {
LABEL_56:
            if ( v26 == v51 )
            {
LABEL_80:
              LODWORD(v150) = v49;
              v149 = (_QWORD **)v47;
              v148.m128i_i64[0] = v44;
              v147.m128i_i64[0] = v28;
              v146.m128i_i32[0] = v27;
              v145.m128i_i64[0] = v24;
              v144 = v25;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v52 = (__m128i *)v26;
            while ( v52->m128i_i64[0] )
            {
              if ( v51 == (__m128 *)++v52 )
                goto LABEL_80;
            }
          }
          else
          {
            v52 = (__m128i *)&v26[(unsigned __int64)v50 / 0x10];
            while ( v52->m128i_i64[0] )
            {
              if ( v48 == ++v52 )
                goto LABEL_56;
            }
          }
          v53 = _mm_loadu_si128(v41++);
          *v52 = v53;
        }
        while ( v46 != v41 );
LABEL_52:
        v3 = v47;
        v43 = *(__m128i **)(v47 + 408);
        v14 = v45;
        v39 = v49;
        v29 = (__m128 *)v44;
      }
      if ( v43 )
      {
        v148.m128i_i32[0] = v39;
        v147.m128i_i64[0] = v28;
        v146.m128i_i32[0] = v27;
        v144.m128i_i64[0] = v24;
        v145 = v25;
        sub_186B220(v43);
        v39 = v148.m128i_i32[0];
        v28 = v147.m128i_i64[0];
        v27 = v146.m128i_i32[0];
        v25 = _mm_load_si128(&v145);
        v24 = v144.m128i_i64[0];
      }
      *(_QWORD *)(v3 + 408) = v26;
      *(_DWORD *)(v3 + 416) = v39;
      *(_DWORD *)(v3 + 424) = 0;
    }
    else
    {
      v26 = *(__m128 **)(v3 + 408);
      v27 = v23 - 1;
      v28 = 16 * v23;
      v29 = (__m128 *)((char *)v26 + v28);
    }
    v30 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
    v31 = 16LL * (v30 & (unsigned int)v27);
    v32 = &v26[(unsigned __int64)v31 / 0x10];
    if ( v31 != v28 )
    {
      v33 = &v26[(unsigned __int64)v31 / 0x10];
      v34 = nullptr;
      while ( 1 )
      {
        v35 = v33->m128_u64[0];
        if ( v33->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v35 + 12LL) == v30 && v24 == v35 )
          {
            *v33 = (__m128)v25;
            goto LABEL_38;
          }
        }
        else
        {
          if ( !v35 )
          {
            if ( v34 )
              goto LABEL_78;
            v34 = v33;
            goto LABEL_79;
          }
          v34 = v33;
        }
        if ( ++v33 == v29 )
          goto LABEL_33;
      }
    }
    v34 = nullptr;
    while ( 1 )
    {
LABEL_33:
      if ( v32 == v26 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v37 = v26->m128_u64[0];
      if ( v26->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v37 + 12LL) == v30 && v24 == v37 )
        {
          *v26 = (__m128)v25;
          goto LABEL_38;
        }
      }
      else
      {
        if ( !v37 )
        {
          if ( v34 )
LABEL_78:
            --*(_DWORD *)(v3 + 424);
          else
            v34 = v26;
LABEL_79:
          *v34 = (__m128)v25;
          ++*(_DWORD *)(v3 + 420);
LABEL_38:
          sub_B45E20(v3, (__int64)v17);
LABEL_13:
          if ( v141 == ++v14 )
            return 0;
          goto LABEL_14;
        }
        v34 = v26;
      }
      ++v26;
    }
  }
  if ( v22 != *(_DWORD *)(v3 + 120) || v21[1] )
  {
LABEL_11:
    v16 = *(_DWORD *)(v3 + 80);
    goto LABEL_12;
  }
  v67 = *((__int64 **)v21 + 1);
  if ( *((_BYTE *)v67 + 8) != 1 )
    goto LABEL_217;
  v68 = *v67;
  v69 = sub_15F0200(v142);
  v73 = *(_DWORD **)(v68 + 24);
  if ( !v73 || v69 != *v73 || v73[1] )
  {
    v21 = *(int **)(v19 + 24);
    v16 = *(_DWORD *)(v3 + 80);
    if ( !v21 )
      goto LABEL_13;
    v22 = *v21;
LABEL_12:
    if ( v16 != v22 || v21[1] )
      goto LABEL_13;
    v54 = *((_QWORD *)v21 + 1);
    v55 = 0xFFFFFFFF0LL;
    if ( v54 )
      v55 = 16LL * (unsigned int)(*(_DWORD *)(v54 - 4) - 1);
    v56 = (__int64 *)(v55 + v54);
    if ( *((_BYTE *)v56 + 8) == 1 )
    {
      v57 = *v56;
      v58 = sub_15F0200(v142);
      v59 = *(_DWORD **)(v57 + 24);
      if ( !v59 )
        goto LABEL_13;
      if ( v58 != *v59 )
        goto LABEL_13;
      if ( v59[1] )
        goto LABEL_13;
      v60 = *(_QWORD ***)sub_B46500(v3, v17);
      if ( !v60 )
        goto LABEL_13;
      v144.m128i_i64[0] = (__int64)&v60[*((unsigned int *)v60 - 1)];
      if ( (_QWORD **)v144.m128i_i64[0] == v60 )
        goto LABEL_13;
      v147.m128i_i64[0] = (__int64)v14;
      v61 = v60;
LABEL_74:
      v65 = *v61;
      v66 = *(_BYTE *)((*v61)[1] + 44LL);
      if ( (v66 & 2) != 0 )
        goto LABEL_73;
      if ( (v66 & 1) == 0 )
      {
        v62 = sub_15D1F10(*v65);
        v63 = sub_15F0200(v142);
        v64 = *(_DWORD **)(v62 + 24);
        if ( !v64 || v63 != *v64 || v64[1] )
          goto LABEL_73;
        v115 = *(unsigned int *)(v3 + 416);
        v116 = (__m128i *)v65[1];
        v117 = 4 * (*(_DWORD *)(v3 + 420) + *(_DWORD *)(v3 + 424));
        v146.m128i_i32[0] = 2 * v115;
        v145 = (__m128i)_mm_loadh_ps((const double *)&v143);
        if ( 3 * (int)v115 < v117 )
        {
          v129 = v146.m128i_i32[0];
          v148.m128i_i64[0] = 16LL * v146.m128i_u32[0];
          v130 = (__m128i *)sub_186B270(v148.m128i_u64[0]);
          v120 = v148.m128i_i64[0];
          v118 = v130;
          v131 = (__m128i *)((char *)v130 + v148.m128i_i64[0]);
          if ( v129 )
          {
            if ( (v148.m128i_i8[0] & 0x10) == 0 || (*v130 = 0, ++v130, v131 != v130) )
            {
              do
              {
                *v130 = 0;
                v130 += 2;
                v130[-1] = 0;
              }
              while ( v131 != v130 );
            }
          }
          v132 = *(_QWORD *)(v3 + 408);
          v121 = v131;
          v133 = 16LL * *(unsigned int *)(v3 + 416);
          v134 = (__m128i *)(v132 + v133);
          v119 = v146.m128i_i32[0] - 1;
          if ( v132 != v132 + v133 )
          {
            v135 = v3;
            v136 = *(const __m128i **)(v3 + 408);
            do
            {
              if ( v136->m128i_i64[0] > 1uLL )
              {
                v137 = 16LL * (*(_DWORD *)(*(_QWORD *)v136->m128i_i64[0] + 12LL) & (unsigned int)v119);
                v138 = &v118[(unsigned __int64)v137 / 0x10];
                if ( v120 == v137 )
                {
LABEL_194:
                  if ( v118 == v138 )
                  {
LABEL_206:
                    v152 = v135;
                    v151 = (__int64)v131;
                    v150 = v116;
                    v149 = v61;
                    v148.m128i_i64[0] = (__int64)v65;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v139 = v118;
                  while ( v139->m128i_i64[0] )
                  {
                    if ( v138 == ++v139 )
                      goto LABEL_206;
                  }
                }
                else
                {
                  v139 = &v118[(unsigned __int64)v137 / 0x10];
                  while ( v139->m128i_i64[0] )
                  {
                    if ( v131 == ++v139 )
                      goto LABEL_194;
                  }
                }
                *v139 = _mm_loadu_si128(v136);
              }
              ++v136;
            }
            while ( v134 != v136 );
            v3 = v135;
            v134 = *(__m128i **)(v135 + 408);
            v121 = v131;
          }
          if ( v134 )
          {
            v149 = (_QWORD **)v120;
            v148.m128i_i32[0] = v119;
            sub_186B220(v134);
            v120 = (__int64)v149;
            v119 = v148.m128i_i32[0];
          }
          v140 = v146.m128i_i32[0];
          *(_QWORD *)(v3 + 408) = v118;
          *(_DWORD *)(v3 + 424) = 0;
          *(_DWORD *)(v3 + 416) = v140;
        }
        else
        {
          v118 = *(__m128i **)(v3 + 408);
          v119 = v115 - 1;
          v120 = 16 * v115;
          v121 = &v118[v115];
        }
        v122 = *(_DWORD *)(v116->m128i_i64[0] + 12);
        v123 = 16LL * (v122 & (unsigned int)v119);
        v124 = &v118[(unsigned __int64)v123 / 0x10];
        if ( v123 == v120 )
        {
          v126 = nullptr;
          while ( 1 )
          {
LABEL_170:
            if ( v124 == v118 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v128 = v118->m128i_i64[0];
            if ( v118->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(*(_QWORD *)v128 + 12LL) == v122 && v116 == (__m128i *)v128 )
              {
                *v118 = _mm_load_si128(&v145);
                goto LABEL_178;
              }
            }
            else
            {
              if ( !v128 )
              {
                if ( v126 )
                  --*(_DWORD *)(v3 + 424);
                else
                  v126 = v118;
                goto LABEL_205;
              }
              v126 = v118;
            }
            ++v118;
          }
        }
        v125 = &v118[(unsigned __int64)v123 / 0x10];
        v126 = nullptr;
        while ( 1 )
        {
          v127 = v125->m128i_i64[0];
          if ( v125->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(*(_QWORD *)v127 + 12LL) == v122 && v116 == (__m128i *)v127 )
            {
              *v125 = _mm_load_si128(&v145);
              goto LABEL_178;
            }
          }
          else
          {
            if ( !v127 )
            {
              if ( v126 )
                --*(_DWORD *)(v3 + 424);
              else
                v126 = v125;
LABEL_205:
              *v126 = _mm_load_si128(&v145);
              ++*(_DWORD *)(v3 + 420);
LABEL_178:
              sub_B45E20(v3, (__int64)v65);
LABEL_73:
              if ( (_QWORD **)v144.m128i_i64[0] == ++v61 )
              {
                v14 = (_QWORD **)v147.m128i_i64[0];
                goto LABEL_13;
              }
              goto LABEL_74;
            }
            v126 = v125;
          }
          if ( ++v125 == v121 )
            goto LABEL_170;
        }
      }
      sub_B47570(v3, (__int64)v143, *v61);
      return 1;
    }
LABEL_217:
    sub_DBF6E(0);
  }
  v74 = *(_QWORD ***)sub_B467F0(v3, v17, v153, v70, v71, v72);
  if ( !v74 )
    goto LABEL_13;
  v144.m128i_i64[0] = (__int64)&v74[*((unsigned int *)v74 - 1)];
  if ( (_QWORD **)v144.m128i_i64[0] == v74 )
    goto LABEL_13;
  v145.m128i_i64[0] = (__int64)v14;
  v75 = v3;
LABEL_96:
  v79 = *v74;
  v80 = *(_BYTE *)((*v74)[1] + 44LL);
  if ( (v80 & 2) != 0 )
    goto LABEL_95;
  if ( (v80 & 1) == 0 )
  {
    v76 = sub_15D1F10(*v79);
    v77 = sub_15F0200(v142);
    v78 = *(_DWORD **)(v76 + 24);
    if ( !v78 || v77 != *v78 || v78[1] )
      goto LABEL_95;
    v85 = *(_DWORD *)(v75 + 416);
    v86 = v79[1];
    v87 = (__m128i)_mm_loadh_ps((const double *)&v143);
    if ( 3 * v85 < 4 * (*(_DWORD *)(v75 + 420) + *(_DWORD *)(v75 + 424)) )
    {
      v147.m128i_i32[0] = 2 * v85;
      v148 = v87;
      v146.m128i_i64[0] = 32LL * v85;
      v99 = (__m128 *)sub_186B270(v146.m128i_u64[0]);
      v100 = v147.m128i_i32[0];
      v90 = v146.m128i_i64[0];
      v87 = _mm_load_si128(&v148);
      v88 = v99;
      v101 = (__m128i *)((char *)v99 + v146.m128i_i64[0]);
      if ( v147.m128i_i32[0] )
      {
        if ( (v146.m128i_i8[0] & 0x10) == 0 || (*v99 = 0, ++v99, v101 != (__m128i *)v99) )
        {
          do
          {
            *v99 = 0;
            v99 += 2;
            v99[-1] = 0;
          }
          while ( v101 != (__m128i *)v99 );
        }
      }
      v102 = *(_QWORD *)(v75 + 408);
      v89 = v100 - 1;
      v91 = (__m128 *)v101;
      v103 = 16LL * *(unsigned int *)(v75 + 416);
      v104 = (__m128i *)(v102 + v103);
      if ( v102 != v102 + v103 )
      {
        v105 = v86;
        v106 = (__int64)v79;
        v107 = *(const __m128i **)(v75 + 408);
        v108 = v100 - 1;
        v109 = v100;
        v110 = v105;
        do
        {
          if ( v107->m128i_i64[0] > 1uLL )
          {
            v111 = 16LL * (*(_DWORD *)(*(_QWORD *)v107->m128i_i64[0] + 12LL) & (unsigned int)v108);
            v112 = &v88[(unsigned __int64)v111 / 0x10];
            if ( v90 == v111 )
            {
LABEL_142:
              if ( v88 == v112 )
              {
LABEL_176:
                LODWORD(v152) = v109;
                v151 = v75;
                v150 = v101;
                v149 = v74;
                v148.m128i_i64[0] = v110;
                v147.m128i_i64[0] = v106;
                v146 = v87;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v113 = (__m128i *)v88;
              while ( v113->m128i_i64[0] )
              {
                if ( v112 == (__m128 *)++v113 )
                  goto LABEL_176;
              }
            }
            else
            {
              v113 = (__m128i *)&v88[(unsigned __int64)v111 / 0x10];
              while ( v113->m128i_i64[0] )
              {
                if ( v101 == ++v113 )
                  goto LABEL_142;
              }
            }
            *v113 = _mm_loadu_si128(v107);
          }
          ++v107;
        }
        while ( v104 != v107 );
        v104 = *(__m128i **)(v75 + 408);
        v100 = v109;
        v86 = v110;
        v89 = v108;
        v91 = (__m128 *)v101;
        v79 = (_QWORD *)v106;
      }
      if ( v104 )
      {
        LODWORD(v149) = v100;
        v148.m128i_i64[0] = v90;
        v147.m128i_i32[0] = v89;
        v146 = v87;
        sub_186B220(v104);
        v100 = (int)v149;
        v90 = v148.m128i_i64[0];
        v89 = v147.m128i_i32[0];
        v87 = _mm_load_si128(&v146);
      }
      *(_QWORD *)(v75 + 408) = v88;
      *(_DWORD *)(v75 + 416) = v100;
      *(_DWORD *)(v75 + 424) = 0;
    }
    else
    {
      v88 = *(__m128 **)(v75 + 408);
      v89 = v85 - 1;
      v90 = 16LL * v85;
      v91 = (__m128 *)((char *)v88 + v90);
    }
    v92 = *(_DWORD *)(*(_QWORD *)v86 + 12LL);
    v93 = 16LL * (v92 & (unsigned int)v89);
    v94 = &v88[(unsigned __int64)v93 / 0x10];
    if ( v93 != v90 )
    {
      v95 = &v88[(unsigned __int64)v93 / 0x10];
      v96 = nullptr;
      while ( 1 )
      {
        v97 = v95->m128_u64[0];
        if ( v95->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v97 + 12LL) == v92 && v86 == v97 )
          {
            *v95 = (__m128)v87;
            goto LABEL_127;
          }
        }
        else
        {
          if ( !v97 )
          {
            if ( v96 )
              goto LABEL_152;
            v96 = v95;
            goto LABEL_153;
          }
          v96 = v95;
        }
        if ( ++v95 == v91 )
          goto LABEL_119;
      }
    }
    v96 = nullptr;
    while ( 1 )
    {
LABEL_119:
      if ( v94 == v88 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v98 = v88->m128_u64[0];
      if ( v88->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v98 + 12LL) == v92 && v86 == v98 )
        {
          *v88 = (__m128)v87;
          goto LABEL_127;
        }
      }
      else
      {
        if ( !v98 )
        {
          if ( v96 )
LABEL_152:
            --*(_DWORD *)(v75 + 424);
          else
            v96 = v88;
LABEL_153:
          *v96 = (__m128)v87;
          ++*(_DWORD *)(v75 + 420);
LABEL_127:
          sub_B45E20(v75, (__int64)v79);
LABEL_95:
          if ( (_QWORD **)v144.m128i_i64[0] == ++v74 )
          {
            v14 = (_QWORD **)v145.m128i_i64[0];
            v3 = v75;
            goto LABEL_13;
          }
          goto LABEL_96;
        }
        v96 = v88;
      }
      ++v88;
    }
  }
  sub_B47570(v75, (__int64)v143, *v74);
  return 1;
}

