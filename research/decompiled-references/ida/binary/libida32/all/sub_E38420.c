__int16 __fastcall sub_E38420(__int64 a1, __int64 a2)
{
  __int16 result; // ax
  size_t v3; // rax
  __int64 v4; // [rsp+8h] [rbp-60h] BYREF
  __m128 v5; // [rsp+10h] [rbp-58h] BYREF

  if ( (*(_DWORD *)a2 & 0x80000) == 0 )
  {
    result = *(_WORD *)(a2 + 2) >> 4;
    if ( !result )
      return result;
LABEL_5:
    v4 = a2;
    v5 = _mm_loadh_ps((const double *)&v4);
    v3 = j__strlen("cleanups");
    sub_2206E30(a1 + 1048, "cleanups", v3);
    sub_2205AB0(a1 + 1048);
    sub_E44060(&v5);
    sub_2205C20(a1 + 1048);
    return sub_2205EB0(a1 + 1048);
  }
  v5.m128_i8[8] = 1;
  v5.m128_i16[0] = 1;
  sub_2206E30(a1 + 1048, "cleanupsHaveSideEffects", 23);
  sub_2208D80(a1 + 1048, &v5);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v5);
  result = *(_WORD *)(a2 + 2) >> 4;
  if ( result )
    goto LABEL_5;
  return result;
}

