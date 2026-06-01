/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRT
// Address: 0x00000000000BFB60

//----- (00000000000BFB60) ----------------------------------------------------
FILE *__fastcall fopenRT(const char *a1)
{
  FILE *v1; // rbx

  v1 = sub_BFA30(a1, "rte", 8);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
