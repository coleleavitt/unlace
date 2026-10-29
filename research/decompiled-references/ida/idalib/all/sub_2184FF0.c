__int64 __fastcall sub_2184FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8[2]; // [rsp+10h] [rbp-38h] BYREF
  char v9; // [rsp+20h] [rbp-28h]

  sub_216E3E0((__int64)v8, (__int64 *)(a1 + 56), a3, a4, a5, a6);
  if ( (v9 & 1) != 0 )
    v6 = 0;
  else
    v6 = v8[0] + 40 * v8[1];
  sub_216F680(v8);
  return v6;
}
