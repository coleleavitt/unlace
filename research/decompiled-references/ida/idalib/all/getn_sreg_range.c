bool __fastcall getn_sreg_range(__int64 a1, int a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  bool result; // al
  __int64 v8; // rdi
  int v9; // r9d
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdx

  v5 = *(_QWORD **)(qword_2CCB598 + 1672);
  v6 = v5[2];
  if ( a2 < *(_DWORD *)(v6 + 68) || a2 > *(_DWORD *)(v6 + 72) )
    return 0;
  v8 = *(_QWORD *)(*v5 + 1768LL);
  if ( !*(_BYTE *)(v8 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v9 = a2 - *(_DWORD *)(*(_QWORD *)(v8 + 8) + 68LL);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 40) )
    sub_5144F0(v8, v9);
  v10 = (__int64)v9 << 6;
  *(_DWORD *)(*(_QWORD *)(v8 + 32) + v10 + 56) = a2;
  v11 = (_QWORD *)(v10 + *(_QWORD *)(v8 + 32));
  if ( (unsigned __int64)a3 >= v11[1] )
    return 0;
  v12 = 33LL * a3;
  v13 = *v11 + v12 == 0;
  v14 = *v11 + v12;
  result = !v13 && a1 != 0;
  if ( !result )
    return !v13;
  *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v14);
  *(__m128i *)(a1 + 9) = _mm_loadu_si128((const __m128i *)(v14 + 9));
  return result;
}
