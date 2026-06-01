/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRT
// Address: 0x00000000000BAEC8

//----- (00000000000BAEC8) ----------------------------------------------------
FILE *__fastcall fopenRT(const char *a1)
{
  FILE *v1; // x19

  v1 = sub_BAD80(a1, "rte", 8);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
