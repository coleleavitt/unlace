__int16 __fastcall sub_F3C500(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v9; // rbp^4
  __int16 result; // ax

  v9 = HIDWORD(a3);
  sub_993300(a1, a3);
  sub_993300(a1, v9);
  sub_993300(a1, a4);
  result = sub_993300(a1, a5);
  if ( a6 )
    return sub_EF6750(a6, a1, a2, 1, 0);
  return result;
}

