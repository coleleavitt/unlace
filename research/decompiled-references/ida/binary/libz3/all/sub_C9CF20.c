double __fastcall sub_C9CF20(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v4[16]; // [rsp+8h] [rbp-30h] BYREF
  char v5; // [rsp+18h] [rbp-20h]

  v3 = *(_QWORD *)a2;
  sub_16669D0(v4, v3);
  v5 = 0;
  if ( (*(_BYTE *)(a2 + 123) & 0x18) != 0 || (unsigned __int8)sub_C9C360(a2, (__int64)&v3) || !v5 )
    return 0.0;
  else
    return 1.0;
}

