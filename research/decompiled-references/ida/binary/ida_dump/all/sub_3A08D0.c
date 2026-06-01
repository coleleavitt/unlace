__int64 __fastcall sub_3A08D0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *exception; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 *v21; // rcx
  unsigned int v22; // edx
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  _BYTE *v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // [rsp+0h] [rbp-48h]
  __int64 v33; // [rsp+8h] [rbp-40h]
  char v34; // [rsp+Fh] [rbp-39h]
  __int64 v35; // [rsp+10h] [rbp-38h]
  __int64 v36; // [rsp+18h] [rbp-30h]

  v10 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64, __int64, __int64))callui)(
          71,
          a2,
          a3,
          a4,
          a5,
          a6);
  result = callui(72, v10, v11, v12, v13, v14, v32, v33, v35, v36);
  if ( !(_BYTE)result )
    return result;
  v16 = *(_QWORD *)(a1 + 24);
  if ( !v16 )
  {
    v30 = qalloc();
    v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
    if ( !v30 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v30 + 32) = 0;
    *(_OWORD *)(v30 + 16) = 0;
    *(__m128i *)(v30 + 8) = v31;
    *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 24) = v30;
    *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 24) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24));
    **(_QWORD **)(a1 + 24) &= ~1uLL;
    **(_QWORD **)(a1 + 24) |= 2uLL;
    v16 = *(_QWORD *)(a1 + 24);
LABEL_4:
    v17 = qalloc();
    v18 = v17;
    if ( !v17 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v17 + 32) = 0;
    *(_OWORD *)(v17 + 16) = 0;
    *(_OWORD *)v17 = 0;
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    v19 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    *(_QWORD *)v17 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v19, v19);
    if ( *(_QWORD *)(a1 + 24) != v16 )
      goto LABEL_6;
LABEL_23:
    *(_QWORD *)v16 = v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = v18;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = v18;
    v29 = *(_QWORD *)v18 & 2LL;
    *(_QWORD *)v18 &= ~1uLL;
    result = v29 | *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v18 = result;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  v22 = result;
  v23 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v23 & 2) != 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v28 = *(_QWORD *)(v23 + 24);
    v21 = (__int64 *)(v23 + 24);
    if ( a2 >= v28 )
      break;
    v27 = *(_BYTE **)(v23 + 8);
    result = v22;
LABEL_19:
    if ( (*v27 & 2) != 0 )
    {
      v16 = v23;
      LOBYTE(v22) = result;
      goto LABEL_12;
    }
    v23 = (unsigned __int64)v27;
  }
  if ( v28 < a2 )
  {
    v27 = *(_BYTE **)(v23 + 16);
    result = 0;
    goto LABEL_19;
  }
  if ( v23 )
    goto LABEL_10;
  v16 = 0;
  LOBYTE(v22) = result;
LABEL_12:
  v34 = v22;
  v24 = qalloc();
  v18 = v24;
  if ( !v24 )
  {
    v7 = __cxa_allocate_exception(8u);
    *v7 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v24 + 32) = 0;
  *(_OWORD *)(v24 + 16) = 0;
  *(_OWORD *)v24 = 0;
  *(_QWORD *)(v24 + 24) = a2;
  *(_QWORD *)v24 = v16 & 0xFFFFFFFFFFFFFFFCLL;
  v25 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
  *(_QWORD *)v24 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64(v25, v25);
  if ( *(_QWORD *)(a1 + 24) == v16 )
    goto LABEL_23;
  if ( v34 )
  {
LABEL_6:
    *(_QWORD *)(v16 + 8) = v18;
    v20 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v20 + 8) == v16 )
      *(_QWORD *)(v20 + 8) = v18;
    goto LABEL_8;
  }
  *(_QWORD *)(v16 + 16) = v24;
  v26 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v26 + 16) == v16 )
    *(_QWORD *)(v26 + 16) = v18;
LABEL_8:
  result = (__int64)sub_3A04F0((_QWORD *)(a1 + 24), (__int64 *)v18);
LABEL_9:
  ++*(_QWORD *)(a1 + 32);
  v21 = (__int64 *)(v18 + 24);
LABEL_10:
  v21[1] = v10;
  return result;
}
