bool __fastcall hexStringToBytes(const char *a1, unsigned __int8 *a2, unsigned int a3, unsigned int *a4)
{
  char v4; // w11
  int v5; // w10
  const char *v6; // x8
  char v7; // w9
  char v8; // w12
  unsigned __int8 v9; // w11
  int v10; // t1
  _BOOL8 result; // x0

  *a4 = 0;
  v4 = *a1;
  if ( !*a1 )
    return 1;
  v5 = 0;
  v6 = a1 + 1;
  v7 = 1;
  while ( 1 )
  {
    v8 = v4 - 48;
    if ( (unsigned __int8)(v4 - 48) < 0xAu )
      goto LABEL_6;
    if ( (unsigned __int8)(v4 - 65) <= 5u )
    {
      v8 = v4 - 55;
LABEL_6:
      if ( (v7 & 1) != 0 )
        goto LABEL_7;
      goto LABEL_10;
    }
    if ( (unsigned __int8)(v4 - 97) > 5u )
      return 0;
    v8 = v4 - 87;
    if ( (v7 & 1) != 0 )
    {
LABEL_7:
      v9 = 16 * v8;
      goto LABEL_11;
    }
LABEL_10:
    *a4 = v5 + 1;
    v9 = a2[v5] | v8;
LABEL_11:
    a2[v5] = v9;
    v10 = *(unsigned __int8 *)v6++;
    v4 = v10;
    result = v10 == 0;
    if ( v10 )
    {
      v7 ^= 1u;
      v5 = *a4;
      if ( *a4 <= a3 )
        continue;
    }
    return result;
  }
}
