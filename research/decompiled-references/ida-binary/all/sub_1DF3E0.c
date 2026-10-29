_DWORD *__fastcall sub_1DF3E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  int v7; // r11d
  __int64 v8; // r13
  int v10; // ebx
  __int64 v11; // r12
  __int64 i; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // r9
  _DWORD *result; // rax
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  _DWORD *v21; // rsi

  v7 = a4;
  v8 = a3 & 1;
  v10 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)a4, 229));
  v11 = (a3 - 1) / 2;
  if ( a2 >= v11 )
  {
    result = (_DWORD *)(a1 + 12 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_20;
    v13 = a2;
  }
  else
  {
    for ( i = a2; ; i = v13 )
    {
      v13 = 2 * (i + 1) - 1;
      v14 = (_DWORD *)(a1 + 24 * (i + 1));
      result = (_DWORD *)(a1 + 12 * v13);
      if ( *v14 >= *result )
      {
        if ( *v14 > *result || (v16 = v14[1], result[1] <= v16) && (result[1] < v16 || v14[2] >= result[2]) )
        {
          result = (_DWORD *)(a1 + 24 * (i + 1));
          v13 = 2 * (i + 1);
        }
      }
      v17 = a1 + 12 * i;
      *(_QWORD *)v17 = *(_QWORD *)result;
      *(_DWORD *)(v17 + 8) = result[2];
      if ( v13 >= v11 )
        break;
    }
    if ( v8 || v13 != (a3 - 2) / 2 )
    {
      v18 = v13 - 1;
      goto LABEL_13;
    }
  }
  v18 = 2 * v13;
  v13 = 2 * v13 + 1;
  v21 = (_DWORD *)(a1 + 12 * v13);
  *(_QWORD *)result = *(_QWORD *)v21;
  result[2] = v21[2];
  result = v21;
LABEL_13:
  v19 = v18 / 2;
  if ( v13 > a2 )
  {
    while ( 1 )
    {
      result = (_DWORD *)(a1 + 12 * v19);
      if ( v7 <= *result && (v7 < *result || v10 <= result[1] && (v10 < result[1] || result[2] >= a5)) )
        break;
      v20 = a1 + 12 * v13;
      *(_QWORD *)v20 = *(_QWORD *)result;
      *(_DWORD *)(v20 + 8) = result[2];
      v13 = v19;
      if ( a2 >= v19 )
        goto LABEL_20;
      v19 = (v19 - 1) / 2;
    }
    result = (_DWORD *)(a1 + 12 * v13);
  }
LABEL_20:
  result[2] = a5;
  *(_QWORD *)result = a4;
  return result;
}
