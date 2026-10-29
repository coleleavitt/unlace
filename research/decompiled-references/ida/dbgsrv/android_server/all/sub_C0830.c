/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0830
// Address: 0x00000000000C0830

//----- (00000000000C0830) ----------------------------------------------------
char *__fastcall sub_C0830(char *a1, size_t a2)
{
  size_t v4; // x0
  char *v5; // x9
  char *v6; // x8
  int v7; // w10
  int v8; // t1
  char *i; // x8
  int v10; // w9
  char *v11; // x10
  __int64 v12; // x11
  size_t v13; // x0
  size_t v14; // x8
  size_t v15; // x21
  size_t v16; // x0

  v4 = strlen(a1);
  v5 = &a1[v4];
  if ( &a1[v4] > a1 )
  {
    v6 = &a1[v4];
    while ( 1 )
    {
      v8 = (unsigned __int8)*--v6;
      v7 = v8;
      if ( v8 != 32 && v7 != 9 )
        break;
      v5 = v6;
      if ( v6 <= a1 )
        goto LABEL_8;
    }
  }
  v6 = v5;
LABEL_8:
  *v6 = 0;
  for ( i = a1; ; ++i )
  {
    v10 = (unsigned __int8)*i;
    if ( v10 != 9 && v10 != 32 )
      break;
  }
  if ( *i )
  {
    v12 = 1;
    v11 = a1;
    do
    {
      *v11++ = v10;
      v10 = (unsigned __int8)i[v12++];
    }
    while ( v10 );
  }
  else
  {
    v11 = a1;
  }
  *v11 = 0;
  v13 = strlen(a1);
  v14 = a2 - v13;
  if ( (__int64)(a2 - v13) >= 1 )
  {
    if ( a2 - v13 != 1 )
    {
      v15 = v14 >> 1;
      memmove(&a1[v14 >> 1], a1, v13 + 1);
      memset(a1, 32, v15);
    }
    v16 = strlen(a1);
    if ( v16 < a2 )
      memset(&a1[v16], 32, a2 - v16);
    a1[a2] = 0;
  }
  return a1;
}
