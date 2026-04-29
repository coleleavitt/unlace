__int64 __fastcall sub_25C730(__int64 a1, const __m128i *a2, const char *a3, __int64 a4, __int64 a5, int a6)
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
  __int64 v24; // r12
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // r15
  __m128i v28; // xmm1
  _BYTE *v29; // r12
  __int64 v30; // rdi
  __m128i v31; // xmm1
  __int64 v32; // rdi
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rdx
  char v35; // cl
  _BYTE *v36; // rax
  char v37; // dl
  __int64 v38; // rdx
  __int64 v39; // rax
  __m128i v40; // xmm1
  __int32 v41; // eax
  __m128i v42; // [rsp+0h] [rbp-88h] BYREF
  const __m128i *v43; // [rsp+18h] [rbp-70h] BYREF
  _BYTE *v44; // [rsp+20h] [rbp-68h] BYREF
  __m128i v45; // [rsp+28h] [rbp-60h] BYREF
  char v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    v44 = nullptr;
    v45 = 0;
    v17 = strlen(a3);
    v18 = v17 + 1;
    v19 = v17;
    v20 = (_BYTE *)qvector_reserve((__int64)&v44, 0, v17 + 1, 1);
    v45.m128i_i64[0] = v18;
    v44 = v20;
    memmove(v20, a3, v19);
    v43 = a2;
    v44[v19] = 0;
    v21 = *(__m128i **)(a1 + 72);
    v46 = 0;
    v22 = v21->m128i_i64[0];
    if ( !v21->m128i_i64[0] )
    {
      v39 = qalloc();
      v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
      if ( !v39 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v39 + 64) = 0;
      *(_OWORD *)(v39 + 16) = 0;
      *(_OWORD *)(v39 + 32) = 0;
      *(_OWORD *)(v39 + 48) = 0;
      *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v39 + 8) = v40;
      v21->m128i_i64[0] = v39;
      *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v39 & 3LL;
      *(__m128i *)(v21->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v21->m128i_u64[0], (__m128i)v21->m128i_u64[0]);
      *(_QWORD *)v21->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v21->m128i_i64[0] |= 2uLL;
      v22 = v21->m128i_i64[0];
      goto LABEL_17;
    }
    if ( !v21->m128i_i64[1] )
    {
LABEL_17:
      v23 = qalloc();
      v24 = v23;
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
      v25 = _mm_loadu_si128(a2);
      *(_QWORD *)(v23 + 40) = 0;
      *(__m128i *)(v23 + 24) = v25;
      *(_BYTE *)(v23 + 64) = 0;
      *(_OWORD *)(v23 + 48) = 0;
      *(_QWORD *)v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
      v26 = _mm_loadl_epi64(v21);
      *(_QWORD *)v23 = v22 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v26, v26);
      if ( v21->m128i_i64[0] == v22 )
      {
        *(_QWORD *)v22 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
        *(_QWORD *)(v21->m128i_i64[0] + 8) = v23;
        *(_QWORD *)(v21->m128i_i64[0] + 16) = v23;
        v38 = *(_QWORD *)v23 & 2LL;
        *(_QWORD *)v23 &= ~1uLL;
        *(_QWORD *)v23 = v38 | v21->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v22 + 8) = v23;
        if ( *(_QWORD *)(v21->m128i_i64[0] + 8) == v22 )
          *(_QWORD *)(v21->m128i_i64[0] + 8) = v23;
        sub_25C390(v21, (__int64 *)v23);
      }
      ++v21->m128i_i64[1];
      v27 = v24 + 24;
      goto LABEL_23;
    }
    v33 = *(_QWORD *)v22 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v33 & 2) != 0 )
    {
      v37 = 1;
LABEL_36:
      v27 = sub_25C5D0(v21, (unsigned __int64 *)v22, v37, &v43) + 24;
LABEL_23:
      v28 = _mm_loadu_si128(&v45);
      v29 = v44;
      v44 = nullptr;
      v45 = 0;
      v30 = *(_QWORD *)(v27 + 16);
      if ( v30 )
      {
        *(_QWORD *)(v27 + 24) = 0;
        v42 = v28;
        qfree(v30);
        v31 = _mm_load_si128(&v42);
        *(_QWORD *)(v27 + 16) = v29;
        v32 = (__int64)v44;
        *(__m128i *)(v27 + 24) = v31;
        *(_BYTE *)(v27 + 40) = v46;
        if ( v32 )
        {
          v45.m128i_i64[0] = 0;
          qfree(v32);
        }
      }
      else
      {
        *(_QWORD *)(v27 + 16) = v29;
        *(__m128i *)(v27 + 24) = v28;
        *(_BYTE *)(v27 + 40) = v46;
      }
      return sub_33E140(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
    }
    v34 = a2->m128i_i64[0];
    v35 = 1;
    while ( 1 )
    {
      v27 = v33 + 24;
      if ( v34 >= *(_QWORD *)(v33 + 24) )
      {
        if ( v34 != *(_QWORD *)(v33 + 24) )
          goto LABEL_33;
        v41 = a2->m128i_i32[2];
        if ( *(_DWORD *)(v33 + 32) <= v41 )
          break;
      }
      v36 = *(_BYTE **)(v33 + 8);
      v35 = 1;
LABEL_34:
      if ( (*v36 & 2) != 0 )
        goto LABEL_35;
      v33 = (unsigned __int64)v36;
    }
    if ( *(_DWORD *)(v33 + 32) >= v41 )
    {
      if ( !v33 )
      {
LABEL_35:
        v37 = v35;
        v22 = v33;
        goto LABEL_36;
      }
      goto LABEL_23;
    }
LABEL_33:
    v36 = *(_BYTE **)(v33 + 16);
    v35 = 0;
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
              sub_25BEC0(v11, (__int64 *)v13);
            return sub_33E140(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
          }
        }
        v13 = *(_QWORD *)(v13 + 16);
LABEL_27:
        if ( (*(_BYTE *)v13 & 2) != 0 )
          return sub_33E140(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
      }
      v13 = *(_QWORD *)(v13 + 8);
      goto LABEL_27;
    }
  }
  return sub_33E140(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
}
