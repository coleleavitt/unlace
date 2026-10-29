/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B984
// Address: 0x0046B984

//----- (0046B984) --------------------------------------------------------
int *sub_46B984()
{
  char *v0; // eax

  v0 = (char *)sub_47841D();
  if ( v0 )
    return (int *)(v0 + 16);
  else
    return &dword_4B5F18;
}
// 4B5F18: using guessed type int dword_4B5F18;
