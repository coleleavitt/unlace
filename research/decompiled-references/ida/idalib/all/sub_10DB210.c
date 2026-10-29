__int64 __fastcall sub_10DB210(__m128i *a1, __int64 a2)
{
  __int64 result; // rax

  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  sub_10D8CD0(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  a1[2] = _mm_loadu_si128((const __m128i *)(a2 + 32));
  a1[3].m128i_i32[0] = *(_DWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 52);
  a1[3].m128i_i32[1] = result;
  return result;
}
