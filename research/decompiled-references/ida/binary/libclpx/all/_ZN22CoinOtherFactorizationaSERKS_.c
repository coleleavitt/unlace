__int64 __fastcall CoinOtherFactorization::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != a2 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)(a2 + 32));
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  }
  return result;
}

