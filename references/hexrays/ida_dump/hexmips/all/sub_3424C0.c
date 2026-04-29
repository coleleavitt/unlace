unsigned __int64 __fastcall sub_3424C0(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 result; // rax
  char v5; // dl
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rcx
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int32 v10; // ecx
  _QWORD *exception; // rdi
  const __m128i *v12[3]; // [rsp+0h] [rbp-18h] BYREF

  v12[1] = (const __m128i *)__readfsqword(0x28u);
  v3 = (unsigned __int64 *)a1->m128i_i64[0];
  v12[0] = a2;
  if ( !v3 )
  {
    v8 = qalloc(72);
    v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
    if ( !v8 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v8 + 64) = 0;
    *(_OWORD *)(v8 + 16) = 0;
    *(_OWORD *)(v8 + 32) = 0;
    *(_OWORD *)(v8 + 48) = 0;
    *(_QWORD *)v8 = v8 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v8 + 8) = v9;
    a1->m128i_i64[0] = v8;
    *(_QWORD *)v8 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v3 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_342340(a1, v3, 1, v12);
  }
  if ( !a1->m128i_i64[1] )
    return sub_342340(a1, v3, 1, v12);
  v5 = 1;
  result = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
    return sub_342340(a1, v3, v5, v12);
  v6 = a2->m128i_i64[0];
  while ( 1 )
  {
    if ( v6 >= *(_QWORD *)(result + 24) )
    {
      if ( v6 != *(_QWORD *)(result + 24) )
        goto LABEL_8;
      v10 = *(_DWORD *)(result + 32);
      if ( a2->m128i_i32[2] >= v10 )
        break;
    }
    v7 = *(_BYTE **)(result + 8);
    v5 = 1;
    if ( (*v7 & 2) != 0 )
      goto LABEL_9;
LABEL_12:
    result = (unsigned __int64)v7;
  }
  if ( a2->m128i_i32[2] > v10 )
  {
LABEL_8:
    v7 = *(_BYTE **)(result + 16);
    v5 = 0;
    if ( (*v7 & 2) != 0 )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( !result )
  {
LABEL_9:
    v3 = (unsigned __int64 *)result;
    return sub_342340(a1, v3, v5, v12);
  }
  return result;
}
