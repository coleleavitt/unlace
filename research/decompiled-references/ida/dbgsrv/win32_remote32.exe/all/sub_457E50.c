/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457E50
// Address: 0x00457E50

//----- (00457E50) --------------------------------------------------------
int __cdecl sub_457E50(int a1, char *a2, int a3)
{
  char v3; // al

  v3 = *a2;
  if ( (unsigned __int8)*a2 < 0x80u )
    return 1;
  if ( v3 == -114 )
  {
    if ( a3 < 2 )
    {
LABEL_5:
      *sub_46B984() = 22;
      return -1;
    }
    if ( (unsigned __int8)(a2[1] + 95) > 0x3Eu )
      goto LABEL_7;
    return 2;
  }
  if ( v3 == -113 )
  {
    if ( a3 < 3 )
      goto LABEL_5;
    if ( (unsigned __int8)(a2[1] + 95) <= 0x5Du && (unsigned __int8)(a2[2] + 95) <= 0x5Du )
      return 3;
LABEL_7:
    *sub_46B984() = 42;
    return -1;
  }
  if ( a3 < 2 )
    goto LABEL_5;
  if ( (unsigned __int8)(v3 + 95) > 0x5Du || (unsigned __int8)(a2[1] + 95) > 0x5Du )
    goto LABEL_7;
  return 2;
}
