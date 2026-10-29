__int64 __fastcall sub_4415C0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  char **exception; // rbp
  __int64 v7; // rax
  __int64 v8; // r9
  char *v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  unsigned int v12; // edx
  char *v13; // rsi
  __int64 v14; // rdx
  char *v15; // r8
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // r13
  __int64 v20; // rax
  int v21; // edi
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 *i; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // r14
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  __int64 v39; // r14
  __m128i v40; // xmm1
  unsigned int v41; // edx
  __m128i *v42; // rbp
  __int32 v43; // r9d
  __int64 v44; // r8
  __m128i *v45; // r13
  int v46; // ecx
  __m128i v47; // xmm0
  __int64 v48; // r9
  __m128i *v49; // rdi
  __m128i *v50; // rax
  __m128i *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r15d
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rdi
  __m128i *v63; // rax
  __int32 v64; // r10d
  __m128i *v65; // rcx
  const __m128i *v66; // r15
  __m128i *v67; // r11
  __int64 v68; // rax
  __m128i *v69; // rdx
  __m128i *v70; // rax
  _QWORD *v71; // rdx
  __m128i v72; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v73; // [rsp+10h] [rbp-98h] BYREF
  __int32 v74; // [rsp+24h] [rbp-84h]
  __m128i *v75; // [rsp+28h] [rbp-80h]
  __m128i v76; // [rsp+40h] [rbp-68h] BYREF
  __int64 v77[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(char **)v7;
  v10 = *(unsigned int *)(v7 + 8);
  v11 = *(_DWORD *)(v8 + 12);
  v12 = v10 - 1;
  v10 *= 16;
  v13 = &v9[v10];
  v14 = 16LL * (v11 & v12);
  v15 = &v9[v14];
  if ( v14 == v10 )
  {
LABEL_34:
    while ( v15 != v9 )
    {
      v53 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 > 1u )
      {
        if ( *(_DWORD *)(v53 + 12) == v11 && v8 == v53 )
        {
          v16 = v9;
          goto LABEL_11;
        }
      }
      else if ( !v53 )
      {
        return 0;
      }
      v9 += 16;
    }
    return 0;
  }
  v16 = &v9[v14];
  while ( 1 )
  {
    v17 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 > 1u )
      break;
    if ( !v17 )
      return 0;
LABEL_6:
    v16 += 16;
    if ( v13 == v16 )
      goto LABEL_34;
  }
  if ( *(_DWORD *)(v17 + 12) != v11 || v8 != v17 )
    goto LABEL_6;
LABEL_11:
  v19 = *((unsigned int *)v16 + 2);
  if ( *(_DWORD *)(a1 + 48) == -1 )
  {
    *(_DWORD *)(a1 + 48) = v19;
    return 0;
  }
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(_DWORD *)(a2 + 12);
  v22 = *(__int64 **)v20;
  v23 = *(unsigned int *)(v20 + 8);
  v24 = v23 - 1;
  v23 *= 16;
  v25 = (__int64 *)((char *)v22 + v23);
  v26 = 16LL * (v21 & v24);
  v27 = &v22[(unsigned __int64)v26 / 8];
  if ( v26 != v23 )
  {
    for ( i = &v22[(unsigned __int64)v26 / 8]; v25 != i; i += 2 )
    {
      v29 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v29 + 12) == v21 && a2 == v29 )
          goto LABEL_43;
      }
      else if ( !v29 )
      {
        goto LABEL_19;
      }
    }
  }
  for ( ; v27 != v22; v22 += 2 )
  {
    v54 = *v22;
    if ( (unsigned __int64)*v22 > 1 )
    {
      if ( *(_DWORD *)(v54 + 12) == v21 && a2 == v54 )
      {
        i = v22;
LABEL_43:
        *a3 = i[1];
        return 1;
      }
    }
    else if ( !v54 )
    {
      break;
    }
  }
LABEL_19:
  v30 = *(_QWORD *)a1;
  v76.m128i_i64[0] = 0;
  v76.m128i_i64[1] = v30;
  sub_13619F0(a1 + 32, a2, &v76, 1, v27);
  v31 = **(_QWORD **)(a1 + 40) + 16 * v19;
  v32 = sub_15E1B70(*(_QWORD *)a1);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = *(_QWORD **)(v31 + 8);
  if ( v34 )
  {
    v35 = *((_DWORD *)v34 - 1);
    if ( v35 == *((_DWORD *)v34 - 2) )
    {
      v56 = (3 * v35 + 1) >> 1;
      v57 = 8 * v56 + 8;
      if ( 8 * v35 + 8 >= v57 || v35 >= v56 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v77, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v77);
        sub_233E40((__int64)v77);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58 = (unsigned int *)sub_186B300(v34 - 1, v57);
      v59 = v58[1];
      v34 = v58 + 2;
      *(_QWORD *)(v31 + 8) = v58 + 2;
      *v58 = v56;
      LODWORD(v58) = v59;
      v38 = &v34[v59];
      v37 = (_DWORD)v58 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v34[v36];
    }
  }
  else
  {
    v71 = (_QWORD *)sub_186B270(0x18u);
    *v71 = 2;
    v37 = 1;
    v34 = v71 + 1;
    *(_QWORD *)(v31 + 8) = v34;
    v38 = v34;
  }
  *v38 = v33;
  v39 = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v34 - 1) = v37;
  v40 = _mm_loadl_epi64(&v76);
  v41 = *(_DWORD *)(v39 + 8);
  if ( 3 * v41 < 4 * (*(_DWORD *)(v39 + 12) + *(_DWORD *)(v39 + 16)) )
  {
    v72.m128i_i32[2] = 2 * v41;
    v73.m128i_i64[0] = v40.m128i_i64[0];
    v72.m128i_i64[0] = 32LL * v41;
    v63 = (__m128i *)sub_186B270(v72.m128i_u64[0]);
    v64 = v72.m128i_i32[2];
    v44 = v72.m128i_i64[0];
    v42 = v63;
    v40 = _mm_loadl_epi64(&v73);
    v65 = (__m128i *)((char *)v63 + v72.m128i_i64[0]);
    if ( v72.m128i_i32[2] )
    {
      if ( (v72.m128i_i8[0] & 0x10) == 0 || (*v63 = 0, ++v63, v63 != v65) )
      {
        do
        {
          *v63 = 0;
          v63 += 2;
          v63[-1] = 0;
        }
        while ( v63 != v65 );
      }
    }
    v66 = *(const __m128i **)v39;
    v43 = v64 - 1;
    v45 = v65;
    v67 = (__m128i *)(*(_QWORD *)v39 + 16LL * *(unsigned int *)(v39 + 8));
    if ( *(__m128i **)v39 != v67 )
    {
      do
      {
        if ( v66->m128i_i64[0] > 1uLL )
        {
          v68 = 16LL * (*(_DWORD *)(v66->m128i_i64[0] + 12) & (unsigned int)v43);
          v69 = &v42[(unsigned __int64)v68 / 0x10];
          if ( v44 == v68 )
          {
LABEL_82:
            if ( v42 == v69 )
            {
LABEL_94:
              v75 = v65;
              v74 = v64;
              v73.m128i_i64[1] = v44;
              v73.m128i_i32[0] = v64 - 1;
              v72.m128i_i64[1] = (__int64)v67;
              v72.m128i_i64[0] = v40.m128i_i64[0];
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v70 = v42;
            while ( v70->m128i_i64[0] )
            {
              if ( v69 == ++v70 )
                goto LABEL_94;
            }
          }
          else
          {
            v70 = &v42[(unsigned __int64)v68 / 0x10];
            while ( v70->m128i_i64[0] )
            {
              if ( v65 == ++v70 )
                goto LABEL_82;
            }
          }
          *v70 = _mm_loadu_si128(v66);
        }
        ++v66;
      }
      while ( v67 != v66 );
      v67 = *(__m128i **)v39;
    }
    if ( v67 )
    {
      v73.m128i_i32[2] = v64;
      v73.m128i_i64[0] = v44;
      v72.m128i_i32[2] = v64 - 1;
      v72.m128i_i64[0] = v40.m128i_i64[0];
      sub_186B220(v67);
      v64 = v73.m128i_i32[2];
      v44 = v73.m128i_i64[0];
      v43 = v72.m128i_i32[2];
      v40 = _mm_loadl_epi64(&v72);
    }
    *(_QWORD *)v39 = v42;
    *(_DWORD *)(v39 + 8) = v64;
    *(_DWORD *)(v39 + 16) = 0;
  }
  else
  {
    v42 = *(__m128i **)v39;
    v43 = v41 - 1;
    v44 = 16LL * v41;
    v45 = (__m128i *)(*(_QWORD *)v39 + v44);
  }
  v46 = *(_DWORD *)(a2 + 12);
  v47 = _mm_unpacklo_epi64((__m128i)a2, v40);
  v48 = 16LL * (v46 & (unsigned int)v43);
  v49 = &v42[(unsigned __int64)v48 / 0x10];
  if ( v48 != v44 )
  {
    v50 = &v42[(unsigned __int64)v48 / 0x10];
    v51 = nullptr;
    while ( 1 )
    {
      v52 = v50->m128i_i64[0];
      if ( v50->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v52 + 12) == v46 && a2 == v52 )
        {
          *v50 = v47;
          goto LABEL_66;
        }
      }
      else
      {
        if ( !v52 )
        {
          if ( v51 )
            goto LABEL_92;
          v51 = v50;
          goto LABEL_93;
        }
        v51 = v50;
      }
      if ( ++v50 == v45 )
        goto LABEL_56;
    }
  }
  v51 = nullptr;
LABEL_56:
  while ( 2 )
  {
    if ( v49 == v42 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v55 = v42->m128i_i64[0];
    if ( v42->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v55 + 12) == v46 && a2 == v55 )
      {
        *v42 = v47;
        goto LABEL_66;
      }
      goto LABEL_55;
    }
    if ( v55 )
    {
      v51 = v42;
LABEL_55:
      ++v42;
      continue;
    }
    break;
  }
  if ( v51 )
LABEL_92:
    --*(_DWORD *)(v39 + 16);
  else
    v51 = v42;
LABEL_93:
  *v51 = v47;
  ++*(_DWORD *)(v39 + 12);
LABEL_66:
  v60 = v76.m128i_i64[0];
  *a3 = v76.m128i_i64[0];
  if ( v60 )
  {
    v61 = v76.m128i_i64[1];
    if ( (*(_DWORD *)(v60 + 8))-- == 1 )
      sub_15D7BC0(v61, v60);
  }
  return 1;
}

