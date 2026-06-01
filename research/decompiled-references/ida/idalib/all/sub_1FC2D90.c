__int64 __fastcall sub_1FC2D90(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 result; // rax
  __m128i v6[2]; // [rsp+0h] [rbp-28h] BYREF

  sub_1FC2690(a1, (__int64)a2);
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), a2[2].m128i_i64[0], *(_QWORD *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v6[0] = _mm_loadu_si128(a2 + 1);
  result = sub_1F6F070(v4, v6[0].m128i_i8, v3);
  *(_DWORD *)(a1 + 224) = 238;
  return result;
}
