/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463A8
// Address: 0x000463A8

//----- (000463A8) --------------------------------------------------------
int __fastcall sub_463A8(_DWORD *a1, int a2)
{
  int v3; // r7
  _DWORD *v4; // r4
  const char *v5; // r6
  const char *v6; // r0
  int v7; // r0
  int *v8; // r1
  const char *v9; // r1
  unsigned int v10; // r0
  int v11; // r1

  while ( 1 )
  {
    v3 = a1[1];
    v4 = a1 + 1;
    if ( v3 )
    {
      v5 = &byte_B3CBE;
      if ( *(_DWORD *)(a2 + 4) )
        v5 = *(const char **)a2;
      do
      {
        if ( *(_DWORD *)(v3 + 20) )
          v6 = *(const char **)(v3 + 16);
        else
          v6 = &byte_B3CBE;
        v7 = strcmp(v6, v5);
        if ( v7 >= 0 )
          v4 = (_DWORD *)v3;
        v8 = (int *)(v3 + 4);
        if ( v7 >= 0 )
          v8 = (int *)v3;
        v3 = *v8;
      }
      while ( *v8 );
      if ( v4 != a1 + 1 )
      {
        v9 = v4[5] ? (const char *)v4[4] : &byte_B3CBE;
        if ( strcmp(v5, v9) >= 0 )
          break;
      }
    }
    v10 = a1[3];
    if ( !v10 )
    {
      v11 = -1;
      if ( !a1[4] )
        return v11;
    }
    a1 = (_DWORD *)sub_40F30(v10);
  }
  return v4[7];
}
// B3CBE: using guessed type char byte_B3CBE;
