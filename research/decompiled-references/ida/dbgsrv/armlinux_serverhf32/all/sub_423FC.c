/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423FC
// Address: 0x000423FC

//----- (000423FC) --------------------------------------------------------
_DWORD *__fastcall sub_423FC(_DWORD *a1, _DWORD *a2, int a3)
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
      if ( v6 )
      {
        v7 = *(const char **)a3;
        if ( !v5[5] )
          goto LABEL_13;
      }
      else
      {
        v7 = (const char *)&dword_8DA5C;
        if ( !v5[5] )
        {
LABEL_13:
          v8 = (const char *)&dword_8DA5C;
          goto LABEL_5;
        }
      }
      v8 = (const char *)v5[4];
LABEL_5:
      v9 = strcmp(v7, v8);
      if ( v9 >= 0 )
        v5 = (_DWORD *)v5[3];
      else
        a2 = v5;
      if ( v9 < 0 )
        v5 = (_DWORD *)v5[2];
    }
    while ( v5 );
  }
  return a2;
}
// 8DA5C: using guessed type int dword_8DA5C;
