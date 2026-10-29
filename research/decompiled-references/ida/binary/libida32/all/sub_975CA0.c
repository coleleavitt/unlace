_QWORD *__fastcall sub_975CA0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  unsigned __int64 v8; // r13
  _QWORD *result; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // [rsp+8h] [rbp-30h]
  _QWORD *v12; // [rsp+8h] [rbp-30h]

  if ( a2 )
  {
    v7 = *(_QWORD **)(a2 + 64);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(a2 + 72) )
    {
      v11 = a4;
      sub_975900((const __m128i **)(a2 + 56), a4, 1u, (__int64)a4, a5, a6);
      v7 = *(_QWORD **)(a2 + 64);
      a4 = v11;
    }
    *v7 = a1;
    v7[1] = 0;
    *(_QWORD *)(a2 + 64) += 16LL;
  }
  v8 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    result = *(_QWORD **)(a1 + 88);
    if ( (unsigned __int64)result < *(_QWORD *)(a1 + 96) )
      goto LABEL_7;
LABEL_11:
    sub_975900((const __m128i **)(a1 + 80), a4, 1u, (__int64)a4, a5, a6);
    result = *(_QWORD **)(a1 + 88);
    goto LABEL_7;
  }
  v10 = *(_QWORD **)(v8 + 64);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v8 + 72) )
  {
    v12 = a4;
    sub_975900((const __m128i **)(v8 + 56), a4, 1u, (__int64)a4, a5, a6);
    v10 = *(_QWORD **)(v8 + 64);
    a4 = v12;
  }
  *v10 = 0;
  v10[1] = a1 & 0xFFFFFFFFFFFFFFF9LL | 2;
  *(_QWORD *)(v8 + 64) += 16LL;
  result = *(_QWORD **)(a1 + 88);
  if ( (unsigned __int64)result >= *(_QWORD *)(a1 + 96) )
    goto LABEL_11;
LABEL_7:
  *result = a2;
  result[1] = a3;
  *(_QWORD *)(a1 + 88) += 16LL;
  return result;
}

