_BOOL8 __fastcall sub_F5E540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  _BOOL8 result; // rax

  v3 = a2 + 24 * a3;
  if ( v3 == a2 )
    return 0;
  v4 = a2;
  while ( 1 )
  {
    result = sub_F1D530(v4);
    if ( result )
      break;
    v4 += 24;
    if ( v3 == v4 )
      return 0;
  }
  return result;
}
