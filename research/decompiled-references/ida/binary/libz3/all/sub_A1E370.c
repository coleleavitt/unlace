__int64 __fastcall sub_A1E370(__int64 a1, const __m128i *a2, __int64 a3, char a4)
{
  __int64 v5; // r12
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  result = sub_98CA20((__m128i **)(v5 + 8), a2);
  if ( a4 )
    return sub_98D840((__int64 *)(v5 + 24), a3);
  return result;
}

