unsigned __int64 __fastcall sub_13AC000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        char *s,
        __int64 a8)
{
  __int64 v10; // rbx
  void *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __m128i *v14; // rdi
  unsigned __int64 v15; // rax
  size_t v16; // rax
  _BYTE *v17; // rdi
  size_t v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 result; // rax
  _WORD *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(void **)(v10 + 32);
  v12 = *(_QWORD *)(v10 + 24) - (_QWORD)v11;
  if ( (**(_BYTE **)(a1 + 16) & 0x40) == 0 || !s )
  {
    if ( v12 > 0xA )
    {
      qmemcpy(v11, "In module '", 11);
      v23 = (_BYTE *)(*(_QWORD *)(v10 + 32) + 11LL);
      *(_QWORD *)(v10 + 32) = v23;
    }
    else
    {
      v22 = sub_227BF10(*(_QWORD *)(a1 + 40), "In module '", 11);
      v23 = *(_BYTE **)(v22 + 32);
      v10 = v22;
    }
    result = *(_QWORD *)(v10 + 24) - (_QWORD)v23;
    if ( result < a5 )
    {
      v24 = sub_227BF10(v10, a4, a5);
      v23 = *(_BYTE **)(v24 + 32);
      v10 = v24;
      result = *(_QWORD *)(v24 + 24) - (_QWORD)v23;
      if ( result <= 2 )
        return sub_227BF10(v10, "':\n", 3);
    }
    else
    {
      if ( a5 )
      {
        memcpy(v23, a4, a5);
        v25 = *(_QWORD *)(v10 + 24);
        v23 = (_BYTE *)(a5 + *(_QWORD *)(v10 + 32));
        *(_QWORD *)(v10 + 32) = v23;
        result = v25 - (_QWORD)v23;
      }
      if ( result <= 2 )
        return sub_227BF10(v10, "':\n", 3);
    }
    v23[2] = 10;
    *(_WORD *)v23 = 14887;
    *(_QWORD *)(v10 + 32) += 3LL;
    return result;
  }
  if ( v12 > 0xA )
  {
    qmemcpy(v11, "In module '", 11);
    v14 = (__m128i *)(*(_QWORD *)(v10 + 32) + 11LL);
    *(_QWORD *)(v10 + 32) = v14;
  }
  else
  {
    v13 = sub_227BF10(*(_QWORD *)(a1 + 40), "In module '", 11);
    v14 = *(__m128i **)(v13 + 32);
    v10 = v13;
  }
  v15 = *(_QWORD *)(v10 + 24) - (_QWORD)v14;
  if ( v15 >= a5 )
  {
    if ( a5 )
    {
      memcpy(v14, a4, a5);
      v27 = *(_QWORD *)(v10 + 24);
      v14 = (__m128i *)(a5 + *(_QWORD *)(v10 + 32));
      *(_QWORD *)(v10 + 32) = v14;
      v15 = v27 - (_QWORD)v14;
    }
    if ( v15 <= 0xF )
      goto LABEL_9;
LABEL_31:
    *v14 = _mm_load_si128((const __m128i *)&xmmword_23AA040);
    *(_QWORD *)(v10 + 32) += 16LL;
    goto LABEL_10;
  }
  v26 = sub_227BF10(v10, a4, a5);
  v14 = *(__m128i **)(v26 + 32);
  v10 = v26;
  if ( *(_QWORD *)(v26 + 24) - (_QWORD)v14 > 0xFu )
    goto LABEL_31;
LABEL_9:
  v10 = sub_227BF10(v10, "' imported from ", 16);
LABEL_10:
  v16 = strlen(s);
  v17 = *(_BYTE **)(v10 + 32);
  v18 = v16;
  v19 = *(_QWORD *)(v10 + 24);
  if ( v18 > v19 - (unsigned __int64)v17 )
  {
    v10 = sub_227BF10(v10, s, v18);
    v17 = *(_BYTE **)(v10 + 32);
    v19 = *(_QWORD *)(v10 + 24);
  }
  else if ( v18 )
  {
    memcpy(v17, s, v18);
    v19 = *(_QWORD *)(v10 + 24);
    v17 = (_BYTE *)(v18 + *(_QWORD *)(v10 + 32));
    *(_QWORD *)(v10 + 32) = v17;
  }
  if ( (unsigned __int64)v17 >= v19 )
  {
    v10 = sub_227BA10(v10, 58);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v17 + 1;
    *v17 = 58;
  }
  result = sub_227B910(v10, HIDWORD(a8));
  v21 = *(_WORD **)(result + 32);
  if ( *(_QWORD *)(result + 24) - (_QWORD)v21 <= 1u )
    return sub_227BF10(result, ":\n", 2);
  *v21 = 2618;
  *(_QWORD *)(result + 32) += 2LL;
  return result;
}
