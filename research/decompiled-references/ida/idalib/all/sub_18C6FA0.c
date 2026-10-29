unsigned __int64 __fastcall sub_18C6FA0(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  unsigned int v3; // edx

  if ( a3 == 212 )
  {
    v3 = 3;
    return sub_18C69A0(a1, a2, v3);
  }
  if ( a3 > 0xD4u )
  {
    if ( a3 == 214 )
    {
      v3 = 2;
      return sub_18C69A0(a1, a2, v3);
    }
    if ( a3 < 0xD6u )
    {
      v3 = 4;
      return sub_18C69A0(a1, a2, v3);
    }
    if ( a3 == 215 )
    {
      v3 = 5;
      return sub_18C69A0(a1, a2, v3);
    }
LABEL_10:
    v3 = 0;
    return sub_18C69A0(a1, a2, v3);
  }
  if ( a3 == 209 )
  {
    v3 = 1;
    return sub_18C69A0(a1, a2, v3);
  }
  if ( a3 != 210 )
    goto LABEL_10;
  v3 = 6;
  return sub_18C69A0(a1, a2, v3);
}
