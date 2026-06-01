/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458E20
// Address: 0x00458E20

//----- (00458E20) --------------------------------------------------------
int __cdecl sub_458E20(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 v3; // al
  unsigned __int8 v5; // cl

  if ( *a1 != 54936 )
    goto LABEL_15;
  v3 = *a2;
  if ( *a2 <= 0x7Fu )
    return 1;
  if ( v3 < 0x81u )
    goto LABEL_15;
  if ( v3 != 0xFF && a3 >= 2 )
  {
    v5 = a2[1];
    if ( v5 >= 0x40u && v5 <= 0x7Eu )
      return 2;
    if ( (unsigned __int8)(v5 + 0x80) <= 0x7Eu )
      return 2;
  }
  if ( (unsigned __int8)(v3 + 127) <= 0x7Du && a3 >= 4 && (unsigned __int8)(a2[1] - 48) <= 9u )
    return 4;
LABEL_15:
  *sub_46B984() = 22;
  return -1;
}
