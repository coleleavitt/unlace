char __fastcall sub_1EFCB0(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  char result; // al
  char v7; // [rsp+Fh] [rbp-19h]

  result = sub_1EF700(a1, a2, a3, 0x10u, 2 * a4);
  if ( result )
  {
    v7 = result;
    sub_1EF8F0(a1, a3);
    return v7;
  }
  else if ( !a4 )
  {
    sub_1ECF60();
  }
  return result;
}
