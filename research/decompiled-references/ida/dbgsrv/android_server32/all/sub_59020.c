/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59020
// Address: 0x00059020

//----- (00059020) --------------------------------------------------------
int __fastcall sub_59020(int a1, int a2)
{
  const char *v2; // r1
  unsigned int v3; // r5
  int v4; // r1
  int v5; // r6
  unsigned int v6; // r7
  const char *v7; // r0
  char *s2; // [sp+0h] [bp-4h]

  if ( a2 )
    v2 = ".debug_info";
  else
    v2 = ".debug_types";
  s2 = (char *)v2;
  v3 = *(_DWORD *)(a1 + 144);
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)(a1 + 140);
    v6 = 0;
    while ( 1 )
    {
      v7 = &byte_B3CBE;
      if ( *(_DWORD *)(v5 + 16) )
        v7 = *(const char **)(v5 + 12);
      ++v6;
      if ( !strcmp(v7, s2) )
        break;
      v5 += 40;
      v4 = 0;
      if ( v6 >= v3 )
        return v4;
    }
    return v5;
  }
  return v4;
}
// B3CBE: using guessed type char byte_B3CBE;
