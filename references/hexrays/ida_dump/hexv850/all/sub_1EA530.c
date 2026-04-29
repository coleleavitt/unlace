char __fastcall sub_1EA530(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  char result; // al
  char v7; // [rsp+Fh] [rbp-19h]

  result = sub_1E9F80(a1, a2, a3, 0x10u, 2 * a4);
  if ( result )
  {
    v7 = result;
    sub_1EA170(a1, a3);
    return v7;
  }
  else if ( !a4 )
  {
    sub_1E77E0();
  }
  return result;
}
