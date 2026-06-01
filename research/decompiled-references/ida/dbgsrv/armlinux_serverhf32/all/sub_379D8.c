/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_379D8
// Address: 0x000379D8

//----- (000379D8) --------------------------------------------------------
int __fastcall sub_379D8(int a1)
{
  int v2; // r3
  int v3; // r0
  int v4; // r0
  int v5; // r5
  int v6; // r3
  int v7; // r4
  int result; // r0
  const char *v9; // r1

  v2 = *(_DWORD *)(a1 + 28);
  v3 = *(_DWORD *)(a1 + 64);
  if ( v2 )
  {
    v4 = sub_3F1F8(v3, *(const char **)(a1 + 24));
    if ( v4 )
      goto LABEL_3;
LABEL_8:
    if ( *(_DWORD *)(a1 + 28) )
      v9 = *(const char **)(a1 + 24);
    else
      v9 = (const char *)&dword_8DA5C;
    sub_70A98(0, v9);
    return sub_70A2C(1536);
  }
  v4 = sub_3F1F8(v3, (const char *)&dword_8DA5C);
  if ( !v4 )
    goto LABEL_8;
LABEL_3:
  v5 = *(_DWORD *)(a1 + 104);
  v6 = *(_DWORD *)(a1 + 64);
  v7 = *(_DWORD *)(v4 + 28);
  result = v7;
  do
  {
    result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 40) + 4 * result) + 24);
    if ( *(_DWORD *)(v5 + 28) == result )
      return sub_70A2C(1537);
  }
  while ( result );
  *(_DWORD *)(v5 + 24) = v7;
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
