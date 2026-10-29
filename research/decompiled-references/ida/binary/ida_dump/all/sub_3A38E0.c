__int64 __fastcall sub_3A38E0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r13
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  char *v6; // r14
  __int8 v7; // dl
  bool v8; // cl
  char *v9; // rbp
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v14; // rdx
  void *v15; // rbp
  __m128i v16; // xmm0
  size_t v17; // rbx
  char *v18; // rbp
  int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  bool v21; // [rsp+1Fh] [rbp-39h]

  v3 = (_QWORD *)sub_258020(*(_QWORD *)(a1 + 24));
  if ( !*v3 )
    return 0;
  v4 = 24;
  v5 = *(_QWORD *)*v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v5 )
    goto LABEL_18;
  if ( (*(_BYTE *)v5 & 2) != 0 )
    return 0;
  v6 = *(char **)(a1 + 32);
  v7 = v6 == &byte_1;
  v8 = v6 == nullptr;
  while ( 1 )
  {
    v9 = *(char **)(v5 + 24);
    v4 = v5 + 24;
    if ( v6 == v9 )
      break;
    if ( !v9 || v7 )
    {
      if ( v9 == &byte_1 || v8 )
        break;
      goto LABEL_25;
    }
    if ( v9 != &byte_1 && !v8 )
    {
      v10 = *(_QWORD *)(v5 + 24);
      v21 = 0;
      v20.m128i_i8[0] = 0;
      v11 = sub_2596A0((__int64)v6, v10);
      v7 = 0;
      v8 = 0;
      if ( v11 )
        v12 = v11 >> 31;
      else
        LOBYTE(v12) = *(_QWORD *)v6 < *(_QWORD *)v9;
      if ( !(_BYTE)v12 )
      {
        v18 = *(char **)v4;
        if ( v6 == *(char **)v4 || v18 == &byte_1 )
          break;
        if ( v18 )
        {
          v19 = sub_2596A0(*(_QWORD *)v4, (__int64)v6);
          v7 = v20.m128i_i8[0];
          v8 = v21;
          if ( v19 )
          {
            if ( v19 >= 0 )
              break;
          }
          else if ( *(_QWORD *)v18 >= *(_QWORD *)v6 )
          {
            break;
          }
        }
LABEL_25:
        v5 = *(_QWORD *)(v5 + 16);
        goto LABEL_14;
      }
    }
    v5 = *(_QWORD *)(v5 + 8);
LABEL_14:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      return 0;
  }
  if ( *v3 == v5 )
    return 0;
LABEL_18:
  v14 = *(_QWORD *)(v4 + 16);
  v15 = nullptr;
  v16 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v14 )
  {
    v20 = v16;
    v17 = 16 * v14;
    v15 = (void *)qalloc_or_throw();
    memcpy(v15, *(const void **)(v4 + 8), v17);
    v16 = _mm_load_si128(&v20);
  }
  if ( *a2 )
  {
    a2[1] = 0;
    v20 = v16;
    qfree();
    v16 = _mm_load_si128(&v20);
  }
  *a2 = v15;
  a2[3] = 0;
  *(__m128i *)(a2 + 1) = v16;
  return 1;
}
