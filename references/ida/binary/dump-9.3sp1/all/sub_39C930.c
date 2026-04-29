unsigned __int64 __fastcall sub_39C930(__m128i *a1, __int64 *a2, __int64 **a3)
{
  unsigned __int64 *v5; // rsi
  __int64 **v6; // rcx
  char v7; // dl
  unsigned __int64 v9; // rbp
  char *v10; // r15
  char *v11; // r14
  unsigned int v12; // eax
  unsigned int v13; // eax
  char *v14; // r14
  char *v15; // r15
  int v16; // eax
  _BYTE *v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm1
  _QWORD *exception; // rax
  __int64 *v21; // [rsp+0h] [rbp-48h]
  char v22; // [rsp+Fh] [rbp-39h]

  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v18 = qalloc();
    v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    if ( !v18 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v18 + 16) = 0;
    *(_OWORD *)(v18 + 32) = 0;
    *(_OWORD *)(v18 + 48) = 0;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v18 + 64) = 0;
    *(__m128i *)(v18 + 8) = v19;
    a1->m128i_i64[0] = v18;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v18 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v6 = a3;
    v7 = 1;
    return sub_39C7C0(a1, v5, v7, v6);
  }
  v7 = 1;
  v9 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v9 & 2) != 0 )
    goto LABEL_29;
  while ( 1 )
  {
    v10 = *(char **)(v9 + 24);
    v11 = (char *)*a2;
    v21 = (__int64 *)(v9 + 24);
    if ( v10 == (char *)*a2 )
      break;
    if ( v11 == &byte_1 || !v10 )
    {
      if ( v10 == &byte_1 || !v11 )
        break;
      goto LABEL_25;
    }
    v22 = v7;
    if ( v11 && v10 != &byte_1 )
    {
      v12 = sub_2596A0((__int64)v11, (__int64)v10);
      v7 = v22;
      if ( v12 )
        v13 = v12 >> 31;
      else
        LOBYTE(v13) = *(_QWORD *)v11 < *(_QWORD *)v10;
      if ( !(_BYTE)v13 )
      {
        v14 = (char *)*a2;
        v15 = (char *)*v21;
        if ( *a2 == *v21 || v15 == &byte_1 || !v14 )
          break;
        if ( v14 != &byte_1 && v15 )
        {
          v16 = sub_2596A0(*v21, *a2);
          v7 = v22;
          if ( v16 )
          {
            if ( v16 >= 0 )
              break;
          }
          else if ( *(_QWORD *)v15 >= *(_QWORD *)v14 )
          {
            break;
          }
        }
LABEL_25:
        v17 = *(_BYTE **)(v9 + 16);
        v7 = 0;
        goto LABEL_27;
      }
    }
    v17 = *(_BYTE **)(v9 + 8);
    v7 = 1;
LABEL_27:
    if ( (*v17 & 2) != 0 )
      goto LABEL_28;
    v9 = (unsigned __int64)v17;
  }
  if ( v9 )
    return v9;
LABEL_28:
  v5 = (unsigned __int64 *)v9;
LABEL_29:
  v6 = a3;
  return sub_39C7C0(a1, v5, v7, v6);
}
