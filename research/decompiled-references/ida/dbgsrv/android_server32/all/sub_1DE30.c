/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DE30
// Address: 0x0001DE30

//----- (0001DE30) --------------------------------------------------------
int *sub_1DE30()
{
  int v0; // r0
  int v1; // r1

  if ( qgetenv("IDA_USE_LIBTHREAD_DB", 0) || (v0 = sub_1DE70(), v1 = 2, v0 != 1) )
  {
    v1 = 3;
    if ( !byte_DE2E8 )
    {
      byte_DE2E8 = 1;
      v1 = 3;
    }
  }
  dword_DE2EC = v1;
  return &dword_DE2EC;
}
// DE2E8: using guessed type char byte_DE2E8;
// DE2EC: using guessed type int dword_DE2EC;
