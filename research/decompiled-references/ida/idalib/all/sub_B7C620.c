unsigned __int64 __fastcall sub_B7C620(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, char a5)
{
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  const __m128i *v8; // rdx
  unsigned __int64 v9; // rsi
  __m128i v10; // xmm0

  *(_DWORD *)(a1 + 112) = a4;
  result = (a5 << 6) & 0x40;
  *(_BYTE *)(a1 + 49) = result | *(_BYTE *)(a1 + 49) & 0xBF;
  if ( a4 )
  {
    v7 = a4;
    result = sub_B7BC10((__int64 *)(a2 + 2352), 16 * a4, 3u);
    v8 = a3;
    if ( a3 != &a3[v7] )
    {
      v9 = result;
      do
      {
        v10 = _mm_loadu_si128(v8++);
        v9 += 16LL;
        *(__m128i *)(v9 - 16) = v10;
      }
      while ( &a3[v7] != v8 );
    }
    *(_QWORD *)(a1 + 104) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 104) = 0;
  }
  return result;
}
