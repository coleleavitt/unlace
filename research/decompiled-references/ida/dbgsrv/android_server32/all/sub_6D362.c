/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D362
// Address: 0x0006D362

//----- (0006D362) --------------------------------------------------------
int __fastcall sub_6D362(int a1, char *s2)
{
  unsigned int v4; // r5
  int result; // r0
  int v6; // r6
  unsigned int v7; // r7

  v4 = *(_DWORD *)(a1 + 44);
  result = 0;
  if ( v4 )
  {
    v6 = *(_DWORD *)(a1 + 40);
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      if ( !strcmp(*(const char **)(v6 + 4), s2) )
        break;
      v6 += 12;
      result = 0;
      if ( v7 >= v4 )
        return result;
    }
    return v6;
  }
  return result;
}
