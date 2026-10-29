/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenA
// Address: 0x00000000000BFAD0

//----- (00000000000BFAD0) ----------------------------------------------------
FILE *__fastcall fopenA(const char *a1)
{
  FILE *v1; // rbx

  v1 = sub_BFA30(a1, "ae", 8);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
