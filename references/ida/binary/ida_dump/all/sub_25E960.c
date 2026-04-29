unsigned __int64 __fastcall sub_25E960(__int64 a1, unsigned __int64 a2, __int64 a3)
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
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r13
  unsigned __int64 v18; // rdx
  void *v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm1
  size_t v23; // rbx
  unsigned __int64 v24; // rbx
  char v25; // dl
  unsigned __int64 v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rdx
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 *v31; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)(a3 + 8) == 0;
  v30 = a2;
  v32 = __readfsqword(0x28u);
  v6 = *(__m128i **)(a1 + 96);
  if ( !v5 )
  {
    v31 = &v30;
    v12 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] )
    {
      if ( v6->m128i_i64[1] )
      {
        v24 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v24 & 2) == 0 )
        {
          v25 = 1;
          while ( 1 )
          {
            v26 = *(_QWORD *)(v24 + 24);
            v17 = v24 + 24;
            if ( v30 >= v26 )
            {
              if ( v26 >= v30 )
              {
                if ( !v24 )
                {
LABEL_33:
                  v12 = v24;
                  goto LABEL_35;
                }
                goto LABEL_17;
              }
              v27 = *(_BYTE **)(v24 + 16);
              v25 = 0;
            }
            else
            {
              v27 = *(_BYTE **)(v24 + 8);
              v25 = 1;
            }
            if ( (*v27 & 2) != 0 )
              goto LABEL_33;
            v24 = (unsigned __int64)v27;
          }
        }
        v25 = 1;
LABEL_35:
        v17 = sub_25E800(v6, (unsigned __int64 *)v12, v25, (__int64 **)&v31) + 24;
LABEL_17:
        v18 = *(_QWORD *)(a3 + 8);
        v19 = nullptr;
        v20 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
        if ( v18 )
        {
          v23 = 4 * v18;
          v29 = v20;
          v19 = (void *)qalloc_or_throw();
          memcpy(v19, *(const void **)a3, v23);
          v20 = _mm_load_si128(&v29);
        }
        if ( *(_QWORD *)(v17 + 8) )
        {
          *(_QWORD *)(v17 + 16) = 0;
          v29 = v20;
          qfree();
          v20 = _mm_load_si128(&v29);
        }
        *(_QWORD *)(v17 + 8) = v19;
        *(__m128i *)(v17 + 16) = v20;
        return v32 - __readfsqword(0x28u);
      }
    }
    else
    {
      v21 = qalloc();
      v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
      if ( !v21 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v21 + 48) = 0;
      *(_OWORD *)(v21 + 16) = 0;
      *(_OWORD *)(v21 + 32) = 0;
      *(__m128i *)(v21 + 8) = v22;
      *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v6->m128i_i64[0] = v21;
      *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 3LL;
      *(__m128i *)(v6->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v6->m128i_u64[0], (__m128i)v6->m128i_u64[0]);
      *(_QWORD *)v6->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v6->m128i_i64[0] |= 2uLL;
      v12 = v6->m128i_i64[0];
    }
    v13 = (_OWORD *)qalloc();
    v14 = (unsigned __int64)v13;
    if ( !v13 )
    {
      v4 = __cxa_allocate_exception(8u);
      *v4 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *v13 = 0;
    v13[1] = 0;
    v15 = v30;
    *(_QWORD *)(v14 + 32) = 0;
    *(_QWORD *)(v14 + 24) = v15;
    *(_OWORD *)(v14 + 40) = 0;
    *(_QWORD *)v14 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    v16 = _mm_loadl_epi64(v6);
    *(_QWORD *)v14 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v16, v16);
    if ( v6->m128i_i64[0] == v12 )
    {
      *(_QWORD *)v12 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
      *(_QWORD *)(v6->m128i_i64[0] + 8) = v14;
      *(_QWORD *)(v6->m128i_i64[0] + 16) = v14;
      v28 = *(_QWORD *)v14 & 2LL;
      *(_QWORD *)v14 &= ~1uLL;
      *(_QWORD *)v14 = v28 | v6->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      *(_QWORD *)(v12 + 8) = v14;
      if ( *(_QWORD *)(v6->m128i_i64[0] + 8) == v12 )
        *(_QWORD *)(v6->m128i_i64[0] + 8) = v14;
      sub_25E5C0(v6, (__int64 *)v14);
    }
    ++v6->m128i_i64[1];
    v17 = v14 + 24;
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
      if ( v30 >= v9 )
      {
        if ( v9 >= v30 )
        {
          if ( v7 != v8 )
LABEL_23:
            sub_25E210(*(unsigned __int64 ***)(a1 + 96), v8);
          return v32 - __readfsqword(0x28u);
        }
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v8 = (__int64 *)v8[1];
      }
    }
  }
  return v32 - __readfsqword(0x28u);
}
