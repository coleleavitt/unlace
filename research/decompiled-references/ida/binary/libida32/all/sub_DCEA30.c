__int64 __fastcall sub_DCEA30(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r9
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  __m128i v8; // [rsp+10h] [rbp-38h] BYREF
  __m128i v9[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 176);
  v7 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v3, 16));
  sub_DFDA50(v3, 16);
  v4 = *(_QWORD *)(a1 + 176);
  v8 = _mm_load_si128(&v7);
  v7 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v9[0] = _mm_load_si128(&v7);
  return sub_D2FF50(a1, a2, (unsigned int)(v8.m128i_i32[2] + 1), v9, &v8, v5);
}

