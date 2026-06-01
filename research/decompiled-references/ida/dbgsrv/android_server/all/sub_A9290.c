/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9290
// Address: 0x00000000000A9290

//----- (00000000000A9290) ----------------------------------------------------
FILE *__fastcall sub_A9290(FILE *result)
{
  char *IO_read_ptr; // x8
  FILE *v2; // x19

  __break(1u);
  IO_read_ptr = result->_IO_read_ptr;
  if ( IO_read_ptr )
  {
    v2 = result;
    result = *((FILE **)IO_read_ptr + 20);
    if ( result )
    {
      result = (FILE *)qfclose(result);
      *((_QWORD *)v2->_IO_read_ptr + 20) = 0;
    }
  }
  return result;
}
