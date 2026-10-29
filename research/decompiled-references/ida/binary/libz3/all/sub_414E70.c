__int64 __fastcall sub_414E70(__int64 a1, __int64 a2, __int64 a3, __m128 a4, double a5, __m128 a6)
{
  char **v6; // rbp
  char **exception; // rbp
  std::chrono::_V2::steady_clock *v10; // rdi
  bool v11; // zf
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // r15
  unsigned int v17; // eax
  int v18; // edi
  int v19; // edx
  const __m128i *v20; // rbp
  __int32 v21; // ecx
  __int64 v22; // r9
  const __m128i *v23; // r14
  int v24; // r8d
  __int64 v25; // rdx
  const __m128i *v26; // r10
  const __m128i *v27; // rdx
  __int64 *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rdi
  const __m128i *v33; // r15
  __int64 *v34; // rbp
  int v35; // r10d
  __int64 m128i_i64; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r9
  int v41; // ecx
  __int64 v42; // rax
  const __m128i *v43; // rsi
  const __m128i *i; // rax
  __int64 v45; // rdx
  __int64 *v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 *v49; // rbx
  __int64 v50; // r8
  __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // r15
  __int64 v54; // rax
  int v55; // r10d
  const __m128i *v56; // rcx
  unsigned int v57; // edx
  __int64 *v58; // rdi
  __int64 v59; // rdx
  const __m128i *v60; // r11
  __int64 *v61; // rax
  __int64 v62; // rdx
  __int64 *v63; // rdx
  __int64 *v64; // rsi
  unsigned int v65; // eax
  __int64 *v66; // rcx
  __int64 *v67; // rax
  __int64 *v68; // rax
  const __m128i *v69; // rbx
  const __m128i *v70; // rax
  __int64 result; // rax
  _QWORD *v72; // rax
  int v73; // eax
  __int64 v74; // rax
  const __m128i *j; // rax
  __int64 v76; // rdx
  unsigned int v77; // ecx
  size_t v78; // rsi
  __int64 v79; // rax
  int v80; // ecx
  const __m128i *v81; // rax
  const __m128i *v82; // rax
  __m128 *v83; // r10
  const __m128i *v84; // r8
  __m128i *v85; // r11
  __int64 v86; // rdx
  const __m128i *v87; // rsi
  __m128 *v88; // rdx
  __int32 v89; // eax
  __int64 v90; // rax
  __int64 *v91; // rbp
  __int64 *v92; // r14
  __int64 v93; // r15
  _QWORD *v94; // rdi
  __int64 v95; // rdx
  unsigned int v96; // eax
  unsigned int v97; // edx
  size_t v98; // rsi
  __int32 *v99; // rax
  __int32 v100; // edx
  _QWORD *v101; // rax
  _QWORD *v102; // rdx
  int v103; // eax
  __int64 v104; // rax
  __int64 v105; // rdi
  __m128i v106; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v107; // [rsp+10h] [rbp-A8h]
  __int64 v108; // [rsp+18h] [rbp-A0h]
  __int64 v109; // [rsp+20h] [rbp-98h]
  __int64 v110; // [rsp+28h] [rbp-90h]
  __int64 v111; // [rsp+30h] [rbp-88h]
  std::chrono::_V2::steady_clock *v112; // [rsp+38h] [rbp-80h]
  __int64 v113; // [rsp+40h] [rbp-78h]
  __int32 v114; // [rsp+4Ch] [rbp-6Ch]
  __int64 v115; // [rsp+50h] [rbp-68h]
  __m128 *v116; // [rsp+58h] [rbp-60h]
  _OWORD v117[5]; // [rsp+60h] [rbp-58h] BYREF

  v108 = a1;
  v10 = (std::chrono::_V2::steady_clock *)(a1 + 120);
  v11 = *(_BYTE *)(a1 + 136) == 0;
  v110 = a2;
  v112 = v10;
  if ( v11 )
  {
    v104 = std::chrono::_V2::steady_clock::now(v10);
    v105 = v108;
    *(_QWORD *)(v108 + 120) = v104;
    *(_BYTE *)(v105 + 136) = 1;
  }
  v12 = v110;
  v13 = *(unsigned int *)(v110 + 40);
  *(_QWORD *)(v108 + 160) = *(_QWORD *)v110;
  v14 = *(__int64 **)(v12 + 32);
  v15 = &v14[2 * v13];
  if ( v14 == v15 )
    goto LABEL_31;
  while ( (unsigned __int64)*v14 <= 1 )
  {
    v14 += 2;
    if ( v15 == v14 )
      goto LABEL_31;
  }
  if ( v15 == v14 )
    goto LABEL_31;
  v16 = *v14;
  v109 = v108 + 168;
  do
  {
    v107 = sub_186B270(0x1D8u);
    sub_4148F0(v107);
    v17 = *(_DWORD *)(a3 + 8);
    v18 = *(_DWORD *)(a3 + 16);
    v19 = v18 + *(_DWORD *)(a3 + 12);
    v106.m128i_i32[0] = 2 * v17;
    if ( 3 * v17 < 4 * v19 )
    {
      v111 = 16LL * v106.m128i_u32[0];
      v82 = (const __m128i *)sub_186B270(v111);
      v22 = v111;
      v20 = v82;
      v83 = (__m128 *)&v82->m128i_i8[v111];
      if ( v106.m128i_i32[0] )
      {
        a4.m128_u64[0] = 0;
        if ( (v111 & 0x10) == 0 || (*v82 = 0, ++v82, v82 != (const __m128i *)v83) )
        {
          do
          {
            *v82 = 0;
            v82 += 2;
            v82[-1] = 0;
          }
          while ( v82 != (const __m128i *)v83 );
        }
      }
      v84 = *(const __m128i **)a3;
      v23 = (const __m128i *)v83;
      v85 = (__m128i *)(*(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8));
      v21 = v106.m128i_i32[0] - 1;
      if ( *(__m128i **)a3 != v85 )
      {
        do
        {
          while ( v84->m128i_i64[0] <= 1uLL )
          {
            if ( v85 == ++v84 )
              goto LABEL_142;
          }
          v86 = 16LL * (*(_DWORD *)(v84->m128i_i64[0] + 12) & (unsigned int)v21);
          v87 = &v20[(unsigned __int64)v86 / 0x10];
          if ( v22 == v86 )
          {
LABEL_146:
            if ( v20 == v87 )
            {
LABEL_165:
              v116 = v83;
              v115 = v22;
              v114 = v21;
              v113 = (__int64)v85;
              v111 = (__int64)v84;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v88 = (__m128 *)v20;
            while ( v88->m128_u64[0] )
            {
              if ( v87 == (const __m128i *)++v88 )
                goto LABEL_165;
            }
          }
          else
          {
            v88 = (__m128 *)&v20[(unsigned __int64)v86 / 0x10];
            while ( v88->m128_u64[0] )
            {
              if ( v83 == ++v88 )
                goto LABEL_146;
            }
          }
          a4 = (__m128)_mm_loadu_si128(v84++);
          *v88 = a4;
        }
        while ( v85 != v84 );
LABEL_142:
        v85 = *(__m128i **)a3;
      }
      if ( v85 )
      {
        v113 = v22;
        LODWORD(v111) = v21;
        sub_186B220(v85);
        v22 = v113;
        v21 = v111;
      }
      v89 = v106.m128i_i32[0];
      *(_QWORD *)a3 = v20;
      v18 = 0;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 8) = v89;
    }
    else
    {
      v20 = *(const __m128i **)a3;
      v21 = v17 - 1;
      v22 = 16LL * v17;
      v23 = (const __m128i *)(*(_QWORD *)a3 + v22);
    }
    v24 = *(_DWORD *)(v16 + 12);
    v25 = 16LL * (v24 & (unsigned int)v21);
    v26 = &v20[(unsigned __int64)v25 / 0x10];
    if ( v25 != v22 )
    {
      v27 = &v20[(unsigned __int64)v25 / 0x10];
      v28 = nullptr;
      while ( 1 )
      {
        v29 = v27->m128i_i64[0];
        if ( v27->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v29 + 12) == v24 && v29 == v16 )
          {
            v107 = v27->m128i_i64[1];
            goto LABEL_154;
          }
        }
        else
        {
          if ( !v29 )
          {
            if ( v28 )
              goto LABEL_152;
            v28 = (__int64 *)v27;
            goto LABEL_153;
          }
          v28 = (__int64 *)v27;
        }
        if ( ++v27 == v23 )
          goto LABEL_22;
      }
    }
    v28 = nullptr;
    while ( 1 )
    {
LABEL_22:
      if ( v26 == v20 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v30 = v20->m128i_i64[0];
      if ( v20->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v30 + 12) == v24 && v30 == v16 )
      {
        v107 = v20->m128i_i64[1];
        goto LABEL_154;
      }
LABEL_21:
      ++v20;
    }
    if ( v30 )
    {
      v28 = (__int64 *)v20;
      goto LABEL_21;
    }
    if ( v28 )
LABEL_152:
      *(_DWORD *)(a3 + 16) = v18 - 1;
    else
      v28 = (__int64 *)v20;
LABEL_153:
    v90 = v107;
    *v28 = v16;
    v28[1] = v90;
    ++*(_DWORD *)(a3 + 12);
LABEL_154:
    v91 = *(__int64 **)v14[1];
    if ( v91 )
    {
      v92 = &v91[*((unsigned int *)v91 - 1)];
      if ( v92 != v91 )
      {
        v93 = *v91;
        v94 = *(_QWORD **)(v107 + 112);
        if ( !v94 )
        {
          v101 = (_QWORD *)sub_186B270(0x18u);
          *v101 = 2;
          v94 = v101 + 1;
          v102 = v101 + 1;
          *(_QWORD *)(v107 + 112) = v101 + 1;
          v103 = 1;
          goto LABEL_159;
        }
        while ( 1 )
        {
          v96 = *((_DWORD *)v94 - 1);
          if ( v96 == *((_DWORD *)v94 - 2) )
          {
            v97 = (3 * v96 + 1) >> 1;
            v98 = 8 * v97 + 8;
            if ( 8 * v96 + 8 >= (unsigned int)v98 || v96 >= v97 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0((__int64 *)v117, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v117);
              sub_233E40((__int64)v117);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v106.m128i_i32[0] = (3 * v96 + 1) >> 1;
            v99 = (__int32 *)sub_186B300(v94 - 1, v98);
            v100 = v106.m128i_i32[0];
            v94 = v99 + 2;
            *(_QWORD *)(v107 + 112) = v99 + 2;
            *v99 = v100;
            LODWORD(v99) = v99[1];
            v102 = &v94[(unsigned int)v99];
            v103 = (_DWORD)v99 + 1;
          }
          else
          {
            v95 = v96;
            v103 = v96 + 1;
            v102 = &v94[v95];
          }
LABEL_159:
          ++v91;
          *v102 = v93;
          *((_DWORD *)v94 - 1) = v103;
          if ( v92 == v91 )
            break;
          v93 = *v91;
        }
      }
    }
    v31 = v14 + 2;
    if ( v15 == v14 + 2 )
      break;
    while ( 1 )
    {
      v16 = *v31;
      v14 = v31;
      if ( (unsigned __int64)*v31 > 1 )
        break;
      v31 += 2;
      if ( v15 == v31 )
        goto LABEL_31;
    }
  }
  while ( v15 != v31 );
LABEL_31:
  v32 = *(unsigned int *)(a3 + 8);
  v33 = *(const __m128i **)a3;
  v34 = *(__int64 **)(v110 + 24);
  v35 = *(_DWORD *)(a3 + 8);
  m128i_i64 = *(_QWORD *)a3 + 16 * v32;
  if ( v34 )
  {
    v109 = (__int64)&v34[*((unsigned int *)v34 - 1)];
    if ( (__int64 *)v109 != v34 )
    {
      v107 = v108 + 168;
      do
      {
        while ( 1 )
        {
          v37 = *v34;
          v38 = *(unsigned int *)(*v34 + 68);
          if ( (_DWORD)v38 )
            break;
          ++v34;
          m128i_i64 = (__int64)v33[v32].m128i_i64;
          if ( (__int64 *)v109 == v34 )
            goto LABEL_46;
        }
        v39 = v37 + 8 * v38;
        do
        {
          m128i_i64 = (__int64)v33[v32].m128i_i64;
          v40 = *(_QWORD *)((*(_QWORD *)(v37 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
          v41 = *(_DWORD *)(v40 + 12);
          v42 = v41 & (unsigned int)(v35 - 1);
          v43 = &v33[v42];
          if ( v42 != v32 )
          {
            for ( i = &v33[v42]; (const __m128i *)m128i_i64 != i; ++i )
            {
              v45 = i->m128i_i64[0];
              if ( i->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v45 + 12) == v41 && v40 == v45 )
                  goto LABEL_44;
              }
              else if ( !v45 )
              {
                goto LABEL_43;
              }
            }
          }
          if ( v43 != v33 )
          {
            for ( j = v33; v43 != j; ++j )
            {
              v76 = j->m128i_i64[0];
              if ( j->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v76 + 12) == v41 && v40 == v76 )
                  goto LABEL_44;
              }
              else if ( !v76 )
              {
                break;
              }
            }
          }
LABEL_43:
          v106.m128i_i64[0] = *(_QWORD *)((*(_QWORD *)(v37 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
          a5 = COERCE_DOUBLE(sub_186B270(0x1D8u));
          v106 = _mm_unpacklo_epi64((__m128i)v106.m128i_u64[0], (__m128i)*(unsigned __int64 *)&a5);
          sub_4148F0(SLODWORD(a5));
          a4 = (__m128)_mm_load_si128(&v106);
          v117[0] = a4;
          sub_41EB80(a3, v117);
          v32 = *(unsigned int *)(a3 + 8);
          v33 = *(const __m128i **)a3;
          v35 = *(_DWORD *)(a3 + 8);
          m128i_i64 = *(_QWORD *)a3 + 16 * v32;
LABEL_44:
          v37 += 8;
        }
        while ( v39 != v37 );
        ++v34;
      }
      while ( (__int64 *)v109 != v34 );
    }
  }
LABEL_46:
  if ( v33 != (const __m128i *)m128i_i64 )
  {
    v46 = (__int64 *)v33;
    while ( (unsigned __int64)*v46 <= 1 )
    {
      v46 += 2;
      if ( v46 == (__int64 *)m128i_i64 )
        goto LABEL_81;
    }
    if ( v46 != (__int64 *)m128i_i64 )
    {
      v47 = *v46;
      v109 = v110 + 56;
      while ( 1 )
      {
        v106.m128i_i64[0] = v46[1];
        v48 = sub_63A810(v109, v47);
        v49 = *(__int64 **)v48;
        v50 = v106.m128i_i64[0];
        v51 = *(_QWORD *)v48 + 8LL * *(unsigned int *)(v48 + 8);
        if ( *(_QWORD *)v48 == v51 )
          goto LABEL_75;
        while ( (unsigned __int64)*v49 <= 1 )
        {
          if ( (__int64 *)v51 == ++v49 )
            goto LABEL_75;
        }
        if ( (__int64 *)v51 == v49 )
          goto LABEL_75;
        v52 = *v49;
        v53 = 0;
        do
        {
          v54 = *(unsigned int *)(a3 + 8);
          v55 = *(_DWORD *)(v52 + 12);
          v56 = *(const __m128i **)a3;
          v57 = v54 - 1;
          v54 *= 16;
          v58 = (__int64 *)(*(_QWORD *)a3 + v54);
          v59 = 16LL * (v55 & v57);
          v60 = (const __m128i *)(*(_QWORD *)a3 + v59);
          if ( v59 == v54 )
          {
LABEL_97:
            while ( v60 != v56 )
            {
              v74 = v56->m128i_i64[0];
              if ( v56->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v74 + 12) == v55 && v74 == v52 )
                {
                  v61 = (__int64 *)v56;
                  goto LABEL_95;
                }
              }
              else if ( !v74 )
              {
                break;
              }
              ++v56;
            }
LABEL_65:
            v63 = *(__int64 **)(v53 + 56);
            if ( v63 )
              goto LABEL_66;
LABEL_96:
            v106.m128i_i64[0] = v50;
            v72 = (_QWORD *)sub_186B270(0x18u);
            v50 = v106.m128i_i64[0];
            v63 = v72 + 1;
            *v72 = 2;
            v64 = v63;
            v73 = 1;
            *(_QWORD *)(v53 + 56) = v63;
            goto LABEL_115;
          }
          v61 = (__int64 *)(*(_QWORD *)a3 + v59);
          while ( 1 )
          {
            v62 = *v61;
            if ( (unsigned __int64)*v61 > 1 )
              break;
            if ( !v62 )
              goto LABEL_65;
LABEL_62:
            v61 += 2;
            if ( v58 == v61 )
              goto LABEL_97;
          }
          if ( *(_DWORD *)(v62 + 12) != v55 || v62 != v52 )
            goto LABEL_62;
LABEL_95:
          v53 = v61[1];
          v63 = *(__int64 **)(v53 + 56);
          if ( !v63 )
            goto LABEL_96;
LABEL_66:
          v64 = &v63[*((unsigned int *)v63 - 1)];
          v65 = *((_DWORD *)v63 - 1);
          if ( v64 == v63 )
          {
LABEL_113:
            if ( v65 == *((_DWORD *)v63 - 2) )
            {
              v77 = (3 * v65 + 1) >> 1;
              v78 = 8 * v77 + 8;
              if ( 8 * v65 + 8 >= (unsigned int)v78 || v65 >= v77 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_3FCFD0((__int64 *)v117, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v117);
                sub_233E40((__int64)v117);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v107) = (3 * v65 + 1) >> 1;
              v106.m128i_i64[0] = v50;
              v79 = sub_186B300(v63 - 1, v78);
              v80 = v107;
              v63 = (__int64 *)(v79 + 8);
              v50 = v106.m128i_i64[0];
              *(_QWORD *)(v53 + 56) = v79 + 8;
              *(_DWORD *)v79 = v80;
              LODWORD(v79) = *(_DWORD *)(v79 + 4);
              v64 = &v63[(unsigned int)v79];
              v73 = v79 + 1;
            }
            else
            {
              v73 = v65 + 1;
            }
LABEL_115:
            *v64 = v50;
            *((_DWORD *)v63 - 1) = v73;
            goto LABEL_70;
          }
          v66 = v63;
          while ( v50 != *v66 )
          {
            if ( v64 == ++v66 )
              goto LABEL_113;
          }
LABEL_70:
          v67 = v49 + 1;
          if ( (__int64 *)v51 == v49 + 1 )
            break;
          while ( 1 )
          {
            v52 = *v67;
            v49 = v67;
            if ( (unsigned __int64)*v67 > 1 )
              break;
            if ( (__int64 *)v51 == ++v67 )
              goto LABEL_75;
          }
        }
        while ( (__int64 *)v51 != v67 );
LABEL_75:
        v68 = v46 + 2;
        if ( v46 + 2 != (__int64 *)m128i_i64 )
        {
          while ( 1 )
          {
            v47 = *v68;
            v46 = v68;
            if ( (unsigned __int64)*v68 > 1 )
              break;
            v68 += 2;
            if ( (__int64 *)m128i_i64 == v68 )
              goto LABEL_80;
          }
          if ( v68 != (__int64 *)m128i_i64 )
            continue;
        }
LABEL_80:
        v33 = *(const __m128i **)a3;
        m128i_i64 = *(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8);
        break;
      }
    }
LABEL_81:
    if ( v33 != (const __m128i *)m128i_i64 )
    {
      v69 = v33;
      while ( v69->m128i_i64[0] <= 1uLL )
      {
        if ( ++v69 == (const __m128i *)m128i_i64 )
          goto LABEL_120;
      }
      if ( v69 == (const __m128i *)m128i_i64 )
        goto LABEL_120;
      do
      {
        sub_413640((_QWORD *)v69->m128i_i64[1], a3, *(double *)a4.m128_u64, a5, a6);
        v70 = v69 + 1;
        if ( &v69[1] == (const __m128i *)m128i_i64 )
          break;
        while ( 1 )
        {
          v69 = v70;
          if ( v70->m128i_i64[0] > 1uLL )
            break;
          if ( (const __m128i *)m128i_i64 == ++v70 )
            goto LABEL_91;
        }
      }
      while ( v70 != (const __m128i *)m128i_i64 );
LABEL_91:
      v33 = *(const __m128i **)a3;
      m128i_i64 = *(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8);
      if ( *(_QWORD *)a3 != m128i_i64 )
      {
        while ( v33->m128i_i64[0] <= 1uLL )
        {
          ++v33;
LABEL_120:
          if ( v33 == (const __m128i *)m128i_i64 )
            goto LABEL_92;
        }
        while ( v33 != (const __m128i *)m128i_i64 )
        {
          sub_414310(v33->m128i_i64[1]);
          v81 = v33 + 1;
          if ( &v33[1] == (const __m128i *)m128i_i64 )
            break;
          while ( 1 )
          {
            v33 = v81;
            if ( v81->m128i_i64[0] > 1uLL )
              break;
            if ( (const __m128i *)m128i_i64 == ++v81 )
            {
              result = v108;
              if ( !*(_BYTE *)(v108 + 136) )
                return result;
              return sub_3FCC40((__int64)v112);
            }
          }
        }
      }
    }
  }
LABEL_92:
  result = v108;
  if ( *(_BYTE *)(v108 + 136) )
    return sub_3FCC40((__int64)v112);
  return result;
}

