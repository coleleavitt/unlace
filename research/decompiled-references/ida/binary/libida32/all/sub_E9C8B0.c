unsigned __int64 __fastcall sub_E9C8B0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned __int64 result; // rax
  __m128i si128; // xmm0

  v6 = a1[294];
  v8 = 8LL * a2 + 72;
  v9 = a2;
  a1[304] += v8;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + result && v6 )
    a1[294] = v8 + result;
  else
    result = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 24) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2385010);
  *(_QWORD *)(result + 8) = 7;
  *(_DWORD *)(result + 16) = v9;
  *(_QWORD *)(result + 60) = 0;
  *(__m128i *)(result + 40) = si128;
  *(_DWORD *)(result + 56) = 2;
  return result;
}

