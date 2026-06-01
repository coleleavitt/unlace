unsigned __int64 __fastcall sub_15B9890(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm0
  unsigned __int64 result; // rax
  double v5[2]; // [rsp+8h] [rbp-10h] BYREF

  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)&v5[0] = a3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v3 = _mm_loadh_ps(v5);
  *(_QWORD *)(a1 + 40) = 0;
  *(__m128 *)a1 = v3;
  *(__m128i *)(a1 + 48) = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  sub_B809C0(a3);
  result = sub_B97230(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
