/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39A20
// Address: 0x00039A20

//----- (00039A20) --------------------------------------------------------
int __fastcall sub_39A20(int a1)
{
  const char **v2; // r0
  int v3; // r3
  const char *v4; // r1
  char *v5; // r1

  if ( !*(_DWORD *)(a1 + 28) )
  {
    v2 = sub_3F088((const char **)&dword_8DB98);
    v3 = *(_DWORD *)(a1 + 28);
    if ( v2 )
      goto LABEL_3;
LABEL_7:
    if ( v3 )
    {
      v5 = *(char **)(a1 + 24);
      if ( (unsigned int)(v3 - 1) > 0x7F )
      {
        sub_70C04((unsigned int)v2, v5);
        return sub_70B98(28);
      }
    }
    else
    {
      v5 = (char *)&dword_8DB98;
    }
    return sub_395D8(a1, v5);
  }
  v2 = sub_3F088(*(const char ***)(a1 + 24));
  v3 = *(_DWORD *)(a1 + 28);
  if ( !v2 )
    goto LABEL_7;
LABEL_3:
  if ( v3 )
    v4 = *(const char **)(a1 + 24);
  else
    v4 = (const char *)&dword_8DB98;
  sub_70C04(0, v4);
  return sub_70B98(52);
}
// 8DB98: using guessed type int dword_8DB98;
