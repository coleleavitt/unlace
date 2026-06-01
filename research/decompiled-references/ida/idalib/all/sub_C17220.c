__int64 *__fastcall sub_C17220(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax

  v2 = sub_21F90D0();
  v3 = *a2;
  if ( *a1 == v2 )
  {
    if ( v2 == v3 )
    {
      sub_21FFEF0(a1, a2);
      return a1;
    }
  }
  else if ( v2 != v3 )
  {
    sub_21F9550(a1, a2);
    return a1;
  }
  if ( a1 == a2 )
    return a1;
  sub_9955A0(a1);
  if ( v2 == *a2 )
  {
    sub_21FFE60(a1, a2);
    return a1;
  }
  sub_21F97A0(a1, a2);
  return a1;
}
