__int64 __fastcall sub_8C1E30(__int64 a1, const __m128i *a2)
{
  __int64 result; // rax
  __m128i v3; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)a1 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)(unsigned __int64)&a2->m128i_u64[1]);
  result = sub_B1E2D0(&v3);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}

