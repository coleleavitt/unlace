unsigned __int64 __fastcall sub_1AAD00(__m128i *a1, unsigned __int8 **a2, _QWORD **a3)
{
  unsigned __int64 v4; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __m128i v8; // xmm0
  unsigned __int64 v10; // rbx
  __int64 v12; // rsi
  _BYTE *v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  unsigned __int8 *v16; // rdi
  int v17; // r15d
  unsigned __int8 *v18; // rsi
  unsigned __int8 *v19; // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  _QWORD *exception; // rdi
  char v25; // [rsp+7h] [rbp-61h]
  unsigned __int8 **v26; // [rsp+8h] [rbp-60h]
  int v27; // [rsp+8h] [rbp-60h]
  unsigned __int8 v28[4]; // [rsp+10h] [rbp-58h] BYREF
  int v29; // [rsp+14h] [rbp-54h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v4 = a1->m128i_i64[0];
  v30 = __readfsqword(0x28u);
  if ( !v4 )
  {
    v22 = qalloc();
    v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
    if ( !v22 )
      goto LABEL_36;
    *(_QWORD *)(v22 + 32) = 0;
    *(_OWORD *)(v22 + 16) = 0;
    *(__m128i *)(v22 + 8) = v23;
    *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v22;
    *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v6 = qalloc();
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 32) = 0;
      *(_OWORD *)v6 = 0;
      *(_OWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = **a3;
      *(_QWORD *)v6 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v8 = _mm_loadl_epi64(a1);
      *(_QWORD *)v6 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v8, v8);
      if ( a1->m128i_i64[0] != v4 )
        goto LABEL_5;
      goto LABEL_29;
    }
    goto LABEL_36;
  }
  v10 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    v25 = 1;
    goto LABEL_17;
  }
  v25 = 1;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v10 + 24);
    v26 = (unsigned __int8 **)(v10 + 24);
    if ( *((_DWORD *)*a2 + 1) == -1 || *(_DWORD *)(v12 + 4) == -1 )
      break;
    if ( sub_11DA40(*a2, (unsigned __int8 *)v12) >= 0 )
      goto LABEL_23;
LABEL_14:
    v13 = *(_BYTE **)(v10 + 8);
    v25 = 1;
    if ( (*v13 & 2) != 0 )
      goto LABEL_28;
LABEL_15:
    v10 = (unsigned __int64)v13;
  }
  sub_123A40((__int64)v28, (unsigned __int8 *)v12);
  v16 = *a2;
  v29 = *((_DWORD *)*a2 + 1);
  v17 = sub_11DA40(v16, v28);
  sub_11CDA0((__int64)v28);
  if ( v17 < 0 )
    goto LABEL_14;
LABEL_23:
  v18 = *a2;
  if ( *((_DWORD *)*v26 + 1) == -1 || *((_DWORD *)v18 + 1) == -1 )
  {
    sub_123A40((__int64)v28, v18);
    v19 = *v26;
    v29 = *((_DWORD *)*v26 + 1);
    v27 = sub_11DA40(v19, v28);
    sub_11CDA0((__int64)v28);
    v20 = v27;
  }
  else
  {
    v20 = sub_11DA40(*v26, v18);
  }
  if ( v20 < 0 )
  {
    v13 = *(_BYTE **)(v10 + 16);
    v25 = 0;
    if ( (*v13 & 2) == 0 )
      goto LABEL_15;
LABEL_28:
    v4 = v10;
LABEL_17:
    v14 = qalloc();
    v7 = v14;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 32) = 0;
      *(_OWORD *)v14 = 0;
      *(_OWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = **a3;
      *(_QWORD *)v14 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v15 = _mm_loadl_epi64(a1);
      *(_QWORD *)v14 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v15, v15);
      if ( a1->m128i_i64[0] != v4 )
      {
        if ( !v25 )
        {
          *(_QWORD *)(v4 + 16) = v14;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v4 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v14;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v4 + 8) = v7;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v4 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
LABEL_7:
        sub_1AA920(a1, (__int64 *)v7);
LABEL_8:
        ++a1->m128i_i64[1];
        return v7;
      }
LABEL_29:
      *(_QWORD *)v4 = v7 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
      v21 = *(_QWORD *)v7 & 2LL;
      *(_QWORD *)v7 &= ~1uLL;
      *(_QWORD *)v7 = v21 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
  if ( !v10 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  return v10;
}
