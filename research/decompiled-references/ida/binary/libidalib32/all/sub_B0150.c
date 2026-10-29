__int64 __fastcall sub_B0150(__int64 a1, __int64 a2)
{
  const char *v2; // rbp

  v2 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  if ( qword_250BC0 != qword_250BA0 )
  {
    sub_A1190((__int64)xmmword_250E60, (__int64)xmmword_250B60);
    sub_A0DA0(xmmword_250B60);
  }
  *(_DWORD *)(a2 + 8) = sub_AFE80(xmmword_250CE0, v2);
  return 0;
}

