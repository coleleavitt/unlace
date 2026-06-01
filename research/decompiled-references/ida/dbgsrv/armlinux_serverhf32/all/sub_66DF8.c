/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66DF8
// Address: 0x00066DF8

//----- (00066DF8) --------------------------------------------------------
int __fastcall sub_66DF8(int a1, char *s2)
{
  int v2; // r7
  int v4; // r4
  int v5; // r5

  v2 = *(_DWORD *)(a1 + 44);
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = 0;
  while ( 1 )
  {
    ++v5;
    if ( !strcmp(*(const char **)(v4 + 4), s2) )
      break;
    v4 += 12;
    if ( v5 == v2 )
      return 0;
  }
  return v4;
}
