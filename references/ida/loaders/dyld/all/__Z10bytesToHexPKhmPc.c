char *__fastcall bytesToHex(char *result, __int64 a2, char *a3)
{
  char v3; // w11
  char v4; // t1
  unsigned int v5; // w10
  char v6; // w11
  char v7; // w11
  char *v8; // x10

  if ( a2 )
  {
    do
    {
      if ( (unsigned __int8)*result >= 0xA0u )
        v3 = 87;
      else
        v3 = 48;
      *a3 = v3 + ((unsigned __int8)*result >> 4);
      v4 = *result++;
      v5 = v4 & 0xF;
      if ( v5 >= 0xA )
        v6 = 87;
      else
        v6 = 48;
      v7 = v6 + v5;
      v8 = a3 + 2;
      a3[1] = v7;
      a3 += 2;
      --a2;
    }
    while ( a2 );
    a3 = v8;
  }
  *a3 = 0;
  return result;
}
