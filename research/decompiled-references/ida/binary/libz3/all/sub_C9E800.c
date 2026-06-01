double __fastcall sub_C9E800(__int64 a1, __int64 *a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v4[16]; // [rsp+8h] [rbp-30h] BYREF
  int v5; // [rsp+18h] [rbp-20h]

  v3 = *a2;
  sub_16669D0(v4, v3);
  v5 = 65537;
  if ( (unsigned __int8)sub_C9B7B0(a2, &v3) || !(unsigned __int8)sub_C9DC30(a2) )
    return 0.0;
  else
    return 1.0;
}

