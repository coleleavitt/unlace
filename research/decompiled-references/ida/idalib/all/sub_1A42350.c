char __fastcall sub_1A42350(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  char result; // al

  v8 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) < 0 )
  {
    v9 = 0;
    if ( v8 )
    {
      v9 = sub_B8C660(a2);
      v8 = *(_QWORD *)(a2 + 8) & 7LL;
    }
  }
  else if ( v8 )
  {
    v9 = *(_QWORD *)(a2 - 8);
  }
  else
  {
    v9 = 0;
  }
  result = sub_1A42210(a1, v9, (unsigned __int8)v8 > 2u, a4, a5, a6);
  if ( !result )
    return sub_1A42580(a1, a2, a3);
  return result;
}
