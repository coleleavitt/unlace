unsigned __int64 __fastcall sub_395D00(__m128i *a1, unsigned __int64 *a2, __int64 **a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 result; // rax
  char v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm1
  _QWORD *exception; // rax

  v4 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v21 = qalloc(56);
    v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    if ( !v21 )
      goto LABEL_27;
    *(_QWORD *)(v21 + 48) = 0;
    *(_OWORD *)(v21 + 16) = 0;
    *(_OWORD *)(v21 + 32) = 0;
    *(__m128i *)(v21 + 8) = v22;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v21;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v5 = qalloc(56);
    v9 = v5;
    if ( v5 )
    {
      *(_QWORD *)(v5 + 48) = 0;
      *(_OWORD *)v5 = 0;
      *(_OWORD *)(v5 + 16) = 0;
      *(_OWORD *)(v5 + 32) = 0;
      v10 = **a3;
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 24) = v10;
      *(_QWORD *)v9 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v11 = _mm_loadl_epi64(a1);
      *(_QWORD *)v9 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v11, v11);
      if ( a1->m128i_i64[0] != v4 )
        goto LABEL_5;
      goto LABEL_21;
    }
    goto LABEL_27;
  }
  v13 = 1;
  result = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
  {
LABEL_16:
    v17 = qalloc(56);
    v9 = v17;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 48) = 0;
      *(_OWORD *)v17 = 0;
      *(_OWORD *)(v17 + 16) = 0;
      *(_OWORD *)(v17 + 32) = 0;
      v18 = **a3;
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 24) = v18;
      *(_QWORD *)v9 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v19 = _mm_loadl_epi64(a1);
      *(_QWORD *)v9 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v19, v19);
      if ( a1->m128i_i64[0] != v4 )
      {
        if ( !v13 )
        {
          *(_QWORD *)(v4 + 16) = v9;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v4 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v4 + 8) = v9;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v4 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
LABEL_7:
        sub_3428E0(a1, (__int64 *)v9, v6, v7, v8);
LABEL_8:
        ++a1->m128i_i64[1];
        return v9;
      }
LABEL_21:
      *(_QWORD *)v4 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
      v20 = *(_QWORD *)v9 & 2LL;
      *(_QWORD *)v9 &= ~1uLL;
      *(_QWORD *)v9 = v20 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_27:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v14 = *a2;
  v15 = *(_QWORD *)(result + 24);
  if ( *a2 >= v15 )
    goto LABEL_13;
LABEL_11:
  v16 = *(_QWORD *)(result + 8);
  v13 = 1;
  if ( (*(_BYTE *)v16 & 2) != 0 )
  {
LABEL_15:
    v4 = result;
    goto LABEL_16;
  }
  while ( 1 )
  {
    result = v16;
    v15 = *(_QWORD *)(v16 + 24);
    if ( v14 < v15 )
      goto LABEL_11;
LABEL_13:
    if ( v15 >= v14 )
      break;
    v16 = *(_QWORD *)(result + 16);
    v13 = 0;
    if ( (*(_BYTE *)v16 & 2) != 0 )
      goto LABEL_15;
  }
  if ( !result )
  {
    v4 = 0;
    goto LABEL_16;
  }
  return result;
}
