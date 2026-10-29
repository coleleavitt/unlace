unsigned int *__fastcall sub_13AB990(unsigned int *a1, unsigned int *a2, unsigned __int64 a3)
{
  signed __int64 v3; // rax
  unsigned int *v4; // rax
  unsigned int *result; // rax

  v3 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
  if ( v3 >> 2 > 0 )
  {
    v4 = &a1[12 * (v3 >> 2)];
    do
    {
      if ( a3 > *a1 && a3 <= a1[1] )
        return a1;
      if ( a3 > a1[3] && a3 <= a1[4] )
        return a1 + 3;
      if ( a3 > a1[6] && a3 <= a1[7] )
        return a1 + 6;
      if ( a3 > a1[9] && a3 <= a1[10] )
        return a1 + 9;
      a1 += 12;
    }
    while ( v4 != a1 );
    v3 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
  }
  if ( v3 == 2 )
  {
LABEL_25:
    if ( a3 > *a1 )
    {
      result = a1;
      if ( a3 <= a1[1] )
        return result;
    }
    a1 += 3;
    goto LABEL_28;
  }
  if ( v3 == 3 )
  {
    if ( a3 > *a1 )
    {
      result = a1;
      if ( a3 <= a1[1] )
        return result;
    }
    a1 += 3;
    goto LABEL_25;
  }
  if ( v3 != 1 )
    return a2;
LABEL_28:
  result = a2;
  if ( a3 > *a1 && a3 <= a1[1] )
    return a1;
  return result;
}
