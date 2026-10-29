__int64 __fastcall sub_4180F0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r14
  size_t v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r15
  const char *v8; // rsi
  const char *v9; // rdi
  void *v10; // rbp
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD **)(a1 + 32);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = v3[38];
  v14 = v3[39];
  v6 = v5 + 24 * v14;
  v13 = v5;
  v7 = v5;
  if ( v5 == v6 )
  {
LABEL_11:
    v10 = nullptr;
    if ( v4 )
    {
      v10 = (void *)qalloc_or_throw(v4);
      memcpy(v10, *(const void **)a2, v4);
      v14 = v3[39];
      v13 = v3[38];
    }
    goto LABEL_13;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
      v8 = *(const char **)v7;
      v9 = &s1;
      if ( !v4 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v4 )
      break;
    v8 = &s1;
LABEL_9:
    v9 = *(const char **)a2;
LABEL_4:
    if ( !strcmp(v9, v8) )
    {
      if ( v6 == v7 )
        goto LABEL_11;
      return 0;
    }
    v7 += 24;
    if ( v6 == v7 )
      goto LABEL_11;
  }
  if ( v6 != v7 )
    return 0;
  v10 = nullptr;
LABEL_13:
  if ( v3[40] < (unsigned __int64)(v14 + 1) )
  {
    v13 = qvector_reserve(v3 + 38, v13, v14 + 1, 24);
    v3[38] = v13;
    v14 = v3[39];
  }
  v11 = v13 + 24 * v14;
  *(_QWORD *)v11 = v10;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  ++v3[39];
  return 1;
}
