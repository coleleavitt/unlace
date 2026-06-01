__m128i *__fastcall sub_D97CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  __m128i *v5; // r12
  char *v6; // rax
  __m128i *exception; // r12
  char *v8; // rax
  __m128i *v12; // r12
  __int64 v13; // rax
  const __m128i *v14; // rcx
  __int32 v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  const __m128i *v19; // r8
  __int64 *v20; // rax
  __m128i *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  const __m128i *v24; // rax
  bool v25; // zf
  const __m128i *v26; // rsi
  const __m128i *v27; // rcx
  _DWORD *v28; // rax
  __int32 v29; // edx
  _QWORD *v30; // rax
  __int64 v31; // r8
  int v32; // r9d
  unsigned __int32 v33; // edx
  const __m128i *v34; // rbx
  int v35; // ecx
  __int64 v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned int v42; // eax
  unsigned int v43; // ecx
  size_t v44; // rsi
  _DWORD *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r9d
  unsigned int v48; // eax
  int v49; // edi
  const __m128i *v50; // r15
  __int64 v51; // rsi
  __int64 v52; // r15
  __m128i v53; // xmm1
  __m128i *v54; // rbx
  __int32 v55; // r8d
  size_t v56; // r15
  __int32 v57; // ecx
  __int64 v58; // rax
  __m128i *v59; // rdi
  __m128i *result; // rax
  __m128i *v61; // rsi
  __int64 v62; // rdx
  unsigned int v63; // edi
  unsigned int v64; // edx
  unsigned int *v65; // rax
  __m128i *v66; // rax
  int v67; // r9d
  const __m128i *v68; // rcx
  __int64 v69; // r10
  const __m128i *v70; // r14
  __m128i *v71; // r10
  __m128i *v72; // rax
  __int64 v73; // rcx
  void **v74; // r10
  __m128i *v75; // r13
  __m128i *v76; // r12
  __m128i *v77; // rbx
  __int64 v78; // rax
  __m128i *v79; // rdx
  __m128i *v80; // rax
  __m128i v81; // xmm0
  __int64 v82; // [rsp+0h] [rbp-F0h]
  __int64 v83; // [rsp+8h] [rbp-E8h]
  __int64 v84; // [rsp+10h] [rbp-E0h]
  __int64 v85; // [rsp+18h] [rbp-D8h]
  __m128i v86; // [rsp+20h] [rbp-D0h] BYREF
  __m128i v87; // [rsp+30h] [rbp-C0h] BYREF
  int *v88; // [rsp+40h] [rbp-B0h]
  const __m128i *v89; // [rsp+48h] [rbp-A8h]
  const __m128i *v90; // [rsp+58h] [rbp-98h] BYREF
  int v91; // [rsp+60h] [rbp-90h] BYREF
  int v92[2]; // [rsp+68h] [rbp-88h]
  __int64 v93; // [rsp+70h] [rbp-80h]
  __int64 v94; // [rsp+80h] [rbp-70h] BYREF
  __int64 v95; // [rsp+88h] [rbp-68h]
  int v96[2]; // [rsp+90h] [rbp-60h] BYREF
  _QWORD *v97; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-48h]
  _QWORD v99[8]; // [rsp+B0h] [rbp-40h] BYREF

  v87.m128i_i64[0] = a2;
  v83 = a4;
  sub_1684300(&v91, *(_QWORD *)(a1 + 32));
  v12 = *(__m128i **)(a3 + 32);
  v13 = *((unsigned int *)a5 + 2);
  v90 = nullptr;
  v14 = (const __m128i *)*a5;
  v15 = v12->m128i_i32[3];
  v16 = v13 - 1;
  v13 *= 16;
  v17 = (__int64 *)((char *)*a5 + v13);
  v18 = 16LL * (v15 & v16);
  v19 = (const __m128i *)((char *)*a5 + v18);
  if ( v18 == v13 )
  {
LABEL_26:
    while ( v19 != v14 )
    {
      v46 = v14->m128i_i64[0];
      if ( v14->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v46 + 12) == v15 && v12 == (__m128i *)v46 )
        {
          v20 = (__int64 *)v14;
          goto LABEL_10;
        }
      }
      else if ( !v46 )
      {
        break;
      }
      ++v14;
    }
LABEL_8:
    v22 = sub_15D1F10(v12);
    LOBYTE(v98) = 1;
    v97 = (_QWORD *)v22;
    *(_QWORD *)v96 = v83;
    v23 = sub_15DCAD0(v92[0], (int)v96, 0);
    sub_15D0DF0(&v97);
    goto LABEL_44;
  }
  v20 = (__int64 *)((char *)*a5 + v18);
  while ( 1 )
  {
    v21 = (__m128i *)*v20;
    if ( (unsigned __int64)*v20 > 1 )
      break;
    if ( !v21 )
      goto LABEL_8;
LABEL_5:
    v20 += 2;
    if ( v17 == v20 )
      goto LABEL_26;
  }
  if ( v21->m128i_i32[3] != v15 || v12 != v21 )
    goto LABEL_5;
LABEL_10:
  v24 = (const __m128i *)v20[1];
  v25 = v24->m128i_i16[2] == 0;
  v89 = v24;
  v26 = v24;
  v90 = v24;
  if ( v25 )
  {
    v26 = v24;
    v27 = v24;
    do
    {
      v28 = *(_DWORD **)(v26[1].m128i_i64[0] + 24);
      if ( !v28 )
        break;
      if ( *v28 != v91 )
        break;
      if ( v28[1] )
        break;
      v26 = (const __m128i *)v26[2].m128i_i64[0];
      v25 = v26->m128i_i16[2] == 0;
      v90 = v26;
    }
    while ( v25 );
    v89 = v27;
  }
  if ( (unsigned __int8)sub_16842C0(&v91, v26, &v90) )
  {
    result = (__m128i *)v83;
    if ( v90 == (const __m128i *)v83 )
      return result;
  }
  v29 = *(_DWORD *)(a3 + 24);
  v82 = *(_QWORD *)(a1 + 32);
  v93 = v82;
  v86.m128i_i32[0] = v29;
  ++v89->m128i_i32[2];
  v30 = (_QWORD *)sub_186B270(0x18u);
  v33 = v86.m128i_i32[0];
  v34 = (const __m128i *)(v30 + 1);
  v30[1] = v89;
  v35 = 2;
  *v30 = 0x100000002LL;
  if ( v33 <= 1 )
  {
    if ( v83 )
      ++*(_DWORD *)(v83 + 8);
    v47 = 1;
  }
  else
  {
    v89 = (const __m128i *)(a3 + 40);
    v36 = a3 + 8LL * (v33 - 2) + 48;
    v86.m128i_i64[0] = (__int64)&v94;
    v88 = v96;
    do
    {
      v94 = 0;
      v39 = v89->m128i_i64[0];
      v40 = *(_QWORD *)(a1 + 40);
      v41 = *(_QWORD *)(v40 + 64);
      v95 = *(_QWORD *)(v40 + 8);
      sub_1435270(v41, v39, v86.m128i_i32[0], v35, v31, v32, v82, v83, v84, v85, v86.m128i_i64[0]);
      sub_13615B0(v88, v87.m128i_i64[0], v94);
      v31 = *(_QWORD *)v96;
      v42 = v34[-1].m128i_u32[3];
      if ( v42 == v34[-1].m128i_i32[2] )
      {
        v43 = (3 * v42 + 1) >> 1;
        v44 = 8 * v43 + 8;
        if ( 8 * v42 + 8 >= (unsigned int)v44 || v42 >= v43 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v97 = v99;
          v8 = (char *)operator new(0x2Bu);
          strcpy(v8, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v8;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v98 = 0;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v99[0] = 0;
          v97 = v99;
          sub_233E40((__int64)&v97);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        HIDWORD(v84) = (3 * v42 + 1) >> 1;
        v85 = *(_QWORD *)v96;
        v45 = (_DWORD *)sub_186B300(&v34[-1].m128i_u64[1], v44);
        v35 = HIDWORD(v84);
        v34 = (const __m128i *)(v45 + 2);
        v31 = v85;
        *v45 = HIDWORD(v84);
        v42 = v45[1];
      }
      v37 = v94;
      v34->m128i_i64[v42] = v31;
      v34[-1].m128i_i32[3] = v42 + 1;
      if ( v37 )
      {
        v38 = v95;
        v25 = (*(_DWORD *)(v37 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v38, v37);
      }
      v89 = (const __m128i *)((char *)v89 + 8);
    }
    while ( (const __m128i *)v36 != v89 );
    if ( v83 )
      ++*(_DWORD *)(v83 + 8);
    v47 = v34[-1].m128i_u32[3];
    v48 = v34[-1].m128i_u32[2];
    if ( v48 == v47 )
    {
      v63 = (3 * v48 + 1) >> 1;
      v64 = 8 * v63 + 8;
      if ( 8 * v48 + 8 >= v64 || v48 >= v63 )
      {
        v5 = (__m128i *)__cxa_allocate_exception(0x28u);
        v97 = v99;
        v6 = (char *)operator new(0x2Bu);
        strcpy(v6, "Overflow encountered when expanding vector");
        v5->m128i_i64[1] = (__int64)v6;
        v5->m128i_i64[0] = (__int64)off_1C63128;
        v97 = v99;
        v5[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        v98 = 0;
        v99[0] = 0;
        sub_233E40((__int64)&v97);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (unsigned int *)sub_186B300(&v34[-1].m128i_u64[1], v64);
      *v65 = v63;
      v47 = v65[1];
      v34 = (const __m128i *)(v65 + 2);
    }
  }
  v49 = v92[0];
  v34->m128i_i64[v47] = v83;
  v34[-1].m128i_i32[3] = v47 + 1;
  v23 = sub_15DCAD0(v49, (int)v34, 0);
  v50 = (const __m128i *)((char *)v34 + 8 * v34[-1].m128i_u32[3]);
  if ( v34 < v50 )
  {
    v89 = v34;
    do
    {
      v51 = v89->m128i_i64[0];
      if ( v89->m128i_i64[0] )
      {
        v25 = (*(_DWORD *)(v51 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v82, v51);
      }
      v89 = (const __m128i *)((char *)v89 + 8);
    }
    while ( v89 < v50 );
  }
  sub_186B220(&v34[-1].m128i_u64[1]);
LABEL_44:
  v52 = *((unsigned int *)a5 + 2);
  v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v23);
  if ( 3 * (int)v52 < (unsigned int)(4 * (*((_DWORD *)a5 + 3) + *((_DWORD *)a5 + 4))) )
  {
    LODWORD(v89) = 2 * v52;
    v56 = 16LL * (unsigned int)(2 * v52);
    v87 = v53;
    v66 = (__m128i *)sub_186B270(v56);
    v67 = (int)v89;
    v53 = _mm_load_si128(&v87);
    v54 = v66;
    v68 = &v66[v56 / 0x10];
    if ( (_DWORD)v89 )
    {
      if ( (v56 & 0x10) == 0 || (*v66 = 0, ++v66, v68 != v66) )
      {
        do
        {
          *v66 = 0;
          v66 += 2;
          v66[-1] = 0;
        }
        while ( v68 != v66 );
      }
    }
    v69 = *((unsigned int *)a5 + 2);
    v70 = (const __m128i *)*a5;
    v89 = v68;
    v55 = v67 - 1;
    v71 = (__m128i *)&v70[v69];
    if ( v70 != v71 )
    {
      v72 = (__m128i *)v68;
      v73 = (__int64)v89;
      v89 = v71;
      v74 = a5;
      v75 = v12;
      v76 = v54;
      v77 = v72;
      do
      {
        while ( v70->m128i_i64[0] <= 1uLL )
        {
          if ( v89 == ++v70 )
            goto LABEL_81;
        }
        v78 = 16LL * (*(_DWORD *)(v70->m128i_i64[0] + 12) & (unsigned int)v55);
        v79 = &v76[(unsigned __int64)v78 / 0x10];
        if ( v56 == v78 )
        {
LABEL_85:
          if ( v76 == v79 )
          {
LABEL_97:
            LODWORD(v88) = v67 - 1;
            v86.m128i_i64[0] = v73;
            v87 = v53;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v80 = v76;
          while ( v80->m128i_i64[0] )
          {
            if ( v79 == ++v80 )
              goto LABEL_97;
          }
        }
        else
        {
          v80 = &v76[(unsigned __int64)v78 / 0x10];
          while ( v80->m128i_i64[0] )
          {
            if ( v77 == ++v80 )
              goto LABEL_85;
          }
        }
        v81 = _mm_loadu_si128(v70++);
        *v80 = v81;
      }
      while ( v89 != v70 );
LABEL_81:
      v89 = (const __m128i *)v73;
      v54 = v76;
      v12 = v75;
      a5 = v74;
      v71 = (__m128i *)*v74;
    }
    if ( v71 )
    {
      LODWORD(v88) = v67;
      v87.m128i_i32[0] = v67 - 1;
      v86 = v53;
      sub_186B220(v71);
      v67 = (int)v88;
      v53 = _mm_load_si128(&v86);
      v55 = v87.m128i_i32[0];
    }
    *a5 = v54;
    *((_DWORD *)a5 + 2) = v67;
    *((_DWORD *)a5 + 4) = 0;
  }
  else
  {
    v54 = (__m128i *)*a5;
    v55 = v52 - 1;
    v56 = 16 * v52;
    v89 = (const __m128i *)((char *)*a5 + v56);
  }
  v57 = v12->m128i_i32[3];
  v58 = 16LL * (v57 & (unsigned int)v55);
  v59 = &v54[(unsigned __int64)v58 / 0x10];
  if ( v56 == v58 )
  {
    v61 = nullptr;
LABEL_54:
    if ( v54 == v59 )
    {
LABEL_62:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        result = (__m128i *)v54->m128i_i64[0];
        if ( v54->m128i_i64[0] <= 1uLL )
          break;
        if ( result->m128i_i32[3] == v57 && v12 == result )
        {
          *v54 = v53;
          return result;
        }
        if ( v59 == ++v54 )
          goto LABEL_62;
      }
      if ( !result )
        break;
      v61 = v54++;
      if ( v59 == v54 )
        goto LABEL_62;
    }
    if ( v61 )
      goto LABEL_91;
    v61 = v54;
  }
  else
  {
    result = &v54[(unsigned __int64)v58 / 0x10];
    v61 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v62 = result->m128i_i64[0];
        if ( result->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v62 + 12) == v57 && v12 == (__m128i *)v62 )
        {
          *result = v53;
          return result;
        }
        if ( v89 == ++result )
          goto LABEL_54;
      }
      if ( !v62 )
        break;
      v61 = result++;
      if ( v89 == result )
        goto LABEL_54;
    }
    if ( v61 )
LABEL_91:
      --*((_DWORD *)a5 + 4);
    else
      v61 = result;
  }
  *v61 = v53;
  ++*((_DWORD *)a5 + 3);
  return result;
}

