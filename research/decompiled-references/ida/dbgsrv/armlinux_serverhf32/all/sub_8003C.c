/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8003C
// Address: 0x0008003C

//----- (0008003C) --------------------------------------------------------
int __fastcall sub_8003C(char a1)
{
  unsigned int v1; // r0

  v1 = a1 & 0x70;
  if ( v1 == 32 )
    return sub_1451C();
  if ( v1 <= 0x20 )
  {
    if ( v1 && v1 != 16 )
      goto LABEL_12;
  }
  else
  {
    if ( v1 == 64 )
      return j__Unwind_GetRegionStart();
    if ( v1 != 80 )
    {
      if ( v1 == 48 )
        return j__Unwind_GetDataRelBase();
LABEL_12:
      abort();
    }
  }
  return 0;
}
