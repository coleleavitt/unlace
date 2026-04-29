__int64 __fastcall sub_2A7CB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2[1];
  v3 = a2[2];
  a2[1] = v2;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v3;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = a2[3];
  *(_QWORD *)(a1 + 32) = a2[4];
  v6 = a2[5];
  a2[2] = v4;
  *(__m128i *)(a2 + 3) = v5;
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v6;
  a2[5] = result;
  return result;
}
