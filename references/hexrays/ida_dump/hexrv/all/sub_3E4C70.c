__int64 __fastcall sub_3E4C70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128i si128; // xmm0
  int v4; // edx

  result = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 144LL);
  if ( (_BYTE)result )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FE580);
    *(_DWORD *)a2 = *(_DWORD *)(a1 + 452);
    v4 = *(_DWORD *)(a1 + 352);
    *(_QWORD *)(a2 + 24) = 1;
    *(_DWORD *)(a2 + 4) = v4;
    *(__m128i *)(a2 + 8) = si128;
  }
  return result;
}
