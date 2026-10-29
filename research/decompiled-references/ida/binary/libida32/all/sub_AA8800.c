__int64 __fastcall sub_AA8800(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __int64 v4; // rax
  __m128i v6; // [rsp+C0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+D0h] [rbp-28h]
  __m128i v8; // [rsp+D8h] [rbp-20h] BYREF
  __int64 v9; // [rsp+E8h] [rbp-10h]

  sub_EC6110(&v6, a2);
  v2 = _mm_load_si128(&v6);
  v3 = _mm_loadu_si128(&v8);
  *(_QWORD *)(a1 + 16) = v7;
  v4 = v9;
  *(__m128i *)a1 = v2;
  *(_QWORD *)(a1 + 40) = v4;
  *(__m128i *)(a1 + 24) = v3;
  return a1;
}

