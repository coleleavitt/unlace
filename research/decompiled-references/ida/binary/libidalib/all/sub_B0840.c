__int64 __fastcall sub_B0840(__int64 a1, __int64 a2)
{
  const char *v2; // rbp

  v2 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  if ( qword_251C40 != qword_251C20 )
  {
    sub_A1370((__int64)xmmword_251F20, (__int64)xmmword_251BE0);
    sub_A0F60(xmmword_251BE0);
  }
  *(_QWORD *)(a2 + 8) = (int)sub_B0570(xmmword_251D80, v2);
  return 0;
}

