/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A1A0
// Address: 0x0007A1A0

//----- (0007A1A0) --------------------------------------------------------
int sub_7A1A0()
{
  char v0; // r3
  void *v1; // r4

  v0 = byte_D5C04;
  __dmb(0xBu);
  if ( (v0 & 1) != 0 )
  {
    v1 = (void *)dword_D5C10;
  }
  else if ( sub_80BB0((unsigned int *)&byte_D5C04) )
  {
    v1 = sub_805CC(0xA8u);
    sub_7A02C((int)v1);
    dword_D5C10 = (int)v1;
    sub_80CB4((int)&byte_D5C04);
  }
  else
  {
    v1 = (void *)dword_D5C10;
  }
  sub_7A138((int)v1);
  return dword_D5C10;
}
// D5C04: using guessed type char byte_D5C04;
// D5C10: using guessed type int dword_D5C10;
