__int64 __fastcall sub_183B810(__int64 a1, __int64 a2)
{
  char v2; // al
  __m128 v3; // xmm0
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v6)(); // [rsp+10h] [rbp-48h] BYREF
  int v7; // [rsp+18h] [rbp-40h]
  __m128 v8; // [rsp+20h] [rbp-38h]
  bool v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v6 = off_2C52F70;
  v2 = *(_BYTE *)(a2 + 28);
  v5 = a2;
  v7 = 65792;
  v10 = 0;
  v3 = _mm_loadh_ps((const double *)&v5);
  v9 = (v2 & 0x7F) == 38;
  v8 = v3;
  v11 = 0;
  return sub_BC7960(&v6, a2);
}
