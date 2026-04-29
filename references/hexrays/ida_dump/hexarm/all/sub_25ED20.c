unsigned __int64 __fastcall sub_25ED20(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  bool v5; // zf
  __m128i *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v12; // r13
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  void *v22; // rbp
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm1
  size_t v27; // rbx
  unsigned __int64 v28; // rbx
  char v29; // dl
  unsigned __int64 v30; // rax
  _BYTE *v31; // rax
  __int64 v32; // rdx
  __m128i v33; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 *v35; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)(a3 + 8) == 0;
  v34 = a2;
  v36 = __readfsqword(0x28u);
  v6 = *(__m128i **)(a1 + 96);
  if ( !v5 )
  {
    v35 = &v34;
    v12 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] )
    {
      if ( v6->m128i_i64[1] )
      {
        v28 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v28 & 2) == 0 )
        {
          v29 = 1;
          while ( 1 )
          {
            v30 = *(_QWORD *)(v28 + 24);
            v20 = v28 + 24;
            if ( v34 >= v30 )
            {
              if ( v30 >= v34 )
              {
                if ( !v28 )
                {
LABEL_33:
                  v12 = v28;
                  goto LABEL_35;
                }
                goto LABEL_17;
              }
              v31 = *(_BYTE **)(v28 + 16);
              v29 = 0;
            }
            else
            {
              v31 = *(_BYTE **)(v28 + 8);
              v29 = 1;
            }
            if ( (*v31 & 2) != 0 )
              goto LABEL_33;
            v28 = (unsigned __int64)v31;
          }
        }
        v29 = 1;
LABEL_35:
        v20 = sub_25EBC0(v6, (unsigned __int64 *)v12, v29, (__int64 **)&v35) + 24;
LABEL_17:
        v21 = *(_QWORD *)(a3 + 8);
        v22 = nullptr;
        v23 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
        if ( v21 )
        {
          v27 = 4 * v21;
          v33 = v23;
          v22 = (void *)qalloc_or_throw(4 * v21);
          memcpy(v22, *(const void **)a3, v27);
          v23 = _mm_load_si128(&v33);
        }
        v24 = *(_QWORD *)(v20 + 8);
        if ( v24 )
        {
          *(_QWORD *)(v20 + 16) = 0;
          v33 = v23;
          qfree(v24);
          v23 = _mm_load_si128(&v33);
        }
        *(_QWORD *)(v20 + 8) = v22;
        *(__m128i *)(v20 + 16) = v23;
        return v36 - __readfsqword(0x28u);
      }
    }
    else
    {
      v25 = qalloc(56);
      v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
      if ( !v25 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v25 + 48) = 0;
      *(_OWORD *)(v25 + 16) = 0;
      *(_OWORD *)(v25 + 32) = 0;
      *(__m128i *)(v25 + 8) = v26;
      *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v6->m128i_i64[0] = v25;
      *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25 & 3LL;
      *(__m128i *)(v6->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v6->m128i_u64[0], (__m128i)v6->m128i_u64[0]);
      *(_QWORD *)v6->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v6->m128i_i64[0] |= 2uLL;
      v12 = v6->m128i_i64[0];
    }
    v13 = (_OWORD *)qalloc(56);
    v17 = (unsigned __int64)v13;
    if ( !v13 )
    {
      v4 = __cxa_allocate_exception(8u);
      *v4 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *v13 = 0;
    v13[1] = 0;
    v18 = v34;
    *(_QWORD *)(v17 + 32) = 0;
    *(_QWORD *)(v17 + 24) = v18;
    *(_OWORD *)(v17 + 40) = 0;
    *(_QWORD *)v17 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    v19 = _mm_loadl_epi64(v6);
    *(_QWORD *)v17 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v19, v19);
    if ( v6->m128i_i64[0] == v12 )
    {
      *(_QWORD *)v12 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
      *(_QWORD *)(v6->m128i_i64[0] + 8) = v17;
      *(_QWORD *)(v6->m128i_i64[0] + 16) = v17;
      v32 = *(_QWORD *)v17 & 2LL;
      *(_QWORD *)v17 &= ~1uLL;
      *(_QWORD *)v17 = v32 | v6->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      *(_QWORD *)(v12 + 8) = v17;
      if ( *(_QWORD *)(v6->m128i_i64[0] + 8) == v12 )
        *(_QWORD *)(v6->m128i_i64[0] + 8) = v17;
      sub_25E980(v6, (__int64 *)v17, v14, v15, v16);
    }
    ++v6->m128i_i64[1];
    v20 = v17 + 24;
    goto LABEL_17;
  }
  v7 = (__int64 *)v6->m128i_i64[0];
  if ( v6->m128i_i64[0] )
  {
    v8 = (__int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v8 )
      goto LABEL_23;
    while ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v9 = v8[3];
      if ( v34 >= v9 )
      {
        if ( v9 >= v34 )
        {
          if ( v7 != v8 )
LABEL_23:
            sub_25E5D0(*(unsigned __int64 ***)(a1 + 96), v8);
          return v36 - __readfsqword(0x28u);
        }
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v8 = (__int64 *)v8[1];
      }
    }
  }
  return v36 - __readfsqword(0x28u);
}
