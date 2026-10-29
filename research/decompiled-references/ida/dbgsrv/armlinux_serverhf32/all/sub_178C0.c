/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_178C0
// Address: 0x000178C0

//----- (000178C0) --------------------------------------------------------
int __fastcall sub_178C0(_DWORD *a1, char *s2)
{
  int v3; // r3
  int v5; // r5
  int v6; // r4
  int v7; // r7
  int v8; // r4
  int v9; // r9
  const char *v10; // t1
  int v12; // r7
  int v13; // r4
  int v14; // r5
  const char *v15; // t1
  int v16; // r9

  if ( !s2 )
    return -1;
  v3 = a1[227];
  v5 = v3 - 1;
  if ( v3 - 1 < 0 )
  {
LABEL_7:
    v12 = a1[233];
    if ( v12 )
    {
      v13 = 0;
      v14 = a1[235] - 4;
      while ( 1 )
      {
        v15 = *(const char **)(v14 + 4);
        v14 += 4;
        v16 = 4 * v13++;
        if ( !strcmp(v15, s2) )
          break;
        if ( v12 == v13 )
          return -1;
      }
      return *(_DWORD *)(a1[232] + v16);
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v6 = a1[229];
    v7 = -4 - v6;
    v8 = v6 + 4 * v3;
    while ( 1 )
    {
      v9 = v7 + v8;
      v10 = *(const char **)(v8 - 4);
      v8 -= 4;
      --v5;
      if ( !strcmp(v10, s2) )
        return *(_DWORD *)(a1[226] + v9);
      if ( v5 == -1 )
        goto LABEL_7;
    }
  }
}
