/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DA3C
// Address: 0x0005DA3C

//----- (0005DA3C) --------------------------------------------------------
_DWORD *__fastcall sub_5DA3C(int a1, const char **a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r2
  const char *v7; // r0
  const char *v8; // r1

  v2 = (_DWORD *)(a1 + 4);
  v4 = sub_57C74(*(_DWORD **)(a1 + 8), (_DWORD *)(a1 + 4), (int)a2);
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
    v7 = (const char *)&dword_8DB98;
    if ( v5[5] )
      goto LABEL_4;
  }
  v8 = (const char *)&dword_8DB98;
LABEL_5:
  if ( strcmp(v7, v8) >= 0 )
    return v5;
  return v2;
}
// 8DB98: using guessed type int dword_8DB98;
