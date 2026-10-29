/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWT
// Address: 0x00000000000BFB90

//----- (00000000000BFB90) ----------------------------------------------------
FILE *__fastcall fopenWT(const char *a1)
{
  FILE *v1; // rbx

  v1 = sub_BFA30(a1, "wte", 1);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
