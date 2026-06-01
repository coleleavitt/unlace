__int64 *__fastcall sub_21F9550(__int64 *a1, __int64 *a2)
{
  if ( a1 != a2 )
  {
    if ( *a1 != *a2 )
    {
      sub_21F9170(a1);
      sub_21F9140(a1, *a2);
    }
    sub_21F9190((__int64)a1, (__int64)a2);
  }
  return a1;
}
