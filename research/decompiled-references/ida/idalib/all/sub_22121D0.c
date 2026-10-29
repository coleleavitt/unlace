void __fastcall sub_22121D0(_BYTE *a1, int a2, char a3)
{
  unsigned __int8 v3; // al
  char v4; // r9
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-18h] BYREF
  char v6; // [rsp+8h] [rbp-10h]
  char v7; // [rsp+9h] [rbp-Fh]

  v3 = a1[120];
  v4 = a1[137];
  if ( a3 || v3 != a1[136] || !v4 )
  {
    v6 = a1[136];
    v7 = v4;
    v5 = off_2C714E8;
    sub_2212060((__int64)(a1 + 144), (__int64)a1, v3, (__int64)&v5, a2);
  }
}
