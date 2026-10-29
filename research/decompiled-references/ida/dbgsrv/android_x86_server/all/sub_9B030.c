/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B030
// Address: 0x0009B030

//----- (0009B030) --------------------------------------------------------
char sub_9B030()
{
  if ( !qsem_post(dword_13C2F0) )
    abort();
  return qsem_free((char *)dword_13C2F0);
}
// 13C2F0: using guessed type int dword_13C2F0;
