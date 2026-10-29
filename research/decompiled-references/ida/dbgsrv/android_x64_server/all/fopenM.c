/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenM
// Address: 0x00000000000BFB30

//----- (00000000000BFB30) ----------------------------------------------------
FILE *__fastcall fopenM(const char *a1)
{
  FILE *v1; // rbx

  v1 = sub_BFA30(a1, "rb+e", 1);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
