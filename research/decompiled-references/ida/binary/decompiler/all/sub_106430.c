unsigned __int64 __fastcall sub_106430(__m128i *a1, __int64 a2, __int64 **a3)
{
  unsigned __int64 *v5; // rsi
  __int64 **v6; // rcx
  char v7; // dl
  unsigned __int64 v9; // rbp
  unsigned __int8 v10; // r15
  char v11; // r14
  unsigned __int8 v12; // al
  _BYTE *v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm1
  _QWORD *exception; // rax

  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v14 = qalloc();
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v14 + 16) = 0;
    *(_OWORD *)(v14 + 32) = 0;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v14 + 48) = 0;
    *(_OWORD *)(v14 + 64) = 0;
    *(__m128i *)(v14 + 8) = v15;
    a1->m128i_i64[0] = v14;
    sub_1057F0((unsigned __int64 *)a1);
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v6 = a3;
    v7 = 1;
    return sub_1062B0(a1, v5, v7, v6);
  }
  v9 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
    v7 = 1;
LABEL_14:
    v6 = a3;
    return sub_1062B0(a1, v5, v7, v6);
  }
  v10 = *(_BYTE *)(a2 + 32);
  v11 = 1;
  while ( 1 )
  {
    v12 = *(_BYTE *)(v9 + 56);
    if ( v10 >= v12 && (v12 < v10 || *(_QWORD *)(a2 + 24) >= *(_QWORD *)(v9 + 48)) )
      break;
    v13 = *(_BYTE **)(v9 + 8);
    v11 = 1;
    if ( (*v13 & 2) != 0 )
      goto LABEL_12;
LABEL_16:
    v9 = (unsigned __int64)v13;
  }
  if ( sub_1024C0(v9 + 48, a2 + 24) )
  {
    v13 = *(_BYTE **)(v9 + 16);
    v11 = 0;
    if ( (*v13 & 2) != 0 )
      goto LABEL_12;
    goto LABEL_16;
  }
  if ( !v9 )
  {
LABEL_12:
    v7 = v11;
    v5 = (unsigned __int64 *)v9;
    goto LABEL_14;
  }
  return v9;
}
