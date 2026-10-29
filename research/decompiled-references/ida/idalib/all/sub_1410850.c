__int64 __fastcall sub_1410850(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x200000000LL;
  result = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)result )
    result = sub_14078B0(a1 + 8, a2 + 8);
  *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  return result;
}
