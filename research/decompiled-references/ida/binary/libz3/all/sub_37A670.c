double __fastcall sub_37A670(__int64 a1, __int64 *a2)
{
  double result; // xmm0_8
  __int64 v3; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v4[24]; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v5[64]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[40]; // [rsp+60h] [rbp-28h] BYREF

  v3 = *a2;
  sub_16744A0(v4, v3);
  sub_15C5470(v5, v3);
  sub_16669D0(v6, v3);
  result = 1.0;
  if ( (unsigned __int8)sub_37A480(a2, &v3) )
    return 0.0;
  return result;
}

