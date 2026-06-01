__int64 __fastcall sub_7C5970(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7, __int64 a8)
{
  __int64 result; // rax
  __int128 v9; // xmm0

  result = *(_QWORD *)(a1 + 80);
  v9 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  if ( !result )
    return sub_11B4C90(*(_QWORD *)(a1 - 56), a2, a8, a4, a5, a6, v9, a8);
  *(_BYTE *)(result + 832) = 1;
  return result;
}

