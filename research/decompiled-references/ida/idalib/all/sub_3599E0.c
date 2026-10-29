__int64 __fastcall sub_3599E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax

  *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)a2);
  *(_QWORD *)(a1 + 53) = *(_QWORD *)(a2 + 13);
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 < *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 32) < v2 || (result = *(unsigned int *)(a1 + 56), (int)result < 0) )
  {
    if ( !under_debugger )
      interr(1435);
    BUG();
  }
  return result;
}
