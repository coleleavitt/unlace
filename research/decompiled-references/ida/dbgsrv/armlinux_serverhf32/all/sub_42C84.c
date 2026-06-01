/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C84
// Address: 0x00042C84

//----- (00042C84) --------------------------------------------------------
_DWORD *__fastcall sub_42C84(int a1, const char **a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r2
  const char *v7; // r0
  const char *v8; // r1

  v2 = (_DWORD *)(a1 + 4);
  v4 = sub_423AC(*(_DWORD **)(a1 + 8), (_DWORD *)(a1 + 4), (int)a2);
  if ( v2 == v4 )
    return v2;
  v5 = v4;
  if ( a2[1] )
  {
    v6 = v4[5];
    v7 = *a2;
    if ( v6 )
    {
LABEL_4:
      v8 = (const char *)v5[4];
      goto LABEL_5;
    }
  }
  else
  {
    v7 = (const char *)&dword_8DA5C;
    if ( v5[5] )
      goto LABEL_4;
  }
  v8 = (const char *)&dword_8DA5C;
LABEL_5:
  if ( strcmp(v7, v8) >= 0 )
    return v5;
  return v2;
}
// 8DA5C: using guessed type int dword_8DA5C;
