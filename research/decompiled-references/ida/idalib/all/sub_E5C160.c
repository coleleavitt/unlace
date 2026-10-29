__int16 __fastcall sub_E5C160(__int64 a1, __int64 a2)
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
    sub_222AB70(a1 + 1048, "cleanups", v3);
    sub_22297F0(a1 + 1048);
    sub_E67DA0(&v5);
    sub_2229960(a1 + 1048);
    return sub_2229BF0(a1 + 1048);
  }
  v5.m128_i8[8] = 1;
  v5.m128_i16[0] = 1;
  sub_222AB70(a1 + 1048, "cleanupsHaveSideEffects", 23);
  sub_222CAC0(a1 + 1048, &v5);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v5);
  result = *(_WORD *)(a2 + 2) >> 4;
  if ( result )
    goto LABEL_5;
  return result;
}
