/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWB
// Address: 0x00000000000BAF28

//----- (00000000000BAF28) ----------------------------------------------------
FILE *__fastcall fopenWB(const char *a1)
{
  FILE *v1; // x19

  v1 = sub_BAD80(a1, "wbe", 2);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
