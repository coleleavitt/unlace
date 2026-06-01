/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5461C
// Address: 0x0005461C

//----- (0005461C) --------------------------------------------------------
int __fastcall sub_5461C(_DWORD *a1, char *s1)
{
  int v2; // r7
  int v5; // r4
  int v6; // r5
  const char *v7; // t1
  int v8; // r8

  v2 = a1[12];
  if ( !v2 )
    return -1;
  v5 = 0;
  v6 = a1[11] - 4;
  while ( 1 )
  {
    v7 = *(const char **)(v6 + 4);
    v6 += 4;
    v8 = 4 * v5++;
    if ( !strcmp(s1, v7) )
      break;
    if ( v5 == v2 )
      return -1;
  }
  return *(_DWORD *)(a1[8] + v8);
}
