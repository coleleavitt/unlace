double __fastcall sub_C9C310(__int64 a1, __int64 *a2)
{
  double result; // xmm0_8
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v4[16]; // [rsp+8h] [rbp-30h] BYREF
  int v5; // [rsp+18h] [rbp-20h]

  v3 = *a2;
  sub_16669D0(v4, v3);
  v5 = (int)byte_1010101;
  result = 1.0;
  if ( (unsigned __int8)sub_C9B7B0(a2, &v3) )
    return 0.0;
  return result;
}

