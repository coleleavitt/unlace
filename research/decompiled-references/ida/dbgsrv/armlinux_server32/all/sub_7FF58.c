/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FF58
// Address: 0x0007FF58

//----- (0007FF58) --------------------------------------------------------
int __fastcall sub_7FF58(char a1)
{
  unsigned int v1; // r0

  v1 = a1 & 0x70;
  if ( v1 == 32 )
    return sub_146B8();
  if ( v1 <= 0x20 )
  {
    if ( v1 && v1 != 16 )
      goto LABEL_12;
  }
  else
  {
    if ( v1 == 64 )
      return sub_13E74();
    if ( v1 != 80 )
    {
      if ( v1 == 48 )
        return sub_13ECC();
LABEL_12:
      abort();
    }
  }
  return 0;
}
