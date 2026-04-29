unsigned __int64 __fastcall sub_2CC9C0(__m128i *a1, __int64 a2)
{
  int i; // r13d
  __m128i v5; // xmm0
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm0
  void *v10; // rax
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  void *v13; // rdi
  int v14; // r12d
  const char *v15; // rax
  size_t v16; // r15
  void *v17; // rax
  char v18; // cl
  unsigned __int64 v19; // rax
  char v20; // dl
  _BYTE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm1
  _QWORD *v26; // rdi
  _QWORD *exception; // rdi
  int v28; // [rsp+4h] [rbp-A4h]
  const __m128i *v29; // [rsp+18h] [rbp-90h] BYREF
  void *src; // [rsp+20h] [rbp-88h] BYREF
  size_t n; // [rsp+28h] [rbp-80h]
  int v32; // [rsp+40h] [rbp-68h] BYREF
  void *v33; // [rsp+48h] [rbp-60h]
  __m128i v34; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v28 = unpack_dd(a2);
  if ( v28 > 0 )
  {
    for ( i = 0; v28 != i; ++i )
    {
      v14 = unpack_dd(a2);
      v15 = (const char *)sub_32DF40(a2, *(_QWORD *)(a2 + 8));
      sub_7DF40((__int64)&src, v15);
      v16 = n;
      v13 = nullptr;
      if ( n )
      {
        v17 = (void *)qalloc_or_throw(n);
        v13 = memcpy(v17, src, v16);
      }
      v5 = (__m128i)v16;
      v6 = a1->m128i_i64[0];
      v32 = v14;
      v33 = v13;
      v29 = (const __m128i *)&v32;
      v34 = _mm_unpacklo_epi64(v5, v5);
      if ( !v6 )
      {
        v23 = qalloc(56);
        v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
        if ( !v23 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v23 + 48) = 0;
        *(_OWORD *)(v23 + 16) = 0;
        *(_OWORD *)(v23 + 32) = 0;
        *(__m128i *)(v23 + 8) = v24;
        *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a1->m128i_i64[0] = v23;
        *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
        *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
        *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
        v6 = a1->m128i_i64[0];
LABEL_5:
        v7 = qalloc(56);
        v8 = v7;
        if ( !v7 )
        {
          v26 = __cxa_allocate_exception(8u);
          *v26 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v26,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)v7 = 0;
        *(_OWORD *)(v7 + 16) = 0;
        *(_DWORD *)(v7 + 24) = v32;
        v9 = _mm_load_si128(&v34);
        v10 = v33;
        v33 = nullptr;
        *(__m128i *)(v8 + 40) = v9;
        v34 = 0;
        *(_QWORD *)(v8 + 32) = v10;
        v11 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
        *(_QWORD *)v8 = v11;
        v12 = _mm_loadl_epi64(a1);
        *(_QWORD *)v8 = v11 | 1;
        *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v12, v12);
        if ( a1->m128i_i64[0] == v6 )
        {
          *(_QWORD *)v6 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
          *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
          v22 = *(_QWORD *)v8 & 2LL;
          *(_QWORD *)v8 &= ~1uLL;
          *(_QWORD *)v8 = v22 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v6 + 8) = v8;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v6 )
            *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
          sub_8B800(a1, (__int64 *)v8);
        }
        ++a1->m128i_i64[1];
        v13 = v33;
        goto LABEL_11;
      }
      if ( !a1->m128i_i64[1] )
        goto LABEL_5;
      v18 = 1;
      v19 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        v20 = 1;
LABEL_20:
        sub_2CC840(a1, (unsigned __int64 *)v6, v20, &v29);
        v13 = v33;
        goto LABEL_11;
      }
      while ( 1 )
      {
        if ( v14 < *(_DWORD *)(v19 + 24) )
        {
          v21 = *(_BYTE **)(v19 + 8);
          v18 = 1;
          goto LABEL_24;
        }
        if ( v14 <= *(_DWORD *)(v19 + 24) )
          break;
        v21 = *(_BYTE **)(v19 + 16);
        v18 = 0;
LABEL_24:
        if ( (*v21 & 2) != 0 )
          goto LABEL_25;
        v19 = (unsigned __int64)v21;
      }
      if ( !v19 )
      {
LABEL_25:
        v20 = v18;
        v6 = v19;
        goto LABEL_20;
      }
LABEL_11:
      if ( v13 )
      {
        v34.m128i_i64[0] = 0;
        qfree(v13);
      }
      if ( src )
      {
        n = 0;
        qfree(src);
      }
    }
  }
  return v35 - __readfsqword(0x28u);
}
