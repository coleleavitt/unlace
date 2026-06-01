__int64 __fastcall ClpDataSave::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1

  result = a1;
  if ( a1 != a2 )
  {
    v3 = *(_OWORD *)(a2 + 32);
    v4 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)(a1 + 32) = v3;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  }
  return result;
}

