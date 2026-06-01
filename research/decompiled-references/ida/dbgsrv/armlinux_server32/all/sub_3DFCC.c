/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DFCC
// Address: 0x0003DFCC

//----- (0003DFCC) --------------------------------------------------------
_DWORD *__fastcall sub_3DFCC(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r4
  int v6; // r6
  const char *v7; // r0
  const char *v8; // r1
  int v9; // r0

  if ( a1 )
  {
    v5 = a1;
    v6 = *(_DWORD *)(a3 + 4);
    do
    {
      if ( v5[5] )
      {
        v7 = (const char *)v5[4];
        if ( !v6 )
          goto LABEL_13;
      }
      else
      {
        v7 = (const char *)&dword_8DB98;
        if ( !v6 )
        {
LABEL_13:
          v8 = (const char *)&dword_8DB98;
          goto LABEL_5;
        }
      }
      v8 = *(const char **)a3;
LABEL_5:
      v9 = strcmp(v7, v8);
      if ( v9 < 0 )
        v5 = (_DWORD *)v5[3];
      else
        a2 = v5;
      if ( v9 >= 0 )
        v5 = (_DWORD *)v5[2];
    }
    while ( v5 );
  }
  return a2;
}
// 8DB98: using guessed type int dword_8DB98;
