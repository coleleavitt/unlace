__int64 __fastcall sub_101D0(__int64 *a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r15

  if ( a4 )
  {
    v7 = a4;
    v8 = strlen(a4);
    v9 = v8;
    if ( v8 > 0xFF )
      sub_E890((__int64)"Library name (%s) is too long (255 chars max).", v7);
  }
  else
  {
    LOBYTE(v8) = 0;
    v9 = 0;
    v7 = "";
  }
  *(_BYTE *)(a2 + 34) = v8;
  *(_DWORD *)a2 = 1396786249;
  *(_WORD *)(a2 + 4) = 20039;
  *(_BYTE *)(a2 + 6) = 10;
  if ( qfwrite(*a1, a2, 45) != 45 || v9 != qfwrite(*a1, v7, v9) )
    sub_BA80((__int64)"File write error");
  sub_F340(a1, a2, a3, a5);
  return 0;
}
