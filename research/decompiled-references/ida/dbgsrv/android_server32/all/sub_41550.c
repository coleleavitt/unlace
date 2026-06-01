/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41550
// Address: 0x00041550

//----- (00041550) --------------------------------------------------------
int __fastcall sub_41550(_DWORD *a1, const char *a2)
{
  int v2; // r5
  int v4; // r7
  int v5; // r1
  const char *v6; // r0
  unsigned int v7; // r4
  char **v8; // r5
  int v9; // r6
  int v10; // r7
  char *v11; // r0

  v2 = 0x7FFFFFFF;
  if ( a2 )
  {
    v2 = a1[1];
    v4 = 4 * v2 - 4;
    while ( --v2 >= 0 )
    {
      v5 = *(_DWORD *)(*a1 + v4);
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(v5 + 4) )
        v6 = *(const char **)v5;
      v4 -= 4;
      if ( !strcmp(v6, a2) )
        return v2;
    }
    v7 = dword_DD60C;
    if ( !dword_DD60C )
      return 0x7FFFFFFF;
    v8 = off_DD610;
    v9 = 0;
    v10 = 0;
    while ( strcmp(v8[v9], a2) )
    {
      v9 += 6;
      if ( ++v10 >= v7 )
        return 0x7FFFFFFF;
    }
    if ( &v8[v9] )
    {
      v11 = v8[v9 + 1];
      v2 = 0x7FFFFFFF;
      if ( v11 )
        return v9 * 4 / -24;
    }
    else
    {
      return 0x7FFFFFFF;
    }
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
