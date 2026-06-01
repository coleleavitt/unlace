__int64 __fastcall sub_10EEAD0(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 i; // rdx

  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  sub_10E6B70(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  a1[2].m128i_i64[0] = (__int64)a1[3].m128i_i64;
  a1[2].m128i_i64[1] = 0x100000000LL;
  result = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)result )
  {
    sub_10EE650((__int64)a1[2].m128i_i64, a2 + 32);
    result = a1[2].m128i_i64[0];
    v3 = 96LL * a1[2].m128i_u32[2];
    a1[9] = _mm_loadu_si128((const __m128i *)(a2 + 144));
    for ( i = result + v3; result != i; result += 96 )
      *(_QWORD *)(result + 88) = a1;
  }
  else
  {
    a1[9] = _mm_loadu_si128((const __m128i *)(a2 + 144));
  }
  return result;
}

