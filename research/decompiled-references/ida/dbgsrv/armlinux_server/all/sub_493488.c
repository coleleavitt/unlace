/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493488
// Address: 0x0000000000493488

//----- (0000000000493488) ----------------------------------------------------
const char *__fastcall sub_493488(const char *a1, unsigned __int8 *a2, __int64 a3)
{
  const char *v5; // x19
  size_t v6; // x0
  const char *v7; // x2
  int v8; // w1
  __int64 v9; // x0
  int v10; // w3

  if ( a3 < 0 )
    goto LABEL_12;
  v5 = &a1[a3];
  v6 = strlen(a1);
  v7 = &a1[v6];
  if ( v5 <= &a1[v6] )
  {
    if ( !under_debugger )
      sub_492270(520);
    while ( 1 )
    {
      __break(0x3E8u);
LABEL_12:
      if ( !under_debugger )
        sub_492270(1225);
    }
  }
  if ( v7 == v5 - 1 )
    goto LABEL_8;
  v8 = *a2;
  a1[v6] = v8;
  if ( v8 )
  {
    v9 = 1;
    while ( v5 - 1 - v7 != v9 )
    {
      v10 = a2[v9];
      v7[v9++] = v10;
      if ( !v10 )
        return a1;
    }
LABEL_8:
    *((_BYTE *)v5 - 1) = 0;
  }
  return a1;
}
// 52451C: using guessed type char under_debugger;
