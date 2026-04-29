unsigned __int64 __fastcall sub_2D0D20(__int64 a1, __m128i *a2, __int64 a3)
{
  int i; // r13d
  const char *v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  size_t v11; // r12
  __int64 v12; // rdi
  __m128i v13; // xmm0
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned int v21; // r12d
  __int64 v22; // rdi
  void *v23; // rax
  void *v24; // rax
  char v25; // si
  unsigned __int64 v26; // rax
  char v27; // dl
  _BYTE *v28; // rdx
  __int64 v29; // rax
  __m128i v30; // xmm1
  __int64 v31; // rdx
  _QWORD *v33; // rdi
  _QWORD *exception; // rdi
  unsigned __int64 v35; // [rsp+8h] [rbp-B0h]
  int v36; // [rsp+8h] [rbp-B0h]
  int v37; // [rsp+14h] [rbp-A4h]
  const __m128i *v38; // [rsp+28h] [rbp-90h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  size_t n; // [rsp+38h] [rbp-80h]
  int v41; // [rsp+50h] [rbp-68h] BYREF
  __int64 v42; // [rsp+58h] [rbp-60h]
  __m128i v43; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v37 = unpack_dd();
  if ( v37 > 0 )
  {
    for ( i = 0; v37 != i; ++i )
    {
      v21 = unpack_dd();
      v35 = sub_3323C0(a3, *(_QWORD *)(a1 + 8));
      v7 = (const char *)sub_332380(a3, *(_QWORD *)(a3 + 8));
      sub_81980((__int64)&src, v7);
      v22 = *(_QWORD *)(a1 + 24);
      if ( !v22 || (v7 = (const char *)v35, v8 = sub_23FAB0(v22, v35, 0), v10 = v8, v8 == -1) )
      {
        v10 = v21;
        v11 = n;
        v12 = 0;
        if ( n )
        {
LABEL_20:
          v36 = v10;
          v23 = (void *)qalloc_or_throw(v11, (__int64)v7, v9, v10);
          v24 = memcpy(v23, src, v11);
          LODWORD(v10) = v36;
          v12 = (__int64)v24;
        }
      }
      else
      {
        v11 = n;
        v12 = 0;
        if ( n )
          goto LABEL_20;
      }
      v13 = (__m128i)v11;
      v14 = a2->m128i_i64[0];
      v41 = v10;
      v42 = v12;
      v38 = (const __m128i *)&v41;
      v43 = _mm_unpacklo_epi64(v13, v13);
      if ( !v14 )
      {
        v29 = qalloc();
        v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
        if ( !v29 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v29 + 48) = 0;
        *(_OWORD *)(v29 + 16) = 0;
        *(_OWORD *)(v29 + 32) = 0;
        *(__m128i *)(v29 + 8) = v30;
        *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a2->m128i_i64[0] = v29;
        *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
        *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
        *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
        v14 = a2->m128i_i64[0];
LABEL_7:
        v15 = qalloc();
        v16 = v15;
        if ( !v15 )
        {
          v33 = __cxa_allocate_exception(8u);
          *v33 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v33,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)v15 = 0;
        *(_OWORD *)(v15 + 16) = 0;
        *(_DWORD *)(v15 + 24) = v41;
        v17 = _mm_load_si128(&v43);
        v18 = v42;
        v42 = 0;
        *(__m128i *)(v16 + 40) = v17;
        v43 = 0;
        *(_QWORD *)(v16 + 32) = v18;
        v19 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 1LL;
        *(_QWORD *)v16 = v19;
        v20 = _mm_loadl_epi64(a2);
        *(_QWORD *)v16 = v19 | 1;
        *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v20, v20);
        if ( a2->m128i_i64[0] == v14 )
        {
          *(_QWORD *)v14 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
          *(_QWORD *)(a2->m128i_i64[0] + 8) = v16;
          *(_QWORD *)(a2->m128i_i64[0] + 16) = v16;
          v31 = *(_QWORD *)v16 & 2LL;
          *(_QWORD *)v16 &= ~1uLL;
          *(_QWORD *)v16 = v31 | a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v14 + 8) = v16;
          if ( *(_QWORD *)(a2->m128i_i64[0] + 8) == v14 )
            *(_QWORD *)(a2->m128i_i64[0] + 8) = v16;
          sub_8F240(a2, (__int64 *)v16);
        }
        ++a2->m128i_i64[1];
        v12 = v42;
        goto LABEL_13;
      }
      if ( !a2->m128i_i64[1] )
        goto LABEL_7;
      v25 = 1;
      v26 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v26 & 2) != 0 )
      {
        v27 = 1;
LABEL_23:
        sub_2D04C0(a2, (unsigned __int64 *)v14, v27, &v38);
        v12 = v42;
        goto LABEL_13;
      }
      while ( 1 )
      {
        if ( (int)v10 < *(_DWORD *)(v26 + 24) )
        {
          v28 = *(_BYTE **)(v26 + 8);
          v25 = 1;
          goto LABEL_27;
        }
        if ( (int)v10 <= *(_DWORD *)(v26 + 24) )
          break;
        v28 = *(_BYTE **)(v26 + 16);
        v25 = 0;
LABEL_27:
        if ( (*v28 & 2) != 0 )
          goto LABEL_28;
        v26 = (unsigned __int64)v28;
      }
      if ( !v26 )
      {
LABEL_28:
        v27 = v25;
        v14 = v26;
        goto LABEL_23;
      }
LABEL_13:
      if ( v12 )
      {
        v43.m128i_i64[0] = 0;
        qfree(v12);
      }
      if ( src )
      {
        n = 0;
        qfree((__int64)src);
      }
    }
  }
  return v44 - __readfsqword(0x28u);
}
