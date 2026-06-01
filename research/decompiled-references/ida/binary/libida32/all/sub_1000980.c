char __fastcall sub_1000980(__int64 a1, int a2, int a3)
{
  char result; // al
  __int16 v5; // ax
  char v6; // dl
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( a3 == a2 )
    return 0;
  v7 = sub_A5CA10(a1, a2);
  v8[0] = sub_A5CA10(a1, a3);
  if ( !(_DWORD)v7 )
    return LODWORD(v8[0]) != 0;
  result = 0;
  if ( LODWORD(v8[0]) )
  {
    v5 = sub_1000910(a1, (int *)&v7, (int *)v8);
    v6 = v5;
    result = HIBYTE(v5);
    if ( !v6 )
      return (int)v7 < SLODWORD(v8[0]);
  }
  return result;
}

