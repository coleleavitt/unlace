/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493190
// Address: 0x0000000000493190

//----- (0000000000493190) ----------------------------------------------------
char *__fastcall sub_493190(char *a1, unsigned __int64 a2)
{
  char *v4; // x0
  int v5; // w1
  char *v7; // x1
  int v8; // w0
  int v10; // t1
  char *v12; // x2
  int v13; // t1
  size_t v14; // x0
  __int64 v15; // x1
  size_t v17; // x20

  v4 = &a1[strlen(a1)];
  if ( a1 < v4 )
  {
    do
    {
      v5 = (unsigned __int8)*(v4 - 1);
      if ( v5 != 32 && v5 != 9 )
        break;
      --v4;
    }
    while ( a1 != v4 );
  }
  *v4 = 0;
  v7 = a1;
  v8 = (unsigned __int8)*a1;
  if ( v8 == 32 || v8 == 9 )
  {
    do
    {
      v10 = (unsigned __int8)*++v7;
      v8 = v10;
    }
    while ( v10 == 32 || v8 == 9 );
  }
  v12 = a1;
  if ( v8 )
  {
    do
    {
      *v12++ = v8;
      v13 = (unsigned __int8)*++v7;
      LOBYTE(v8) = v13;
    }
    while ( v13 );
  }
  *v12 = 0;
  v14 = strlen(a1);
  v15 = a2 - v14;
  if ( (__int64)(a2 - v14) > 0 )
  {
    if ( v15 == 1 )
    {
      if ( a2 <= v14 )
      {
LABEL_22:
        a1[a2] = 0;
        return a1;
      }
    }
    else
    {
      v17 = v15 >> 1;
      memmove(&a1[v15 >> 1], a1, v14 + 1);
      memset(a1, 32, v17);
      v14 = strlen(a1);
      if ( a2 <= v14 )
        goto LABEL_22;
    }
    memset(&a1[v14], 32, a2 - v14);
    goto LABEL_22;
  }
  return a1;
}
