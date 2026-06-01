bool __fastcall sub_519230(_QWORD *a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rax
  bool result; // al
  __int64 v6; // rdi
  int v7; // r9d
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx

  v4 = a1[2];
  if ( a3 < *(_DWORD *)(v4 + 68) || a3 > *(_DWORD *)(v4 + 72) )
    return 0;
  v6 = *(_QWORD *)(*a1 + 1768LL);
  if ( !*(_BYTE *)(v6 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = a3 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 40) )
    sub_5144F0(v6, a2);
  v8 = (__int64)v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = a3;
  v9 = (_QWORD *)(*(_QWORD *)(v6 + 32) + v8);
  if ( (unsigned __int64)a4 >= v9[1] )
    return 0;
  v10 = *v9 + 33LL * a4;
  result = v10 != 0 && a2 != 0;
  if ( !result )
    return v10 != 0;
  *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)v10);
  *(__m128i *)(a2 + 9) = _mm_loadu_si128((const __m128i *)(v10 + 9));
  return result;
}
