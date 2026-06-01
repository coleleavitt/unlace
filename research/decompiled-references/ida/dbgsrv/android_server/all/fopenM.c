/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenM
// Address: 0x00000000000BAE98

//----- (00000000000BAE98) ----------------------------------------------------
FILE *__fastcall fopenM(const char *a1)
{
  FILE *v1; // x19

  v1 = sub_BAD80(a1, "rb+e", 1);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
