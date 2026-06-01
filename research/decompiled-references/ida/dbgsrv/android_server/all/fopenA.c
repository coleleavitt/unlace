/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenA
// Address: 0x00000000000BAE38

//----- (00000000000BAE38) ----------------------------------------------------
FILE *__fastcall fopenA(const char *a1)
{
  FILE *v1; // x19

  v1 = sub_BAD80(a1, "ae", 8);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
