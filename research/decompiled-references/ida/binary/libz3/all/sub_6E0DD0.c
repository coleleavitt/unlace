__int64 __fastcall sub_6E0DD0(__int64 a1, __int64 a2)
{
  _QWORD v3[7]; // [rsp+0h] [rbp-38h] BYREF

  v3[0] = 0;
  v3[1] = 0;
  sub_1832C70(a1, a2, a2 + 16, v3);
  if ( (v3[0] & 0x100000000LL) != 0 || LODWORD(v3[0]) != 1 )
  {
    sub_1833EB0(a1, a2, v3, a2);
    sub_1833EB0(a1, a2 + 16, v3, a2 + 16);
  }
  return sub_182CBA0(a1, v3);
}

