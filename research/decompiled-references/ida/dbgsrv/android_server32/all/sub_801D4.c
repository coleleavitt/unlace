/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_801D4
// Address: 0x000801D4

//----- (000801D4) --------------------------------------------------------
char *__fastcall sub_801D4(char *a1, size_t a2)
{
  char *v4; // r0
  int v5; // r3
  char *v6; // r1
  char *i; // r1
  int v8; // r2
  char *v9; // r3
  int v10; // r6
  size_t v11; // r0
  size_t v12; // r1
  size_t v13; // r6
  size_t v14; // r0

  v4 = &a1[strlen(a1)];
  if ( v4 > a1 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int8)*(v4 - 1);
      v6 = v4 - 1;
      if ( v5 != 32 && v5 != 9 )
        break;
      --v4;
      if ( v6 <= a1 )
        goto LABEL_7;
    }
  }
  v6 = v4;
LABEL_7:
  *v6 = 0;
  for ( i = a1; ; ++i )
  {
    v8 = (unsigned __int8)*i;
    if ( v8 != 9 && v8 != 32 )
      break;
  }
  if ( *i )
  {
    v10 = 1;
    v9 = a1;
    do
    {
      *v9 = v8;
      v8 = (unsigned __int8)i[v10++];
      ++v9;
    }
    while ( v8 );
  }
  else
  {
    v9 = a1;
  }
  *v9 = 0;
  v11 = strlen(a1);
  v12 = a2 - v11;
  if ( (int)(a2 - v11) >= 1 )
  {
    v13 = v12 >> 1;
    if ( v12 != 1 )
    {
      memmove(&a1[v13], a1, v11 + 1);
      memset(a1, 32, v13);
    }
    v14 = strlen(a1);
    if ( v14 < a2 )
      memset(&a1[v14], 32, a2 - v14);
    a1[a2] = 0;
  }
  return a1;
}
