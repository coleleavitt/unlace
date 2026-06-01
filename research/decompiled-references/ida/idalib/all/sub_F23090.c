const char *__fastcall sub_F23090(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rdi
  const char *result; // rax
  __int64 v9; // rbp
  unsigned int *v10; // rsi
  size_t v11; // rbp
  const char *v12; // rsi
  size_t v13; // rdx
  __int64 v14; // rdi
  const char *v15; // rbp
  size_t v16; // rax
  void *v17; // rdi
  size_t v18; // r12

  v4 = *a1;
  v5 = a2;
  v6 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6 )
  {
    sub_E90250(v6, a2, a3, 0, 1);
    v7 = *(_BYTE **)(a2 + 32);
    result = (const char *)(*(_QWORD *)(a2 + 24) - (_QWORD)v7);
    if ( (*a1 & 4) == 0 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(_BYTE **)(a2 + 32);
    result = (const char *)(*(_QWORD *)(a2 + 24) - (_QWORD)v7);
    if ( (v4 & 4) == 0 )
      goto LABEL_3;
  }
  if ( (unsigned __int64)result > 8 )
  {
    v7[8] = 32;
    *(_QWORD *)v7 = 0x6574616C706D6574LL;
    v7 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 9LL);
    *(_QWORD *)(a2 + 32) = v7;
  }
  else
  {
    sub_227BF10(a2, "template ", 9);
    v7 = *(_BYTE **)(a2 + 32);
  }
  result = (const char *)(*(_QWORD *)(a2 + 24) - (_QWORD)v7);
LABEL_3:
  v9 = a1[1];
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFD1LL )
  {
    v10 = *(unsigned int **)(v9 + 16);
    v11 = *v10;
    v12 = (const char *)(v10 + 4);
    v13 = v11;
    if ( v11 <= (unsigned __int64)result )
    {
      if ( v11 )
      {
        result = (const char *)memcpy(v7, v12, v11);
        *(_QWORD *)(v5 + 32) += v11;
      }
      return result;
    }
    return (const char *)sub_227BF10(v5, v12, v13);
  }
  if ( (unsigned __int64)result > 8 )
  {
    v7[8] = 32;
    *(_QWORD *)v7 = 0x726F74617265706FLL;
    *(_QWORD *)(a2 + 32) += 9LL;
  }
  else
  {
    v5 = sub_227BF10(a2, "operator ", 9);
  }
  v14 = -v9;
  if ( (unsigned __int64)-v9 >= 0x2E )
    v14 = 0;
  result = (const char *)sub_FDF900(v14);
  v15 = result;
  if ( result )
  {
    v16 = strlen(result);
    v17 = *(void **)(v5 + 32);
    v18 = v16;
    result = (const char *)(*(_QWORD *)(v5 + 24) - (_QWORD)v17);
    if ( v18 > (unsigned __int64)result )
    {
      v13 = v18;
      v12 = v15;
      return (const char *)sub_227BF10(v5, v12, v13);
    }
    if ( v18 )
    {
      result = (const char *)memcpy(v17, v15, v18);
      *(_QWORD *)(v5 + 32) += v18;
    }
  }
  return result;
}
