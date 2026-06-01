/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpfile
// Address: 0x0007E0F8

//----- (0007E0F8) --------------------------------------------------------
FILE *qtmpfile()
{
  FILE *result; // r0

  result = tmpfile();
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
