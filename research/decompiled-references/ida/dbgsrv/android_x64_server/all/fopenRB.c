/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRB
// Address: 0x00000000000BFB00

//----- (00000000000BFB00) ----------------------------------------------------
FILE *__fastcall fopenRB(const char *a1)
{
  FILE *v1; // rbx

  v1 = sub_BFA30(a1, "rbe", 8);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
