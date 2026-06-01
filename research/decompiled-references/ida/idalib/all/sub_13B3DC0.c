_BYTE *__fastcall sub_13B3DC0(_BYTE *a1, __int64 a2, char *a3, char *a4)
{
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // r8
  _BYTE *v7; // r9
  _BYTE *result; // rax
  char v9; // di
  _BYTE *v10; // r9
  _BYTE *v11; // r8

  if ( a3 + 1 != a4 )
  {
    while ( 1 )
    {
      v4 = a2 - (_QWORD)a1;
      v5 = (a2 - (__int64)a1) >> 2;
      if ( v5 > 0 )
      {
        v6 = *a3;
        if ( *a3 == *a1 )
        {
          result = a1;
        }
        else if ( v6 == a1[1] )
        {
          result = a1 + 1;
        }
        else if ( v6 == a1[2] )
        {
          result = a1 + 2;
        }
        else
        {
          v7 = &a1[4 * v5];
          result = a1 + 3;
          if ( v6 != a1[3] )
          {
            while ( 1 )
            {
              result = a1 + 4;
              if ( v7 == a1 + 4 )
              {
                v4 = a2 - (_QWORD)result;
                goto LABEL_15;
              }
              if ( v6 == a1[4] )
                goto LABEL_20;
              if ( v6 == a1[5] )
              {
                result = a1 + 5;
                goto LABEL_20;
              }
              if ( v6 == a1[6] )
              {
                result = a1 + 6;
                goto LABEL_20;
              }
              if ( v6 == a1[7] )
                break;
              a1 += 4;
            }
            result = a1 + 7;
          }
        }
        goto LABEL_20;
      }
      result = a1;
LABEL_15:
      if ( v4 == 2 )
        break;
      if ( v4 == 3 )
      {
        v9 = *a3;
        if ( *result == *a3 )
          goto LABEL_20;
        ++result;
        goto LABEL_35;
      }
      if ( v4 != 1 )
        return (_BYTE *)a2;
      v9 = *a3;
LABEL_29:
      if ( *result != v9 )
        return (_BYTE *)a2;
LABEL_20:
      if ( (_BYTE *)a2 == result )
        return result;
      a1 = result + 1;
      if ( (_BYTE *)a2 == result + 1 )
        return (_BYTE *)a2;
      v10 = result + 1;
      v11 = a3 + 1;
      while ( *v10 == *v11 )
      {
        if ( a4 == ++v11 )
          return result;
        if ( (_BYTE *)a2 == ++v10 )
          return (_BYTE *)a2;
      }
    }
    v9 = *a3;
LABEL_35:
    if ( v9 == *result )
      goto LABEL_20;
    ++result;
    goto LABEL_29;
  }
  return sub_13B3A10(a1, a2, a3);
}
