unsigned __int64 __fastcall sub_234160(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rsi
  char v6; // cl
  unsigned __int64 v7; // rdx
  _BYTE *v8; // rdx
  char v9; // dl
  __int64 v10; // rax
  __m128i v11; // xmm1
  _QWORD *exception; // rdi
  const __m128i *v13[3]; // [rsp+0h] [rbp-18h] BYREF

  v13[1] = (const __m128i *)__readfsqword(0x28u);
  v3 = (unsigned __int64 *)a1->m128i_i64[0];
  v13[0] = a2;
  if ( !v3 )
  {
    v10 = qalloc(80);
    v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
    if ( !v10 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 32) = 0;
    *(_OWORD *)(v10 + 48) = 0;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v10 + 64) = 0;
    *(__m128i *)(v10 + 8) = v11;
    a1->m128i_i64[0] = v10;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v10 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v3 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_203C70(a1, v3, 1, v13);
  }
  if ( !a1->m128i_i64[1] )
    return sub_203C70(a1, v3, 1, v13);
  result = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
  {
    v9 = 1;
    return sub_203C70(a1, v3, v9, v13);
  }
  v5 = a2->m128i_i64[0];
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(result + 24);
    if ( v5 < v7 )
    {
      v8 = *(_BYTE **)(result + 8);
      v6 = 1;
      if ( (*v8 & 2) != 0 )
        goto LABEL_8;
      goto LABEL_13;
    }
    if ( v7 >= v5 )
      break;
    v8 = *(_BYTE **)(result + 16);
    v6 = 0;
    if ( (*v8 & 2) != 0 )
      goto LABEL_8;
LABEL_13:
    result = (unsigned __int64)v8;
  }
  if ( !result )
  {
LABEL_8:
    v9 = v6;
    v3 = (unsigned __int64 *)result;
    return sub_203C70(a1, v3, v9, v13);
  }
  return result;
}
