unsigned __int8 *__fastcall sub_B16680(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int8 *v4; // r8
  unsigned __int8 *result; // rax

  v2 = a2 - (_QWORD)a1;
  v3 = (a2 - (__int64)a1) >> 2;
  if ( v3 <= 0 )
  {
    result = a1;
LABEL_16:
    if ( v2 != 2 )
    {
      if ( v2 != 3 )
      {
        if ( v2 != 1 )
          return (unsigned __int8 *)a2;
LABEL_22:
        if ( (byte_23ED5E0[2 * *result] & 7) != 0 )
          return (unsigned __int8 *)a2;
        return result;
      }
      if ( (byte_23ED5E0[2 * *result] & 7) == 0 )
        return result;
      ++result;
    }
    if ( (byte_23ED5E0[2 * *result] & 7) == 0 )
      return result;
    ++result;
    goto LABEL_22;
  }
  if ( (byte_23ED5E0[2 * *a1] & 7) == 0 )
    return a1;
  if ( (byte_23ED5E0[2 * a1[1]] & 7) == 0 )
    return a1 + 1;
  v4 = &a1[4 * v3];
  if ( (byte_23ED5E0[2 * a1[2]] & 7) == 0 )
    return a1 + 2;
  while ( 1 )
  {
    if ( (byte_23ED5E0[2 * a1[3]] & 7) == 0 )
      return a1 + 3;
    result = a1 + 4;
    if ( v4 == a1 + 4 )
    {
      v2 = a2 - (_QWORD)result;
      goto LABEL_16;
    }
    if ( (byte_23ED5E0[2 * a1[4]] & 7) == 0 )
      return result;
    if ( (byte_23ED5E0[2 * a1[5]] & 7) == 0 )
      return a1 + 5;
    if ( (byte_23ED5E0[2 * a1[6]] & 7) == 0 )
      return a1 + 6;
    a1 += 4;
  }
}

