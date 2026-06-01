/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39888
// Address: 0x00039888

//----- (00039888) --------------------------------------------------------
int __fastcall sub_39888(int a1)
{
  const char **v2; // r0
  int v3; // r3
  const char *v4; // r1
  char *v5; // r1

  if ( !*(_DWORD *)(a1 + 28) )
  {
    v2 = sub_3EEF4((const char **)&dword_8DA5C);
    v3 = *(_DWORD *)(a1 + 28);
    if ( v2 )
      goto LABEL_3;
LABEL_7:
    if ( v3 )
    {
      v5 = *(char **)(a1 + 24);
      if ( (unsigned int)(v3 - 1) > 0x7F )
      {
        sub_70A98((unsigned int)v2, v5);
        return sub_70A2C(28);
      }
    }
    else
    {
      v5 = (char *)&dword_8DA5C;
    }
    return sub_39440(a1, v5);
  }
  v2 = sub_3EEF4(*(const char ***)(a1 + 24));
  v3 = *(_DWORD *)(a1 + 28);
  if ( !v2 )
    goto LABEL_7;
LABEL_3:
  if ( v3 )
    v4 = *(const char **)(a1 + 24);
  else
    v4 = (const char *)&dword_8DA5C;
  sub_70A98(0, v4);
  return sub_70A2C(52);
}
// 8DA5C: using guessed type int dword_8DA5C;
