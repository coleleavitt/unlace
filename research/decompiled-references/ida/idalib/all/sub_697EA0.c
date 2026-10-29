__int64 __fastcall sub_697EA0(__int64 a1, const __m128i *a2)
{
  __int64 result; // rax
  __m128i v3; // xmm0

  result = *(_QWORD *)(a1 + 1832);
  if ( a2 )
  {
    v3 = _mm_loadu_si128(a2);
    *(_DWORD *)(result + 8) = 0;
    *(_BYTE *)(result + 28) = 1;
    *(__m128i *)(result + 12) = v3;
  }
  else
  {
    *(_DWORD *)(result + 8) = 0;
    *(_BYTE *)(result + 28) = 0;
    *(_OWORD *)(result + 12) = 0;
  }
  return result;
}
