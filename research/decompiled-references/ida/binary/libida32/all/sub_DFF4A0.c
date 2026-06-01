__int64 __fastcall sub_DFF4A0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm1
  __int64 result; // rax

  v2 = a2->m128i_i64[0];
  v3 = _mm_loadu_si128(a2 + 2);
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v2;
  result = a2[1].m128i_u32[2];
  *(__m128i *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 24) = result;
  if ( !(_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 32);
    if ( result )
      sub_DFA5F0(*(_QWORD *)(a1 + 32), a1);
  }
  return result;
}

