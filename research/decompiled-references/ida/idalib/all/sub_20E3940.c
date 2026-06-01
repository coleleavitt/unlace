_BYTE *__fastcall sub_20E3940(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  void *v5; // rdx
  _BYTE *result; // rax
  __int64 v7; // rbp
  __m128i v8; // xmm0
  __int64 v9; // rax
  int *v10; // rsi
  __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  _OWORD v12[6]; // [rsp+10h] [rbp-68h] BYREF

  v4 = a2;
  v5 = *(void **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v5 > 0xDu )
  {
    qmemcpy(v5, " RootElements{", 14);
    result = (_BYTE *)(*(_QWORD *)(a1 + 32) + 14LL);
    *(_QWORD *)(a1 + 32) = result;
  }
  else
  {
    sub_227BF10(a1, " RootElements{", 14);
    result = *(_BYTE **)(a1 + 32);
  }
  v7 = a2 + 60 * a3;
  if ( a2 != v7 )
  {
LABEL_4:
    if ( *(_BYTE **)(a1 + 24) == result )
    {
LABEL_5:
      v11 = sub_227BF10(a1, " ", 1);
      v8 = _mm_loadl_epi64((const __m128i *)&v11);
      goto LABEL_6;
    }
    while ( 1 )
    {
      *result = 32;
      v11 = a1;
      v8 = _mm_loadl_epi64((const __m128i *)&v11);
      ++*(_QWORD *)(a1 + 32);
LABEL_6:
      v9 = *(unsigned __int8 *)(v4 + 56);
      v12[0] = _mm_unpacklo_epi64(v8, v8);
      v12[1] = v12[0];
      v12[2] = v12[0];
      if ( (_BYTE)v9 == 0xFF )
        abort();
      v10 = (int *)v4;
      v4 += 60;
      ((void (__fastcall *)(__int64, int *))funcs_20E39F8[v9])((__int64)v12, v10);
      result = *(_BYTE **)(a1 + 32);
      if ( v4 == v7 )
        break;
      if ( *(_BYTE **)(a1 + 24) != result )
      {
        *result = 44;
        result = (_BYTE *)(*(_QWORD *)(a1 + 32) + 1LL);
        *(_QWORD *)(a1 + 32) = result;
        goto LABEL_4;
      }
      sub_227BF10(a1, ",", 1);
      result = *(_BYTE **)(a1 + 32);
      if ( *(_BYTE **)(a1 + 24) == result )
        goto LABEL_5;
    }
  }
  if ( *(_BYTE **)(a1 + 24) == result )
    return (_BYTE *)sub_227BF10(a1, "}", 1);
  *result = 125;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
