/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79588
// Address: 0x00079588

//----- (00079588) --------------------------------------------------------
char *__fastcall sub_79588(char *a1, unsigned int a2)
{
  char *v4; // r0
  int v5; // r3
  bool v6; // zf
  char *v7; // r3
  int v8; // r2
  int v9; // t1
  bool v10; // zf
  char *v11; // r2
  int v12; // r3
  bool v13; // zf
  int v14; // t1
  bool v15; // zf
  char *v16; // r1
  int v17; // t1
  size_t v18; // r0
  int v19; // r2
  size_t v21; // r6

  v4 = &a1[strlen(a1)];
  if ( a1 < v4 )
  {
    v5 = (unsigned __int8)*(v4 - 1);
    v6 = v5 == 32;
    if ( v5 != 32 )
      v6 = v5 == 9;
    if ( v6 )
    {
      v7 = v4 - 1;
      do
      {
        v4 = v7;
        if ( v7 == a1 )
          break;
        v9 = (unsigned __int8)*--v7;
        v8 = v9;
        v10 = v9 == 32;
        if ( v9 != 32 )
          v10 = v8 == 9;
      }
      while ( v10 );
    }
  }
  v11 = a1;
  *v4 = 0;
  v12 = (unsigned __int8)*a1;
  v13 = v12 == 32;
  if ( v12 != 32 )
    v13 = v12 == 9;
  if ( v13 )
  {
    do
    {
      v14 = (unsigned __int8)*++v11;
      v12 = v14;
      v15 = v14 == 9;
      if ( v14 != 9 )
        v15 = v12 == 32;
    }
    while ( v15 );
  }
  v16 = a1;
  if ( v12 )
  {
    do
    {
      *v16++ = v12;
      v17 = (unsigned __int8)*++v11;
      LOBYTE(v12) = v17;
    }
    while ( v17 );
  }
  *v16 = 0;
  v18 = strlen(a1);
  v19 = a2 - v18;
  if ( (int)(a2 - v18) > 0 )
  {
    if ( v19 == 1 )
    {
      if ( a2 <= v18 )
      {
LABEL_24:
        a1[a2] = 0;
        return a1;
      }
    }
    else
    {
      v21 = v19 >> 1;
      memmove(&a1[v19 >> 1], a1, v18 + 1);
      memset(a1, 32, v21);
      v18 = strlen(a1);
      if ( a2 <= v18 )
        goto LABEL_24;
    }
    memset(&a1[v18], 32, a2 - v18);
    goto LABEL_24;
  }
  return a1;
}
