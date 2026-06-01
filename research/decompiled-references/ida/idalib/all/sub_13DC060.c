__int64 __fastcall sub_13DC060(int a1, unsigned int a2, __int64 *a3, __int64 a4, __m128i a5, double a6)
{
  unsigned int v9; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v10[4]; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+14h] [rbp-34h]

  v9 = a1;
  if ( !a1 || a1 < 0 && (a2 || !(unsigned __int8)sub_13DBFA0(a1, a3, a4, (int *)&v9, a5, a6)) )
    return 0;
  if ( (unsigned __int8)sub_13DBE60(v9, (__int64)v10, a3, a4, a5, a6) || a2 >= v11 )
    return v9;
  return v9 + v11 - a2;
}
