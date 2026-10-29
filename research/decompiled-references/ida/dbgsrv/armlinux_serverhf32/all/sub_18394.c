/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18394
// Address: 0x00018394

//----- (00018394) --------------------------------------------------------
unsigned int __fastcall sub_18394(int a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v4; // r5
  unsigned int v5; // r8
  _DWORD *v6; // r4
  unsigned int v7; // r9
  const char *v8; // r0
  const char *v9; // r1

  if ( (unsigned int)a3 < *a2 || (v4 = *a2 + 40 * a2[1], (unsigned int)a3 >= v4) )
  {
    if ( !under_debugger )
      sub_78AFC(30067);
    goto LABEL_4;
  }
  v5 = a3[1];
  if ( !v5 )
    return 0;
  v6 = a3 + 10;
  if ( (unsigned int *)v4 != a3 + 10 )
  {
    v7 = a3[3];
    do
    {
      if ( v7 )
        v8 = (const char *)a3[2];
      else
        v8 = (const char *)&dword_8DA5C;
      if ( v6[3] )
        v9 = (const char *)v6[2];
      else
        v9 = (const char *)&dword_8DA5C;
      if ( strcmp(v8, v9) )
        break;
      v5 = v6[1];
      v6 += 10;
    }
    while ( v6 != (_DWORD *)v4 );
  }
  if ( *a3 >= v5 )
  {
    if ( !under_debugger )
      sub_78AFC(30068);
LABEL_4:
    __und(0xFFu);
  }
  return v5 - *a3;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
