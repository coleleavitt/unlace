char *__fastcall sub_39E390(char *a1, __int64 *a2, int a3)
{
  char v3; // cl
  __int64 v5; // rsi
  char *result; // rax
  int v7; // r10d
  __int64 v8; // rdi
  int v9; // edx

  v3 = *a1;
  if ( *a1 )
  {
    v5 = 0;
    if ( a3 > 10 )
    {
      result = a1;
      v7 = a3 + 55;
      v8 = a3;
      while ( 1 )
      {
        if ( v3 > 96 )
        {
          v3 -= 32;
          v9 = v3;
        }
        else
        {
          v9 = v3;
          if ( (unsigned int)v3 > 0x7F )
            goto LABEL_8;
          if ( (unsigned int)(v3 - 48) <= 9 )
            goto LABEL_13;
        }
        if ( v9 >= v7 || v3 <= 64 )
          goto LABEL_8;
        v3 -= 7;
LABEL_13:
        ++result;
        v5 = (char)(v3 - 48) + v8 * v5;
        v3 = *result;
        if ( !*result )
          goto LABEL_8;
      }
    }
    do
    {
      if ( v3 <= 47 )
        break;
      if ( v3 >= a3 + 48 )
        break;
      ++a1;
      v5 = (char)(v3 - 48) + a3 * v5;
      v3 = *a1;
    }
    while ( *a1 );
    result = a1;
  }
  else
  {
    result = a1;
    v5 = 0;
  }
LABEL_8:
  *a2 = v5;
  return result;
}
