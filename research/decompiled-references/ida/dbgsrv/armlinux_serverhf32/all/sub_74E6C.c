/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74E6C
// Address: 0x00074E6C

//----- (00074E6C) --------------------------------------------------------
unsigned __int8 *__fastcall sub_74E6C(char *a1, int a2, int a3)
{
  bool v3; // zf
  char *v6; // r4
  char *v7; // r5
  int v8; // r0
  _BYTE *v10; // r4

  if ( a2 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1225);
  }
  v3 = a1 == nullptr;
  if ( a1 )
    v3 = a3 == 0;
  if ( v3 )
    return nullptr;
  if ( *(int *)a3 <= 1 )
    return sub_77B74(a1, a2, *(FILE **)(a3 + 8));
  if ( !a2 )
    return nullptr;
  v6 = a1;
  v7 = &a1[a2 - 1];
  if ( a1 < v7 )
  {
    while ( 1 )
    {
      v8 = sub_74E2C(a3);
      if ( v8 == -1 )
        break;
      if ( v8 == 10 )
      {
        if ( a1 < v6 && *(v6 - 1) == 13 )
          --v6;
        v10 = v6 + 1;
        *(v10 - 1) = 10;
        *v10 = 0;
        return (unsigned __int8 *)a1;
      }
      *v6++ = v8;
      if ( v7 == v6 )
        goto LABEL_13;
    }
    if ( a1 == v6 )
      return nullptr;
  }
LABEL_13:
  *v6 = 0;
  return (unsigned __int8 *)a1;
}
// D5C00: using guessed type char under_debugger;
