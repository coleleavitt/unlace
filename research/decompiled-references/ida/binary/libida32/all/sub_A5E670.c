unsigned __int64 __fastcall sub_A5E670(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-20h] BYREF
  __m128 v4; // [rsp+10h] [rbp-18h] BYREF

  v3 = a1;
  v4 = _mm_loadh_ps((const double *)&v3);
  return sub_A5E4E0(a1, a2, (__int64 (__fastcall *)(__int64))sub_A50540, (__int64)&v4);
}

