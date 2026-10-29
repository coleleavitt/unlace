char __fastcall sub_1EF8F0(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  char result; // al
  char v6; // [rsp+Fh] [rbp-19h]

  result = sub_1EF340(a1, a2, a3, 0x10u, 2 * a4);
  if ( result )
  {
    v6 = result;
    sub_1EF530(a1);
    return v6;
  }
  else if ( !a4 )
  {
    sub_1ECBA0();
  }
  return result;
}
