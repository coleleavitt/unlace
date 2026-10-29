_QWORD *__fastcall sub_999860(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r13
  _QWORD *result; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // [rsp+8h] [rbp-30h]
  _QWORD *v14; // [rsp+8h] [rbp-30h]

  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
    {
      v7 = 0;
      v8 = *(_QWORD **)(a2 + 64);
      v9 = a1 & 0xFFFFFFFFFFFFFFF9LL | 2;
      if ( (unsigned __int64)v8 < *(_QWORD *)(a2 + 72) )
      {
LABEL_4:
        *v8 = v7;
        v8[1] = v9;
        *(_QWORD *)(a2 + 64) += 16LL;
        goto LABEL_5;
      }
    }
    else
    {
      v7 = a1;
      v9 = 0;
      v8 = *(_QWORD **)(a2 + 64);
      if ( (unsigned __int64)v8 < *(_QWORD *)(a2 + 72) )
        goto LABEL_4;
    }
    v13 = a4;
    sub_999640((const __m128i **)(a2 + 56), a4, 1u, (__int64)a4, a5, a6);
    v8 = *(_QWORD **)(a2 + 64);
    a4 = v13;
    goto LABEL_4;
  }
LABEL_5:
  v10 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    result = *(_QWORD **)(a1 + 88);
    if ( (unsigned __int64)result < *(_QWORD *)(a1 + 96) )
      goto LABEL_7;
LABEL_13:
    sub_999640((const __m128i **)(a1 + 80), a4, 1u, (__int64)a4, a5, a6);
    result = *(_QWORD **)(a1 + 88);
    goto LABEL_7;
  }
  v12 = *(_QWORD **)(v10 + 64);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 72) )
  {
    v14 = a4;
    sub_999640((const __m128i **)(v10 + 56), a4, 1u, (__int64)a4, a5, a6);
    v12 = *(_QWORD **)(v10 + 64);
    a4 = v14;
  }
  *v12 = 0;
  v12[1] = a1 & 0xFFFFFFFFFFFFFFF9LL | 2;
  *(_QWORD *)(v10 + 64) += 16LL;
  result = *(_QWORD **)(a1 + 88);
  if ( (unsigned __int64)result >= *(_QWORD *)(a1 + 96) )
    goto LABEL_13;
LABEL_7:
  *result = a2;
  result[1] = a3;
  *(_QWORD *)(a1 + 88) += 16LL;
  return result;
}
