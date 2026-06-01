/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C364
// Address: 0x0003C364

//----- (0003C364) --------------------------------------------------------
int __fastcall sub_3C364(_DWORD *a1)
{
  int v1; // r2
  int v2; // r2
  const char *v3; // r5
  const char *v4; // r1

  if ( a1[31] != 1 )
    return sub_70B98(47);
  v1 = *(_DWORD *)(a1[26] + 24);
  if ( v1 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1[16] + 40) + 4 * v1);
    if ( *(_DWORD *)(v2 + 36) )
    {
      v3 = *(const char **)(v2 + 32);
      if ( a1[7] )
      {
LABEL_5:
        v4 = (const char *)a1[6];
        goto LABEL_6;
      }
    }
    else
    {
      v3 = (const char *)&dword_8DB98;
      if ( a1[7] )
        goto LABEL_5;
    }
    v4 = (const char *)&dword_8DB98;
LABEL_6:
    if ( !strcmp(v3, v4) )
      return sub_3C1F8(a1, v3);
  }
  return sub_70B98(1586);
}
// 8DB98: using guessed type int dword_8DB98;
