/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79758
// Address: 0x00079758

//----- (00079758) --------------------------------------------------------
const char *__fastcall sub_79758(const char *a1, unsigned __int8 *a2, int a3)
{
  size_t v6; // r0
  const char *v7; // r2
  const char *v8; // r3
  int v9; // r7
  unsigned __int8 *v10; // r1
  char *v11; // r3
  int v12; // t1

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_78C64(1225);
LABEL_11:
    __und(0xFFu);
  }
  v6 = strlen(a1);
  v7 = &a1[a3];
  v8 = &a1[v6];
  if ( &a1[a3] <= &a1[v6] )
  {
    if ( !under_debugger )
      sub_78C64(520);
    goto LABEL_11;
  }
  if ( v8 == v7 - 1 )
  {
LABEL_8:
    *((_BYTE *)v7 - 1) = 0;
    return a1;
  }
  v9 = *a2;
  v10 = a2 + 1;
  a1[v6] = v9;
  if ( v9 )
  {
    v11 = (char *)(v8 + 1);
    while ( v7 - 1 != v11 )
    {
      v12 = *v10++;
      *v11++ = v12;
      if ( !v12 )
        return a1;
    }
    goto LABEL_8;
  }
  return a1;
}
// D6C20: using guessed type char under_debugger;
