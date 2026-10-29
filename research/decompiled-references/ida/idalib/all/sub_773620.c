__int64 __fastcall sub_773620(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 result; // rax

  result = 0;
  if ( *(_QWORD *)a3 == *(_QWORD *)(a1 + 24) && *(_BYTE *)(a3 + 8) == *(_BYTE *)(a1 + 32) )
  {
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(a2);
    return 1;
  }
  return result;
}
