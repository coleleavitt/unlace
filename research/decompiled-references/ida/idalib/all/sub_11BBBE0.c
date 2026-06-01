_QWORD *__fastcall sub_11BBBE0(_QWORD *a1, int a2)
{
  if ( a2 == 1 )
  {
    sub_11BA9A0(a1, "improved");
    return a1;
  }
  else if ( a2 )
  {
    if ( a2 == 2 )
    {
      sub_11BA9A0(a1, "promoted");
      return a1;
    }
    else
    {
      if ( a2 == 3 )
        sub_11BA9A0(a1, "basic");
      else
        sub_11BA9A0(a1, (char *)&byte_22F0C30);
      return a1;
    }
  }
  else
  {
    sub_11BA9A0(a1, "full");
    return a1;
  }
}
