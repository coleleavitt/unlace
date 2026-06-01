_BOOL8 __fastcall sub_F3A850(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _BOOL8 result; // rax

  v2 = 32 * a2;
  if ( a1 == a1 + v2 )
    return 0;
  v3 = a1;
  while ( 1 )
  {
    result = sub_EF9810(v3);
    if ( result )
      break;
    v3 += 32;
    if ( a1 + v2 == v3 )
      return 0;
  }
  return result;
}

