/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4729AA
// Address: 0x004729AA

//----- (004729AA) --------------------------------------------------------
int __usercall sub_4729AA@<eax>(int a1@<ebx>, int a2@<edi>, __int16 a3)
{
  unsigned int v3; // eax

  v3 = a3 & 0x700;
  if ( v3 <= 0x400 )
  {
    if ( (a3 & 0x700) == 0x400 || (a3 & 0x700) == 0 )
      return 3;
    if ( v3 == 256 )
      return 4;
    if ( v3 != 512 )
    {
      if ( v3 == 768 )
        return 2;
      goto LABEL_14;
    }
    return 5;
  }
  if ( v3 != 1280 )
  {
    if ( v3 == 1536 )
      return 5;
    if ( v3 != 1792 )
    {
LABEL_14:
      *sub_46B984() = 22;
      sub_467EF4(a1, a2);
      return -1;
    }
  }
  return 1;
}
