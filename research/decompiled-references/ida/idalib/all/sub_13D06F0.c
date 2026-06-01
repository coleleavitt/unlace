unsigned __int8 *__fastcall sub_13D06F0(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 *result; // rax
  unsigned __int8 v6; // si
  _BYTE *v7; // rdx

  if ( a3 >= a2 )
    return nullptr;
  v3 = (_BYTE *)(a1 + a3);
  if ( v3 != (_BYTE *)a1 )
  {
    while ( 1 )
    {
      v4 = (unsigned __int8)*v3;
      result = v3 - 1;
      if ( (byte_2411740[2 * v4] & 2) == 0 )
        goto LABEL_12;
      if ( a1 > (unsigned __int64)result )
        return v3 + 1;
      v6 = *result;
      if ( (_BYTE)v4 == 10 )
        break;
      v7 = v3 - 1;
      if ( *v3 == 13 && v6 == 10 )
      {
        v7 = v3 - 2;
        if ( a1 > (unsigned __int64)(v3 - 2) )
          return v3 + 1;
LABEL_16:
        v6 = *(v3 - 2);
      }
LABEL_7:
      if ( a1 < (unsigned __int64)v7 )
      {
        do
        {
          if ( (byte_2411740[2 * v6] & 5) == 0 )
            break;
          v6 = *--v7;
        }
        while ( (_BYTE *)a1 != v7 );
      }
      if ( v6 != 92 )
        return v3 + 1;
LABEL_12:
      --v3;
      if ( (unsigned __int8 *)a1 == result )
        return result;
    }
    v7 = v3 - 1;
    if ( v6 != 13 )
      goto LABEL_7;
    v7 = v3 - 2;
    if ( a1 > (unsigned __int64)(v3 - 2) )
      return v3 + 1;
    goto LABEL_16;
  }
  return (unsigned __int8 *)(a1 + a3);
}
