unsigned __int64 __fastcall sub_279160(__m128i *a1, unsigned __int64 *a2, __int64 **a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i v8; // xmm0
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rsi
  char v11; // cl
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rdx
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm1
  _QWORD *exception; // rax

  v4 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v16 = qalloc(56);
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    if ( !v16 )
      goto LABEL_24;
    *(_QWORD *)(v16 + 48) = 0;
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(__m128i *)(v16 + 8) = v17;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v16;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = a1->m128i_i64[0];
LABEL_3:
    v5 = qalloc(56);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)(v5 + 48) = 0;
      *(_OWORD *)v5 = 0;
      *(_OWORD *)(v5 + 16) = 0;
      *(_OWORD *)(v5 + 32) = 0;
      v7 = **a3;
      *(_QWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 24) = v7;
      *(_DWORD *)(v6 + 48) = 0;
      *(_QWORD *)v6 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(_BYTE *)(v6 + 52) = 0;
      v8 = _mm_loadl_epi64(a1);
      *(_QWORD *)v6 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v8, v8);
      if ( a1->m128i_i64[0] == v4 )
      {
        *(_QWORD *)v4 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
        v15 = *(_QWORD *)v6 & 2LL;
        *(_QWORD *)v6 &= ~1uLL;
        *(_QWORD *)v6 = v15 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v4 + 8) = v6;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v4 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        sub_278C20(a1, (__int64 *)v6);
      }
      ++a1->m128i_i64[1];
      return v6;
    }
LABEL_24:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !a1->m128i_i64[1] )
    goto LABEL_3;
  result = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
  {
    v14 = 1;
    return sub_279000(a1, (unsigned __int64 *)v4, v14, a3);
  }
  v10 = *a2;
  v11 = 1;
  while ( 1 )
  {
    v12 = *(_QWORD *)(result + 24);
    if ( v10 < v12 )
    {
      v13 = *(_BYTE **)(result + 8);
      v11 = 1;
      if ( (*v13 & 2) != 0 )
        goto LABEL_13;
      goto LABEL_18;
    }
    if ( v12 >= v10 )
      break;
    v13 = *(_BYTE **)(result + 16);
    v11 = 0;
    if ( (*v13 & 2) != 0 )
      goto LABEL_13;
LABEL_18:
    result = (unsigned __int64)v13;
  }
  if ( !result )
  {
LABEL_13:
    v14 = v11;
    v4 = result;
    return sub_279000(a1, (unsigned __int64 *)v4, v14, a3);
  }
  return result;
}
