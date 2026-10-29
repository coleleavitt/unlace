/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_366A0
// Address: 0x000366A0

//----- (000366A0) --------------------------------------------------------
int __fastcall sub_366A0(int a1, int a2)
{
  int v4; // r1
  const char *v5; // r0

  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = *(_DWORD *)(a1 + 36);
    v5 = *(const char **)(a1 + 8);
    if ( v4 )
    {
LABEL_3:
      *(_DWORD *)(a2 + 8) = sub_777C4(v5, *(const char **)(a1 + 32));
      return 0;
    }
  }
  else
  {
    v5 = (const char *)&dword_8DA5C;
    if ( *(_DWORD *)(a1 + 36) )
      goto LABEL_3;
  }
  *(_DWORD *)(a2 + 8) = sub_777C4(v5, (const char *)&dword_8DA5C);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
