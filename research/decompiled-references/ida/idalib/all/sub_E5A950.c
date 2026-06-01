__int64 __fastcall sub_E5A950(__int64 a1)
{
  __int64 v2; // [rsp+8h] [rbp-30h] BYREF
  __m128 v3[2]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a1;
  v3[0] = _mm_loadh_ps((const double *)&v2);
  sub_222AB70(a1 + 1048, "attrLoc", 7);
  sub_22299F0(a1 + 1048);
  sub_E5DED0(v3);
  sub_2229B60(a1 + 1048);
  return sub_2229BF0(a1 + 1048);
}
