/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36838
// Address: 0x00036838

//----- (00036838) --------------------------------------------------------
int __fastcall sub_36838(int a1, int a2)
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
      *(_DWORD *)(a2 + 8) = sub_7792C(v5, *(const char **)(a1 + 32));
      return 0;
    }
  }
  else
  {
    v5 = (const char *)&dword_8DB98;
    if ( *(_DWORD *)(a1 + 36) )
      goto LABEL_3;
  }
  *(_DWORD *)(a2 + 8) = sub_7792C(v5, (const char *)&dword_8DB98);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
