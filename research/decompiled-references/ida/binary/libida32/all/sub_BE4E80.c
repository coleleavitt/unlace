_QWORD *__fastcall sub_BE4E80(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v9; // rdx
  _QWORD *result; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi

  v7 = 8LL * (unsigned int)a4;
  *(_DWORD *)(a1 + 4) = a4;
  v9 = a2[294];
  a2[304] += v7;
  result = (_QWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&result[(unsigned __int64)v7 / 8] && v9 )
    a2[294] = &result[(unsigned __int64)v7 / 8];
  else
    result = (_QWORD *)sub_962430((__int64)(a2 + 294), v7, v7, 3, v7, a6);
  v11 = 8 * a4;
  *(_QWORD *)(a1 + 24) = result;
  v12 = a3;
  v13 = v11 >> 3;
  if ( v11 > 0 )
  {
    if ( v11 <= 8 )
      goto LABEL_9;
    v14 = 0;
    do
    {
      *(__m128i *)&result[v14] = _mm_loadu_si128((const __m128i *)&a3[v14]);
      v14 += 2;
    }
    while ( v14 != 2 * (v13 >> 1) );
    v15 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v12 = &a3[v15];
    result = (_QWORD *)((char *)result + v15 * 8);
    if ( v13 != (v13 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
      *result = *v12;
  }
  return result;
}

