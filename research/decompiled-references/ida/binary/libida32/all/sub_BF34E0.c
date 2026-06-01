__int64 *__fastcall sub_BF34E0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax

  v2 = sub_21D5390();
  v3 = *a2;
  if ( *a1 == v2 )
  {
    if ( v2 == v3 )
    {
      sub_21DC1B0(a1, a2);
      return a1;
    }
  }
  else if ( v2 != v3 )
  {
    sub_21D5810(a1, a2);
    return a1;
  }
  if ( a1 == a2 )
    return a1;
  sub_971860(a1);
  if ( v2 == *a2 )
  {
    sub_21DC120(a1, a2);
    return a1;
  }
  sub_21D5A60(a1, a2);
  return a1;
}

