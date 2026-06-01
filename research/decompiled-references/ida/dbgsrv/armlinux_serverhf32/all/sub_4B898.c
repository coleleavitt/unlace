/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B898
// Address: 0x0004B898

//----- (0004B898) --------------------------------------------------------
int __fastcall sub_4B898(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // r5
  int i; // r4
  int v7; // r10
  const char *v8; // r7
  size_t v9; // r0
  unsigned int v10; // r2
  _BOOL4 v11; // r1

  v2 = a1[8];
  v3 = v2 - 1;
  if ( v2 - 1 < 0 )
    return 0;
  for ( i = a1[7] + 28 * v2; ; i -= 28 )
  {
    if ( *(_DWORD *)(i - 8) != a2 )
      goto LABEL_3;
    v7 = *(unsigned __int8 *)(a2 + 13);
    if ( !*(_BYTE *)(a2 + 13) )
      break;
    if ( *(_DWORD *)(a2 + 4) )
      v8 = *(const char **)a2;
    else
      v8 = (const char *)&dword_8DA5C;
    v9 = strlen(v8);
    v10 = a1[1];
    v11 = v10 <= (unsigned int)&v8[v9];
    if ( v10 < (unsigned int)v8 )
      v11 = 0;
    if ( v11 )
      return v11;
    if ( a1[10] > *(_DWORD *)(i - 4) )
      return v7;
LABEL_3:
    if ( --v3 == -1 )
      return 0;
  }
  return 1;
}
// 8DA5C: using guessed type int dword_8DA5C;
