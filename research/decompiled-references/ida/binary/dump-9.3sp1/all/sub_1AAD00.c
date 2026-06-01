unsigned __int64 __fastcall sub_1AAD00(__m128i *a1, unsigned __int8 **a2, _QWORD **a3, __int64 a4)
{
  unsigned __int64 v5; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __m128i v9; // xmm0
  unsigned __int64 v11; // rbx
  __int64 v13; // rsi
  _BYTE *v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned __int8 *v17; // rdi
  int v18; // r15d
  unsigned __int8 *v19; // rsi
  unsigned __int8 *v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  _QWORD *exception; // rdi
  char v26; // [rsp+7h] [rbp-61h]
  unsigned __int8 **v27; // [rsp+8h] [rbp-60h]
  int v28; // [rsp+8h] [rbp-60h]
  unsigned __int8 v29[4]; // [rsp+10h] [rbp-58h] BYREF
  int v30; // [rsp+14h] [rbp-54h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v5 = a1->m128i_i64[0];
  v31 = __readfsqword(0x28u);
  if ( !v5 )
  {
    v23 = qalloc();
    v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
      goto LABEL_36;
    *(_QWORD *)(v23 + 32) = 0;
    *(_OWORD *)(v23 + 16) = 0;
    *(__m128i *)(v23 + 8) = v24;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v23;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v7 = qalloc();
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 32) = 0;
      *(_OWORD *)v7 = 0;
      *(_OWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = **a3;
      *(_QWORD *)v7 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      v9 = _mm_loadl_epi64(a1);
      *(_QWORD *)v7 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v9, v9);
      if ( a1->m128i_i64[0] != v5 )
        goto LABEL_5;
      goto LABEL_29;
    }
    goto LABEL_36;
  }
  v11 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v11 & 2) != 0 )
  {
    v26 = 1;
    goto LABEL_17;
  }
  v26 = 1;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v11 + 24);
    v27 = (unsigned __int8 **)(v11 + 24);
    if ( *((_DWORD *)*a2 + 1) == -1 || *(_DWORD *)(v13 + 4) == -1 )
      break;
    if ( sub_11DA40(*a2, (unsigned __int8 *)v13) >= 0 )
      goto LABEL_23;
LABEL_14:
    v14 = *(_BYTE **)(v11 + 8);
    v26 = 1;
    if ( (*v14 & 2) != 0 )
      goto LABEL_28;
LABEL_15:
    v11 = (unsigned __int64)v14;
  }
  sub_123A40((__int64)v29, (unsigned __int8 *)v13, (__int64)a3, a4);
  v17 = *a2;
  v30 = *((_DWORD *)*a2 + 1);
  v18 = sub_11DA40(v17, v29);
  sub_11CDA0((__int64)v29);
  if ( v18 < 0 )
    goto LABEL_14;
LABEL_23:
  v19 = *a2;
  if ( *((_DWORD *)*v27 + 1) == -1 || *((_DWORD *)v19 + 1) == -1 )
  {
    sub_123A40((__int64)v29, v19, (__int64)a3, a4);
    v20 = *v27;
    v30 = *((_DWORD *)*v27 + 1);
    v28 = sub_11DA40(v20, v29);
    sub_11CDA0((__int64)v29);
    v21 = v28;
  }
  else
  {
    v21 = sub_11DA40(*v27, v19);
  }
  if ( v21 < 0 )
  {
    v14 = *(_BYTE **)(v11 + 16);
    v26 = 0;
    if ( (*v14 & 2) == 0 )
      goto LABEL_15;
LABEL_28:
    v5 = v11;
LABEL_17:
    v15 = qalloc();
    v8 = v15;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = 0;
      *(_OWORD *)v15 = 0;
      *(_OWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = **a3;
      *(_QWORD *)v15 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = _mm_loadl_epi64(a1);
      *(_QWORD *)v15 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v16, v16);
      if ( a1->m128i_i64[0] != v5 )
      {
        if ( !v26 )
        {
          *(_QWORD *)(v5 + 16) = v15;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v5 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v15;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v5 + 8) = v8;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v5 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
LABEL_7:
        sub_1AA920(a1, (__int64 *)v8);
LABEL_8:
        ++a1->m128i_i64[1];
        return v8;
      }
LABEL_29:
      *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
      v22 = *(_QWORD *)v8 & 2LL;
      *(_QWORD *)v8 &= ~1uLL;
      *(_QWORD *)v8 = v22 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_36:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !v11 )
  {
    v5 = 0;
    goto LABEL_17;
  }
  return v11;
}
