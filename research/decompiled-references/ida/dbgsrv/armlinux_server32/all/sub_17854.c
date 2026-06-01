/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17854
// Address: 0x00017854

//----- (00017854) --------------------------------------------------------
void sub_17854()
{
  int v0; // r3

  if ( sub_7A894("IDA_USE_LIBTHREAD_DB", 0) )
    goto LABEL_5;
  v0 = dword_D36E4;
  if ( dword_D36E4 == -1 )
  {
    sub_171F8();
    v0 = dword_D36E4;
  }
  if ( v0 == 1 )
  {
    dword_D4998 = 2;
  }
  else
  {
LABEL_5:
    sub_175BC();
    if ( byte_D4951 )
      dword_D4998 = 3;
    else
      dword_D4998 = 1;
  }
}
// D36E4: using guessed type int dword_D36E4;
// D4951: using guessed type char byte_D4951;
// D4998: using guessed type int dword_D4998;
