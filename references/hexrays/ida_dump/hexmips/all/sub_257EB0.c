__int64 __fastcall sub_257EB0(__int64 a1, const __m128i *a2, const char *a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *exception; // rdi
  _QWORD *v7; // rdi
  unsigned __int64 **v11; // rdi
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int32 v15; // ecx
  size_t v17; // rax
  __int64 v18; // r13
  size_t v19; // r12
  _BYTE *v20; // rax
  __m128i *v21; // r13
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r8
  __int64 v27; // r12
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // r15
  __m128i v31; // xmm1
  _BYTE *v32; // r12
  __int64 v33; // rdi
  __m128i v34; // xmm1
  _BYTE *v35; // rdi
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rdx
  char v38; // cl
  _BYTE *v39; // rax
  char v40; // dl
  __int64 v41; // rdx
  __int64 v42; // rax
  __m128i v43; // xmm1
  __int32 v44; // eax
  __m128i v45; // [rsp+0h] [rbp-88h] BYREF
  const __m128i *v46; // [rsp+18h] [rbp-70h] BYREF
  _BYTE *v47; // [rsp+20h] [rbp-68h] BYREF
  __m128i v48; // [rsp+28h] [rbp-60h] BYREF
  char v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    v47 = nullptr;
    v48 = 0;
    v17 = strlen(a3);
    v18 = v17 + 1;
    v19 = v17;
    v20 = (_BYTE *)qvector_reserve(&v47, 0, v17 + 1, 1);
    v48.m128i_i64[0] = v18;
    v47 = v20;
    memmove(v20, a3, v19);
    v46 = a2;
    v47[v19] = 0;
    v21 = *(__m128i **)(a1 + 72);
    v49 = 0;
    v22 = v21->m128i_i64[0];
    if ( !v21->m128i_i64[0] )
    {
      v42 = qalloc(72);
      v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
      if ( !v42 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v42 + 64) = 0;
      *(_OWORD *)(v42 + 16) = 0;
      *(_OWORD *)(v42 + 32) = 0;
      *(_OWORD *)(v42 + 48) = 0;
      *(_QWORD *)v42 = v42 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v42 + 8) = v43;
      v21->m128i_i64[0] = v42;
      *(_QWORD *)v42 = v42 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v42 & 3LL;
      *(__m128i *)(v21->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v21->m128i_u64[0], (__m128i)v21->m128i_u64[0]);
      *(_QWORD *)v21->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v21->m128i_i64[0] |= 2uLL;
      v22 = v21->m128i_i64[0];
      goto LABEL_17;
    }
    if ( !v21->m128i_i64[1] )
    {
LABEL_17:
      v23 = qalloc(72);
      v27 = v23;
      if ( !v23 )
      {
        v7 = __cxa_allocate_exception(8u);
        *v7 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v7,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v23 + 64) = 0;
      *(_OWORD *)(v23 + 32) = 0;
      *(_OWORD *)(v23 + 16) = 0;
      *(_OWORD *)(v23 + 48) = 0;
      *(_OWORD *)v23 = 0;
      v28 = _mm_loadu_si128(a2);
      *(_QWORD *)(v23 + 40) = 0;
      *(__m128i *)(v23 + 24) = v28;
      *(_BYTE *)(v23 + 64) = 0;
      *(_OWORD *)(v23 + 48) = 0;
      *(_QWORD *)v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
      v29 = _mm_loadl_epi64(v21);
      *(_QWORD *)v23 = v22 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v29, v29);
      if ( v21->m128i_i64[0] == v22 )
      {
        *(_QWORD *)v22 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
        *(_QWORD *)(v21->m128i_i64[0] + 8) = v23;
        *(_QWORD *)(v21->m128i_i64[0] + 16) = v23;
        v41 = *(_QWORD *)v23 & 2LL;
        *(_QWORD *)v23 &= ~1uLL;
        *(_QWORD *)v23 = v41 | v21->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v22 + 8) = v23;
        if ( *(_QWORD *)(v21->m128i_i64[0] + 8) == v22 )
          *(_QWORD *)(v21->m128i_i64[0] + 8) = v23;
        sub_257B10(v21, (__int64 *)v23, v24, v25, v26);
      }
      ++v21->m128i_i64[1];
      v30 = v27 + 24;
      goto LABEL_23;
    }
    v36 = *(_QWORD *)v22 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v40 = 1;
LABEL_36:
      v30 = sub_257D50(v21, (unsigned __int64 *)v22, v40, &v46) + 24;
LABEL_23:
      v31 = _mm_loadu_si128(&v48);
      v32 = v47;
      v47 = nullptr;
      v48 = 0;
      v33 = *(_QWORD *)(v30 + 16);
      if ( v33 )
      {
        *(_QWORD *)(v30 + 24) = 0;
        v45 = v31;
        qfree(v33);
        v34 = _mm_load_si128(&v45);
        *(_QWORD *)(v30 + 16) = v32;
        v35 = v47;
        *(__m128i *)(v30 + 24) = v34;
        *(_BYTE *)(v30 + 40) = v49;
        if ( v35 )
        {
          v48.m128i_i64[0] = 0;
          qfree(v35);
        }
      }
      else
      {
        *(_QWORD *)(v30 + 16) = v32;
        *(__m128i *)(v30 + 24) = v31;
        *(_BYTE *)(v30 + 40) = v49;
      }
      return sub_339220(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
    }
    v37 = a2->m128i_i64[0];
    v38 = 1;
    while ( 1 )
    {
      v30 = v36 + 24;
      if ( v37 >= *(_QWORD *)(v36 + 24) )
      {
        if ( v37 != *(_QWORD *)(v36 + 24) )
          goto LABEL_33;
        v44 = a2->m128i_i32[2];
        if ( *(_DWORD *)(v36 + 32) <= v44 )
          break;
      }
      v39 = *(_BYTE **)(v36 + 8);
      v38 = 1;
LABEL_34:
      if ( (*v39 & 2) != 0 )
        goto LABEL_35;
      v36 = (unsigned __int64)v39;
    }
    if ( *(_DWORD *)(v36 + 32) >= v44 )
    {
      if ( !v36 )
      {
LABEL_35:
        v40 = v38;
        v22 = v36;
        goto LABEL_36;
      }
      goto LABEL_23;
    }
LABEL_33:
    v39 = *(_BYTE **)(v36 + 16);
    v38 = 0;
    goto LABEL_34;
  }
  v11 = *(unsigned __int64 ***)(a1 + 72);
  v12 = *v11;
  if ( *v11 )
  {
    v13 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v13 )
      goto LABEL_13;
    if ( (*(_BYTE *)v13 & 2) == 0 )
    {
      v14 = a2->m128i_i64[0];
      while ( v14 >= *(_QWORD *)(v13 + 24) )
      {
        if ( v14 == *(_QWORD *)(v13 + 24) )
        {
          v15 = *(_DWORD *)(v13 + 32);
          if ( a2->m128i_i32[2] < v15 )
            break;
          if ( a2->m128i_i32[2] <= v15 )
          {
            if ( v12 != (unsigned __int64 *)v13 )
LABEL_13:
              sub_257640(v11, (__int64 *)v13);
            return sub_339220(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
          }
        }
        v13 = *(_QWORD *)(v13 + 16);
LABEL_27:
        if ( (*(_BYTE *)v13 & 2) != 0 )
          return sub_339220(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
      }
      v13 = *(_QWORD *)(v13 + 8);
      goto LABEL_27;
    }
  }
  return sub_339220(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
}
