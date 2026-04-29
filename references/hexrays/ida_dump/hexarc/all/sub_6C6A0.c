__int64 __fastcall sub_6C6A0(__int64 a1, __m128i *a2, unsigned int a3, signed int a4, signed int a5, signed int a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *exception; // rax
  __int64 *v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // eax
  char v19; // si
  __int64 v20; // r10
  __int64 v21; // rdx
  int v22; // edx
  unsigned int v23; // r8d
  signed int *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r14
  _DWORD *v29; // rdi
  __int64 v30; // rdx
  char v31; // al
  __int64 *v32; // rdi
  _DWORD *v33; // rsi
  __int64 v34; // rdx
  signed int *v35; // rcx
  signed int *v36; // rax
  __m128i v37; // xmm3
  unsigned __int64 v38; // rbp
  __int64 v39; // rax
  unsigned __int64 v40; // rsi
  __m128i v41; // xmm5
  __m128i v42; // xmm0
  __int64 v43; // rax
  unsigned __int64 v45; // rdx
  __int64 *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rsi
  char v49; // r12
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __m128i v52; // xmm6
  __m128i v53; // xmm0
  _BYTE *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __m128i v61; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+1Ch] [rbp-3Ch]

  if ( a5 == a3 )
  {
    v15 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24LL * a5);
    v16 = v15[1];
    if ( !v16 )
      return 0;
    v17 = *v15;
    v18 = 0;
    v19 = 0;
    v20 = -1;
    v21 = 0;
    do
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v17 + 4 * v21);
        if ( a4 == v22 )
          break;
        ++v18;
        v19 |= v22 == a6;
        v21 = v18;
        if ( v18 >= v16 )
          goto LABEL_7;
      }
      v20 = v18++;
      v21 = v18;
    }
    while ( v18 < v16 );
LABEL_7:
    v61.m128i_i64[0] = (__int64)v15;
    if ( (_DWORD)v20 == -1 )
      return 0;
    v23 = 1;
    if ( a4 != a6 )
    {
      v24 = (signed int *)(v17 + 4 * v20);
      if ( v19 )
      {
        memmove((void *)(v17 + 4 * v20), v24 + 1, 4 * (v16 - v20) - 4);
        v23 = 2;
        --*(_QWORD *)(v61.m128i_i64[0] + 8);
      }
      else
      {
        *v24 = a6;
        v25 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24LL * a6);
        v26 = v25[1];
        v27 = *v25;
        if ( v25[2] < (unsigned __int64)(v26 + 1) )
        {
          v61.m128i_i64[0] = *(_QWORD *)(a1 + 72) + 24LL * a6;
          v27 = qvector_reserve(v25, v27, v26 + 1, 4);
          *v25 = v27;
          v26 = v25[1];
        }
        *(_DWORD *)(v27 + 4 * v26) = a3;
        v23 = 1;
        ++v25[1];
      }
      v28 = *(_QWORD *)(a1 + 72) + 24LL * a4;
      v29 = *(_DWORD **)v28;
      v30 = *(_QWORD *)v28 + 4LL * *(_QWORD *)(v28 + 8);
      if ( *(_QWORD *)v28 != v30 )
      {
        while ( *v29 != a3 )
        {
          if ( (_DWORD *)v30 == ++v29 )
            goto LABEL_24;
        }
        if ( (_DWORD *)v30 != v29 )
        {
          v61.m128i_i32[0] = v23;
          memmove(v29, v29 + 1, v30 - (_QWORD)v29 - 4);
          --*(_QWORD *)(v28 + 8);
          v23 = v61.m128i_i32[0];
        }
      }
    }
  }
  else
  {
    v31 = sub_66DA0(a1, a3, a4);
    v32 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24LL * a5);
    v23 = v31 == 0 ? 3 : 1;
    v33 = (_DWORD *)*v32;
    v34 = v32[1];
    v35 = (signed int *)(*v32 + 4 * v34);
    if ( (signed int *)*v32 == v35 )
      goto LABEL_35;
    v36 = (signed int *)*v32;
    while ( a6 != *v36 )
    {
      if ( v35 == ++v36 )
        goto LABEL_35;
    }
    if ( v35 == v36 )
    {
LABEL_35:
      v45 = v34 + 1;
      if ( v32[2] < v45 )
      {
        v62 = v23;
        v61.m128i_i64[0] = (__int64)v32;
        v59 = qvector_reserve(v32, v33, v45, 4);
        v23 = v62;
        v60 = v32[1];
        *v32 = v59;
        v35 = (signed int *)(v59 + 4 * v60);
      }
      *v35 = a6;
      ++v32[1];
      v46 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24LL * a6);
      v47 = v46[1];
      v48 = *v46;
      if ( v46[2] < (unsigned __int64)(v47 + 1) )
      {
        v61.m128i_i32[0] = v23;
        v58 = qvector_reserve(v46, v48, v47 + 1, 4);
        v23 = v61.m128i_i32[0];
        *v46 = v58;
        v48 = v58;
        v47 = v46[1];
      }
      *(_DWORD *)(v48 + 4 * v47) = a5;
      ++v46[1];
    }
  }
LABEL_24:
  if ( !a2 )
    return v23;
  v37 = _mm_cvtsi32_si128(a4);
  v38 = a2->m128i_i64[0];
  v61 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), v37));
  if ( !v38 )
  {
    v62 = v23;
    v56 = qalloc(40);
    v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)v56);
    if ( !v56 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v23 = v62;
    *(_QWORD *)(v56 + 32) = 0;
    *(_OWORD *)(v56 + 16) = 0;
    *(__m128i *)(v56 + 8) = v57;
    *(_QWORD *)v56 = v56 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a2->m128i_i64[0] = v56;
    *(_QWORD *)v56 = v56 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v56 & 3LL;
    *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
    *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
    v38 = a2->m128i_i64[0];
LABEL_27:
    v62 = v23;
    v39 = qalloc(40);
    v40 = v39;
    if ( !v39 )
    {
      v7 = __cxa_allocate_exception(8u);
      *v7 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v41 = _mm_load_si128(&v61);
    v23 = v62;
    *(_OWORD *)(v39 + 16) = 0;
    *(_OWORD *)v39 = 0;
    *(__m128i *)(v39 + 24) = v41;
    *(_QWORD *)v39 = v38 & 0xFFFFFFFFFFFFFFFCLL;
    v42 = _mm_loadl_epi64(a2);
    *(_QWORD *)v39 = v38 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64(v42, v42);
    if ( a2->m128i_i64[0] != v38 )
    {
      *(_QWORD *)(v38 + 8) = v39;
      v43 = a2->m128i_i64[0];
      if ( *(_QWORD *)(a2->m128i_i64[0] + 8) == v38 )
        goto LABEL_45;
      goto LABEL_30;
    }
    goto LABEL_52;
  }
  if ( !a2->m128i_i64[1] )
    goto LABEL_27;
  v49 = 1;
  v50 = *(_QWORD *)v38 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v50 & 2) != 0 )
    goto LABEL_41;
  while ( 1 )
  {
    if ( a5 < *(_DWORD *)(v50 + 24) )
    {
LABEL_46:
      v54 = *(_BYTE **)(v50 + 8);
      v49 = 1;
      goto LABEL_47;
    }
    if ( a5 == *(_DWORD *)(v50 + 24) )
    {
      if ( a6 < *(_DWORD *)(v50 + 28) )
        goto LABEL_46;
      if ( a6 <= *(_DWORD *)(v50 + 28) )
        break;
    }
    v54 = *(_BYTE **)(v50 + 16);
    v49 = 0;
LABEL_47:
    if ( (*v54 & 2) != 0 )
    {
      v38 = v50;
      goto LABEL_41;
    }
    v50 = (unsigned __int64)v54;
  }
  if ( v50 )
    return v23;
  v38 = 0;
LABEL_41:
  v62 = v23;
  v51 = qalloc(40);
  v40 = v51;
  if ( !v51 )
  {
    v6 = __cxa_allocate_exception(8u);
    *v6 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v52 = _mm_load_si128(&v61);
  v23 = v62;
  *(_OWORD *)(v51 + 16) = 0;
  *(_OWORD *)v51 = 0;
  *(__m128i *)(v51 + 24) = v52;
  *(_QWORD *)v51 = v38 & 0xFFFFFFFFFFFFFFFCLL;
  v53 = _mm_loadl_epi64(a2);
  *(_QWORD *)v51 = v38 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v51 + 8) = _mm_unpacklo_epi64(v53, v53);
  if ( v38 == a2->m128i_i64[0] )
  {
LABEL_52:
    *(_QWORD *)v38 = v40 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v38 & 3LL;
    *(_QWORD *)(a2->m128i_i64[0] + 8) = v40;
    *(_QWORD *)(a2->m128i_i64[0] + 16) = v40;
    v55 = *(_QWORD *)v40 & 2LL;
    *(_QWORD *)v40 &= ~1uLL;
    *(_QWORD *)v40 = v55 | a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_31;
  }
  if ( v49 )
  {
    *(_QWORD *)(v38 + 8) = v51;
    v43 = a2->m128i_i64[0];
    if ( v38 == *(_QWORD *)(a2->m128i_i64[0] + 8) )
LABEL_45:
      *(_QWORD *)(v43 + 8) = v40;
  }
  else
  {
    *(_QWORD *)(v38 + 16) = v51;
    if ( v38 == *(_QWORD *)(a2->m128i_i64[0] + 16) )
      *(_QWORD *)(a2->m128i_i64[0] + 16) = v51;
  }
LABEL_30:
  v61.m128i_i32[0] = v23;
  sub_6C2B0(a2, (__int64 *)v40);
  v23 = v61.m128i_i32[0];
LABEL_31:
  ++a2->m128i_i64[1];
  return v23;
}
