__m128i *__fastcall sub_439100(__m128i *a1, __int64 a2)
{
  char **exception; // r12
  char **v3; // r12
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r9d
  __m128i v9; // xmm0
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // rdx
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rbx
  __int32 v27; // r9d
  __int64 v28; // rcx
  __int64 *v29; // r13
  int v30; // esi
  __int64 v31; // r9
  __int64 *v32; // rdi
  __int64 *v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r13d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned __int32 v45; // r15d
  __int32 v46; // edi
  __int64 v47; // rcx
  unsigned int v48; // r9d
  __m128i v49; // xmm1
  __m128i *v50; // rbx
  __int32 v51; // eax
  __int64 v52; // r8
  __m128i *v53; // r13
  int v54; // r9d
  __int64 v55; // rax
  __m128i *v56; // r10
  __m128i *v57; // rax
  __m128i *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rax
  __m128i *v61; // r13
  __m128i v62; // xmm1
  __int32 v63; // r14d
  __m128i *v64; // rbx
  __int64 v65; // r15
  __m128i *v66; // rbp
  __int32 v67; // esi
  __int64 v68; // r14
  __m128i *v69; // rdi
  __m128i *result; // rax
  __m128i *v71; // rcx
  __int64 v72; // rdx
  __m128i *v73; // rax
  __int32 v74; // ecx
  __int64 v75; // r8
  unsigned __int64 *v76; // rdx
  __m128i *v77; // rax
  __int64 v78; // r9
  void *v79; // r10
  __int64 v80; // rax
  __m128i *v81; // rsi
  __m128i *v82; // rax
  __m128i *v83; // rax
  __int32 v84; // r9d
  __int64 v85; // r10
  unsigned __int64 *v86; // rdx
  __m128i *v87; // rax
  const double *v88; // r14
  double *v89; // r11
  __int64 v90; // rdx
  __m128i *v91; // rdi
  __m128i *v92; // rdx
  __int64 *v93; // rax
  __int32 v94; // r10d
  __int64 v95; // r8
  const __m128i *v96; // r15
  __m128i *v97; // r11
  __int64 v98; // rax
  __m128i *v99; // rdx
  __m128i *v100; // rax
  __m128i v101; // xmm0
  int v102; // eax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __m128i v105; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v106; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v107; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+38h] [rbp-A0h]
  __m128i v109; // [rsp+40h] [rbp-98h] BYREF
  __int32 v110; // [rsp+54h] [rbp-84h]
  __int64 v111; // [rsp+58h] [rbp-80h]
  __int64 v112[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v113[11]; // [rsp+80h] [rbp-58h] BYREF

  v6 = sub_186B270(0x20u);
  v9 = _mm_loadl_epi64(a1);
  *(_QWORD *)(v6 + 24) = 0;
  v10 = v6;
  *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v9, v9);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  *(_QWORD *)v6 = a2;
  sub_4381A0(v112, a1->m128i_i64, a2, 0, v7, v8);
  v13 = *(_QWORD **)(v10 + 24);
  v14 = v112[0];
  if ( v13 )
  {
    v15 = *((_DWORD *)v13 - 1);
    if ( v15 == *((_DWORD *)v13 - 2) )
    {
      v37 = (3 * v15 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v38 || v15 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v13 - 1, v38);
      v40 = v39[1];
      v13 = v39 + 2;
      *v39 = v37;
      *(_QWORD *)(v10 + 24) = v39 + 2;
      LODWORD(v39) = v40;
      v18 = &v13[v40];
      v17 = (_DWORD)v39 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v13[v16];
    }
  }
  else
  {
    v104 = (_QWORD *)sub_186B270(0x18u);
    v13 = v104 + 1;
    *v104 = 2;
    v17 = 1;
    *(_QWORD *)(v10 + 24) = v13;
    v18 = v13;
  }
  *v18 = v14;
  *((_DWORD *)v13 - 1) = v17;
  sub_4381A0(v112, a1->m128i_i64, a2, 1, v11, v12);
  v19 = *(_QWORD **)(v10 + 24);
  v20 = v112[0];
  if ( v19 )
  {
    v21 = *((_DWORD *)v19 - 1);
    if ( v21 == *((_DWORD *)v19 - 2) )
    {
      v41 = (3 * v21 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v42 || v21 >= v41 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v19 - 1, v42);
      v44 = v43[1];
      v19 = v43 + 2;
      *v43 = v41;
      *(_QWORD *)(v10 + 24) = v43 + 2;
      LODWORD(v43) = v44;
      v24 = &v19[v44];
      v23 = (_DWORD)v43 + 1;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v19[v22];
    }
  }
  else
  {
    v103 = (_QWORD *)sub_186B270(0x18u);
    v19 = v103 + 1;
    *v103 = 2;
    v23 = 1;
    *(_QWORD *)(v10 + 24) = v19;
    v24 = v19;
  }
  *v24 = v20;
  *((_DWORD *)v19 - 1) = v23;
  v25 = a1[1].m128i_u32[0];
  if ( 3 * (int)v25 < (unsigned int)(4 * (a1[1].m128i_i32[1] + a1[1].m128i_i32[2])) )
  {
    v106.m128i_i32[0] = 2 * v25;
    v105.m128i_i64[0] = 16LL * (unsigned int)(2 * v25);
    v93 = (__int64 *)sub_186B270(v105.m128i_u64[0]);
    v28 = v105.m128i_i64[0];
    v94 = v106.m128i_i32[0];
    v26 = v93;
    v95 = (__int64)v93 + v105.m128i_i64[0];
    if ( v106.m128i_i32[0] )
    {
      if ( (v105.m128i_i8[0] & 0x10) == 0 || (*(_OWORD *)v93 = 0, v93 += 2, v93 != (__int64 *)v95) )
      {
        do
        {
          *(_OWORD *)v93 = 0;
          v93 += 4;
          *((_OWORD *)v93 - 1) = 0;
        }
        while ( v93 != (__int64 *)v95 );
      }
    }
    v96 = (const __m128i *)a1->m128i_i64[1];
    v27 = v94 - 1;
    v29 = (__int64 *)v95;
    v97 = (__m128i *)&v96[a1[1].m128i_u32[0]];
    if ( v96 != v97 )
    {
      do
      {
        while ( v96->m128i_i64[0] <= 1uLL )
        {
          if ( v97 == ++v96 )
            goto LABEL_128;
        }
        v98 = 16LL * (*(_DWORD *)(v96->m128i_i64[0] + 12) & (unsigned int)v27);
        v99 = (__m128i *)&v26[(unsigned __int64)v98 / 8];
        if ( v28 == v98 )
        {
LABEL_132:
          if ( v26 == (__int64 *)v99 )
          {
LABEL_148:
            v109.m128i_i64[0] = v95;
            LODWORD(v108) = v94;
            v107.m128i_i64[0] = v28;
            v106.m128i_i32[0] = v94 - 1;
            v105.m128i_i64[0] = (__int64)v97;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v100 = (__m128i *)v26;
          while ( v100->m128i_i64[0] )
          {
            if ( v99 == ++v100 )
              goto LABEL_148;
          }
        }
        else
        {
          v100 = (__m128i *)&v26[(unsigned __int64)v98 / 8];
          while ( v100->m128i_i64[0] )
          {
            if ( (__m128i *)v95 == ++v100 )
              goto LABEL_132;
          }
        }
        v101 = _mm_loadu_si128(v96++);
        *v100 = v101;
      }
      while ( v97 != v96 );
LABEL_128:
      v97 = (__m128i *)a1->m128i_i64[1];
    }
    if ( v97 )
    {
      v107.m128i_i32[0] = v94;
      v106.m128i_i64[0] = v28;
      v105.m128i_i32[0] = v94 - 1;
      sub_186B220(v97);
      v94 = v107.m128i_i32[0];
      v28 = v106.m128i_i64[0];
      v27 = v105.m128i_i32[0];
    }
    a1->m128i_i64[1] = (__int64)v26;
    a1[1].m128i_i32[0] = v94;
    a1[1].m128i_i32[2] = 0;
  }
  else
  {
    v26 = (__int64 *)a1->m128i_i64[1];
    v27 = v25 - 1;
    v28 = 16 * v25;
    v29 = (__int64 *)((char *)v26 + v28);
  }
  v30 = *(_DWORD *)(a2 + 12);
  v31 = 16LL * (v30 & (unsigned int)v27);
  v32 = &v26[(unsigned __int64)v31 / 8];
  if ( v31 != v28 )
  {
    v33 = &v26[(unsigned __int64)v31 / 8];
    v34 = nullptr;
    while ( 1 )
    {
      v35 = *v33;
      if ( (unsigned __int64)*v33 > 1 )
      {
        if ( *(_DWORD *)(v35 + 12) == v30 && a2 == v35 )
        {
          *v33 = a2;
          v33[1] = v10;
          goto LABEL_33;
        }
      }
      else
      {
        if ( !v35 )
        {
          if ( v34 )
            goto LABEL_144;
          v34 = v33;
          goto LABEL_145;
        }
        v34 = v33;
      }
      v33 += 2;
      if ( v33 == v29 )
        goto LABEL_22;
    }
  }
  v34 = nullptr;
  while ( 1 )
  {
LABEL_22:
    if ( v32 == v26 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = *v26;
    if ( (unsigned __int64)*v26 <= 1 )
      break;
    if ( *(_DWORD *)(v36 + 12) == v30 && a2 == v36 )
    {
      *v26 = a2;
      v26[1] = v10;
      goto LABEL_33;
    }
LABEL_21:
    v26 += 2;
  }
  if ( v36 )
  {
    v34 = v26;
    goto LABEL_21;
  }
  if ( v34 )
LABEL_144:
    --a1[1].m128i_i32[2];
  else
    v34 = v26;
LABEL_145:
  *v34 = a2;
  v34[1] = v10;
  ++a1[1].m128i_i32[1];
LABEL_33:
  v45 = a1[2].m128i_u32[2];
  v46 = a1[3].m128i_i32[0];
  v47 = **(_QWORD **)(v10 + 24);
  v48 = 2 * v45;
  v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v10);
  if ( 3 * v45 < 4 * (v46 + a1[2].m128i_i32[3]) )
  {
    v108 = **(_QWORD **)(v10 + 24);
    v45 *= 2;
    v107.m128i_i32[0] = v48;
    v109 = v49;
    v106.m128i_i64[0] = 24LL * v48;
    v105.m128i_i64[0] = v106.m128i_i64[0];
    v83 = (__m128i *)sub_186B270(v106.m128i_u64[0]);
    v84 = v107.m128i_i32[0];
    v85 = v106.m128i_i64[0];
    v52 = v106.m128i_i64[0];
    v47 = v108;
    v50 = v83;
    v49 = _mm_load_si128(&v109);
    v86 = (unsigned __int64 *)((char *)v83->m128i_u64 + v106.m128i_i64[0]);
    if ( v107.m128i_i32[0] )
    {
      do
      {
        v83->m128i_i64[0] = 0;
        v83 = (__m128i *)((char *)v83 + 24);
        v83[-1].m128i_i32[2] = 0;
      }
      while ( v86 != (unsigned __int64 *)v83 );
      v87 = v50;
      if ( (((_BYTE)v86 - (_BYTE)v50) & 8) == 0
        || (v87 = (__m128i *)((char *)v50 + 24), v50->m128i_i64[1] = 0, &v50[1].m128i_u64[1] != v86) )
      {
        do
        {
          v87->m128i_i64[1] = 0;
          v87 += 3;
          v87[-1].m128i_i64[0] = 0;
        }
        while ( v87 != (__m128i *)v86 );
      }
    }
    v88 = (const double *)a1[2].m128i_i64[0];
    v51 = v84 - 1;
    v53 = (__m128i *)((char *)v50 + v85);
    v89 = (double *)&v88[3 * a1[2].m128i_u32[2]];
    if ( v88 != v89 )
    {
      do
      {
        while ( *(_QWORD *)v88 <= 1u )
        {
          v88 += 3;
          if ( v89 == v88 )
            goto LABEL_106;
        }
        v90 = 24LL * (*(_DWORD *)(*(_QWORD *)v88 + 12LL) & (unsigned int)v51);
        v91 = (__m128i *)((char *)v50 + v90);
        if ( v90 == v85 )
        {
LABEL_110:
          if ( v91 == v50 )
          {
LABEL_146:
            v111 = v85;
            v110 = v84;
            v109.m128i_i64[0] = v52;
            LODWORD(v108) = v84 - 1;
            v107.m128i_i64[0] = (__int64)v89;
            v105.m128i_i64[0] = v47;
            v106 = v49;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v92 = v50;
          while ( v92->m128i_i64[0] )
          {
            v92 = (__m128i *)((char *)v92 + 24);
            if ( v91 == v92 )
              goto LABEL_146;
          }
        }
        else
        {
          v92 = (__m128i *)((char *)v50 + v90);
          while ( v92->m128i_i64[0] )
          {
            v92 = (__m128i *)((char *)v92 + 24);
            if ( v53 == v92 )
              goto LABEL_110;
          }
        }
        v88 += 3;
        *(__m128 *)v92 = _mm_loadh_ps(v88 - 2);
        v92[1].m128i_i32[0] = *((_DWORD *)v88 - 2);
      }
      while ( v89 != v88 );
LABEL_106:
      v89 = (double *)a1[2].m128i_i64[0];
    }
    if ( v89 )
    {
      v109.m128i_i32[0] = v84;
      v108 = v52;
      v107.m128i_i32[0] = v84 - 1;
      v105.m128i_i64[0] = v47;
      v106 = v49;
      sub_186B220(v89);
      v84 = v109.m128i_i32[0];
      v52 = v108;
      v51 = v107.m128i_i32[0];
      v49 = _mm_load_si128(&v106);
      v47 = v105.m128i_i64[0];
    }
    a1[2].m128i_i64[0] = (__int64)v50;
    v46 = 0;
    a1[2].m128i_i32[2] = v84;
    a1[3].m128i_i32[0] = 0;
  }
  else
  {
    v50 = (__m128i *)a1[2].m128i_i64[0];
    v51 = v45 - 1;
    v52 = 24LL * v45;
    v53 = (__m128i *)((char *)v50 + v52);
  }
  v54 = *(_DWORD *)(v47 + 12);
  v55 = 24LL * (v54 & (unsigned int)v51);
  v56 = (__m128i *)((char *)v50 + v55);
  if ( v55 != v52 )
  {
    v57 = (__m128i *)((char *)v50 + v55);
    v58 = nullptr;
    while ( 1 )
    {
      v59 = v57->m128i_i64[0];
      if ( v57->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v59 + 12) == v54 && v47 == v59 )
        {
          v57[1].m128i_i32[0] = 0;
          *v57 = v49;
          v102 = a1[2].m128i_i32[3];
          goto LABEL_51;
        }
      }
      else
      {
        if ( !v59 )
        {
          if ( v58 )
            goto LABEL_138;
          v58 = v57;
          goto LABEL_139;
        }
        v58 = v57;
      }
      v57 = (__m128i *)((char *)v57 + 24);
      if ( v57 == v53 )
        goto LABEL_46;
    }
  }
  v58 = nullptr;
LABEL_46:
  while ( 2 )
  {
    if ( v56 == v50 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v60 = v50->m128i_i64[0];
    if ( v50->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v60 + 12) == v54 && v47 == v60 )
      {
        *v50 = v49;
        v102 = a1[2].m128i_i32[3];
        v50[1].m128i_i32[0] = 0;
        goto LABEL_51;
      }
      goto LABEL_45;
    }
    if ( v60 )
    {
      v58 = v50;
LABEL_45:
      v50 = (__m128i *)((char *)v50 + 24);
      continue;
    }
    break;
  }
  if ( v58 )
LABEL_138:
    a1[3].m128i_i32[0] = --v46;
  else
    v58 = v50;
LABEL_139:
  v58[1].m128i_i32[0] = 0;
  *v58 = v49;
  v102 = a1[2].m128i_i32[3] + 1;
  a1[2].m128i_i32[3] = v102;
LABEL_51:
  v61 = *(__m128i **)(*(_QWORD *)(v10 + 24) + 8LL);
  v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v61, (__m128i)(unsigned __int64)v10);
  if ( 3 * v45 < 4 * (v46 + v102) )
  {
    v106.m128i_i32[0] = 2 * v45;
    v107 = v62;
    v105.m128i_i64[0] = 48LL * v45;
    v65 = v105.m128i_i64[0];
    v73 = (__m128i *)sub_186B270(v105.m128i_u64[0]);
    v74 = v106.m128i_i32[0];
    v75 = v105.m128i_i64[0];
    v62 = _mm_load_si128(&v107);
    v64 = v73;
    v76 = (unsigned __int64 *)((char *)v73->m128i_u64 + v105.m128i_i64[0]);
    if ( v106.m128i_i32[0] )
    {
      do
      {
        v73->m128i_i64[0] = 0;
        v73 = (__m128i *)((char *)v73 + 24);
        v73[-1].m128i_i32[2] = 0;
      }
      while ( v76 != (unsigned __int64 *)v73 );
      v77 = v64;
      if ( (((_BYTE)v76 - (_BYTE)v64) & 8) == 0
        || (v77 = (__m128i *)((char *)v64 + 24), v64->m128i_i64[1] = 0, &v64[1].m128i_u64[1] != v76) )
      {
        do
        {
          v77->m128i_i64[1] = 0;
          v77 += 3;
          v77[-1].m128i_i64[0] = 0;
        }
        while ( v77 != (__m128i *)v76 );
      }
    }
    v78 = a1[2].m128i_i64[0];
    v63 = v74 - 1;
    v66 = (__m128i *)((char *)v64 + v75);
    v79 = (void *)(v78 + 24LL * a1[2].m128i_u32[2]);
    if ( (void *)v78 != v79 )
    {
      do
      {
        while ( *(_QWORD *)v78 <= 1u )
        {
          v78 += 24;
          if ( v79 == (void *)v78 )
            goto LABEL_83;
        }
        v80 = 24LL * (*(_DWORD *)(*(_QWORD *)v78 + 12LL) & (unsigned int)v63);
        v81 = (__m128i *)((char *)v64 + v80);
        if ( v80 == v75 )
        {
LABEL_87:
          if ( v81 == v64 )
          {
LABEL_147:
            v109.m128i_i64[0] = v75;
            LODWORD(v108) = v74;
            v107.m128i_i64[0] = (__int64)v79;
            v105.m128i_i64[0] = v78;
            v106 = v62;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v82 = v64;
          while ( v82->m128i_i64[0] )
          {
            v82 = (__m128i *)((char *)v82 + 24);
            if ( v81 == v82 )
              goto LABEL_147;
          }
        }
        else
        {
          v82 = (__m128i *)((char *)v64 + v80);
          while ( v82->m128i_i64[0] )
          {
            v82 = (__m128i *)((char *)v82 + 24);
            if ( v66 == v82 )
              goto LABEL_87;
          }
        }
        v78 += 24;
        *(__m128 *)v82 = _mm_loadh_ps((const double *)(v78 - 16));
        v82[1].m128i_i32[0] = *(_DWORD *)(v78 - 8);
      }
      while ( v79 != (void *)v78 );
LABEL_83:
      v79 = (void *)a1[2].m128i_i64[0];
    }
    if ( v79 )
    {
      v106.m128i_i32[0] = v74;
      v105 = v62;
      sub_186B220(v79);
      v74 = v106.m128i_i32[0];
      v62 = _mm_load_si128(&v105);
    }
    a1[2].m128i_i64[0] = (__int64)v64;
    a1[2].m128i_i32[2] = v74;
    a1[3].m128i_i32[0] = 0;
  }
  else
  {
    v63 = v45 - 1;
    v64 = (__m128i *)a1[2].m128i_i64[0];
    v65 = 24LL * v45;
    v66 = (__m128i *)((char *)v64 + v65);
  }
  v67 = v61->m128i_i32[3];
  v68 = v67 & (unsigned int)v63;
  v69 = (__m128i *)((char *)v64 + 24 * v68);
  if ( 24 * v68 != v65 )
  {
    result = (__m128i *)((char *)v64 + 24 * v68);
    v71 = nullptr;
    while ( 1 )
    {
      v72 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v72 + 12) == v67 && v61 == (__m128i *)v72 )
        {
          result[1].m128i_i32[0] = 1;
          *result = v62;
          return result;
        }
      }
      else
      {
        if ( !v72 )
        {
          if ( v71 )
            goto LABEL_141;
          v71 = result;
          goto LABEL_142;
        }
        v71 = result;
      }
      result = (__m128i *)((char *)result + 24);
      if ( result == v66 )
        goto LABEL_64;
    }
  }
  v71 = nullptr;
LABEL_64:
  while ( 2 )
  {
    if ( v69 == v64 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v64->m128i_i64[0];
    if ( v64->m128i_i64[0] > 1uLL )
    {
      if ( result->m128i_i32[3] == v67 && v61 == result )
      {
        v64[1].m128i_i32[0] = 1;
        *v64 = v62;
        return result;
      }
      goto LABEL_63;
    }
    if ( result )
    {
      v71 = v64;
LABEL_63:
      v64 = (__m128i *)((char *)v64 + 24);
      continue;
    }
    break;
  }
  if ( v71 )
LABEL_141:
    --a1[3].m128i_i32[0];
  else
    v71 = v64;
LABEL_142:
  v71[1].m128i_i32[0] = 1;
  *v71 = v62;
  ++a1[2].m128i_i32[3];
  return result;
}

