__int64 __fastcall sub_3A38E0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // rcx
  _QWORD *v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  char *v7; // r14
  __int8 v8; // dl
  char *v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned __int64 v13; // rdx
  void *v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rbx
  char *v18; // rbp
  int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v21; // [rsp+1Fh] [rbp-39h]

  v2 = (__int64 *)a2;
  v4 = (_QWORD *)sub_258020(*(_QWORD *)(a1 + 24));
  if ( !*v4 )
    return 0;
  v5 = 24;
  v6 = *(_QWORD *)*v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v6 )
    goto LABEL_18;
  if ( (*(_BYTE *)v6 & 2) != 0 )
    return 0;
  v7 = *(char **)(a1 + 32);
  v8 = v7 == &byte_1;
  LOBYTE(v3) = v7 == nullptr;
  while ( 1 )
  {
    v9 = *(char **)(v6 + 24);
    v5 = v6 + 24;
    if ( v7 == v9 )
      break;
    if ( !v9 || v8 )
    {
      if ( v9 == &byte_1 || (_BYTE)v3 )
        break;
      goto LABEL_25;
    }
    if ( v9 != &byte_1 && !(_BYTE)v3 )
    {
      a2 = *(_QWORD *)(v6 + 24);
      v21 = 0;
      v20.m128i_i8[0] = 0;
      v10 = sub_2596A0((__int64)v7, a2);
      v8 = 0;
      v3 = 0;
      if ( v10 )
        v11 = v10 >> 31;
      else
        LOBYTE(v11) = *(_QWORD *)v7 < *(_QWORD *)v9;
      if ( !(_BYTE)v11 )
      {
        v18 = *(char **)v5;
        if ( v7 == *(char **)v5 || v18 == &byte_1 )
          break;
        if ( v18 )
        {
          a2 = (__int64)v7;
          v19 = sub_2596A0(*(_QWORD *)v5, (__int64)v7);
          v8 = v20.m128i_i8[0];
          v3 = v21;
          if ( v19 )
          {
            if ( v19 >= 0 )
              break;
          }
          else if ( *(_QWORD *)v18 >= *(_QWORD *)v7 )
          {
            break;
          }
        }
LABEL_25:
        v6 = *(_QWORD *)(v6 + 16);
        goto LABEL_14;
      }
    }
    v6 = *(_QWORD *)(v6 + 8);
LABEL_14:
    if ( (*(_BYTE *)v6 & 2) != 0 )
      return 0;
  }
  if ( *v4 == v6 )
    return 0;
LABEL_18:
  v13 = *(_QWORD *)(v5 + 16);
  v14 = nullptr;
  v15 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  if ( v13 )
  {
    v20 = v15;
    v17 = 16 * v13;
    v14 = (void *)qalloc_or_throw(v17, a2, v17, v3);
    memcpy(v14, *(const void **)(v5 + 8), v17);
    v15 = _mm_load_si128(&v20);
  }
  v16 = *v2;
  if ( *v2 )
  {
    v2[1] = 0;
    v20 = v15;
    qfree(v16);
    v15 = _mm_load_si128(&v20);
  }
  *v2 = (__int64)v14;
  v2[3] = 0;
  *(__m128i *)(v2 + 1) = v15;
  return 1;
}
