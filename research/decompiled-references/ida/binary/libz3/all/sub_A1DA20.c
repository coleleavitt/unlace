__int64 __fastcall sub_A1DA20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r12
  __int64 result; // rax
  __m128i v8[2]; // [rsp+0h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(a2 + 8);
  v8[0] = _mm_loadu_si128((const __m128i *)(a1 + 120));
  result = sub_98CA20((__m128i **)(v6 + 8), v8);
  if ( a4 )
    return sub_98D840((__int64 *)(v6 + 24), a3);
  return result;
}

