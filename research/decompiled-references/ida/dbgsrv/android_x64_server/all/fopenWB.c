/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWB
// Address: 0x00000000000BFBC0

//----- (00000000000BFBC0) ----------------------------------------------------
FILE *__fastcall fopenWB(const char *a1)
{
  FILE *v1; // rbx

  v1 = sub_BFA30(a1, "wbe", 2);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
