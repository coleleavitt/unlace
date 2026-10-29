unsigned __int64 __fastcall sub_F1ED40(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // rsi
  int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx

  v7 = a1[294];
  result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v9 = 32LL * *((unsigned int *)a2 + 2) + 16;
  a1[304] += v9;
  if ( a1[295] >= v9 + result && v7 )
    a1[294] = v9 + result;
  else
    result = sub_986170((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  *(_QWORD *)result = 0;
  *(_DWORD *)result = *((_DWORD *)a2 + 68);
  *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 69);
  v10 = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 8) = v10;
  if ( v10 )
  {
    v11 = 0;
    do
    {
      v12 = *a2;
      v13 = v11++;
      v13 *= 32;
      *(__m128i *)(result + v13 + 16) = _mm_loadu_si128((const __m128i *)(*a2 + v13));
      *(__m128i *)(result + v13 + 32) = _mm_loadu_si128((const __m128i *)(v12 + v13 + 16));
    }
    while ( *(_DWORD *)(result + 8) != v11 );
  }
  return result;
}
