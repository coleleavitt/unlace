/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A308
// Address: 0x0007A308

//----- (0007A308) --------------------------------------------------------
int sub_7A308()
{
  char v0; // r3
  void *v1; // r4

  v0 = byte_D6C24;
  __dmb(0xBu);
  if ( (v0 & 1) != 0 )
  {
    v1 = (void *)dword_D6C30;
  }
  else if ( sub_81144((unsigned int *)&byte_D6C24) )
  {
    v1 = sub_808A4(0xA8u);
    sub_7A194((int)v1);
    dword_D6C30 = (int)v1;
    sub_81248((int)&byte_D6C24);
  }
  else
  {
    v1 = (void *)dword_D6C30;
  }
  sub_7A2A0((int)v1);
  return dword_D6C30;
}
// D6C24: using guessed type char byte_D6C24;
// D6C30: using guessed type int dword_D6C30;
