/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D4AC
// Address: 0x0006D4AC

//----- (0006D4AC) --------------------------------------------------------
int __fastcall sub_6D4AC(int *a1, char *s2)
{
  int v2; // r7
  int v3; // r4
  int v5; // r5
  const char *v6; // r3
  int v7; // r8

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *a1;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(const char **)(v3 + 4);
    v7 = v3;
    ++v5;
    v3 += 20;
    if ( v6 )
    {
      if ( !strcmp(v6, s2) )
        break;
    }
    if ( v5 == v2 )
      return 0;
  }
  return v7;
}
