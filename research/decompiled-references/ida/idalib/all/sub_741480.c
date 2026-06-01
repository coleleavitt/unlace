_WORD *__fastcall sub_741480(__int64 a1, int a2)
{
  __int16 v2; // cx
  _WORD *v3; // rax
  __int16 v4; // di
  _WORD *result; // rax
  __int16 v6; // cx

  v2 = 0;
  v3 = (_WORD *)(a1 + 6LL * a2 + 6);
  v4 = *(_WORD *)(a1 + 6LL * a2);
  if ( v4 == *v3 )
    v2 = v3[1] + 1;
  result = v3 - 3;
  v6 = a2 + v2 - 1;
  do
  {
    if ( --a2 < 0 )
      break;
    result -= 3;
    result[4] = v6 - a2;
  }
  while ( v4 == *result );
  return result;
}
