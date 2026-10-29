/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRB
// Address: 0x00000000000BAE68

//----- (00000000000BAE68) ----------------------------------------------------
FILE *__fastcall fopenRB(const char *a1)
{
  FILE *v1; // x19

  v1 = sub_BAD80(a1, "rbe", 8);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
